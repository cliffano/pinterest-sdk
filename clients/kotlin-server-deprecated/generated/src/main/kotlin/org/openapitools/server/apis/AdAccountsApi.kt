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


import org.openapitools.server.models.AdsAnalyticsCreateAsyncRequest
import org.openapitools.server.models.AdsAnalyticsCreateAsyncResponse
import org.openapitools.server.models.AdsAnalyticsGetAsyncResponse
import org.openapitools.server.models.Error
import org.openapitools.server.models.Granularity
import org.openapitools.server.models.Paginated

@KtorExperimentalLocationsAPI
fun Route.AdAccountsApi() {
    val gson = Gson()
    val empty = mutableMapOf<String, Any?>()

    get<Paths.adAccountAnalytics> {  _: Paths.adAccountAnalytics ->
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()
        
        if (principal == null) {
            call.respond(HttpStatusCode.Unauthorized)
        } else {
            val exampleContentType = "application/json"
            val exampleContentString = """{
              "DATE" : "2021-04-01",
              "AD_ACCOUNT_ID" : "547602124502",
              "SPEND_IN_DOLLAR" : 30,
              "TOTAL_CLICKTHROUGH" : 216
            }"""
            
            when(exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        }
    }


    get<Paths.adAccountsList> {  _: Paths.adAccountsList ->
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()
        
        if (principal == null) {
            call.respond(HttpStatusCode.Unauthorized)
        } else {
            call.respond(HttpStatusCode.NotImplemented)
        }
    }


    get<Paths.adGroupsAnalytics> {  _: Paths.adGroupsAnalytics ->
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()
        
        if (principal == null) {
            call.respond(HttpStatusCode.Unauthorized)
        } else {
            val exampleContentType = "application/json"
            val exampleContentString = """{
              "DATE" : "2021-04-01",
              "AD_GROUP_ID" : "547602124502",
              "SPEND_IN_DOLLAR" : 30,
              "TOTAL_CLICKTHROUGH" : 216
            }"""
            
            when(exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        }
    }


    get<Paths.adGroupsList> {  _: Paths.adGroupsList ->
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()
        
        if (principal == null) {
            call.respond(HttpStatusCode.Unauthorized)
        } else {
            call.respond(HttpStatusCode.NotImplemented)
        }
    }


    get<Paths.adsAnalytics> {  _: Paths.adsAnalytics ->
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()
        
        if (principal == null) {
            call.respond(HttpStatusCode.Unauthorized)
        } else {
            val exampleContentType = "application/json"
            val exampleContentString = """{
              "DATE" : "2021-04-01",
              "AD_ID" : "547602124502",
              "SPEND_IN_DOLLAR" : 30,
              "TOTAL_CLICKTHROUGH" : 216
            }"""
            
            when(exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        }
    }


    get<Paths.adsList> {  _: Paths.adsList ->
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()
        
        if (principal == null) {
            call.respond(HttpStatusCode.Unauthorized)
        } else {
            call.respond(HttpStatusCode.NotImplemented)
        }
    }


    route("/ad_accounts/{ad_account_id}/reports") {
            authenticate("pinterest_oauth2") {
        post {
            val principal = call.authentication.principal<OAuthAccessTokenResponse>()
            
            if (principal == null) {
                call.respond(HttpStatusCode.Unauthorized)
            } else {
                val exampleContentType = "application/json"
                val exampleContentString = """{
                  "report_status" : "report_status",
                  "message" : "message",
                  "token" : "token"
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


    get<Paths.analyticsGetReport> {  _: Paths.analyticsGetReport ->
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()
        
        if (principal == null) {
            call.respond(HttpStatusCode.Unauthorized)
        } else {
            val exampleContentType = "application/json"
            val exampleContentString = """{
              "size" : 0.8008281904610115,
              "report_status" : "report_status",
              "url" : "url"
            }"""
            
            when(exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        }
    }


    get<Paths.campaignsAnalytics> {  _: Paths.campaignsAnalytics ->
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()
        
        if (principal == null) {
            call.respond(HttpStatusCode.Unauthorized)
        } else {
            val exampleContentType = "application/json"
            val exampleContentString = """{
              "DATE" : "2021-04-01",
              "CAMPAIGN_ID" : "547602124502",
              "SPEND_IN_DOLLAR" : 30,
              "TOTAL_CLICKTHROUGH" : 216
            }"""
            
            when(exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        }
    }


    get<Paths.campaignsList> {  _: Paths.campaignsList ->
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()
        
        if (principal == null) {
            call.respond(HttpStatusCode.Unauthorized)
        } else {
            call.respond(HttpStatusCode.NotImplemented)
        }
    }


    get<Paths.productGroupsAnalytics> {  _: Paths.productGroupsAnalytics ->
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()
        
        if (principal == null) {
            call.respond(HttpStatusCode.Unauthorized)
        } else {
            val exampleContentType = "application/json"
            val exampleContentString = """{
              "DATE" : "2021-04-01",
              "PRODUCT_GROUP_ID" : "74629351736530",
              "SPEND_IN_DOLLAR" : 30,
              "TOTAL_CLICKTHROUGH" : 216
            }"""
            
            when(exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
        }
    }

}
