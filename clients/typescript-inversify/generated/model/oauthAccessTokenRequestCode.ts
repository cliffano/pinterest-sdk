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
import { OauthAccessTokenRequest } from './oauthAccessTokenRequest';
import { OauthAccessTokenRequestCodeAllOf } from './oauthAccessTokenRequestCodeAllOf';


/**
 * A request to exchange an authorization code for an access token.
 */
export interface OauthAccessTokenRequestCode extends OauthAccessTokenRequest { 
    code: string;
    redirect_uri: string;
}
export namespace OauthAccessTokenRequestCode {
}
