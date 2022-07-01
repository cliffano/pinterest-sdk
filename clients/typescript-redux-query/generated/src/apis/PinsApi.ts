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


import { HttpMethods, QueryConfig, ResponseBody, ResponseText } from 'redux-query';
import * as runtime from '../runtime';
import {
    AnalyticsMetricsResponse,
    AnalyticsMetricsResponseFromJSON,
    AnalyticsMetricsResponseToJSON,
    Pin,
    PinFromJSON,
    PinToJSON,
} from '../models';

export interface PinsAnalyticsRequest {
    pinId: string;
    startDate: Date;
    endDate: Date;
    metricTypes: Array<PinsAnalyticsMetricTypesEnum>;
    appTypes?: PinsAnalyticsAppTypesEnum;
    splitField?: PinsAnalyticsSplitFieldEnum;
    adAccountId?: string;
}

export interface PinsCreateRequest {
    pin: Pin;
}

export interface PinsDeleteRequest {
    pinId: string;
}

export interface PinsGetRequest {
    pinId: string;
    adAccountId?: string;
}


/**
 * Get analytics for a Pin owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href=\"https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list\">List ad accounts</a>) to use the owner of that ad_account as the \"operation user_account\". In order to do this, the token user_account must have one of the following <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a> roles on the ad_account:  - For Pins on public or protected boards: Admin, Analyst. - For Pins on secret boards: Admin.
 * Get Pin analytics
 */
