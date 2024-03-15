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
import org.openapitools.server.models.PinsList200Response
import org.openapitools.server.models.SearchPartnerPins200Response
import org.openapitools.server.models.SearchUserBoardsGet200Response

fun Route.SearchApi() {
    val gson = Gson()
    val empty = mutableMapOf<String, Any?>()

    authenticate("pinterest_oauth2") {
    get<Paths.searchPartnerPins> {
        
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "bookmark" : "bookmark",
              "items" : [ {
                "alt_text" : "alt_text",
                "link" : "https://www.pinterest.com/",
                "description" : "description",
                "media" : {
                  "media_type" : "media_type"
                },
                "title" : "title"
              }, {
                "alt_text" : "alt_text",
                "link" : "https://www.pinterest.com/",
                "description" : "description",
                "media" : {
                  "media_type" : "media_type"
                },
                "title" : "title"
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
    get<Paths.searchUserBoardsGet> {
        
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "bookmark" : "bookmark",
              "items" : [ {
                "owner" : {
                  "username" : "username"
                },
                "board_pins_modified_at" : "2020-01-01T20:10:40Z",
                "name" : "Summer Recipes",
                "pin_count" : 5,
                "created_at" : "2020-01-01T20:10:40Z",
                "description" : "My favorite summer recipes",
                "collaborator_count" : 17,
                "privacy" : "PUBLIC",
                "id" : "549755885175",
                "media" : {
                  "pin_thumbnail_urls" : [ "https://i.pinimg.com/150x150/b4/57/10/b45710f1ede96af55230f4b43935c4af.jpg", "https://i.pinimg.com/150x150/dd/ff/46/ddff4616e39c1935cd05738794fa860e.jpg", "https://i.pinimg.com/150x150/84/ac/59/84ac59b670ccb5b903dace480a98930c.jpg", "https://i.pinimg.com/150x150/4c/54/6f/4c546f521be85e30838fb742bfff6936.jpg" ],
                  "image_cover_url" : "https://i.pinimg.com/400x300/fd/cd/d5/fdcdd5a6d8a80824add0d054125cd957.jpg"
                },
                "follower_count" : 13
              }, {
                "owner" : {
                  "username" : "username"
                },
                "board_pins_modified_at" : "2020-01-01T20:10:40Z",
                "name" : "Summer Recipes",
                "pin_count" : 5,
                "created_at" : "2020-01-01T20:10:40Z",
                "description" : "My favorite summer recipes",
                "collaborator_count" : 17,
                "privacy" : "PUBLIC",
                "id" : "549755885175",
                "media" : {
                  "pin_thumbnail_urls" : [ "https://i.pinimg.com/150x150/b4/57/10/b45710f1ede96af55230f4b43935c4af.jpg", "https://i.pinimg.com/150x150/dd/ff/46/ddff4616e39c1935cd05738794fa860e.jpg", "https://i.pinimg.com/150x150/84/ac/59/84ac59b670ccb5b903dace480a98930c.jpg", "https://i.pinimg.com/150x150/4c/54/6f/4c546f521be85e30838fb742bfff6936.jpg" ],
                  "image_cover_url" : "https://i.pinimg.com/400x300/fd/cd/d5/fdcdd5a6d8a80824add0d054125cd957.jpg"
                },
                "follower_count" : 13
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
    get<Paths.searchUserPinsList> {
        
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

}
