package org.openapitools.server.api.verticle

import org.openapitools.server.api.model.Error
import org.openapitools.server.api.model.MediaList200Response
import org.openapitools.server.api.model.MediaUpload
import org.openapitools.server.api.model.MediaUploadDetails
import org.openapitools.server.api.model.MediaUploadRequest
import io.vertx.core.Vertx
import io.vertx.core.json.JsonObject
import io.vertx.core.json.JsonArray
import com.github.wooyme.openapi.Response
import io.vertx.ext.web.api.OperationRequest
import io.vertx.kotlin.ext.web.api.contract.openapi3.OpenAPI3RouterFactory
import io.vertx.serviceproxy.ServiceBinder
import io.vertx.ext.web.handler.CookieHandler
import io.vertx.ext.web.handler.SessionHandler
import io.vertx.ext.web.sstore.LocalSessionStore
import java.util.List
import java.util.Map


interface MediaApi  {
    fun init(vertx:Vertx,config:JsonObject)
    /* mediaCreate
     * Register media upload */
    suspend fun mediaCreate(mediaUploadRequest:MediaUploadRequest?,context:OperationRequest):Response<MediaUpload>
    /* mediaGet
     * Get media upload details */
    suspend fun mediaGet(mediaId:kotlin.String?,context:OperationRequest):Response<MediaUploadDetails>
    /* mediaList
     * List media uploads */
    suspend fun mediaList(bookmark:kotlin.String?,pageSize:kotlin.Int?,context:OperationRequest):Response<MediaList200Response>
    companion object {
        const val address = "MediaApi-service"
        suspend fun createRouterFactory(vertx: Vertx,path:String): io.vertx.ext.web.api.contract.openapi3.OpenAPI3RouterFactory {
            val routerFactory = OpenAPI3RouterFactory.createAwait(vertx,path)
            routerFactory.addGlobalHandler(CookieHandler.create())
            routerFactory.addGlobalHandler(SessionHandler.create(LocalSessionStore.create(vertx)))
            routerFactory.setExtraOperationContextPayloadMapper{
                JsonObject().put("files",JsonArray(it.fileUploads().map { it.uploadedFileName() }))
            }
            val opf = routerFactory::class.java.getDeclaredField("operations")
            opf.isAccessible = true
            val operations = opf.get(routerFactory) as Map<String, Any>
            for (m in MediaApi::class.java.methods) {
                val methodName = m.name
                val op = operations[methodName]
                if (op != null) {
                    val method = op::class.java.getDeclaredMethod("mountRouteToService",String::class.java,String::class.java)
                    method.isAccessible = true
                    method.invoke(op,address,methodName)
                }
            }
            routerFactory.mountServiceInterface(MediaApi::class.java, address)
            return routerFactory
        }
    }
}
