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

import org.openapitools.client.core.ApiModel

case class CatalogsCreateHotelItem (
  /* The catalog hotel id in the merchant namespace */
  hotelId: String,
  operation: CatalogsCreateHotelItemEnums.Operation,
  attributes: CatalogsHotelAttributes
) extends ApiModel

object CatalogsCreateHotelItemEnums {

  type Operation = Operation.Value
  object Operation extends Enumeration {
    val CREATE = Value("CREATE")
  }

}
