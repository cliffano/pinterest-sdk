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

import org.openapitools.server.models.CreativeType
import org.openapitools.server.models.EntityStatus
import org.openapitools.server.models.GridClickType

/**
 * 
 * @param id ID of the product group promotion.
 * @param adGroupId ID of the ad group the product group belongs to.
 * @param bidInMicroCurrency The bid in micro currency.
 * @param included True if the group is BIDDABLE, false if it should be EXCLUDED from serving ads.
 * @param definition The full product group definition path
 * @param relativeDefinition The definition of the product group, relative to its parent - an attribute name/value pair
 * @param parentId The parent Product Group ID of this Product Group
 * @param slideshowCollectionsTitle Slideshow Collections Title
 * @param slideshowCollectionsDescription Slideshow Collections Description
 * @param isMdl If set to true products promoted in this product group will use the Mobile Deep Link specified in your catalog
 * @param status 
 * @param trackingUrl Tracking template for proudct group promotions. 4000 limit
 * @param catalogProductGroupId ID of the catalogs product group that this product group promotion references
 * @param catalogProductGroupName Catalogs product group name
 * @param creativeType 
 * @param collectionsHeroPinId Hero Pin ID if this PG is promoted as a Collection
 * @param collectionsHeroDestinationUrl Collections Hero Destination Url
 * @param gridClickType 
 */
data class ProductGroupPromotion(
    /* ID of the product group promotion. */
    val id: kotlin.String? = null,
    /* ID of the ad group the product group belongs to. */
    val adGroupId: kotlin.String? = null,
    /* The bid in micro currency. */
    val bidInMicroCurrency: kotlin.Int? = null,
    /* True if the group is BIDDABLE, false if it should be EXCLUDED from serving ads. */
    val included: kotlin.Boolean? = null,
    /* The full product group definition path */
    val definition: kotlin.String? = null,
    /* The definition of the product group, relative to its parent - an attribute name/value pair */
    val relativeDefinition: kotlin.String? = null,
    /* The parent Product Group ID of this Product Group */
    val parentId: kotlin.String? = null,
    /* Slideshow Collections Title */
    val slideshowCollectionsTitle: kotlin.String? = null,
    /* Slideshow Collections Description */
    val slideshowCollectionsDescription: kotlin.String? = null,
    /* If set to true products promoted in this product group will use the Mobile Deep Link specified in your catalog */
    val isMdl: kotlin.Boolean? = null,
    val status: EntityStatus? = null,
    /* Tracking template for proudct group promotions. 4000 limit */
    val trackingUrl: kotlin.String? = null,
    /* ID of the catalogs product group that this product group promotion references */
    val catalogProductGroupId: kotlin.String? = null,
    /* Catalogs product group name */
    val catalogProductGroupName: kotlin.String? = null,
    val creativeType: CreativeType? = null,
    /* Hero Pin ID if this PG is promoted as a Collection */
    val collectionsHeroPinId: kotlin.String? = null,
    /* Collections Hero Destination Url */
    val collectionsHeroDestinationUrl: kotlin.String? = null,
    val gridClickType: GridClickType? = null
) 

