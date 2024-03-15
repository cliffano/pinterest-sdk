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

/**
 * non-promoted catalog product group entity
 */
export interface CatalogProductGroup {
    /**
     * ID of the catalog product group.
     */
    id?: string;

    /**
     * Merchant ID pertaining to the owner of the catalog product group.
     */
    merchant_id?: string;

    /**
     * Name of catalog product group
     */
    name?: string;

    /**
     * Object holding a list of filters
     */
    filters?: object;

    /**
     * Object holding a list of filters
     */
    filter_v2?: object;

    type?: models.Board;

    status?: models.EntityStatus;

    /**
     * id of the feed profile belonging to this catalog product group
     */
    feed_profile_id?: string;

    /**
     * Unix timestamp in seconds of when catalog product group was created.
     */
    created_at?: number;

    /**
     * Unix timestamp in seconds of last time catalog product group was updated.
     */
    last_update?: number;

    /**
     * Amount of products in the catalog product group
     */
    product_count?: number;

    /**
     * index of the featured position of the catalog product group
     */
    featured_position?: number;

}
export namespace CatalogProductGroup {
}
