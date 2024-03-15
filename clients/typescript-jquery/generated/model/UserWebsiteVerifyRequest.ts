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

/**
 * User website verification request
 */
export interface UserWebsiteVerifyRequest {
    website?: string;

    verification_method?: UserWebsiteVerifyRequest.VerificationMethodEnum;

}
export namespace UserWebsiteVerifyRequest {
    export enum VerificationMethodEnum {
        Filename = <any> 'FILENAME',
        Metatag = <any> 'METATAG',
        Dnstxt = <any> 'DNSTXT'
    }
}