function pinsAnalyticsRaw<T>(requestParameters: PinsAnalyticsRequest, requestConfig: runtime.TypedQueryConfig<T, { [key: string]: AnalyticsMetricsResponse; }> = {}): QueryConfig<T> {
    if (requestParameters.pinId === null || requestParameters.pinId === undefined) {
        throw new runtime.RequiredError('pinId','Required parameter requestParameters.pinId was null or undefined when calling pinsAnalytics.');
    }

    if (requestParameters.startDate === null || requestParameters.startDate === undefined) {
        throw new runtime.RequiredError('startDate','Required parameter requestParameters.startDate was null or undefined when calling pinsAnalytics.');
    }

    if (requestParameters.endDate === null || requestParameters.endDate === undefined) {
        throw new runtime.RequiredError('endDate','Required parameter requestParameters.endDate was null or undefined when calling pinsAnalytics.');
    }

    if (requestParameters.metricTypes === null || requestParameters.metricTypes === undefined) {
        throw new runtime.RequiredError('metricTypes','Required parameter requestParameters.metricTypes was null or undefined when calling pinsAnalytics.');
    }

    let queryParameters = null;

    queryParameters = {};


    if (requestParameters.startDate !== undefined) {
        queryParameters['start_date'] = (requestParameters.startDate as any).toISOString().substr(0,10);
    }


    if (requestParameters.endDate !== undefined) {
        queryParameters['end_date'] = (requestParameters.endDate as any).toISOString().substr(0,10);
    }


    if (requestParameters.appTypes !== undefined) {
        queryParameters['app_types'] = requestParameters.appTypes;
    }


    if (requestParameters.metricTypes) {
        queryParameters['metric_types'] = requestParameters.metricTypes?.join(runtime.COLLECTION_FORMATS["csv"]);
    }


    if (requestParameters.splitField !== undefined) {
        queryParameters['split_field'] = requestParameters.splitField;
    }


    if (requestParameters.adAccountId !== undefined) {
        queryParameters['ad_account_id'] = requestParameters.adAccountId;
    }

    const headerParameters : runtime.HttpHeaders = {};


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["boards:read", "pins:read"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/pins/{pin_id}/analytics`.replace(`{${"pin_id"}}`, encodeURIComponent(String(requestParameters.pinId))),
        meta,
        update: requestConfig.update,
        queryKey: requestConfig.queryKey,
        optimisticUpdate: requestConfig.optimisticUpdate,
        force: requestConfig.force,
        rollback: requestConfig.rollback,
        options: {
            method: 'GET',
            headers: headerParameters,
        },
        body: queryParameters,
    };

    const { transform: requestTransform } = requestConfig;
    if (requestTransform) {
        config.transform = (body: ResponseBody, text: ResponseBody) => requestTransform(AnalyticsMetricsResponseFromJSON(body), text);
    }

    return config;
}

/**
* Get analytics for a Pin owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href=\"https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list\">List ad accounts</a>) to use the owner of that ad_account as the \"operation user_account\". In order to do this, the token user_account must have one of the following <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a> roles on the ad_account:  - For Pins on public or protected boards: Admin, Analyst. - For Pins on secret boards: Admin.
* Get Pin analytics
*/
export function pinsAnalytics<T>(requestParameters: PinsAnalyticsRequest, requestConfig?: runtime.TypedQueryConfig<T, { [key: string]: AnalyticsMetricsResponse; }>): QueryConfig<T> {
    return pinsAnalyticsRaw(requestParameters, requestConfig);
}

/**
 * Create a Pin on a board or board section owned by the \"operation user_account\".  Note: If the current \"operation user_account\" (defined by the access token) has access to another user\'s Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account\'s permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id=12345&...).  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called \'curated content\', please use our <a href=\'/docs/add-ons/save-button\'>Save button</a> instead. For more tips on creating fresh content for Pinterest, review our <a href=\'/docs/solutions/content-apps\'>Content App Solutions Guide</a>.  <strong><a href=\'/docs/solutions/content-apps/#creatingvideopins\'>Learn more</a></strong> about video Pin creation.
 * Create Pin
 */
function pinsCreateRaw<T>(requestParameters: PinsCreateRequest, requestConfig: runtime.TypedQueryConfig<T, Pin> = {}): QueryConfig<T> {
    if (requestParameters.pin === null || requestParameters.pin === undefined) {
        throw new runtime.RequiredError('pin','Required parameter requestParameters.pin was null or undefined when calling pinsCreate.');
    }

    let queryParameters = null;


    const headerParameters : runtime.HttpHeaders = {};

    headerParameters['Content-Type'] = 'application/json';


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["boards:read", "boards:write", "pins:read", "pins:write"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/pins`,
        meta,
        update: requestConfig.update,
        queryKey: requestConfig.queryKey,
        optimisticUpdate: requestConfig.optimisticUpdate,
        force: requestConfig.force,
        rollback: requestConfig.rollback,
        options: {
            method: 'POST',
            headers: headerParameters,
        },
        body: queryParameters || PinToJSON(requestParameters.pin),
    };

    const { transform: requestTransform } = requestConfig;
    if (requestTransform) {
        config.transform = (body: ResponseBody, text: ResponseBody) => requestTransform(PinFromJSON(body), text);
    }

    return config;
}

/**
* Create a Pin on a board or board section owned by the \"operation user_account\".  Note: If the current \"operation user_account\" (defined by the access token) has access to another user\'s Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account\'s permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id=12345&...).  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called \'curated content\', please use our <a href=\'/docs/add-ons/save-button\'>Save button</a> instead. For more tips on creating fresh content for Pinterest, review our <a href=\'/docs/solutions/content-apps\'>Content App Solutions Guide</a>.  <strong><a href=\'/docs/solutions/content-apps/#creatingvideopins\'>Learn more</a></strong> about video Pin creation.
* Create Pin
*/
export function pinsCreate<T>(requestParameters: PinsCreateRequest, requestConfig?: runtime.TypedQueryConfig<T, Pin>): QueryConfig<T> {
    return pinsCreateRaw(requestParameters, requestConfig);
}

/**
 * Delete a Pins owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
 * Delete Pin
 */
