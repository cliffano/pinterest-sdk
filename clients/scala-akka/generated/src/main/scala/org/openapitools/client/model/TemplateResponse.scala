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
package org.openapitools.client.model

import java.math.BigDecimal
import org.openapitools.client.core.ApiModel

case class TemplateResponse (
  /* Template ID */
  id: Option[String] = None,
  /* ID of the Ad Account that owns the template */
  adAccountId: Option[String] = None,
  /* IDs of the Ad Accounts that have access to this template */
  adAccountIds: Option[Seq[String]] = None,
  /* ID of the user who created the template */
  userId: Option[String] = None,
  /* Template Name */
  name: Option[String] = None,
  /* The number of days prior to the day the report will be delivered at which the report will start */
  reportStartRelativeDaysInPast: Option[BigDecimal] = None,
  /* The number of days prior to the day the report will be delivered at which the report will end */
  reportEndRelativeDaysInPast: Option[BigDecimal] = None,
  dateRange: Option[TemplateResponseDateRange] = None,
  reportLevel: Option[MetricsReportingLevel] = None,
  reportFormat: Option[DataOutputFormat] = None,
  /* A list of columns to be included in the report */
  columns: Option[TemplateResponseEnums.Seq[Columns]] = None,
  granularity: Option[Granularity] = None,
  /* The length of the sliding window over which view conversions will be attributed */
  viewWindowDays: Option[BigDecimal] = None,
  /* The length of the sliding window over which click conversions will be attributed */
  clickWindowDays: Option[BigDecimal] = None,
  /* The length of the sliding window over which engagement conversions will be attributed */
  engagementWindowDays: Option[BigDecimal] = None,
  /* Conversion report time type */
  conversionReportTimeType: Option[TemplateResponseEnums.ConversionReportTimeType] = None,
  /* A JSON representation of any filters to be applied before returning report data. Each filter object should contain all of the following fields:<br> \"field\": The column name<br> \"operator\": The operator. Allowed operators: [\"=\", \"!=\", \"in\", \"not_in\", \"~\", \">\", \"<\", \"contains_substring\"]<br> \"value\": A single value or a list of values */
  filtersJson: Option[String] = None,
  /* A boolean value that indicates if the user owns the template */
  isOwnedByUser: Option[Boolean] = None,
  /* A boolean value that indicates if this template has been used to create a scheduled report */
  isScheduled: Option[Boolean] = None,
  /* The surface used to create this template */
  creationSource: Option[TemplateResponseEnums.CreationSource] = None,
  /* A boolean that indicates if the template has been deleted */
  isDeleted: Option[Boolean] = None,
  /* Time of last update in seconds since Unix epoch */
  updatedTime: Option[BigDecimal] = None,
  /* A list of custom column IDs */
  customColumnIds: Option[Seq[String]] = None,
  /* Reporting template type */
  `type`: Option[TemplateResponseEnums.`Type`] = None,
  /* The filter on the conversion ingestion source method for conversion metrics */
  ingestionSources: Option[TemplateResponseEnums.Seq[IngestionSources]] = None
) extends ApiModel

object TemplateResponseEnums {

  type Seq[Columns] = Seq[Columns].Value
  type ConversionReportTimeType = ConversionReportTimeType.Value
  type CreationSource = CreationSource.Value
  type `Type` = `Type`.Value
  type Seq[IngestionSources] = Seq[IngestionSources].Value
  object Seq[Columns] extends Enumeration {
  }

  object ConversionReportTimeType extends Enumeration {
    val TIMEOFADACTION = Value("TIME_OF_AD_ACTION")
    val TIMEOFCONVERSION = Value("TIME_OF_CONVERSION")
  }

  object CreationSource extends Enumeration {
    val ADSAPI = Value("ADS_API")
    val ADSMANAGERREPORTINGPAGE = Value("ADS_MANAGER_REPORTING_PAGE")
    val ADSMANAGERREPORTBUILDER = Value("ADS_MANAGER_REPORT_BUILDER")
  }

  object `Type` extends Enumeration {
    val UNSPECIFIED = Value("UNSPECIFIED")
    val BULK = Value("BULK")
    val OVERVIEW = Value("OVERVIEW")
    val TABLE = Value("TABLE")
  }

  object Seq[IngestionSources] extends Enumeration {
  }

}
