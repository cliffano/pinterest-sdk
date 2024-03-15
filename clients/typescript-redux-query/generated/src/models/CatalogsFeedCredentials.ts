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
/**
 * This field is **OPTIONAL**. Use this if your feed file requires username and password.
 * @export
 * @interface CatalogsFeedCredentials
 */
export interface CatalogsFeedCredentials  {
    /**
     * The required password for downloading a feed.
     * @type {string}
     * @memberof CatalogsFeedCredentials
     */
    password: string;
    /**
     * The required username for downloading a feed.
     * @type {string}
     * @memberof CatalogsFeedCredentials
     */
    username: string;
}

export function CatalogsFeedCredentialsFromJSON(json: any): CatalogsFeedCredentials {
    return {
        'password': json['password'],
        'username': json['username'],
    };
}

export function CatalogsFeedCredentialsToJSON(value?: CatalogsFeedCredentials): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'password': value.password,
        'username': value.username,
    };
}


