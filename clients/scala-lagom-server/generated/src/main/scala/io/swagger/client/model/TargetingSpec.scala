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

case class TargetingSpec (
                  AGE_BUCKET:  Option[TargetingSpecSeq[AGE_BUCKETEnum].TargetingSpecSeq[AGE_BUCKETEnum]],
                  APPTYPE:  Option[TargetingSpecSeq[APPTYPEEnum].TargetingSpecSeq[APPTYPEEnum]],
            /* Excluded customer list IDs. Used to drive new customer acquisition goals. For example: [\"2542620905475\"]. Audience lists need to have at least 100 people with Pinterest accounts in them. If the AUDIENCE_EXCLUDE field is missing, the default behavior in terms of ad delivery is that **No users will be excluded**. */
                  AUDIENCE_EXCLUDE: Option[Seq[String]],
            /* Targeted customer list IDs. For example: [\"2542620905473\"]. Audience lists need to have at least 100 people with Pinterest accounts in them Audience lists need to have at least 100 people with Pinterest accounts in them. If the AUDIENCE_INCLUDE field is missing, the default behavior in terms of ad delivery is that **All users will be included**. */
                  AUDIENCE_INCLUDE: Option[Seq[String]],
                  GENDER:  Option[TargetingSpecSeq[GENDEREnum].TargetingSpecSeq[GENDEREnum]],
            /* Location region codes, e.g., \"BE-VOV\" (East Flanders, Belgium) For complete list, <a href=\"https://help.pinterest.com/sub/helpcenter/partner/pinterest_location_targeting_codes.xlsx\" target=\"_blank\">click here</a> or postal codes, e.g., \"US-94107\". Use either region codes or postal codes but not both. If the GEO field is missing, the default behavior in terms of ad delivery is that **No geos will be selected**. */
                  GEO: Option[Seq[String]],
            /* Array of interest object IDs. If the INTEREST field is missing, the default behavior in terms of ad delivery is that **All interests will be targeted**. */
                  INTEREST: Option[Seq[String]],
            /* 24 ISO 639-1 two letter language codes. If the LOCALE field is missing, the default behavior in terms of ad delivery is that **All languages will be target, only english non-sublanguage will be targeted**. */
                  LOCALE: Option[Seq[String]],
            /* 22 ISO Alpha 2 two letter country codes or US Nielsen DMA (Designated Market Area) codes (location region codes) (e.g., [\"US\", \"807\"]). For complete list, click here. Location-Country and Location-Metro codes apply. If the LOCATION field is missing, the default behavior in terms of ad delivery is that **Selects default country if not specified (US) and all regions within that country**. */
                  LOCATION: Option[Seq[String]],
            /* Array of object: lookback_window [Integer]: Number of days ago to start lookback timeframe for dynamic retargeting tag_types [Array of integer]: Event types to target for dynamic retargeting exclusion_window [Integer]: Number of days ago to stop lookback timeframe for dynamic retargeting */
                  SHOPPING_RETARGETING: Option[Seq[TargetingSpecSHOPPINGRETARGETING]],
                  TARGETING_STRATEGY:  Option[TargetingSpecSeq[TARGETING_STRATEGYEnum].TargetingSpecSeq[TARGETING_STRATEGYEnum]]
)

object TargetingSpec {
implicit val format: Format[TargetingSpec] = Json.format
}

object TargetingSpecSeq[AGE_BUCKETEnum] extends Enumeration {
  val   18-24, 21+, 25-34, 35-44, 45-49, 50-54, 55-64, 65+ = Value
  type TargetingSpecSeq[AGE_BUCKETEnum] = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[TargetingSpecSeq[AGE_BUCKETEnum].type])
}
object TargetingSpecSeq[APPTYPEEnum] extends Enumeration {
  val   android_mobile, android_tablet, ipad, iphone, web, web_mobile = Value
  type TargetingSpecSeq[APPTYPEEnum] = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[TargetingSpecSeq[APPTYPEEnum].type])
}
object TargetingSpecSeq[GENDEREnum] extends Enumeration {
  val   unknown, male, female = Value
  type TargetingSpecSeq[GENDEREnum] = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[TargetingSpecSeq[GENDEREnum].type])
}
object TargetingSpecSeq[TARGETING_STRATEGYEnum] extends Enumeration {
  val   CHOOSE_YOUR_OWN, FIND_NEW_CUSTOMERS, RECONNECT_WITH_USERS = Value
  type TargetingSpecSeq[TARGETING_STRATEGYEnum] = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[TargetingSpecSeq[TARGETING_STRATEGYEnum].type])
}
