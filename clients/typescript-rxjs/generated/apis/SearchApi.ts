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
import type { OperationOpts, HttpHeaders, HttpQuery } from '../runtime';
import type {
    PinsList200Response,
    SearchPartnerPins200Response,
    SearchUserBoardsGet200Response,
} from '../models';

export interface SearchPartnerPinsRequest {
    term: string;
    countryCode: string;
    bookmark?: string;
    locale?: string;
    limit?: number;
}

export interface SearchUserBoardsGetRequest {
    adAccountId?: string;
    bookmark?: string;
    pageSize?: number;
    query?: string;
}

export interface SearchUserPinsListRequest {
    query: string;
    adAccountId?: string;
    bookmark?: string;
}

/**
 * no description
 */
export class SearchApi extends BaseAPI {

    /**
     * <strong>This endpoint is currently in beta and not available to all apps. <a href=\'/docs/new/about-beta-access/\'>Learn more</a>.</strong>  Get the top 10 Pins by a given search term.
     * Search pins by a given search term
     */
    searchPartnerPins({ term, countryCode, bookmark, locale, limit }: SearchPartnerPinsRequest): Observable<SearchPartnerPins200Response>
    searchPartnerPins({ term, countryCode, bookmark, locale, limit }: SearchPartnerPinsRequest, opts?: OperationOpts): Observable<AjaxResponse<SearchPartnerPins200Response>>
    searchPartnerPins({ term, countryCode, bookmark, locale, limit }: SearchPartnerPinsRequest, opts?: OperationOpts): Observable<SearchPartnerPins200Response | AjaxResponse<SearchPartnerPins200Response>> {
        throwIfNullOrUndefined(term, 'term', 'searchPartnerPins');
        throwIfNullOrUndefined(countryCode, 'countryCode', 'searchPartnerPins');

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['boards:read', 'pins:read'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = { // required parameters are used directly since they are already checked by throwIfNullOrUndefined
            'term': term,
            'country_code': countryCode,
        };

        if (bookmark != null) { query['bookmark'] = bookmark; }
        if (locale != null) { query['locale'] = locale; }
        if (limit != null) { query['limit'] = limit; }

        return this.request<SearchPartnerPins200Response>({
            url: '/search/partner/pins',
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Search for boards for the \"operation user_account\". This includes boards of all board types. - By default, the \"operation user_account\" is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". See <a href=\'/docs/reference/business-access/\'>Understanding Business Access</a> for more information.
     * Search user\'s boards
     */
    searchUserBoardsGet({ adAccountId, bookmark, pageSize, query: queryAlias }: SearchUserBoardsGetRequest): Observable<SearchUserBoardsGet200Response>
    searchUserBoardsGet({ adAccountId, bookmark, pageSize, query: queryAlias }: SearchUserBoardsGetRequest, opts?: OperationOpts): Observable<AjaxResponse<SearchUserBoardsGet200Response>>
    searchUserBoardsGet({ adAccountId, bookmark, pageSize, query: queryAlias }: SearchUserBoardsGetRequest, opts?: OperationOpts): Observable<SearchUserBoardsGet200Response | AjaxResponse<SearchUserBoardsGet200Response>> {

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['boards:read', 'boards:read_secret'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = {};

        if (adAccountId != null) { query['ad_account_id'] = adAccountId; }
        if (bookmark != null) { query['bookmark'] = bookmark; }
        if (pageSize != null) { query['page_size'] = pageSize; }
        if (queryAlias != null) { query['query'] = queryAlias; }

        return this.request<SearchUserBoardsGet200Response>({
            url: '/search/boards',
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Search for pins for the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". See <a href=\'/docs/reference/business-access/\'>Understanding Business Access</a> for more information.
     * Search user\'s Pins
     */
    searchUserPinsList({ query: queryAlias, adAccountId, bookmark }: SearchUserPinsListRequest): Observable<PinsList200Response>
    searchUserPinsList({ query: queryAlias, adAccountId, bookmark }: SearchUserPinsListRequest, opts?: OperationOpts): Observable<AjaxResponse<PinsList200Response>>
    searchUserPinsList({ query: queryAlias, adAccountId, bookmark }: SearchUserPinsListRequest, opts?: OperationOpts): Observable<PinsList200Response | AjaxResponse<PinsList200Response>> {
        throwIfNullOrUndefined(queryAlias, 'queryAlias', 'searchUserPinsList');

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['boards:read', 'boards:read_secret', 'pins:read', 'pins:read_secret'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = { // required parameters are used directly since they are already checked by throwIfNullOrUndefined
            'query': queryAlias,
        };

        if (adAccountId != null) { query['ad_account_id'] = adAccountId; }
        if (bookmark != null) { query['bookmark'] = bookmark; }

        return this.request<PinsList200Response>({
            url: '/search/pins',
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

}
