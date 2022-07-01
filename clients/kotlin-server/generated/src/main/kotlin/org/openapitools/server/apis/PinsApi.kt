/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.apis

import com.google.gson.Gson
import io.ktor.application.*
import io.ktor.auth.*
import io.ktor.http.*
import io.ktor.response.*
import org.openapitools.server.Paths
import io.ktor.locations.*
import io.ktor.routing.*
import org.openapitools.server.infrastructure.ApiPrincipal
import org.openapitools.server.models.AnalyticsMetricsResponse
import org.openapitools.server.models.Error
import org.openapitools.server.models.Pin

@KtorExperimentalLocationsAPI
fun Route.PinsApi() {
    val gson = Gson()
    val empty = mutableMapOf<String, Any?>()

    authenticate("pinterest_oauth2") {
    get<Paths.pinsAnalytics> {
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        call.respond(HttpStatusCode.NotImplemented)
    }
    }

    authenticate("pinterest_oauth2") {
    post<Paths.pinsCreate> {
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "board_owner" : "{}",
              "media_source" : "{}",
              "alt_text" : "alt_text",
              "board_id" : "board_id",
              "link" : "https://www.pinterest.com/",
              "created_at" : "2020-01-01T20:10:40Z",
              "description" : "description",
              "id" : "813744226420795884",
              "media" : "{}",
              "title" : "title",
              "board_section_id" : "board_section_id"
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
    }
    }

    authenticate("pinterest_oauth2") {
    delete<Paths.pinsDelete> {
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        call.respond(HttpStatusCode.NotImplemented)
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.pinsGet> {
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "board_owner" : "{}",
              "media_source" : "{}",
              "alt_text" : "alt_text",
              "board_id" : "board_id",
              "link" : "https://www.pinterest.com/",
              "created_at" : "2020-01-01T20:10:40Z",
              "description" : "description",
              "id" : "813744226420795884",
              "media" : "{}",
              "title" : "title",
              "board_section_id" : "board_section_id"
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
    }
    }

}
