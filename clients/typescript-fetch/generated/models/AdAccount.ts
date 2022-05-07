/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { exists, mapValues } from '../runtime';
import {
    AdAccountOwner,
    AdAccountOwnerFromJSON,
    AdAccountOwnerFromJSONTyped,
    AdAccountOwnerToJSON,
} from './AdAccountOwner';
import {
    Country,
    CountryFromJSON,
    CountryFromJSONTyped,
    CountryToJSON,
} from './Country';
import {
    Currency,
    CurrencyFromJSON,
    CurrencyFromJSONTyped,
    CurrencyToJSON,
} from './Currency';

/**
 * 
 * @export
 * @interface AdAccount
 */
export interface AdAccount {
    /**
     * 
     * @type {string}
     * @memberof AdAccount
     */
    id?: string;
    /**
     * 
     * @type {string}
     * @memberof AdAccount
     */
    name?: string;
    /**
     * 
     * @type {AdAccountOwner}
     * @memberof AdAccount
     */
    owner?: AdAccountOwner;
    /**
     * 
     * @type {Country}
     * @memberof AdAccount
     */
    country?: Country;
    /**
     * 
     * @type {Currency}
     * @memberof AdAccount
     */
    currency?: Currency;
}

export function AdAccountFromJSON(json: any): AdAccount {
    return AdAccountFromJSONTyped(json, false);
}

export function AdAccountFromJSONTyped(json: any, ignoreDiscriminator: boolean): AdAccount {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'id': !exists(json, 'id') ? undefined : json['id'],
        'name': !exists(json, 'name') ? undefined : json['name'],
        'owner': !exists(json, 'owner') ? undefined : AdAccountOwnerFromJSON(json['owner']),
        'country': !exists(json, 'country') ? undefined : CountryFromJSON(json['country']),
        'currency': !exists(json, 'currency') ? undefined : CurrencyFromJSON(json['currency']),
    };
}

export function AdAccountToJSON(value?: AdAccount | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'id': value.id,
        'name': value.name,
        'owner': AdAccountOwnerToJSON(value.owner),
        'country': CountryToJSON(value.country),
        'currency': CurrencyToJSON(value.currency),
    };
}

