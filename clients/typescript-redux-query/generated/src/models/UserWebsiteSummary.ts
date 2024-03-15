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
 * 
 * @export
 * @interface UserWebsiteSummary
 */
export interface UserWebsiteSummary  {
    /**
     * Website with path or domain only
     * @type {string}
     * @memberof UserWebsiteSummary
     */
    website?: string;
    /**
     * Status of the verification process
     * @type {string}
     * @memberof UserWebsiteSummary
     */
    status?: string;
    /**
     * UTC timestamp when the verification happened - sometimes missing
     * @type {string}
     * @memberof UserWebsiteSummary
     */
    verifiedAt?: string;
}

export function UserWebsiteSummaryFromJSON(json: any): UserWebsiteSummary {
    return {
        'website': !exists(json, 'website') ? undefined : json['website'],
        'status': !exists(json, 'status') ? undefined : json['status'],
        'verifiedAt': !exists(json, 'verified_at') ? undefined : json['verified_at'],
    };
}

export function UserWebsiteSummaryToJSON(value?: UserWebsiteSummary): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'website': value.website,
        'status': value.status,
        'verified_at': value.verifiedAt,
    };
}


