/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */


package org.openapitools.server.api

import org.openapitools.server.model.AdAccountsCountryResponse
import org.openapitools.server.model.BookClosedResponse
import org.openapitools.server.model.DeliveryMetricsResponse
import org.openapitools.server.model.Error
import org.openapitools.server.model.SingleInterestTargetingOptionResponse

import java.io.File

import org.scalatra.ScalatraServlet
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{ FileUploadSupport, MultipartConfig, SizeConstraintExceededException }

import scala.collection.JavaConverters._

class ResourcesApi(implicit val swagger: Swagger) extends ScalatraServlet
  with FileUploadSupport
  with JacksonJsonSupport
  with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "ResourcesApi"

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val adAccountCountriesGetOperation = (apiOperation[AdAccountsCountryResponse]("adAccountCountriesGet")
    summary "Get ad accounts countries"
    parameters()
  )

  get("/resources/ad_account_countries", operation(adAccountCountriesGetOperation)) {
  }

  

  val deliveryMetricsGetOperation = (apiOperation[DeliveryMetricsResponse]("deliveryMetricsGet")
    summary "Get available metrics' definitions"
    parameters(queryParam[String]("reportType").description("").optional)
  )

  get("/resources/delivery_metrics", operation(deliveryMetricsGetOperation)) {
            val reportType = params.getAs[String]("reportType")

    //println("reportType: " + reportType)
  }

  

  val interestTargetingOptionsGetOperation = (apiOperation[SingleInterestTargetingOptionResponse]("interestTargetingOptionsGet")
    summary "Get interest details"
    parameters(pathParam[String]("interestId").description(""))
  )

  get("/resources/targeting/interests/:interest_id", operation(interestTargetingOptionsGetOperation)) {
    val interestId = params.getOrElse("interestId", halt(400))
    //println("interestId: " + interestId)
  }

  

  val leadFormQuestionsGetOperation = (apiOperation[Unit]("leadFormQuestionsGet")
    summary "Get lead form questions"
    parameters()
  )

  get("/resources/lead_form_questions", operation(leadFormQuestionsGetOperation)) {
  }

  

  val metricsReadyStateGetOperation = (apiOperation[BookClosedResponse]("metricsReadyStateGet")
    summary "Get metrics ready state"
    parameters(queryParam[String]("date").description(""))
  )

  get("/resources/metrics_ready_state", operation(metricsReadyStateGetOperation)) {
            val date = params.getAs[String]("date")

    //println("date: " + date)
  }

  

  val targetingOptionsGetOperation = (apiOperation[List[Any]]("targetingOptionsGet")
    summary "Get targeting options"
    parameters(pathParam[String]("targetingType").description(""), queryParam[String]("clientId").description("").optional, queryParam[String]("oauthSignature").description("").optional, queryParam[String]("timestamp").description("").optional)
  )

  get("/resources/targeting/:targeting_type", operation(targetingOptionsGetOperation)) {
    val targetingType = params.getOrElse("targetingType", halt(400))
    //println("targetingType: " + targetingType)
            val clientId = params.getAs[String]("clientId")

    //println("clientId: " + clientId)
            val oauthSignature = params.getAs[String]("oauthSignature")

    //println("oauthSignature: " + oauthSignature)
            val timestamp = params.getAs[String]("timestamp")

    //println("timestamp: " + timestamp)
  }

}
