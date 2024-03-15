/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.apis

import com.google.gson.Gson
import io.ktor.http.*
import io.ktor.server.application.*
import io.ktor.server.auth.*
import io.ktor.server.response.*
import org.openapitools.server.Paths
import io.ktor.server.resources.options
import io.ktor.server.resources.get
import io.ktor.server.resources.post
import io.ktor.server.resources.put
import io.ktor.server.resources.delete
import io.ktor.server.resources.head
import io.ktor.server.resources.patch
import io.ktor.server.routing.*
import org.openapitools.server.infrastructure.ApiPrincipal
import org.openapitools.server.models.ConversionEventResponse
import org.openapitools.server.models.ConversionTagCreate
import org.openapitools.server.models.ConversionTagListResponse
import org.openapitools.server.models.ConversionTagResponse
import org.openapitools.server.models.Error
import org.openapitools.server.models.PageVisitConversionTagsGet200Response

fun Route.ConversionTagsApi() {
    val gson = Gson()
    val empty = mutableMapOf<String, Any?>()

    authenticate("pinterest_oauth2") {
    post<Paths.conversionTagsCreate> {
        
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "code_snippet" : "<script type=text/javascript> [...]",
              "configs" : {
                "aem_fnln_enabled" : true,
                "aem_enabled" : true,
                "aem_db_enabled" : true,
                "md_frequency" : 0.6,
                "aem_ph_enabled" : true,
                "aem_ge_enabled" : true,
                "aem_loc_enabled" : true
              },
              "name" : "ACME Checkout Test Tag",
              "enhanced_match_status" : "VALIDATION_COMPLETE",
              "id" : "2617998078212",
              "last_fired_time_ms" : 1599030000000,
              "version" : "3",
              "ad_account_id" : "549755885175",
              "status" : "ACTIVE"
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.conversionTagsGet> {
        
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "code_snippet" : "<script type=text/javascript> [...]",
              "configs" : {
                "aem_fnln_enabled" : true,
                "aem_enabled" : true,
                "aem_db_enabled" : true,
                "md_frequency" : 0.6,
                "aem_ph_enabled" : true,
                "aem_ge_enabled" : true,
                "aem_loc_enabled" : true
              },
              "name" : "ACME Checkout Test Tag",
              "enhanced_match_status" : "VALIDATION_COMPLETE",
              "id" : "2617998078212",
              "last_fired_time_ms" : 1599030000000,
              "version" : "3",
              "ad_account_id" : "549755885175",
              "status" : "ACTIVE"
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.conversionTagsList> {
        
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "items" : [ {
                "code_snippet" : "<script type=text/javascript> [...]",
                "configs" : {
                  "aem_fnln_enabled" : true,
                  "aem_enabled" : true,
                  "aem_db_enabled" : true,
                  "md_frequency" : 0.6,
                  "aem_ph_enabled" : true,
                  "aem_ge_enabled" : true,
                  "aem_loc_enabled" : true
                },
                "name" : "ACME Checkout Test Tag",
                "enhanced_match_status" : "VALIDATION_COMPLETE",
                "id" : "2617998078212",
                "last_fired_time_ms" : 1599030000000,
                "version" : "3",
                "ad_account_id" : "549755885175",
                "status" : "ACTIVE"
              }, {
                "code_snippet" : "<script type=text/javascript> [...]",
                "configs" : {
                  "aem_fnln_enabled" : true,
                  "aem_enabled" : true,
                  "aem_db_enabled" : true,
                  "md_frequency" : 0.6,
                  "aem_ph_enabled" : true,
                  "aem_ge_enabled" : true,
                  "aem_loc_enabled" : true
                },
                "name" : "ACME Checkout Test Tag",
                "enhanced_match_status" : "VALIDATION_COMPLETE",
                "id" : "2617998078212",
                "last_fired_time_ms" : 1599030000000,
                "version" : "3",
                "ad_account_id" : "549755885175",
                "status" : "ACTIVE"
              } ]
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.ocpmEligibleConversionTagsGet> {
        
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "12345" : [ {
                "conversion_event" : "PAGE_LOAD",
                "created_time" : 1564768710,
                "conversion_tag_id" : "2614324385652",
                "ad_account_id" : "549757463328"
              }, {
                "conversion_event" : "CHECKOUT",
                "created_time" : 1564710210,
                "conversion_tag_id" : "2614324315793",
                "ad_account_id" : "549757463328"
              } ]
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.pageVisitConversionTagsGet> {
        
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "bookmark" : "bookmark",
              "items" : [ {
                "created_time" : 1564768710,
                "conversion_tag_id" : "2614324385652",
                "conversion_event" : "conversion_event",
                "ad_account_id" : "549757463328"
              }, {
                "created_time" : 1564768710,
                "conversion_tag_id" : "2614324385652",
                "conversion_event" : "conversion_event",
                "ad_account_id" : "549757463328"
              } ]
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        
    }
    }

}
