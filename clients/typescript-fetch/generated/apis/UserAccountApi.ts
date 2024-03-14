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
  Account,
  AnalyticsMetricsResponse,
  TopPinsAnalyticsResponse,
  TopVideoPinsAnalyticsResponse,
} from '../models/index';
import {
    AccountFromJSON,
    AccountToJSON,
    AnalyticsMetricsResponseFromJSON,
    AnalyticsMetricsResponseToJSON,
    TopPinsAnalyticsResponseFromJSON,
    TopPinsAnalyticsResponseToJSON,
    TopVideoPinsAnalyticsResponseFromJSON,
    TopVideoPinsAnalyticsResponseToJSON,
} from '../models/index';

export interface UserAccountAnalyticsRequest {
    startDate: Date;
    endDate: Date;
    fromClaimedContent?: UserAccountAnalyticsFromClaimedContentEnum;
    pinFormat?: UserAccountAnalyticsPinFormatEnum;
    appTypes?: UserAccountAnalyticsAppTypesEnum;
    metricTypes?: Array<UserAccountAnalyticsMetricTypesEnum>;
    splitField?: UserAccountAnalyticsSplitFieldEnum;
    adAccountId?: string;
}

export interface UserAccountAnalyticsTopPinsRequest {
    startDate: Date;
    endDate: Date;
    sortBy: UserAccountAnalyticsTopPinsSortByEnum;
    fromClaimedContent?: UserAccountAnalyticsTopPinsFromClaimedContentEnum;
    pinFormat?: UserAccountAnalyticsTopPinsPinFormatEnum;
    appTypes?: UserAccountAnalyticsTopPinsAppTypesEnum;
    metricTypes?: Array<UserAccountAnalyticsTopPinsMetricTypesEnum>;
    numOfPins?: number;
    createdInLastNDays?: UserAccountAnalyticsTopPinsCreatedInLastNDaysEnum;
    adAccountId?: string;
}

export interface UserAccountAnalyticsTopVideoPinsRequest {
    startDate: Date;
    endDate: Date;
    sortBy: UserAccountAnalyticsTopVideoPinsSortByEnum;
    fromClaimedContent?: UserAccountAnalyticsTopVideoPinsFromClaimedContentEnum;
    pinFormat?: UserAccountAnalyticsTopVideoPinsPinFormatEnum;
    appTypes?: UserAccountAnalyticsTopVideoPinsAppTypesEnum;
    metricTypes?: Array<UserAccountAnalyticsTopVideoPinsMetricTypesEnum>;
    numOfPins?: number;
    createdInLastNDays?: UserAccountAnalyticsTopVideoPinsCreatedInLastNDaysEnum;
    adAccountId?: string;
}

export interface UserAccountGetRequest {
    adAccountId?: string;
}

/**
 * 
 */
export class UserAccountApi extends runtime.BaseAPI {

