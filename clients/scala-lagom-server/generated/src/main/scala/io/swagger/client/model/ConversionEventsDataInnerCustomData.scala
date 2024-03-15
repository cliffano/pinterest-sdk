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

case class ConversionEventsDataInnerCustomData (
            /* The ISO-4217 currency code. If not provided, we will default to the advertiser's currency set during account creation. Your campaign performance needs this field to report right ROAS/CPA. */
                  currency: Option[String],
            /* Total value of the event. Accepted as a string in the request; it will be parsed into a double. For example, if there are two items in a checkout event, the value should be the total price. We recommend to use pre-tax, pre-shipping final value. */
                  value: Option[String],
            /* List of products IDs. We recommend using this if you are a merchant for PageVisit, AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section). */
                  contentIds: Option[Seq[String]],
            /* The name of the page or product associated with the event. */
                  contentName: Option[String],
            /* The category of the content associated with the event. */
                  contentCategory: Option[String],
            /* The brand of the content associated with the event. */
                  contentBrand: Option[String],
            /* A list of objects containing information about products, such as price and quantity. We recommend using this if you are a merchant for PageVisit, AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section). */
                  contents: Option[Seq[ConversionEventsDataInnerCustomDataContentsInner]],
            /* Total number of products of the event. For example, the total number of items purchased in a checkout event. We recommend using this if you are a merchant for AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section). */
                  numItems: Option[Long],
            /* The order ID. We recommend sending order_id to help us deduplicate events when necessary. This also helps to run other measurement products at Pinterest. */
                  orderId: Option[String],
            /* The search string related to the user conversion event. */
                  searchString: Option[String],
            /* Flags for different privacy rights laws to opt out users of sharing personal information. Values should be comma separated. Please follow the <a href=\"https://help.pinterest.com/en/business/article/limited-data-processing\" target=\"_blank\">Help Center</a> and <a href=\"https://developers.pinterest.com/docs/conversions/conversion-management/#Understanding%20Limited%20Data%20Processing\" target=\"_blank\">dev site</a> for specific opt_out_type set up. */
                  optOutType: Option[String],
            /* Named partner. Not required, this is for Pinterest internal use only. Please do not use this unless specifically guided. */
                  np: Option[String]
)

object ConversionEventsDataInnerCustomData {
implicit val format: Format[ConversionEventsDataInnerCustomData] = Json.format
}

