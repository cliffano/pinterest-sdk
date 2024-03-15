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


  /**
   * An item to be upserted
   */
case class CatalogsUpsertRetailItem(
  /* The catalog item id in the merchant namespace */
  itemId: String,
  operation: CatalogsUpsertRetailItemEnums.Operation,
  attributes: ItemAttributes
)

object CatalogsUpsertRetailItemEnums {

  type Operation = Operation.Value
  object Operation extends Enumeration {
    val CREATE = Value("CREATE")
    val UPDATE = Value("UPDATE")
    val UPSERT = Value("UPSERT")
    val DELETE = Value("DELETE")
  }

}
