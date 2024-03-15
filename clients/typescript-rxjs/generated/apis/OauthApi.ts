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

import type { Observable } from 'rxjs';
import type { AjaxResponse } from 'rxjs/ajax';
import { BaseAPI, throwIfNullOrUndefined } from '../runtime';
import type { OperationOpts, HttpHeaders } from '../runtime';
import type {
    OauthAccessTokenResponse,
} from '../models';

export interface OauthTokenRequest {
    grantType: OauthTokenGrantTypeEnum;
}

/**
 * no description
 */
export class OauthApi extends BaseAPI {

    /**
     * Generate an OAuth access token by using an authorization code or a refresh token.  IMPORTANT: You need to start the OAuth flow via www.pinterest.com/oauth before calling this endpoint (or have an existing refresh token).  See <a href=\'/docs/getting-started/authentication/\'>Authentication</a> for more.  <strong>Parameter <i>refresh_on</i> and its corresponding response type <i>everlasting_refresh</i> are now available to all apps! Later this year, continuous refresh will become the default behavior (ie you will no longer need to send this parameter). <a href=\'/docs/new/about-beta-access/\'>Learn more</a>.</strong>
     * Generate OAuth access token
     */
    oauthToken({ grantType }: OauthTokenRequest): Observable<OauthAccessTokenResponse>
    oauthToken({ grantType }: OauthTokenRequest, opts?: OperationOpts): Observable<AjaxResponse<OauthAccessTokenResponse>>
    oauthToken({ grantType }: OauthTokenRequest, opts?: OperationOpts): Observable<OauthAccessTokenResponse | AjaxResponse<OauthAccessTokenResponse>> {
        throwIfNullOrUndefined(grantType, 'grantType', 'oauthToken');

        const headers: HttpHeaders = {
            ...(this.configuration.username != null && this.configuration.password != null ? { Authorization: `Basic ${btoa(this.configuration.username + ':' + this.configuration.password)}` } : undefined),
        };

        const formData = new FormData();
        if (grantType !== undefined) { formData.append('grant_type', grantType as any); }

        return this.request<OauthAccessTokenResponse>({
            url: '/oauth/token',
            method: 'POST',
            headers,
            body: formData,
        }, opts?.responseOpts);
    };

}

/**
 * @export
 * @enum {string}
 */
export enum OauthTokenGrantTypeEnum {
    AuthorizationCode = 'authorization_code',
    RefreshToken = 'refresh_token'
}
