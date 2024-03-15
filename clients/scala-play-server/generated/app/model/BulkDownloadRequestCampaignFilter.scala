package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for BulkDownloadRequest_campaign_filter.
  * @param startTime Unix UTC timestamp.
  * @param endTime Unix UTC timestamp.
  * @param name Campaign name
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2024-03-14T23:15:00.394859410Z[Etc/UTC]", comments = "Generator version: 7.4.0")
case class BulkDownloadRequestCampaignFilter(
  startTime: Option[String],
  endTime: Option[String],
  name: Option[String],
  campaignStatus: Option[List[CampaignSummaryStatus]],
  objectiveType: Option[List[ObjectiveType]]
)

object BulkDownloadRequestCampaignFilter {
  implicit lazy val bulkDownloadRequestCampaignFilterJsonFormat: Format[BulkDownloadRequestCampaignFilter] = Json.format[BulkDownloadRequestCampaignFilter]
}

