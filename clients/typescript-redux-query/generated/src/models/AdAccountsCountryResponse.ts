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
    AdAccountsCountryResponseData,
    AdAccountsCountryResponseDataFromJSON,
    AdAccountsCountryResponseDataToJSON,
} from './';

/**
 * 
 * @export
 * @interface AdAccountsCountryResponse
 */
export interface AdAccountsCountryResponse  {
    /**
     * 
     * @type {Array<AdAccountsCountryResponseData>}
     * @memberof AdAccountsCountryResponse
     */
    items?: Array<AdAccountsCountryResponseData>;
}

export function AdAccountsCountryResponseFromJSON(json: any): AdAccountsCountryResponse {
    return {
        'items': !exists(json, 'items') ? undefined : (json['items'] as Array<any>).map(AdAccountsCountryResponseDataFromJSON),
    };
}

export function AdAccountsCountryResponseToJSON(value?: AdAccountsCountryResponse): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'items': value.items === undefined ? undefined : (value.items as Array<any>).map(AdAccountsCountryResponseDataToJSON),
    };
}


