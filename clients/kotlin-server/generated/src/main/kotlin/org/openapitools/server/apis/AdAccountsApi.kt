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

    authenticate("pinterest_oauth2") {
    get<Paths.adAccountAnalytics> {
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "DATE" : "2021-04-01",
              "AD_ACCOUNT_ID" : "547602124502",
              "SPEND_IN_DOLLAR" : 30,
              "TOTAL_CLICKTHROUGH" : 216
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.adAccountsList> {
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        call.respond(HttpStatusCode.NotImplemented)
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.adGroupsAnalytics> {
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "DATE" : "2021-04-01",
              "AD_GROUP_ID" : "547602124502",
              "SPEND_IN_DOLLAR" : 30,
              "TOTAL_CLICKTHROUGH" : 216
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.adGroupsList> {
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        call.respond(HttpStatusCode.NotImplemented)
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.adsAnalytics> {
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "DATE" : "2021-04-01",
              "AD_ID" : "547602124502",
              "SPEND_IN_DOLLAR" : 30,
              "TOTAL_CLICKTHROUGH" : 216
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.adsList> {
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        call.respond(HttpStatusCode.NotImplemented)
    }
    }

    authenticate("pinterest_oauth2") {
    post<Paths.analyticsCreateReport> {
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "report_status" : "report_status",
              "message" : "message",
              "token" : "token"
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.analyticsGetReport> {
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "size" : 0.8008281904610115,
              "report_status" : "report_status",
              "url" : "url"
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.campaignsAnalytics> {
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "DATE" : "2021-04-01",
              "CAMPAIGN_ID" : "547602124502",
              "SPEND_IN_DOLLAR" : 30,
              "TOTAL_CLICKTHROUGH" : 216
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.campaignsList> {
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        call.respond(HttpStatusCode.NotImplemented)
    }
    }

    authenticate("pinterest_oauth2") {
    get<Paths.productGroupsAnalytics> {
        val principal = call.authentication.principal<OAuthAccessTokenResponse>()!!
        
        val exampleContentType = "application/json"
            val exampleContentString = """{
              "DATE" : "2021-04-01",
              "PRODUCT_GROUP_ID" : "74629351736530",
              "SPEND_IN_DOLLAR" : 30,
              "TOTAL_CLICKTHROUGH" : 216
            }"""
            
            when (exampleContentType) {
                "application/json" -> call.respond(gson.fromJson(exampleContentString, empty::class.java))
                "application/xml" -> call.respondText(exampleContentString, ContentType.Text.Xml)
                else -> call.respondText(exampleContentString)
            }
    }
    }

}
