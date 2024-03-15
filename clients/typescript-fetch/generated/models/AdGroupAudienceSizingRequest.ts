/* tslint:disable */
/* eslint-disable */
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

import { mapValues } from '../runtime';
import type { AdGroupAudienceSizingRequestKeywordsInner } from './AdGroupAudienceSizingRequestKeywordsInner';
import {
    AdGroupAudienceSizingRequestKeywordsInnerFromJSON,
    AdGroupAudienceSizingRequestKeywordsInnerFromJSONTyped,
    AdGroupAudienceSizingRequestKeywordsInnerToJSON,
} from './AdGroupAudienceSizingRequestKeywordsInner';
import type { PlacementGroupType } from './PlacementGroupType';
import {
    PlacementGroupTypeFromJSON,
    PlacementGroupTypeFromJSONTyped,
    PlacementGroupTypeToJSON,
} from './PlacementGroupType';
import type { TargetingSpec } from './TargetingSpec';
import {
    TargetingSpecFromJSON,
    TargetingSpecFromJSONTyped,
    TargetingSpecToJSON,
} from './TargetingSpec';

/**
 * 
 * @export
 * @interface AdGroupAudienceSizingRequest
 */
export interface AdGroupAudienceSizingRequest {
    /**
     * Enable auto-targeting for ad group. Also known as <a href="https://help.pinterest.com/en/business/article/expanded-targeting" target="_blank">"expanded targeting"</a>.
     * @type {boolean}
     * @memberof AdGroupAudienceSizingRequest
     */
    autoTargetingEnabled?: boolean;
    /**
     * <a href="/docs/redoc/#section/Placement-group">Placement group</a>.
     * @type {PlacementGroupType}
     * @memberof AdGroupAudienceSizingRequest
     */
    placementGroup?: PlacementGroupType;
    /**
     * Pin creative types filter. </p><strong>Note:</strong> SHOP_THE_PIN has been deprecated. Please use COLLECTION instead.
     * @type {Array<string>}
     * @memberof AdGroupAudienceSizingRequest
     */
    creativeTypes?: Array<AdGroupAudienceSizingRequestCreativeTypesEnum>;
    /**
     * 
     * @type {TargetingSpec}
     * @memberof AdGroupAudienceSizingRequest
     */
    targetingSpec?: TargetingSpec;
    /**
     * Targeted product group IDs. </p><strong>Note:</strong> This can only be combined with shopping/catalog sales campaigns. For more information, <a href="https://help.pinterest.com/en/business/article/shopping-ads#section-14571" target="_blank">click here</a>. SHOPPING_RETARGETING must be included in targeting_spec object or this field will be ignored.
     * @type {Array<string>}
     * @memberof AdGroupAudienceSizingRequest
     */
    productGroupIds?: Array<string>;
    /**
     * Array of keyword objects. If the keywords field is missing, all keywords will be targeted.
     * @type {Array<AdGroupAudienceSizingRequestKeywordsInner>}
     * @memberof AdGroupAudienceSizingRequest
     */
    keywords?: Array<AdGroupAudienceSizingRequestKeywordsInner>;
}


/**
 * @export
 */
export const AdGroupAudienceSizingRequestCreativeTypesEnum = {
    Regular: 'REGULAR',
    Video: 'VIDEO',
    Shopping: 'SHOPPING',
    Carousel: 'CAROUSEL',
    MaxVideo: 'MAX_VIDEO',
    ShopThePin: 'SHOP_THE_PIN',
    Collection: 'COLLECTION',
    Idea: 'IDEA'
} as const;
export type AdGroupAudienceSizingRequestCreativeTypesEnum = typeof AdGroupAudienceSizingRequestCreativeTypesEnum[keyof typeof AdGroupAudienceSizingRequestCreativeTypesEnum];


/**
 * Check if a given object implements the AdGroupAudienceSizingRequest interface.
 */
export function instanceOfAdGroupAudienceSizingRequest(value: object): boolean {
    return true;
}

export function AdGroupAudienceSizingRequestFromJSON(json: any): AdGroupAudienceSizingRequest {
    return AdGroupAudienceSizingRequestFromJSONTyped(json, false);
}

export function AdGroupAudienceSizingRequestFromJSONTyped(json: any, ignoreDiscriminator: boolean): AdGroupAudienceSizingRequest {
    if (json == null) {
        return json;
    }
    return {
        
        'autoTargetingEnabled': json['auto_targeting_enabled'] == null ? undefined : json['auto_targeting_enabled'],
        'placementGroup': json['placement_group'] == null ? undefined : PlacementGroupTypeFromJSON(json['placement_group']),
        'creativeTypes': json['creative_types'] == null ? undefined : json['creative_types'],
        'targetingSpec': json['targeting_spec'] == null ? undefined : TargetingSpecFromJSON(json['targeting_spec']),
        'productGroupIds': json['product_group_ids'] == null ? undefined : json['product_group_ids'],
        'keywords': json['keywords'] == null ? undefined : ((json['keywords'] as Array<any>).map(AdGroupAudienceSizingRequestKeywordsInnerFromJSON)),
    };
}

export function AdGroupAudienceSizingRequestToJSON(value?: AdGroupAudienceSizingRequest | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'auto_targeting_enabled': value['autoTargetingEnabled'],
        'placement_group': PlacementGroupTypeToJSON(value['placementGroup']),
        'creative_types': value['creativeTypes'],
        'targeting_spec': TargetingSpecToJSON(value['targetingSpec']),
        'product_group_ids': value['productGroupIds'],
        'keywords': value['keywords'] == null ? undefined : ((value['keywords'] as Array<any>).map(AdGroupAudienceSizingRequestKeywordsInnerToJSON)),
    };
}