    /**
     * Get analytics for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\".
     * Get user account analytics
     */
    async userAccountAnalyticsRaw(requestParameters: UserAccountAnalyticsRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<{ [key: string]: AnalyticsMetricsResponse; }>> {
        if (requestParameters['startDate'] == null) {
            throw new runtime.RequiredError(
                'startDate',
                'Required parameter "startDate" was null or undefined when calling userAccountAnalytics().'
            );
        }

        if (requestParameters['endDate'] == null) {
            throw new runtime.RequiredError(
                'endDate',
                'Required parameter "endDate" was null or undefined when calling userAccountAnalytics().'
            );
        }

        const queryParameters: any = {};

        if (requestParameters['startDate'] != null) {
            queryParameters['start_date'] = (requestParameters['startDate'] as any).toISOString().substring(0,10);
        }

        if (requestParameters['endDate'] != null) {
            queryParameters['end_date'] = (requestParameters['endDate'] as any).toISOString().substring(0,10);
        }

        if (requestParameters['fromClaimedContent'] != null) {
            queryParameters['from_claimed_content'] = requestParameters['fromClaimedContent'];
        }

        if (requestParameters['pinFormat'] != null) {
            queryParameters['pin_format'] = requestParameters['pinFormat'];
        }

        if (requestParameters['appTypes'] != null) {
            queryParameters['app_types'] = requestParameters['appTypes'];
        }

        if (requestParameters['metricTypes'] != null) {
            queryParameters['metric_types'] = requestParameters['metricTypes']!.join(runtime.COLLECTION_FORMATS["csv"]);
        }

        if (requestParameters['splitField'] != null) {
            queryParameters['split_field'] = requestParameters['splitField'];
        }

        if (requestParameters['adAccountId'] != null) {
            queryParameters['ad_account_id'] = requestParameters['adAccountId'];
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["user_accounts:read"]);
        }

        const response = await this.request({
            path: `/user_account/analytics`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => runtime.mapValues(jsonValue, AnalyticsMetricsResponseFromJSON));
    }

    /**
     * Get analytics for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\".
     * Get user account analytics
     */
    async userAccountAnalytics(requestParameters: UserAccountAnalyticsRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<{ [key: string]: AnalyticsMetricsResponse; }> {
        const response = await this.userAccountAnalyticsRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Gets analytics data about a user\'s top pins (limited to the top 50). - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\".
     * Get user account top pins analytics
     */
    async userAccountAnalyticsTopPinsRaw(requestParameters: UserAccountAnalyticsTopPinsRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<TopPinsAnalyticsResponse>> {
        if (requestParameters['startDate'] == null) {
            throw new runtime.RequiredError(
                'startDate',
                'Required parameter "startDate" was null or undefined when calling userAccountAnalyticsTopPins().'
            );
        }

        if (requestParameters['endDate'] == null) {
            throw new runtime.RequiredError(
                'endDate',
                'Required parameter "endDate" was null or undefined when calling userAccountAnalyticsTopPins().'
            );
        }

        if (requestParameters['sortBy'] == null) {
            throw new runtime.RequiredError(
                'sortBy',
                'Required parameter "sortBy" was null or undefined when calling userAccountAnalyticsTopPins().'
            );
        }

        const queryParameters: any = {};

        if (requestParameters['startDate'] != null) {
            queryParameters['start_date'] = (requestParameters['startDate'] as any).toISOString().substring(0,10);
        }

        if (requestParameters['endDate'] != null) {
            queryParameters['end_date'] = (requestParameters['endDate'] as any).toISOString().substring(0,10);
        }

        if (requestParameters['sortBy'] != null) {
            queryParameters['sort_by'] = requestParameters['sortBy'];
        }

        if (requestParameters['fromClaimedContent'] != null) {
            queryParameters['from_claimed_content'] = requestParameters['fromClaimedContent'];
        }

        if (requestParameters['pinFormat'] != null) {
            queryParameters['pin_format'] = requestParameters['pinFormat'];
        }

        if (requestParameters['appTypes'] != null) {
            queryParameters['app_types'] = requestParameters['appTypes'];
        }

        if (requestParameters['metricTypes'] != null) {
            queryParameters['metric_types'] = requestParameters['metricTypes']!.join(runtime.COLLECTION_FORMATS["csv"]);
        }

        if (requestParameters['numOfPins'] != null) {
            queryParameters['num_of_pins'] = requestParameters['numOfPins'];
        }

        if (requestParameters['createdInLastNDays'] != null) {
            queryParameters['created_in_last_n_days'] = requestParameters['createdInLastNDays'];
        }

        if (requestParameters['adAccountId'] != null) {
            queryParameters['ad_account_id'] = requestParameters['adAccountId'];
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["pins:read", "user_accounts:read"]);
        }

        const response = await this.request({
            path: `/user_account/analytics/top_pins`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => TopPinsAnalyticsResponseFromJSON(jsonValue));
    }

    /**
     * Gets analytics data about a user\'s top pins (limited to the top 50). - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\".
     * Get user account top pins analytics
     */
    async userAccountAnalyticsTopPins(requestParameters: UserAccountAnalyticsTopPinsRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<TopPinsAnalyticsResponse> {
        const response = await this.userAccountAnalyticsTopPinsRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Gets analytics data about a user\'s top video pins (limited to the top 50). - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\".
     * Get user account top video pins analytics
     */
    async userAccountAnalyticsTopVideoPinsRaw(requestParameters: UserAccountAnalyticsTopVideoPinsRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<TopVideoPinsAnalyticsResponse>> {
        if (requestParameters['startDate'] == null) {
            throw new runtime.RequiredError(
                'startDate',
                'Required parameter "startDate" was null or undefined when calling userAccountAnalyticsTopVideoPins().'
            );
        }

        if (requestParameters['endDate'] == null) {
            throw new runtime.RequiredError(
                'endDate',
                'Required parameter "endDate" was null or undefined when calling userAccountAnalyticsTopVideoPins().'
            );
        }

        if (requestParameters['sortBy'] == null) {
            throw new runtime.RequiredError(
                'sortBy',
                'Required parameter "sortBy" was null or undefined when calling userAccountAnalyticsTopVideoPins().'
            );
        }

        const queryParameters: any = {};

        if (requestParameters['startDate'] != null) {
            queryParameters['start_date'] = (requestParameters['startDate'] as any).toISOString().substring(0,10);
        }

        if (requestParameters['endDate'] != null) {
            queryParameters['end_date'] = (requestParameters['endDate'] as any).toISOString().substring(0,10);
        }

        if (requestParameters['sortBy'] != null) {
            queryParameters['sort_by'] = requestParameters['sortBy'];
        }

        if (requestParameters['fromClaimedContent'] != null) {
            queryParameters['from_claimed_content'] = requestParameters['fromClaimedContent'];
        }

        if (requestParameters['pinFormat'] != null) {
            queryParameters['pin_format'] = requestParameters['pinFormat'];
        }

        if (requestParameters['appTypes'] != null) {
            queryParameters['app_types'] = requestParameters['appTypes'];
        }

        if (requestParameters['metricTypes'] != null) {
            queryParameters['metric_types'] = requestParameters['metricTypes']!.join(runtime.COLLECTION_FORMATS["csv"]);
        }

        if (requestParameters['numOfPins'] != null) {
            queryParameters['num_of_pins'] = requestParameters['numOfPins'];
        }

        if (requestParameters['createdInLastNDays'] != null) {
            queryParameters['created_in_last_n_days'] = requestParameters['createdInLastNDays'];
        }

        if (requestParameters['adAccountId'] != null) {
            queryParameters['ad_account_id'] = requestParameters['adAccountId'];
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["pins:read", "user_accounts:read"]);
        }

        const response = await this.request({
            path: `/user_account/analytics/top_video_pins`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => TopVideoPinsAnalyticsResponseFromJSON(jsonValue));
    }

    /**
     * Gets analytics data about a user\'s top video pins (limited to the top 50). - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\".
     * Get user account top video pins analytics
     */
    async userAccountAnalyticsTopVideoPins(requestParameters: UserAccountAnalyticsTopVideoPinsRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<TopVideoPinsAnalyticsResponse> {
        const response = await this.userAccountAnalyticsTopVideoPinsRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Get account information for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". See <a href=\'/docs/reference/business-access/\'>Understanding Business Access</a> for more information.
     * Get user account
     */
    async userAccountGetRaw(requestParameters: UserAccountGetRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<Account>> {
        const queryParameters: any = {};

        if (requestParameters['adAccountId'] != null) {
            queryParameters['ad_account_id'] = requestParameters['adAccountId'];
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["user_accounts:read"]);
        }

        const response = await this.request({
            path: `/user_account`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => AccountFromJSON(jsonValue));
    }

    /**
     * Get account information for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". See <a href=\'/docs/reference/business-access/\'>Understanding Business Access</a> for more information.
     * Get user account
     */
    async userAccountGet(requestParameters: UserAccountGetRequest = {}, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<Account> {
        const response = await this.userAccountGetRaw(requestParameters, initOverrides);
        return await response.value();
    }

}

/**
 * @export
 */
export const UserAccountAnalyticsFromClaimedContentEnum = {
    Other: 'OTHER',
    Claimed: 'CLAIMED',
    Both: 'BOTH'
} as const;
export type UserAccountAnalyticsFromClaimedContentEnum = typeof UserAccountAnalyticsFromClaimedContentEnum[keyof typeof UserAccountAnalyticsFromClaimedContentEnum];
/**
 * @export
 */
export const UserAccountAnalyticsPinFormatEnum = {
    All: 'ALL',
    Product: 'PRODUCT',
    Regular: 'REGULAR',
    Video: 'VIDEO'
} as const;
export type UserAccountAnalyticsPinFormatEnum = typeof UserAccountAnalyticsPinFormatEnum[keyof typeof UserAccountAnalyticsPinFormatEnum];
/**
 * @export
 */
export const UserAccountAnalyticsAppTypesEnum = {
    All: 'ALL',
    Mobile: 'MOBILE',
    Tablet: 'TABLET',
    Web: 'WEB'
} as const;
export type UserAccountAnalyticsAppTypesEnum = typeof UserAccountAnalyticsAppTypesEnum[keyof typeof UserAccountAnalyticsAppTypesEnum];
/**
 * @export
 */
export const UserAccountAnalyticsMetricTypesEnum = {
    Engagement: 'ENGAGEMENT',
    EngagementRate: 'ENGAGEMENT_RATE',
    Impression: 'IMPRESSION',
    OutboundClick: 'OUTBOUND_CLICK',
    OutboundClickRate: 'OUTBOUND_CLICK_RATE',
    PinClick: 'PIN_CLICK',
    PinClickRate: 'PIN_CLICK_RATE',
    Save: 'SAVE',
    SaveRate: 'SAVE_RATE'
} as const;
export type UserAccountAnalyticsMetricTypesEnum = typeof UserAccountAnalyticsMetricTypesEnum[keyof typeof UserAccountAnalyticsMetricTypesEnum];
/**
 * @export
 */
export const UserAccountAnalyticsSplitFieldEnum = {
    NoSplit: 'NO_SPLIT',
    AppType: 'APP_TYPE',
    OwnedContent: 'OWNED_CONTENT',
    PinFormat: 'PIN_FORMAT'
} as const;
export type UserAccountAnalyticsSplitFieldEnum = typeof UserAccountAnalyticsSplitFieldEnum[keyof typeof UserAccountAnalyticsSplitFieldEnum];
/**
 * @export
 */
export const UserAccountAnalyticsTopPinsSortByEnum = {
    Engagement: 'ENGAGEMENT',
    Impression: 'IMPRESSION',
    OutboundClick: 'OUTBOUND_CLICK',
    PinClick: 'PIN_CLICK',
    Save: 'SAVE'
} as const;
export type UserAccountAnalyticsTopPinsSortByEnum = typeof UserAccountAnalyticsTopPinsSortByEnum[keyof typeof UserAccountAnalyticsTopPinsSortByEnum];
/**
 * @export
 */
export const UserAccountAnalyticsTopPinsFromClaimedContentEnum = {
    Other: 'OTHER',
    Claimed: 'CLAIMED',
    Both: 'BOTH'
} as const;
export type UserAccountAnalyticsTopPinsFromClaimedContentEnum = typeof UserAccountAnalyticsTopPinsFromClaimedContentEnum[keyof typeof UserAccountAnalyticsTopPinsFromClaimedContentEnum];
/**
 * @export
 */
export const UserAccountAnalyticsTopPinsPinFormatEnum = {
    All: 'ALL',
    Product: 'PRODUCT',
    Regular: 'REGULAR',
    Video: 'VIDEO'
} as const;
export type UserAccountAnalyticsTopPinsPinFormatEnum = typeof UserAccountAnalyticsTopPinsPinFormatEnum[keyof typeof UserAccountAnalyticsTopPinsPinFormatEnum];
/**
 * @export
 */
export const UserAccountAnalyticsTopPinsAppTypesEnum = {
    All: 'ALL',
    Mobile: 'MOBILE',
    Tablet: 'TABLET',
    Web: 'WEB'
} as const;
export type UserAccountAnalyticsTopPinsAppTypesEnum = typeof UserAccountAnalyticsTopPinsAppTypesEnum[keyof typeof UserAccountAnalyticsTopPinsAppTypesEnum];
/**
 * @export
 */
export const UserAccountAnalyticsTopPinsMetricTypesEnum = {
    Engagement: 'ENGAGEMENT',
    EngagementRate: 'ENGAGEMENT_RATE',
    Impression: 'IMPRESSION',
    OutboundClick: 'OUTBOUND_CLICK',
    OutboundClickRate: 'OUTBOUND_CLICK_RATE',
    PinClick: 'PIN_CLICK',
    PinClickRate: 'PIN_CLICK_RATE',
    Save: 'SAVE',
    SaveRate: 'SAVE_RATE'
} as const;
export type UserAccountAnalyticsTopPinsMetricTypesEnum = typeof UserAccountAnalyticsTopPinsMetricTypesEnum[keyof typeof UserAccountAnalyticsTopPinsMetricTypesEnum];
/**
 * @export
 */
export const UserAccountAnalyticsTopPinsCreatedInLastNDaysEnum = {
    NUMBER_30: 30
} as const;
export type UserAccountAnalyticsTopPinsCreatedInLastNDaysEnum = typeof UserAccountAnalyticsTopPinsCreatedInLastNDaysEnum[keyof typeof UserAccountAnalyticsTopPinsCreatedInLastNDaysEnum];
/**
 * @export
 */
export const UserAccountAnalyticsTopVideoPinsSortByEnum = {
    Impression: 'IMPRESSION',
    Save: 'SAVE',
    OutboundClick: 'OUTBOUND_CLICK',
    VideoMrcView: 'VIDEO_MRC_VIEW',
    VideoAvgWatchTime: 'VIDEO_AVG_WATCH_TIME',
    VideoV50WatchTime: 'VIDEO_V50_WATCH_TIME',
    Quartile95PercentView: 'QUARTILE_95_PERCENT_VIEW',
    Video10SView: 'VIDEO_10S_VIEW',
    VideoStart: 'VIDEO_START'
} as const;
export type UserAccountAnalyticsTopVideoPinsSortByEnum = typeof UserAccountAnalyticsTopVideoPinsSortByEnum[keyof typeof UserAccountAnalyticsTopVideoPinsSortByEnum];
/**
 * @export
 */
export const UserAccountAnalyticsTopVideoPinsFromClaimedContentEnum = {
    Other: 'OTHER',
    Claimed: 'CLAIMED',
    Both: 'BOTH'
} as const;
export type UserAccountAnalyticsTopVideoPinsFromClaimedContentEnum = typeof UserAccountAnalyticsTopVideoPinsFromClaimedContentEnum[keyof typeof UserAccountAnalyticsTopVideoPinsFromClaimedContentEnum];
/**
 * @export
 */
export const UserAccountAnalyticsTopVideoPinsPinFormatEnum = {
    All: 'ALL',
    Product: 'PRODUCT',
    Regular: 'REGULAR',
    Video: 'VIDEO'
} as const;
export type UserAccountAnalyticsTopVideoPinsPinFormatEnum = typeof UserAccountAnalyticsTopVideoPinsPinFormatEnum[keyof typeof UserAccountAnalyticsTopVideoPinsPinFormatEnum];
/**
 * @export
 */
export const UserAccountAnalyticsTopVideoPinsAppTypesEnum = {
    All: 'ALL',
    Mobile: 'MOBILE',
    Tablet: 'TABLET',
    Web: 'WEB'
} as const;
export type UserAccountAnalyticsTopVideoPinsAppTypesEnum = typeof UserAccountAnalyticsTopVideoPinsAppTypesEnum[keyof typeof UserAccountAnalyticsTopVideoPinsAppTypesEnum];
/**
 * @export
 */
export const UserAccountAnalyticsTopVideoPinsMetricTypesEnum = {
    Impression: 'IMPRESSION',
    Save: 'SAVE',
    VideoMrcView: 'VIDEO_MRC_VIEW',
    VideoAvgWatchTime: 'VIDEO_AVG_WATCH_TIME',
    VideoV50WatchTime: 'VIDEO_V50_WATCH_TIME',
    Quartile95PercentView: 'QUARTILE_95_PERCENT_VIEW',
    Video10SView: 'VIDEO_10S_VIEW',
    VideoStart: 'VIDEO_START',
    OutboundClick: 'OUTBOUND_CLICK'
} as const;
export type UserAccountAnalyticsTopVideoPinsMetricTypesEnum = typeof UserAccountAnalyticsTopVideoPinsMetricTypesEnum[keyof typeof UserAccountAnalyticsTopVideoPinsMetricTypesEnum];
/**
 * @export
 */
export const UserAccountAnalyticsTopVideoPinsCreatedInLastNDaysEnum = {
    NUMBER_30: 30
} as const;
export type UserAccountAnalyticsTopVideoPinsCreatedInLastNDaysEnum = typeof UserAccountAnalyticsTopVideoPinsCreatedInLastNDaysEnum[keyof typeof UserAccountAnalyticsTopVideoPinsCreatedInLastNDaysEnum];