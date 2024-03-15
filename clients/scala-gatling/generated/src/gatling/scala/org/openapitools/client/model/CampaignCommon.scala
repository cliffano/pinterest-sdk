
package org.openapitools.client.model


case class CampaignCommon (
    /* Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema. */
    _adAccountId: Option[String],
    /* Campaign name. */
    _name: Option[String],
    _status: Option[EntityStatus],
    /* Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time. */
    _lifetimeSpendCap: Option[Integer],
    /* Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time. */
    _dailySpendCap: Option[Integer],
    /* Order line ID that appears on the invoice. */
    _orderLineId: Option[String],
    _trackingUrls: Option[AdCommonTrackingUrls],
    /* Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
    _startTime: Option[Integer],
    /* Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
    _endTime: Option[Integer],
    _summaryStatus: Option[CampaignSummaryStatus]
)
object CampaignCommon {
    def toStringBody(var_adAccountId: Object, var_name: Object, var_status: Object, var_lifetimeSpendCap: Object, var_dailySpendCap: Object, var_orderLineId: Object, var_trackingUrls: Object, var_startTime: Object, var_endTime: Object, var_summaryStatus: Object) =
        s"""
        | {
        | "adAccountId":$var_adAccountId,"name":$var_name,"status":$var_status,"lifetimeSpendCap":$var_lifetimeSpendCap,"dailySpendCap":$var_dailySpendCap,"orderLineId":$var_orderLineId,"trackingUrls":$var_trackingUrls,"startTime":$var_startTime,"endTime":$var_endTime,"summaryStatus":$var_summaryStatus
        | }
        """.stripMargin
}
