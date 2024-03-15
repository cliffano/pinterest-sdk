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
 * Request object for creating a product group.
 */
export interface CatalogsProductGroupCreateRequest {
    name: string;

    description?: string;

    /**
     * boolean indicator of whether the product group is being featured or not
     */
    is_featured?: boolean;

    filters: models.CatalogsProductGroupFiltersRequest;

    /**
     * Catalog Feed id pertaining to the catalog product group.
     */
    feed_id: string;

}
