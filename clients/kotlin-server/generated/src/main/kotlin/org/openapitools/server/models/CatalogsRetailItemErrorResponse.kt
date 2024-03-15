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
package org.openapitools.server.models

import org.openapitools.server.models.CatalogsType
import org.openapitools.server.models.ItemValidationEvent

/**
 * Object describing a retail item error
 * @param catalogType 
 * @param itemId The catalog item id in the merchant namespace
 * @param errors Array with the errors for the item id requested
 */
data class CatalogsRetailItemErrorResponse(
    val catalogType: CatalogsType,
    /* The catalog item id in the merchant namespace */
    val itemId: kotlin.String? = null,
    /* Array with the errors for the item id requested */
    val errors: kotlin.collections.List<ItemValidationEvent>? = null
) 

