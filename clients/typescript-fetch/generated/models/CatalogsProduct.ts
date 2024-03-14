/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { mapValues } from '../runtime';
import type { CatalogsProductMetadata } from './CatalogsProductMetadata';
import {
    CatalogsProductMetadataFromJSON,
    CatalogsProductMetadataFromJSONTyped,
    CatalogsProductMetadataToJSON,
} from './CatalogsProductMetadata';
import type { Pin } from './Pin';
import {
    PinFromJSON,
    PinFromJSONTyped,
    PinToJSON,
} from './Pin';

/**
 * 
 * @export
 * @interface CatalogsProduct
 */
export interface CatalogsProduct {
    /**
     * 
     * @type {CatalogsProductMetadata}
     * @memberof CatalogsProduct
     */
    metadata: CatalogsProductMetadata;
    /**
     * 
     * @type {Pin}
     * @memberof CatalogsProduct
     */
    pin: Pin | null;
}

/**
 * Check if a given object implements the CatalogsProduct interface.
 */
export function instanceOfCatalogsProduct(value: object): boolean {
    if (!('metadata' in value)) return false;
    if (!('pin' in value)) return false;
    return true;
}

export function CatalogsProductFromJSON(json: any): CatalogsProduct {
    return CatalogsProductFromJSONTyped(json, false);
}

export function CatalogsProductFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsProduct {
    if (json == null) {
        return json;
    }
    return {
        
        'metadata': CatalogsProductMetadataFromJSON(json['metadata']),
        'pin': PinFromJSON(json['pin']),
    };
}

export function CatalogsProductToJSON(value?: CatalogsProduct | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'metadata': CatalogsProductMetadataToJSON(value['metadata']),
        'pin': PinToJSON(value['pin']),
    };
}

