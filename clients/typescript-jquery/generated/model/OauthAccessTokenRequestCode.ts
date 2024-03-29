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
 * A request to exchange an authorization code for an access token.
 */
export interface OauthAccessTokenRequestCode extends models.OauthAccessTokenRequest {
    code: string;

    redirect_uri: string;

}
export namespace OauthAccessTokenRequestCode {
}
