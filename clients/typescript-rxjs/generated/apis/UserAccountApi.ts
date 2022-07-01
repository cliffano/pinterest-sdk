// tslint:disable
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { Observable } from 'rxjs';
import { BaseAPI, HttpHeaders, HttpQuery, throwIfNullOrUndefined, COLLECTION_FORMATS, OperationOpts, RawAjaxResponse } from '../runtime';
import {
    Account,
    AnalyticsMetricsResponse,
} from '../models';

export interface UserAccountAnalyticsRequest {
    startDate: string;
    endDate: string;
    fromClaimedContent?: UserAccountAnalyticsFromClaimedContentEnum;
    pinFormat?: UserAccountAnalyticsPinFormatEnum;
    appTypes?: UserAccountAnalyticsAppTypesEnum;
    metricTypes?: Array<UserAccountAnalyticsMetricTypesEnum>;
    splitField?: UserAccountAnalyticsSplitFieldEnum;
    adAccountId?: string;
}

export interface UserAccountGetRequest {
    adAccountId?: string;
}

/**
 * no description
 */
export class UserAccountApi extends BaseAPI {

    /**
     * Get analytics for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\".
     * Get user account analytics
     */
    userAccountAnalytics({ startDate, endDate, fromClaimedContent, pinFormat, appTypes, metricTypes, splitField, adAccountId }: UserAccountAnalyticsRequest): Observable<{ [key: string]: AnalyticsMetricsResponse; }>
    userAccountAnalytics({ startDate, endDate, fromClaimedContent, pinFormat, appTypes, metricTypes, splitField, adAccountId }: UserAccountAnalyticsRequest, opts?: OperationOpts): Observable<RawAjaxResponse<{ [key: string]: AnalyticsMetricsResponse; }>>
    userAccountAnalytics({ startDate, endDate, fromClaimedContent, pinFormat, appTypes, metricTypes, splitField, adAccountId }: UserAccountAnalyticsRequest, opts?: OperationOpts): Observable<{ [key: string]: AnalyticsMetricsResponse; } | RawAjaxResponse<{ [key: string]: AnalyticsMetricsResponse; }>> {
        throwIfNullOrUndefined(startDate, 'startDate', 'userAccountAnalytics');
        throwIfNullOrUndefined(endDate, 'endDate', 'userAccountAnalytics');

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['user_accounts:read'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = { // required parameters are used directly since they are already checked by throwIfNullOrUndefined
            'start_date': (startDate as any).toISOString().split('T')[0],
            'end_date': (endDate as any).toISOString().split('T')[0],
        };

        if (fromClaimedContent != null) { query['from_claimed_content'] = fromClaimedContent; }
        if (pinFormat != null) { query['pin_format'] = pinFormat; }
        if (appTypes != null) { query['app_types'] = appTypes; }
        if (metricTypes != null) { query['metric_types'] = metricTypes.join(COLLECTION_FORMATS['csv']); }
        if (splitField != null) { query['split_field'] = splitField; }
        if (adAccountId != null) { query['ad_account_id'] = adAccountId; }

        return this.request<{ [key: string]: AnalyticsMetricsResponse; }>({
            url: '/user_account/analytics',
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Get account information for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". See <a href=\'/docs/api/v5/#tag/Understanding-business-access\'>Understanding Business Access</a> for more information.
     * Get user account
     */
    userAccountGet({ adAccountId }: UserAccountGetRequest): Observable<Account>
    userAccountGet({ adAccountId }: UserAccountGetRequest, opts?: OperationOpts): Observable<RawAjaxResponse<Account>>
    userAccountGet({ adAccountId }: UserAccountGetRequest, opts?: OperationOpts): Observable<Account | RawAjaxResponse<Account>> {

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['user_accounts:read'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = {};

        if (adAccountId != null) { query['ad_account_id'] = adAccountId; }

        return this.request<Account>({
            url: '/user_account',
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

}

/**
 * @export
 * @enum {string}
 */
export enum UserAccountAnalyticsFromClaimedContentEnum {
    Other = 'OTHER',
    Claimed = 'CLAIMED',
    Both = 'BOTH'
}
/**
 * @export
 * @enum {string}
 */
export enum UserAccountAnalyticsPinFormatEnum {
    All = 'ALL',
    Product = 'PRODUCT',
    Regular = 'REGULAR',
    Video = 'VIDEO'
}
/**
 * @export
 * @enum {string}
 */
export enum UserAccountAnalyticsAppTypesEnum {
    All = 'ALL',
    Mobile = 'MOBILE',
    Tablet = 'TABLET',
    Web = 'WEB'
}
/**
 * @export
 * @enum {string}
 */
export enum UserAccountAnalyticsMetricTypesEnum {
    Engagement = 'ENGAGEMENT',
    EngagementRate = 'ENGAGEMENT_RATE',
    Impression = 'IMPRESSION',
    OutboundClick = 'OUTBOUND_CLICK',
    OutboundClickRate = 'OUTBOUND_CLICK_RATE',
    PinClick = 'PIN_CLICK',
    PinClickRate = 'PIN_CLICK_RATE',
    Save = 'SAVE',
    SaveRate = 'SAVE_RATE'
}
/**
 * @export
 * @enum {string}
 */
export enum UserAccountAnalyticsSplitFieldEnum {
    NoSplit = 'NO_SPLIT',
    AppType = 'APP_TYPE',
    OwnedContent = 'OWNED_CONTENT',
    PinFormat = 'PIN_FORMAT'
}
