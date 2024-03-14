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


import * as runtime from '../runtime';
import type {
  OauthAccessTokenResponse,
} from '../models/index';
import {
    OauthAccessTokenResponseFromJSON,
    OauthAccessTokenResponseToJSON,
} from '../models/index';

export interface OauthTokenRequest {
    grantType: OauthTokenGrantTypeEnum;
}

/**
 * 
 */
export class OauthApi extends runtime.BaseAPI {

    /**
     * Generate an OAuth access token by using an authorization code or a refresh token.  See <a href=\'/docs/getting-started/authentication/\'>Authentication</a> for more.
     * Generate OAuth access token
     */
    async oauthTokenRaw(requestParameters: OauthTokenRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<OauthAccessTokenResponse>> {
        if (requestParameters['grantType'] == null) {
            throw new runtime.RequiredError(
                'grantType',
                'Required parameter "grantType" was null or undefined when calling oauthToken().'
            );
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && (this.configuration.username !== undefined || this.configuration.password !== undefined)) {
            headerParameters["Authorization"] = "Basic " + btoa(this.configuration.username + ":" + this.configuration.password);
        }
        const consumes: runtime.Consume[] = [
            { contentType: 'application/x-www-form-urlencoded' },
        ];
        // @ts-ignore: canConsumeForm may be unused
        const canConsumeForm = runtime.canConsumeForm(consumes);

        let formParams: { append(param: string, value: any): any };
        let useForm = false;
        if (useForm) {
            formParams = new FormData();
        } else {
            formParams = new URLSearchParams();
        }

        if (requestParameters['grantType'] != null) {
            formParams.append('grant_type', requestParameters['grantType'] as any);
        }

        const response = await this.request({
            path: `/oauth/token`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: formParams,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => OauthAccessTokenResponseFromJSON(jsonValue));
    }

    /**
     * Generate an OAuth access token by using an authorization code or a refresh token.  See <a href=\'/docs/getting-started/authentication/\'>Authentication</a> for more.
     * Generate OAuth access token
     */
    async oauthToken(requestParameters: OauthTokenRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<OauthAccessTokenResponse> {
        const response = await this.oauthTokenRaw(requestParameters, initOverrides);
        return await response.value();
    }

}

/**
 * @export
 */
export const OauthTokenGrantTypeEnum = {
    AuthorizationCode: 'authorization_code',
    RefreshToken: 'refresh_token'
} as const;
export type OauthTokenGrantTypeEnum = typeof OauthTokenGrantTypeEnum[keyof typeof OauthTokenGrantTypeEnum];