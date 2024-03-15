/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import * as models from './models';

export interface ProductGroupPromotion {
    /**
     * ID of the product group promotion.
     */
    id?: string;

    /**
     * ID of the ad group the product group belongs to.
     */
    ad_group_id?: string;

    /**
     * The bid in micro currency.
     */
    bid_in_micro_currency?: number;

    /**
     * True if the group is BIDDABLE, false if it should be EXCLUDED from serving ads.
     */
    included?: boolean;

    /**
     * The full product group definition path
     */
    definition?: string;

    /**
     * The definition of the product group, relative to its parent - an attribute name/value pair
     */
    relative_definition?: string;

    /**
     * The parent Product Group ID of this Product Group
     */
    parent_id?: string;

    /**
     * Slideshow Collections Title
     */
    slideshow_collections_title?: string;

    /**
     * Slideshow Collections Description
     */
    slideshow_collections_description?: string;

    /**
     * If set to true products promoted in this product group will use the Mobile Deep Link specified in your catalog
     */
    is_mdl?: boolean;

    status?: models.EntityStatus;

    /**
     * Tracking template for proudct group promotions. 4000 limit
     */
    tracking_url?: string;

    /**
     * ID of the catalogs product group that this product group promotion references
     */
    catalog_product_group_id?: string;

    /**
     * Catalogs product group name
     */
    catalog_product_group_name?: string;

    creative_type?: models.CreativeType;

    /**
     * Hero Pin ID if this PG is promoted as a Collection
     */
    collections_hero_pin_id?: string;

    /**
     * Collections Hero Destination Url
     */
    collections_hero_destination_url?: string;

    grid_click_type?: models.GridClickType;

}
export namespace ProductGroupPromotion {
}
