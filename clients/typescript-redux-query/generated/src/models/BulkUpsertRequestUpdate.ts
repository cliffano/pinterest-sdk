// tslint:disable
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

import { exists, mapValues } from '../runtime';
import {
    AdGroupUpdateRequest,
    AdGroupUpdateRequestFromJSON,
    AdGroupUpdateRequestToJSON,
    AdUpdateRequest,
    AdUpdateRequestFromJSON,
    AdUpdateRequestToJSON,
    CampaignUpdateRequest,
    CampaignUpdateRequestFromJSON,
    CampaignUpdateRequestToJSON,
    KeywordUpdate,
    KeywordUpdateFromJSON,
    KeywordUpdateToJSON,
    ProductGroupPromotionUpdateRequest,
    ProductGroupPromotionUpdateRequestFromJSON,
    ProductGroupPromotionUpdateRequestToJSON,
} from './';

/**
 * Request for creation of entities in bulk.
 * @export
 * @interface BulkUpsertRequestUpdate
 */
export interface BulkUpsertRequestUpdate  {
    /**
     * 
     * @type {Array<CampaignUpdateRequest>}
     * @memberof BulkUpsertRequestUpdate
     */
    campaigns?: Array<CampaignUpdateRequest>;
    /**
     * 
     * @type {Array<AdGroupUpdateRequest>}
     * @memberof BulkUpsertRequestUpdate
     */
    adGroups?: Array<AdGroupUpdateRequest>;
    /**
     * 
     * @type {Array<AdUpdateRequest>}
     * @memberof BulkUpsertRequestUpdate
     */
    ads?: Array<AdUpdateRequest>;
    /**
     * 
     * @type {Array<ProductGroupPromotionUpdateRequest>}
     * @memberof BulkUpsertRequestUpdate
     */
    productGroups?: Array<ProductGroupPromotionUpdateRequest>;
    /**
     * 
     * @type {Array<KeywordUpdate>}
     * @memberof BulkUpsertRequestUpdate
     */
    keywords?: Array<KeywordUpdate>;
}

export function BulkUpsertRequestUpdateFromJSON(json: any): BulkUpsertRequestUpdate {
    return {
        'campaigns': !exists(json, 'campaigns') ? undefined : (json['campaigns'] as Array<any>).map(CampaignUpdateRequestFromJSON),
        'adGroups': !exists(json, 'ad_groups') ? undefined : (json['ad_groups'] as Array<any>).map(AdGroupUpdateRequestFromJSON),
        'ads': !exists(json, 'ads') ? undefined : (json['ads'] as Array<any>).map(AdUpdateRequestFromJSON),
        'productGroups': !exists(json, 'product_groups') ? undefined : (json['product_groups'] as Array<any>).map(ProductGroupPromotionUpdateRequestFromJSON),
        'keywords': !exists(json, 'keywords') ? undefined : (json['keywords'] as Array<any>).map(KeywordUpdateFromJSON),
    };
}

export function BulkUpsertRequestUpdateToJSON(value?: BulkUpsertRequestUpdate): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'campaigns': value.campaigns === undefined ? undefined : (value.campaigns as Array<any>).map(CampaignUpdateRequestToJSON),
        'ad_groups': value.adGroups === undefined ? undefined : (value.adGroups as Array<any>).map(AdGroupUpdateRequestToJSON),
        'ads': value.ads === undefined ? undefined : (value.ads as Array<any>).map(AdUpdateRequestToJSON),
        'product_groups': value.productGroups === undefined ? undefined : (value.productGroups as Array<any>).map(ProductGroupPromotionUpdateRequestToJSON),
        'keywords': value.keywords === undefined ? undefined : (value.keywords as Array<any>).map(KeywordUpdateToJSON),
    };
}


