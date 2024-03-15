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
import org.openapitools.server.models.Error
import org.openapitools.server.models.Pin
import org.openapitools.server.models.PinAnalyticsMetricsResponse
import org.openapitools.server.models.PinCreate
import org.openapitools.server.models.PinUpdate
import org.openapitools.server.models.PinsAnalyticsMetricTypesParameterInner
import org.openapitools.server.models.PinsList200Response
import org.openapitools.server.models.PinsSaveRequest

fun Route.PinsApi() {
    val gson = Gson()
    val empty = mutableMapOf<String, Any?>()

    authenticate("pinterest_oauth2") {
    get<Paths.pinsAnalytics> {
        
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "code" : 0,
              "message" : "message"
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        
    }
    }

    authenticate("pinterest_oauth2") {
    post<Paths.pinsCreate> {
        
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "note" : "note",
              "board_owner" : {
                "username" : "username"
              },
              "media_source" : "{}",
              "pin_metrics" : {
                "pin_metrics" : [ {
                  "90d" : {
                    "pin_click" : 7,
                    "impression" : 2,
                    "clickthrough" : 3
                  },
                  "all_time" : {
                    "pin_click" : 7,
                    "impression" : 2,
                    "clickthrough" : 3,
                    "reaction" : 10,
                    "comment" : 2
                  }
                }, null ]
              },
              "is_owner" : true,
              "link" : "https://www.pinterest.com/",
              "created_at" : "2020-01-01T20:10:40Z",
              "description" : "description",
              "has_been_promoted" : true,
              "media" : {
                "media_type" : "media_type"
              },
              "title" : "title",
              "board_section_id" : "board_section_id",
              "dominant_color" : "#6E7874",
              "alt_text" : "alt_text",
              "board_id" : "board_id",
              "creative_type" : "creative_type",
              "parent_pin_id" : "parent_pin_id",
              "id" : "813744226420795884",
              "is_standard" : true
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
        
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "code" : 0,
              "message" : "message"
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.pinsGet> {
        
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "note" : "note",
              "board_owner" : {
                "username" : "username"
              },
              "media_source" : "{}",
              "pin_metrics" : {
                "pin_metrics" : [ {
                  "90d" : {
                    "pin_click" : 7,
                    "impression" : 2,
                    "clickthrough" : 3
                  },
                  "all_time" : {
                    "pin_click" : 7,
                    "impression" : 2,
                    "clickthrough" : 3,
                    "reaction" : 10,
                    "comment" : 2
                  }
                }, null ]
              },
              "is_owner" : true,
              "link" : "https://www.pinterest.com/",
              "created_at" : "2020-01-01T20:10:40Z",
              "description" : "description",
              "has_been_promoted" : true,
              "media" : {
                "media_type" : "media_type"
              },
              "title" : "title",
              "board_section_id" : "board_section_id",
              "dominant_color" : "#6E7874",
              "alt_text" : "alt_text",
              "board_id" : "board_id",
              "creative_type" : "creative_type",
              "parent_pin_id" : "parent_pin_id",
              "id" : "813744226420795884",
              "is_standard" : true
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.pinsList> {
        
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "bookmark" : "bookmark",
              "items" : [ {
                "note" : "note",
                "board_owner" : {
                  "username" : "username"
                },
                "media_source" : "{}",
                "pin_metrics" : {
                  "pin_metrics" : [ {
                    "90d" : {
                      "pin_click" : 7,
                      "impression" : 2,
                      "clickthrough" : 3
                    },
                    "all_time" : {
                      "pin_click" : 7,
                      "impression" : 2,
                      "clickthrough" : 3,
                      "reaction" : 10,
                      "comment" : 2
                    }
                  }, null ]
                },
                "is_owner" : true,
                "link" : "https://www.pinterest.com/",
                "created_at" : "2020-01-01T20:10:40Z",
                "description" : "description",
                "has_been_promoted" : true,
                "media" : {
                  "media_type" : "media_type"
                },
                "title" : "title",
                "board_section_id" : "board_section_id",
                "dominant_color" : "#6E7874",
                "alt_text" : "alt_text",
                "board_id" : "board_id",
                "creative_type" : "creative_type",
                "parent_pin_id" : "parent_pin_id",
                "id" : "813744226420795884",
                "is_standard" : true
              }, {
                "note" : "note",
                "board_owner" : {
                  "username" : "username"
                },
                "media_source" : "{}",
                "pin_metrics" : {
                  "pin_metrics" : [ {
                    "90d" : {
                      "pin_click" : 7,
                      "impression" : 2,
                      "clickthrough" : 3
                    },
                    "all_time" : {
                      "pin_click" : 7,
                      "impression" : 2,
                      "clickthrough" : 3,
                      "reaction" : 10,
                      "comment" : 2
                    }
                  }, null ]
                },
                "is_owner" : true,
                "link" : "https://www.pinterest.com/",
                "created_at" : "2020-01-01T20:10:40Z",
                "description" : "description",
                "has_been_promoted" : true,
                "media" : {
                  "media_type" : "media_type"
                },
                "title" : "title",
                "board_section_id" : "board_section_id",
                "dominant_color" : "#6E7874",
                "alt_text" : "alt_text",
                "board_id" : "board_id",
                "creative_type" : "creative_type",
                "parent_pin_id" : "parent_pin_id",
                "id" : "813744226420795884",
                "is_standard" : true
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
    post<Paths.pinsSave> {
        
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "note" : "note",
              "board_owner" : {
                "username" : "username"
              },
              "media_source" : "{}",
              "pin_metrics" : {
                "pin_metrics" : [ {
                  "90d" : {
                    "pin_click" : 7,
                    "impression" : 2,
                    "clickthrough" : 3
                  },
                  "all_time" : {
                    "pin_click" : 7,
                    "impression" : 2,
                    "clickthrough" : 3,
                    "reaction" : 10,
                    "comment" : 2
                  }
                }, null ]
              },
              "is_owner" : true,
              "link" : "https://www.pinterest.com/",
              "created_at" : "2020-01-01T20:10:40Z",
              "description" : "description",
              "has_been_promoted" : true,
              "media" : {
                "media_type" : "media_type"
              },
              "title" : "title",
              "board_section_id" : "board_section_id",
              "dominant_color" : "#6E7874",
              "alt_text" : "alt_text",
              "board_id" : "board_id",
              "creative_type" : "creative_type",
              "parent_pin_id" : "parent_pin_id",
              "id" : "813744226420795884",
              "is_standard" : true
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        
    }
    }

    authenticate("pinterest_oauth2") {
    patch<Paths.pinsUpdate> {
        
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "note" : "note",
              "board_owner" : {
                "username" : "username"
              },
              "media_source" : "{}",
              "pin_metrics" : {
                "pin_metrics" : [ {
                  "90d" : {
                    "pin_click" : 7,
                    "impression" : 2,
                    "clickthrough" : 3
                  },
                  "all_time" : {
                    "pin_click" : 7,
                    "impression" : 2,
                    "clickthrough" : 3,
                    "reaction" : 10,
                    "comment" : 2
                  }
                }, null ]
              },
              "is_owner" : true,
              "link" : "https://www.pinterest.com/",
              "created_at" : "2020-01-01T20:10:40Z",
              "description" : "description",
              "has_been_promoted" : true,
              "media" : {
                "media_type" : "media_type"
              },
              "title" : "title",
              "board_section_id" : "board_section_id",
              "dominant_color" : "#6E7874",
              "alt_text" : "alt_text",
              "board_id" : "board_id",
              "creative_type" : "creative_type",
              "parent_pin_id" : "parent_pin_id",
              "id" : "813744226420795884",
              "is_standard" : true
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        
    }
    }

}