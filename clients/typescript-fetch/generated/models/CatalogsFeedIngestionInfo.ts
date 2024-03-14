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
/**
 * 
 * @export
 * @interface CatalogsFeedIngestionInfo
 */
export interface CatalogsFeedIngestionInfo {
    /**
     * The number of ingested products that are in stock.
     * @type {number}
     * @memberof CatalogsFeedIngestionInfo
     */
    iNSTOCK?: number;
    /**
     * The number of ingested products that are in out of stock.
     * @type {number}
     * @memberof CatalogsFeedIngestionInfo
     */
    oUTOFSTOCK?: number;
    /**
     * The number of ingested products that are in preorder.
     * @type {number}
     * @memberof CatalogsFeedIngestionInfo
     */
    pREORDER?: number;
}

/**
 * Check if a given object implements the CatalogsFeedIngestionInfo interface.
 */
export function instanceOfCatalogsFeedIngestionInfo(value: object): boolean {
    return true;
}

export function CatalogsFeedIngestionInfoFromJSON(json: any): CatalogsFeedIngestionInfo {
    return CatalogsFeedIngestionInfoFromJSONTyped(json, false);
}

export function CatalogsFeedIngestionInfoFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsFeedIngestionInfo {
    if (json == null) {
        return json;
    }
    return {
        
        'iNSTOCK': json['IN_STOCK'] == null ? undefined : json['IN_STOCK'],
        'oUTOFSTOCK': json['OUT_OF_STOCK'] == null ? undefined : json['OUT_OF_STOCK'],
        'pREORDER': json['PREORDER'] == null ? undefined : json['PREORDER'],
    };
}

export function CatalogsFeedIngestionInfoToJSON(value?: CatalogsFeedIngestionInfo | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'IN_STOCK': value['iNSTOCK'],
        'OUT_OF_STOCK': value['oUTOFSTOCK'],
        'PREORDER': value['pREORDER'],
    };
}

