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

case class CatalogsListProductsByFilterRequestOneOf (
            /* Catalog Feed id pertaining to the catalog product group filter. */
                  feedId: String,
                  filters: CatalogsProductGroupFilters
)

object CatalogsListProductsByFilterRequestOneOf {
implicit val format: Format[CatalogsListProductsByFilterRequestOneOf] = Json.format
}

