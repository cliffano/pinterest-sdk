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
import type { CreativeType } from './CreativeType';
import {
    CreativeTypeFromJSON,
    CreativeTypeFromJSONTyped,
    CreativeTypeToJSON,
} from './CreativeType';
import type { EntityStatus } from './EntityStatus';
import {
    EntityStatusFromJSON,
    EntityStatusFromJSONTyped,
    EntityStatusToJSON,
} from './EntityStatus';
import type { GridClickType } from './GridClickType';
import {
    GridClickTypeFromJSON,
    GridClickTypeFromJSONTyped,
    GridClickTypeToJSON,
} from './GridClickType';

/**
 * 
 * @export
 * @interface ProductGroupPromotion
 */
export interface ProductGroupPromotion {
    /**
     * ID of the product group promotion.
     * @type {string}
     * @memberof ProductGroupPromotion
     */
    id?: string;
    /**
     * ID of the ad group the product group belongs to.
     * @type {string}
     * @memberof ProductGroupPromotion
     */
    adGroupId?: string;
    /**
     * The bid in micro currency.
     * @type {number}
     * @memberof ProductGroupPromotion
     */
    bidInMicroCurrency?: number;
    /**
     * True if the group is BIDDABLE, false if it should be EXCLUDED from serving ads.
     * @type {boolean}
     * @memberof ProductGroupPromotion
     */
    included?: boolean;
    /**
     * The full product group definition path
     * @type {string}
     * @memberof ProductGroupPromotion
     */
    definition?: string;
    /**
     * The definition of the product group, relative to its parent - an attribute name/value pair
     * @type {string}
     * @memberof ProductGroupPromotion
     */
    relativeDefinition?: string;
    /**
     * The parent Product Group ID of this Product Group
     * @type {string}
     * @memberof ProductGroupPromotion
     */
    parentId?: string;
    /**
     * Slideshow Collections Title
     * @type {string}
     * @memberof ProductGroupPromotion
     */
    slideshowCollectionsTitle?: string;
    /**
     * Slideshow Collections Description
     * @type {string}
     * @memberof ProductGroupPromotion
     */
    slideshowCollectionsDescription?: string;
    /**
     * If set to true products promoted in this product group will use the Mobile Deep Link specified in your catalog
     * @type {boolean}
     * @memberof ProductGroupPromotion
     */
    isMdl?: boolean;
    /**
     * 
     * @type {EntityStatus}
     * @memberof ProductGroupPromotion
     */
    status?: EntityStatus;
    /**
     * Tracking template for proudct group promotions. 4000 limit
     * @type {string}
     * @memberof ProductGroupPromotion
     */
    trackingUrl?: string;
    /**
     * ID of the catalogs product group that this product group promotion references
     * @type {string}
     * @memberof ProductGroupPromotion
     */
    catalogProductGroupId?: string;
    /**
     * Catalogs product group name
     * @type {string}
     * @memberof ProductGroupPromotion
     */
    catalogProductGroupName?: string;
    /**
     * 
     * @type {CreativeType}
     * @memberof ProductGroupPromotion
     */
    creativeType?: CreativeType;
    /**
     * Hero Pin ID if this PG is promoted as a Collection
     * @type {string}
     * @memberof ProductGroupPromotion
     */
    collectionsHeroPinId?: string;
    /**
     * Collections Hero Destination Url
     * @type {string}
     * @memberof ProductGroupPromotion
     */
    collectionsHeroDestinationUrl?: string;
    /**
     * 
     * @type {GridClickType}
     * @memberof ProductGroupPromotion
     */
    gridClickType?: GridClickType;
}

/**
 * Check if a given object implements the ProductGroupPromotion interface.
 */
export function instanceOfProductGroupPromotion(value: object): boolean {
    return true;
}

export function ProductGroupPromotionFromJSON(json: any): ProductGroupPromotion {
    return ProductGroupPromotionFromJSONTyped(json, false);
}

export function ProductGroupPromotionFromJSONTyped(json: any, ignoreDiscriminator: boolean): ProductGroupPromotion {
    if (json == null) {
        return json;
    }
    return {
        
        'id': json['id'] == null ? undefined : json['id'],
        'adGroupId': json['ad_group_id'] == null ? undefined : json['ad_group_id'],
        'bidInMicroCurrency': json['bid_in_micro_currency'] == null ? undefined : json['bid_in_micro_currency'],
        'included': json['included'] == null ? undefined : json['included'],
        'definition': json['definition'] == null ? undefined : json['definition'],
        'relativeDefinition': json['relative_definition'] == null ? undefined : json['relative_definition'],
        'parentId': json['parent_id'] == null ? undefined : json['parent_id'],
        'slideshowCollectionsTitle': json['slideshow_collections_title'] == null ? undefined : json['slideshow_collections_title'],
        'slideshowCollectionsDescription': json['slideshow_collections_description'] == null ? undefined : json['slideshow_collections_description'],
        'isMdl': json['is_mdl'] == null ? undefined : json['is_mdl'],
        'status': json['status'] == null ? undefined : EntityStatusFromJSON(json['status']),
        'trackingUrl': json['tracking_url'] == null ? undefined : json['tracking_url'],
        'catalogProductGroupId': json['catalog_product_group_id'] == null ? undefined : json['catalog_product_group_id'],
        'catalogProductGroupName': json['catalog_product_group_name'] == null ? undefined : json['catalog_product_group_name'],
        'creativeType': json['creative_type'] == null ? undefined : CreativeTypeFromJSON(json['creative_type']),
        'collectionsHeroPinId': json['collections_hero_pin_id'] == null ? undefined : json['collections_hero_pin_id'],
        'collectionsHeroDestinationUrl': json['collections_hero_destination_url'] == null ? undefined : json['collections_hero_destination_url'],
        'gridClickType': json['grid_click_type'] == null ? undefined : GridClickTypeFromJSON(json['grid_click_type']),
    };
}

export function ProductGroupPromotionToJSON(value?: ProductGroupPromotion | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'id': value['id'],
        'ad_group_id': value['adGroupId'],
        'bid_in_micro_currency': value['bidInMicroCurrency'],
        'included': value['included'],
        'definition': value['definition'],
        'relative_definition': value['relativeDefinition'],
        'parent_id': value['parentId'],
        'slideshow_collections_title': value['slideshowCollectionsTitle'],
        'slideshow_collections_description': value['slideshowCollectionsDescription'],
        'is_mdl': value['isMdl'],
        'status': EntityStatusToJSON(value['status']),
        'tracking_url': value['trackingUrl'],
        'catalog_product_group_id': value['catalogProductGroupId'],
        'catalog_product_group_name': value['catalogProductGroupName'],
        'creative_type': CreativeTypeToJSON(value['creativeType']),
        'collections_hero_pin_id': value['collectionsHeroPinId'],
        'collections_hero_destination_url': value['collectionsHeroDestinationUrl'],
        'grid_click_type': GridClickTypeToJSON(value['gridClickType']),
    };
}

