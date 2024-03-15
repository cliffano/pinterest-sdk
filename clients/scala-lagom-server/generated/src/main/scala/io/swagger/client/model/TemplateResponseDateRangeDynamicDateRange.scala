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

package io.swagger.client.model
import play.api.libs.json._

case class TemplateResponseDateRangeDynamicDateRange (
            /* The date range type */
                  `type`: Option[String],
                  range:  Option[TemplateResponseDateRangeDynamicDateRangeRangeEnum.TemplateResponseDateRangeDynamicDateRangeRangeEnum]
)

object TemplateResponseDateRangeDynamicDateRange {
implicit val format: Format[TemplateResponseDateRangeDynamicDateRange] = Json.format
}

object TemplateResponseDateRangeDynamicDateRangeRangeEnum extends Enumeration {
  val   YEAR_TO_DATE, QUARTER_TO_DATE, MONTH_TO_DATE, LAST_MONTH = Value
  type TemplateResponseDateRangeDynamicDateRangeRangeEnum = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[TemplateResponseDateRangeDynamicDateRangeRangeEnum.type])
}