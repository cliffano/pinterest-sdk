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

import org.openapitools.server.model.AdArrayResponse
import org.openapitools.server.model.AdCreateRequest
import org.openapitools.server.model.AdPreviewRequest
import org.openapitools.server.model.AdPreviewURLResponse
import org.openapitools.server.model.AdResponse
import org.openapitools.server.model.AdUpdateRequest
import org.openapitools.server.model.AdsAnalyticsResponseInner
import org.openapitools.server.model.AdsAnalyticsTargetingType
import org.openapitools.server.model.AdsList200Response
import org.openapitools.server.model.ConversionReportAttributionType
import org.openapitools.server.model.Error
import org.openapitools.server.model.Granularity
import java.time.LocalDate
import org.openapitools.server.model.MetricsResponse

import java.io.File

import org.scalatra.ScalatraServlet
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{ FileUploadSupport, MultipartConfig, SizeConstraintExceededException }

import scala.collection.JavaConverters._

class AdsApi(implicit val swagger: Swagger) extends ScalatraServlet
  with FileUploadSupport
  with JacksonJsonSupport
  with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "AdsApi"

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val adPreviewsCreateOperation = (apiOperation[AdPreviewURLResponse]("adPreviewsCreate")
    summary "Create ad preview with pin or image"
    parameters(pathParam[String]("adAccountId").description(""), bodyParam[AdPreviewRequest]("adPreviewRequest").description(""))
  )

  post("/ad_accounts/:ad_account_id/ad_previews", operation(adPreviewsCreateOperation)) {
    val adAccountId = params.getOrElse("adAccountId", halt(400))
    //println("adAccountId: " + adAccountId)
    //println("adPreviewRequest: " + adPreviewRequest)
  }

  

  val adTargetingAnalyticsGetOperation = (apiOperation[MetricsResponse]("adTargetingAnalyticsGet")
    summary "Get targeting analytics for ads"
    parameters(pathParam[String]("adAccountId").description(""), queryParam[List[String]]("adIds").description("").defaultValue(List.empty[String] ), queryParam[LocalDate]("startDate").description(""), queryParam[LocalDate]("endDate").description(""), queryParam[List[AdsAnalyticsTargetingType]]("targetingTypes").description("").defaultValue(List.empty[AdsAnalyticsTargetingType] ), queryParam[List[String]]("columns").description("").defaultValue(List.empty[String] ), queryParam[Granularity]("granularity").description(""), queryParam[Int]("clickWindowDays").description("").optional.defaultValue(30), queryParam[Int]("engagementWindowDays").description("").optional.defaultValue(30), queryParam[Int]("viewWindowDays").description("").optional.defaultValue(1), queryParam[String]("conversionReportTime").description("").optional.defaultValue(TIME_OF_AD_ACTION), queryParam[ConversionReportAttributionType]("attributionTypes").description("").optional)
  )

  get("/ad_accounts/:ad_account_id/ads/targeting_analytics", operation(adTargetingAnalyticsGetOperation)) {
    val adAccountId = params.getOrElse("adAccountId", halt(400))
    //println("adAccountId: " + adAccountId)
        val adIdsString = params.getAs[String]("adIds")
    val adIds = if("multi" == "default" || "multi" == "csv") {
      adIdsString match {
        case Some(str) => str.split(",").toSeq
        case None => Seq()
      }
    } else
      Seq()

    //println("adIds: " + adIds)
            val startDate = params.getAs[LocalDate]("startDate")

    //println("startDate: " + startDate)
            val endDate = params.getAs[LocalDate]("endDate")

    //println("endDate: " + endDate)
        val targetingTypesString = params.getAs[String]("targetingTypes")
    val targetingTypes = if("csv" == "default" || "csv" == "csv") {
      targetingTypesString match {
        case Some(str) => str.split(",").toSeq
        case None => Seq()
      }
    } else
      Seq()

    //println("targetingTypes: " + targetingTypes)
        val columnsString = params.getAs[String]("columns")
    val columns = if("csv" == "default" || "csv" == "csv") {
      columnsString match {
        case Some(str) => str.split(",").toSeq
        case None => Seq()
      }
    } else
      Seq()

    //println("columns: " + columns)
            val granularity = params.getAs[Granularity]("granularity")

    //println("granularity: " + granularity)
            val clickWindowDays = params.getAs[Int]("clickWindowDays")

    //println("clickWindowDays: " + clickWindowDays)
            val engagementWindowDays = params.getAs[Int]("engagementWindowDays")

    //println("engagementWindowDays: " + engagementWindowDays)
            val viewWindowDays = params.getAs[Int]("viewWindowDays")

    //println("viewWindowDays: " + viewWindowDays)
            val conversionReportTime = params.getAs[String]("conversionReportTime")

    //println("conversionReportTime: " + conversionReportTime)
            val attributionTypes = params.getAs[ConversionReportAttributionType]("attributionTypes")

    //println("attributionTypes: " + attributionTypes)
  }

  

  val adsAnalyticsOperation = (apiOperation[List[AdsAnalyticsResponseInner]]("adsAnalytics")
    summary "Get ad analytics"
    parameters(pathParam[String]("adAccountId").description(""), queryParam[LocalDate]("startDate").description(""), queryParam[LocalDate]("endDate").description(""), queryParam[List[String]]("adIds").description("").defaultValue(List.empty[String] ), queryParam[List[String]]("columns").description("").defaultValue(List.empty[String] ), queryParam[Granularity]("granularity").description(""), queryParam[Int]("clickWindowDays").description("").optional.defaultValue(30), queryParam[Int]("engagementWindowDays").description("").optional.defaultValue(30), queryParam[Int]("viewWindowDays").description("").optional.defaultValue(1), queryParam[String]("conversionReportTime").description("").optional.defaultValue(TIME_OF_AD_ACTION))
  )

  get("/ad_accounts/:ad_account_id/ads/analytics", operation(adsAnalyticsOperation)) {
    val adAccountId = params.getOrElse("adAccountId", halt(400))
    //println("adAccountId: " + adAccountId)
            val startDate = params.getAs[LocalDate]("startDate")

    //println("startDate: " + startDate)
            val endDate = params.getAs[LocalDate]("endDate")

    //println("endDate: " + endDate)
        val adIdsString = params.getAs[String]("adIds")
    val adIds = if("multi" == "default" || "multi" == "csv") {
      adIdsString match {
        case Some(str) => str.split(",").toSeq
        case None => Seq()
      }
    } else
      Seq()

    //println("adIds: " + adIds)
        val columnsString = params.getAs[String]("columns")
    val columns = if("csv" == "default" || "csv" == "csv") {
      columnsString match {
        case Some(str) => str.split(",").toSeq
        case None => Seq()
      }
    } else
      Seq()

    //println("columns: " + columns)
            val granularity = params.getAs[Granularity]("granularity")

    //println("granularity: " + granularity)
            val clickWindowDays = params.getAs[Int]("clickWindowDays")

    //println("clickWindowDays: " + clickWindowDays)
            val engagementWindowDays = params.getAs[Int]("engagementWindowDays")

    //println("engagementWindowDays: " + engagementWindowDays)
            val viewWindowDays = params.getAs[Int]("viewWindowDays")

    //println("viewWindowDays: " + viewWindowDays)
            val conversionReportTime = params.getAs[String]("conversionReportTime")

    //println("conversionReportTime: " + conversionReportTime)
  }

  

  val adsCreateOperation = (apiOperation[AdArrayResponse]("adsCreate")
    summary "Create ads"
    parameters(pathParam[String]("adAccountId").description(""), bodyParam[List[AdCreateRequest]]("adCreateRequest").description(""))
  )

  post("/ad_accounts/:ad_account_id/ads", operation(adsCreateOperation)) {
    val adAccountId = params.getOrElse("adAccountId", halt(400))
    //println("adAccountId: " + adAccountId)
    //println("adCreateRequest: " + adCreateRequest)
  }

  

  val adsGetOperation = (apiOperation[AdResponse]("adsGet")
    summary "Get ad"
    parameters(pathParam[String]("adAccountId").description(""), pathParam[String]("adId").description(""))
  )

  get("/ad_accounts/:ad_account_id/ads/:ad_id", operation(adsGetOperation)) {
    val adAccountId = params.getOrElse("adAccountId", halt(400))
    //println("adAccountId: " + adAccountId)
    val adId = params.getOrElse("adId", halt(400))
    //println("adId: " + adId)
  }

  

  val adsListOperation = (apiOperation[AdsList200Response]("adsList")
    summary "List ads"
    parameters(pathParam[String]("adAccountId").description(""), queryParam[List[String]]("campaignIds").description("").optional.defaultValue(List.empty[String] ), queryParam[List[String]]("adGroupIds").description("").optional.defaultValue(List.empty[String] ), queryParam[List[String]]("adIds").description("").optional.defaultValue(List.empty[String] ), queryParam[List[String]]("entityStatuses").description("").optional.defaultValue(["ACTIVE","PAUSED"]), queryParam[Int]("pageSize").description("").optional.defaultValue(25), queryParam[String]("order").description("").optional, queryParam[String]("bookmark").description("").optional)
  )

  get("/ad_accounts/:ad_account_id/ads", operation(adsListOperation)) {
    val adAccountId = params.getOrElse("adAccountId", halt(400))
    //println("adAccountId: " + adAccountId)
        val campaignIdsString = params.getAs[String]("campaignIds")
    val campaignIds = if("multi" == "default" || "multi" == "csv") {
      campaignIdsString match {
        case Some(str) => str.split(",").toSeq
        case None => Seq()
      }
    } else
      Seq()

    //println("campaignIds: " + campaignIds)
        val adGroupIdsString = params.getAs[String]("adGroupIds")
    val adGroupIds = if("multi" == "default" || "multi" == "csv") {
      adGroupIdsString match {
        case Some(str) => str.split(",").toSeq
        case None => Seq()
      }
    } else
      Seq()

    //println("adGroupIds: " + adGroupIds)
        val adIdsString = params.getAs[String]("adIds")
    val adIds = if("multi" == "default" || "multi" == "csv") {
      adIdsString match {
        case Some(str) => str.split(",").toSeq
        case None => Seq()
      }
    } else
      Seq()

    //println("adIds: " + adIds)
        val entityStatusesString = params.getAs[String]("entityStatuses")
    val entityStatuses = if("multi" == "default" || "multi" == "csv") {
      entityStatusesString match {
        case Some(str) => str.split(",").toSeq
        case None => Seq()
      }
    } else
      Seq()

    //println("entityStatuses: " + entityStatuses)
            val pageSize = params.getAs[Int]("pageSize")

    //println("pageSize: " + pageSize)
            val order = params.getAs[String]("order")

    //println("order: " + order)
            val bookmark = params.getAs[String]("bookmark")

    //println("bookmark: " + bookmark)
  }

  

  val adsUpdateOperation = (apiOperation[AdArrayResponse]("adsUpdate")
    summary "Update ads"
    parameters(pathParam[String]("adAccountId").description(""), bodyParam[List[AdUpdateRequest]]("adUpdateRequest").description(""))
  )

  patch("/ad_accounts/:ad_account_id/ads", operation(adsUpdateOperation)) {
    val adAccountId = params.getOrElse("adAccountId", halt(400))
    //println("adAccountId: " + adAccountId)
    //println("adUpdateRequest: " + adUpdateRequest)
  }

}
