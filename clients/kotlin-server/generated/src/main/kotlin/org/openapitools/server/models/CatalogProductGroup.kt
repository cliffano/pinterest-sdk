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

import org.openapitools.server.models.Board
import org.openapitools.server.models.EntityStatus

/**
 * non-promoted catalog product group entity
 * @param id ID of the catalog product group.
 * @param merchantId Merchant ID pertaining to the owner of the catalog product group.
 * @param name Name of catalog product group
 * @param filters Object holding a list of filters
 * @param filterV2 Object holding a list of filters
 * @param type 
 * @param status 
 * @param feedProfileId id of the feed profile belonging to this catalog product group
 * @param createdAt Unix timestamp in seconds of when catalog product group was created.
 * @param lastUpdate Unix timestamp in seconds of last time catalog product group was updated.
 * @param productCount Amount of products in the catalog product group
 * @param featuredPosition index of the featured position of the catalog product group
 */
data class CatalogProductGroup(
    /* ID of the catalog product group. */
    val id: kotlin.String? = null,
    /* Merchant ID pertaining to the owner of the catalog product group. */
    val merchantId: kotlin.String? = null,
    /* Name of catalog product group */
    val name: kotlin.String? = null,
    /* Object holding a list of filters */
    val filters: kotlin.Any? = null,
    /* Object holding a list of filters */
    val filterV2: kotlin.Any? = null,
    val type: Board? = null,
    val status: EntityStatus? = null,
    /* id of the feed profile belonging to this catalog product group */
    val feedProfileId: kotlin.String? = null,
    /* Unix timestamp in seconds of when catalog product group was created. */
    val createdAt: kotlin.Int? = null,
    /* Unix timestamp in seconds of last time catalog product group was updated. */
    val lastUpdate: kotlin.Int? = null,
    /* Amount of products in the catalog product group */
    val productCount: kotlin.Int? = null,
    /* index of the featured position of the catalog product group */
    val featuredPosition: kotlin.Int? = null
) 
