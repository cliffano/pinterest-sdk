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

export interface AdGroupAudienceSizingRequest {
    /**
     * Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
     */
    auto_targeting_enabled?: boolean;

    /**
     * <a href=\"/docs/redoc/#section/Placement-group\">Placement group</a>.
     */
    placement_group?: models.PlacementGroupType;

    /**
     * Pin creative types filter. </p><strong>Note:</strong> SHOP_THE_PIN has been deprecated. Please use COLLECTION instead.
     */
    creative_types?: Array<AdGroupAudienceSizingRequest.CreativeTypesEnum>;

    targeting_spec?: models.TargetingSpec;

    /**
     * Targeted product group IDs. </p><strong>Note:</strong> This can only be combined with shopping/catalog sales campaigns. For more information, <a href=\"https://help.pinterest.com/en/business/article/shopping-ads#section-14571\" target=\"_blank\">click here</a>. SHOPPING_RETARGETING must be included in targeting_spec object or this field will be ignored.
     */
    product_group_ids?: Array<string>;

    /**
     * Array of keyword objects. If the keywords field is missing, all keywords will be targeted.
     */
    keywords?: Array<models.AdGroupAudienceSizingRequestKeywordsInner>;

}
export namespace AdGroupAudienceSizingRequest {
    export enum CreativeTypesEnum {
        Regular = <any> 'REGULAR',
        Video = <any> 'VIDEO',
        Shopping = <any> 'SHOPPING',
        Carousel = <any> 'CAROUSEL',
        MaxVideo = <any> 'MAX_VIDEO',
        ShopThePin = <any> 'SHOP_THE_PIN',
        Collection = <any> 'COLLECTION',
        Idea = <any> 'IDEA'
    }
}
