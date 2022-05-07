package api

import model.Account
import model.AnalyticsMetricsResponse
import model.Error
import java.time.LocalDate

/**
  * Provides a default implementation for [[UserAccountApi]].
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2022-05-07T10:47:31.836531Z[Etc/UTC]")
class UserAccountApiImpl extends UserAccountApi {
  /**
    * @inheritdoc
    */
  override def userAccountAnalytics(startDate: LocalDate, endDate: LocalDate, fromClaimedContent: Option[String], pinFormat: Option[String], appTypes: Option[String], metricTypes: Option[List[String]], splitField: Option[String], adAccountId: Option[String]): Map[String, AnalyticsMetricsResponse] = {
    // TODO: Implement better logic

    Map.empty[String, AnalyticsMetricsResponse]
  }

  /**
    * @inheritdoc
    */
  override def userAccountGet(adAccountId: Option[String]): Account = {
    // TODO: Implement better logic

    Account(None, None, None, None, Map.empty)
  }
}
