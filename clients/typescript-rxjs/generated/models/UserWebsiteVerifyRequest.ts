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

/**
 * User website verification request
 * @export
 * @interface UserWebsiteVerifyRequest
 */
export interface UserWebsiteVerifyRequest {
    /**
     * @type {string}
     * @memberof UserWebsiteVerifyRequest
     */
    website?: string;
    /**
     * @type {string}
     * @memberof UserWebsiteVerifyRequest
     */
    verification_method?: UserWebsiteVerifyRequestVerificationMethodEnum;
}

/**
 * @export
 * @enum {string}
 */
export enum UserWebsiteVerifyRequestVerificationMethodEnum {
    Filename = 'FILENAME',
    Metatag = 'METATAG',
    Dnstxt = 'DNSTXT'
}

