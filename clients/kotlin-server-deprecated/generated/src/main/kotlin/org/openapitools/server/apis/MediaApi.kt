/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.apis

import com.google.gson.Gson
import io.ktor.application.call
import io.ktor.auth.UserIdPrincipal
import io.ktor.auth.authentication
import io.ktor.auth.authenticate
import io.ktor.auth.OAuthAccessTokenResponse
import io.ktor.auth.OAuthServerSettings
import io.ktor.http.ContentType
import io.ktor.http.HttpStatusCode
import io.ktor.locations.KtorExperimentalLocationsAPI
import io.ktor.locations.delete
import io.ktor.locations.get
import io.ktor.response.respond
import io.ktor.response.respondText
import io.ktor.routing.Route
import io.ktor.routing.post
import io.ktor.routing.put
import io.ktor.routing.route

import org.openapitools.server.Paths
import org.openapitools.server.infrastructure.ApiPrincipal


import org.openapitools.server.models.Error
import org.openapitools.server.models.MediaUpload
import org.openapitools.server.models.MediaUploadDetails
import org.openapitools.server.models.MediaUploadRequest
import org.openapitools.server.models.Paginated

@KtorExperimentalLocationsAPI
fun Route.MediaApi() {
    val gson = Gson()
    val empty = mutableMapOf<String, Any?>()

    route("/media") {
            authenticate("pinterest_oauth2") {
        post {
            val principal = call.authentication.principal<OAuthAccessTokenResponse>()
            
            if (principal == null) {
                call.respond(HttpStatusCode.Unauthorized)
            } else {
                val exampleContentType = "application/json"
                val exampleContentString = """{
                  "media_id" : "12345",
                  "media_type" : "video",
                  "upload_url" : "https://pinterest-media-upload.s3-accelerate.amazonaws.com/",
                  "upload_parameters" : {
                    "x-amz-data" : "20220127T185143Z",
                    "x-amz-signature" : "fcd6309a6aaee213348666a72abed8b44552a43acb6b340e8e1b288d21a5fe92",
                    "key" : "uploads/11/aa/22/3:video:203014033110991560:5212123920968240771",
                    "policy" : "eyJleHBpcmF0aW9uIjoiMj..==",
                    "x-amz-credential" : "ASIA6QZJ64OPIKV7FRVX/20220127/us-east-1/s3/aws4_request",
                    "x-amz-security-token" : "IQoJb3JpZ2luX2VjEJr...==",
                    "x-amz-algorithm" : "AWS4-HMAC-SHA256",
                    "Content-Type" : "multipart/form-data"
                  }
                }"""
                
                when(exampleContentType) {
                    "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                    "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                    else -> call.respondText(exampleContentString)
                }
            }
        }
            }
    }


    get<Paths.mediaGet> {  _: Paths.mediaGet ->
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()
        
        if (principal == null) {
            call.respond(HttpStatusCode.Unauthorized)
        } else {
            val exampleContentType = "application/json"
            val exampleContentString = """{
              "media_id" : "12345",
              "media_type" : "video",
              "status" : "succeeded"
            }"""
            
            when(exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        }
    }


    get<Paths.mediaList> {  _: Paths.mediaList ->
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()
        
        if (principal == null) {
            call.respond(HttpStatusCode.Unauthorized)
        } else {
            call.respond(HttpStatusCode.NotImplemented)
        }
    }

}
