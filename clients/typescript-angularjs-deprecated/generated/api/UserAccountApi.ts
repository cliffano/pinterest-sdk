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

import * as models from '../model/models';

/* tslint:disable:no-unused-variable member-ordering */

export class UserAccountApi {
    protected basePath = 'https://api.pinterest.com/v5';
    public defaultHeaders : any = {};

    static $inject: string[] = ['$http', '$httpParamSerializer', 'basePath'];

    constructor(protected $http: ng.IHttpService, protected $httpParamSerializer?: (d: any) => any, basePath?: string) {
        if (basePath !== undefined) {
            this.basePath = basePath;
        }
    }

    /**
     * Get analytics for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\".
     * @summary Get user account analytics
     * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD
     * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD
     * @param fromClaimedContent Filter on Pins that match your claimed domain.
     * @param pinFormat Pin formats to get data for, default is all.
     * @param appTypes Apps or devices to get data for, default is all.
     * @param metricTypes Metric types to get data for, default is all. 
     * @param splitField How to split the data into groups. Not including this param means data won\&#39;t be split.
     * @param adAccountId Unique identifier of an ad account.
     */
    public userAccountAnalytics (startDate: string, endDate: string, fromClaimedContent?: 'OTHER' | 'CLAIMED' | 'BOTH', pinFormat?: 'ALL' | 'PRODUCT' | 'REGULAR' | 'VIDEO', appTypes?: 'ALL' | 'MOBILE' | 'TABLET' | 'WEB', metricTypes?: Array<'ENGAGEMENT' | 'ENGAGEMENT_RATE' | 'IMPRESSION' | 'OUTBOUND_CLICK' | 'OUTBOUND_CLICK_RATE' | 'PIN_CLICK' | 'PIN_CLICK_RATE' | 'SAVE' | 'SAVE_RATE'>, splitField?: 'NO_SPLIT' | 'APP_TYPE' | 'OWNED_CONTENT' | 'PIN_FORMAT', adAccountId?: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{ [key: string]: models.AnalyticsMetricsResponse; }> {
        const localVarPath = this.basePath + '/user_account/analytics';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'startDate' is not null or undefined
        if (startDate === null || startDate === undefined) {
            throw new Error('Required parameter startDate was null or undefined when calling userAccountAnalytics.');
        }

        // verify required parameter 'endDate' is not null or undefined
        if (endDate === null || endDate === undefined) {
            throw new Error('Required parameter endDate was null or undefined when calling userAccountAnalytics.');
        }

        if (startDate !== undefined) {
            queryParameters['start_date'] = startDate;
        }

        if (endDate !== undefined) {
            queryParameters['end_date'] = endDate;
        }

        if (fromClaimedContent !== undefined) {
            queryParameters['from_claimed_content'] = fromClaimedContent;
        }

        if (pinFormat !== undefined) {
            queryParameters['pin_format'] = pinFormat;
        }

        if (appTypes !== undefined) {
            queryParameters['app_types'] = appTypes;
        }

        if (metricTypes !== undefined) {
            queryParameters['metric_types'] = metricTypes;
        }

        if (splitField !== undefined) {
            queryParameters['split_field'] = splitField;
        }

        if (adAccountId !== undefined) {
            queryParameters['ad_account_id'] = adAccountId;
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * Get account information for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". See <a href=\'/docs/api/v5/#tag/Understanding-business-access\'>Understanding Business Access</a> for more information.
     * @summary Get user account
     * @param adAccountId Unique identifier of an ad account.
     */
    public userAccountGet (adAccountId?: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.Account> {
        const localVarPath = this.basePath + '/user_account';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        if (adAccountId !== undefined) {
            queryParameters['ad_account_id'] = adAccountId;
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
}
