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
 * Request for creation of entities in bulk.
 */
export interface BulkUpsertRequestUpdate {
    campaigns?: Array<models.CampaignUpdateRequest>;

    ad_groups?: Array<models.AdGroupUpdateRequest>;

    ads?: Array<models.AdUpdateRequest>;

    product_groups?: Array<models.ProductGroupPromotionUpdateRequest>;

    keywords?: Array<models.KeywordUpdate>;

}