function pinsDeleteRaw<T>(requestParameters: PinsDeleteRequest, requestConfig: runtime.TypedQueryConfig<T, void> = {}): QueryConfig<T> {
    if (requestParameters.pinId === null || requestParameters.pinId === undefined) {
        throw new runtime.RequiredError('pinId','Required parameter requestParameters.pinId was null or undefined when calling pinsDelete.');
    }

    let queryParameters = null;


    const headerParameters : runtime.HttpHeaders = {};


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["boards:read", "boards:write", "pins:read", "pins:write"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/pins/{pin_id}`.replace(`{${"pin_id"}}`, encodeURIComponent(String(requestParameters.pinId))),
        meta,
        update: requestConfig.update,
        queryKey: requestConfig.queryKey,
        optimisticUpdate: requestConfig.optimisticUpdate,
        force: requestConfig.force,
        rollback: requestConfig.rollback,
        options: {
            method: 'DELETE',
            headers: headerParameters,
        },
        body: queryParameters,
    };

    const { transform: requestTransform } = requestConfig;
    if (requestTransform) {
    }

    return config;
}

/**
* Delete a Pins owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
* Delete Pin
*/
export function pinsDelete<T>(requestParameters: PinsDeleteRequest, requestConfig?: runtime.TypedQueryConfig<T, void>): QueryConfig<T> {
    return pinsDeleteRaw(requestParameters, requestConfig);
}

/**
 * Get a Pin owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href=\'/docs/api/v5/#operation/ad_accounts/list\'>List ad accounts</a>) to use the owner of that ad_account as the \"operation user_account\". In order to do this, the token user_account must have one of the following <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a> roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
 * Get Pin
 */
function pinsGetRaw<T>(requestParameters: PinsGetRequest, requestConfig: runtime.TypedQueryConfig<T, Pin> = {}): QueryConfig<T> {
    if (requestParameters.pinId === null || requestParameters.pinId === undefined) {
        throw new runtime.RequiredError('pinId','Required parameter requestParameters.pinId was null or undefined when calling pinsGet.');
    }

    let queryParameters = null;

    queryParameters = {};


    if (requestParameters.adAccountId !== undefined) {
        queryParameters['ad_account_id'] = requestParameters.adAccountId;
    }

    const headerParameters : runtime.HttpHeaders = {};


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["boards:read", "pins:read"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/pins/{pin_id}`.replace(`{${"pin_id"}}`, encodeURIComponent(String(requestParameters.pinId))),
        meta,
        update: requestConfig.update,
        queryKey: requestConfig.queryKey,
        optimisticUpdate: requestConfig.optimisticUpdate,
        force: requestConfig.force,
        rollback: requestConfig.rollback,
        options: {
            method: 'GET',
            headers: headerParameters,
        },
        body: queryParameters,
    };

    const { transform: requestTransform } = requestConfig;
    if (requestTransform) {
        config.transform = (body: ResponseBody, text: ResponseBody) => requestTransform(PinFromJSON(body), text);
    }

    return config;
}

/**
* Get a Pin owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href=\'/docs/api/v5/#operation/ad_accounts/list\'>List ad accounts</a>) to use the owner of that ad_account as the \"operation user_account\". In order to do this, the token user_account must have one of the following <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a> roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
* Get Pin
*/
export function pinsGet<T>(requestParameters: PinsGetRequest, requestConfig?: runtime.TypedQueryConfig<T, Pin>): QueryConfig<T> {
    return pinsGetRaw(requestParameters, requestConfig);
}


/**
    * @export
    * @enum {string}
    */
export enum PinsAnalyticsMetricTypesEnum {
    Impression = 'IMPRESSION',
    Save = 'SAVE',
    PinClick = 'PIN_CLICK',
    OutboundClick = 'OUTBOUND_CLICK',
    VideoMrcView = 'VIDEO_MRC_VIEW',
    VideoAvgWatchTime = 'VIDEO_AVG_WATCH_TIME',
    VideoV50WatchTime = 'VIDEO_V50_WATCH_TIME',
    Quartile95PercentView = 'QUARTILE_95_PERCENT_VIEW'
}
/**
    * @export
    * @enum {string}
    */
export enum PinsAnalyticsAppTypesEnum {
    All = 'ALL',
    Mobile = 'MOBILE',
    Tablet = 'TABLET',
    Web = 'WEB'
}
/**
    * @export
    * @enum {string}
    */
export enum PinsAnalyticsSplitFieldEnum {
    NoSplit = 'NO_SPLIT',
    AppType = 'APP_TYPE'
}
