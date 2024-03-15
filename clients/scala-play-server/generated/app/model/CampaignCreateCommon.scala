package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for CampaignCreateCommon.
  * @param adAccountId Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
  * @param name Campaign name.
  * @param lifetimeSpendCap Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time.
  * @param dailySpendCap Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time.
  * @param orderLineId Order line ID that appears on the invoice.
  * @param startTime Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
  * @param endTime Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
  * @param isFlexibleDailyBudgets Determine if a campaign has flexible daily budgets setup.
  * @param defaultAdGroupBudgetInMicroCurrency When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account.
  * @param isAutomatedCampaign Specifies whether the campaign was created in the automated campaign flow
  * @param additionalProperties Any additional properties this model may have.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2024-03-14T23:15:00.394859410Z[Etc/UTC]", comments = "Generator version: 7.4.0")
case class CampaignCreateCommon(
  adAccountId: Option[String],
  name: Option[String],
  status: Option[EntityStatus],
  lifetimeSpendCap: Option[Int],
  dailySpendCap: Option[Int],
  orderLineId: Option[String],
  trackingUrls: Option[AdCommonTrackingUrls],
  startTime: Option[Int],
  endTime: Option[Int],
  summaryStatus: Option[CampaignSummaryStatus],
  isFlexibleDailyBudgets: Option[Boolean],
  defaultAdGroupBudgetInMicroCurrency: Option[Int],
  isAutomatedCampaign: Option[Boolean]
  additionalProperties: 
)

object CampaignCreateCommon {
  implicit lazy val campaignCreateCommonJsonFormat: Format[CampaignCreateCommon] = {
    val realJsonFormat = Json.format[CampaignCreateCommon]
    val declaredPropNames = Set("adAccountId", "name", "status", "lifetimeSpendCap", "dailySpendCap", "orderLineId", "trackingUrls", "startTime", "endTime", "summaryStatus", "isFlexibleDailyBudgets", "defaultAdGroupBudgetInMicroCurrency", "isAutomatedCampaign")
    
    Format(
      Reads {
        case JsObject(xs) =>
          val declaredProps = xs.filterKeys(declaredPropNames)
          val additionalProps = JsObject(xs -- declaredPropNames)
          val restructuredProps = declaredProps + ("additionalProperties" -> additionalProps)
          val newObj = JsObject(restructuredProps)
          realJsonFormat.reads(newObj)
        case _ =>
          JsError("error.expected.jsobject")
      },
      Writes { campaignCreateCommon =>
        val jsObj = realJsonFormat.writes(campaignCreateCommon)
        val additionalProps = jsObj.value("additionalProperties").as[JsObject]
        val declaredProps = jsObj - "additionalProperties"
        val newObj = declaredProps ++ additionalProps
        newObj
      }
    )
  }
}

