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
/* tslint:disable:no-unused-variable member-ordering */

import { Inject, Injectable, Optional }                      from '@angular/core';
import { HttpClient, HttpHeaders, HttpParams,
         HttpResponse, HttpEvent, HttpParameterCodec, HttpContext 
        }       from '@angular/common/http';
import { CustomHttpParameterCodec }                          from '../encoder';
import { Observable }                                        from 'rxjs';

// @ts-ignore
import { Account } from '../model/account';
// @ts-ignore
import { AnalyticsMetricsResponse } from '../model/analyticsMetricsResponse';

// @ts-ignore
import { BASE_PATH, COLLECTION_FORMATS }                     from '../variables';
import { Configuration }                                     from '../configuration';



@Injectable({
  providedIn: 'root'
})
export class UserAccountService {

    protected basePath = 'https://api.pinterest.com/v5';
    public defaultHeaders = new HttpHeaders();
    public configuration = new Configuration();
    public encoder: HttpParameterCodec;

    constructor(protected httpClient: HttpClient, @Optional()@Inject(BASE_PATH) basePath: string, @Optional() configuration: Configuration) {
        if (configuration) {
            this.configuration = configuration;
        }
        if (typeof this.configuration.basePath !== 'string') {
            if (typeof basePath !== 'string') {
                basePath = this.basePath;
            }
            this.configuration.basePath = basePath;
        }
        this.encoder = this.configuration.encoder || new CustomHttpParameterCodec();
    }


    private addToHttpParams(httpParams: HttpParams, value: any, key?: string): HttpParams {
        if (typeof value === "object" && value instanceof Date === false) {
            httpParams = this.addToHttpParamsRecursive(httpParams, value);
        } else {
            httpParams = this.addToHttpParamsRecursive(httpParams, value, key);
        }
        return httpParams;
    }

    private addToHttpParamsRecursive(httpParams: HttpParams, value?: any, key?: string): HttpParams {
        if (value == null) {
            return httpParams;
        }

        if (typeof value === "object") {
            if (Array.isArray(value)) {
                (value as any[]).forEach( elem => httpParams = this.addToHttpParamsRecursive(httpParams, elem, key));
            } else if (value instanceof Date) {
                if (key != null) {
                    httpParams = httpParams.append(key,
                        (value as Date).toISOString().substr(0, 10));
                } else {
                   throw Error("key may not be null if value is Date");
                }
            } else {
                Object.keys(value).forEach( k => httpParams = this.addToHttpParamsRecursive(
                    httpParams, value[k], key != null ? `${key}.${k}` : k));
            }
        } else if (key != null) {
            httpParams = httpParams.append(key, value);
        } else {
            throw Error("key may not be null if value is not object or array");
        }
        return httpParams;
    }

    /**
     * Get user account analytics
     * Get analytics for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
     * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD
     * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD
     * @param fromClaimedContent Filter on Pins that match your claimed domain.
     * @param pinFormat Pin formats to get data for, default is all.
     * @param appTypes Apps or devices to get data for, default is all.
     * @param metricTypes Metric types to get data for, default is all. 
     * @param splitField How to split the data into groups. Not including this param means data won\&#39;t be split.
     * @param adAccountId Unique identifier of an ad account.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public userAccountAnalytics(startDate: string, endDate: string, fromClaimedContent?: 'OTHER' | 'CLAIMED' | 'BOTH', pinFormat?: 'ALL' | 'PRODUCT' | 'REGULAR' | 'VIDEO', appTypes?: 'ALL' | 'MOBILE' | 'TABLET' | 'WEB', metricTypes?: Array<'ENGAGEMENT' | 'ENGAGEMENT_RATE' | 'IMPRESSION' | 'OUTBOUND_CLICK' | 'OUTBOUND_CLICK_RATE' | 'PIN_CLICK' | 'PIN_CLICK_RATE' | 'SAVE' | 'SAVE_RATE'>, splitField?: 'NO_SPLIT' | 'APP_TYPE' | 'OWNED_CONTENT' | 'PIN_FORMAT', adAccountId?: string, observe?: 'body', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext}): Observable<{ [key: string]: AnalyticsMetricsResponse; }>;
    public userAccountAnalytics(startDate: string, endDate: string, fromClaimedContent?: 'OTHER' | 'CLAIMED' | 'BOTH', pinFormat?: 'ALL' | 'PRODUCT' | 'REGULAR' | 'VIDEO', appTypes?: 'ALL' | 'MOBILE' | 'TABLET' | 'WEB', metricTypes?: Array<'ENGAGEMENT' | 'ENGAGEMENT_RATE' | 'IMPRESSION' | 'OUTBOUND_CLICK' | 'OUTBOUND_CLICK_RATE' | 'PIN_CLICK' | 'PIN_CLICK_RATE' | 'SAVE' | 'SAVE_RATE'>, splitField?: 'NO_SPLIT' | 'APP_TYPE' | 'OWNED_CONTENT' | 'PIN_FORMAT', adAccountId?: string, observe?: 'response', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext}): Observable<HttpResponse<{ [key: string]: AnalyticsMetricsResponse; }>>;
    public userAccountAnalytics(startDate: string, endDate: string, fromClaimedContent?: 'OTHER' | 'CLAIMED' | 'BOTH', pinFormat?: 'ALL' | 'PRODUCT' | 'REGULAR' | 'VIDEO', appTypes?: 'ALL' | 'MOBILE' | 'TABLET' | 'WEB', metricTypes?: Array<'ENGAGEMENT' | 'ENGAGEMENT_RATE' | 'IMPRESSION' | 'OUTBOUND_CLICK' | 'OUTBOUND_CLICK_RATE' | 'PIN_CLICK' | 'PIN_CLICK_RATE' | 'SAVE' | 'SAVE_RATE'>, splitField?: 'NO_SPLIT' | 'APP_TYPE' | 'OWNED_CONTENT' | 'PIN_FORMAT', adAccountId?: string, observe?: 'events', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext}): Observable<HttpEvent<{ [key: string]: AnalyticsMetricsResponse; }>>;
    public userAccountAnalytics(startDate: string, endDate: string, fromClaimedContent?: 'OTHER' | 'CLAIMED' | 'BOTH', pinFormat?: 'ALL' | 'PRODUCT' | 'REGULAR' | 'VIDEO', appTypes?: 'ALL' | 'MOBILE' | 'TABLET' | 'WEB', metricTypes?: Array<'ENGAGEMENT' | 'ENGAGEMENT_RATE' | 'IMPRESSION' | 'OUTBOUND_CLICK' | 'OUTBOUND_CLICK_RATE' | 'PIN_CLICK' | 'PIN_CLICK_RATE' | 'SAVE' | 'SAVE_RATE'>, splitField?: 'NO_SPLIT' | 'APP_TYPE' | 'OWNED_CONTENT' | 'PIN_FORMAT', adAccountId?: string, observe: any = 'body', reportProgress: boolean = false, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext}): Observable<any> {
        if (startDate === null || startDate === undefined) {
            throw new Error('Required parameter startDate was null or undefined when calling userAccountAnalytics.');
        }
        if (endDate === null || endDate === undefined) {
            throw new Error('Required parameter endDate was null or undefined when calling userAccountAnalytics.');
        }

        let localVarQueryParameters = new HttpParams({encoder: this.encoder});
        if (startDate !== undefined && startDate !== null) {
          localVarQueryParameters = this.addToHttpParams(localVarQueryParameters,
            <any>startDate, 'start_date');
        }
        if (endDate !== undefined && endDate !== null) {
          localVarQueryParameters = this.addToHttpParams(localVarQueryParameters,
            <any>endDate, 'end_date');
        }
        if (fromClaimedContent !== undefined && fromClaimedContent !== null) {
          localVarQueryParameters = this.addToHttpParams(localVarQueryParameters,
            <any>fromClaimedContent, 'from_claimed_content');
        }
        if (pinFormat !== undefined && pinFormat !== null) {
          localVarQueryParameters = this.addToHttpParams(localVarQueryParameters,
            <any>pinFormat, 'pin_format');
        }
        if (appTypes !== undefined && appTypes !== null) {
          localVarQueryParameters = this.addToHttpParams(localVarQueryParameters,
            <any>appTypes, 'app_types');
        }
        if (metricTypes) {
            localVarQueryParameters = this.addToHttpParams(localVarQueryParameters,
                metricTypes.join(COLLECTION_FORMATS['csv']), 'metric_types');
        }
        if (splitField !== undefined && splitField !== null) {
          localVarQueryParameters = this.addToHttpParams(localVarQueryParameters,
            <any>splitField, 'split_field');
        }
        if (adAccountId !== undefined && adAccountId !== null) {
          localVarQueryParameters = this.addToHttpParams(localVarQueryParameters,
            <any>adAccountId, 'ad_account_id');
        }

        let localVarHeaders = this.defaultHeaders;

        let localVarCredential: string | undefined;
        // authentication (pinterest_oauth2) required
        localVarCredential = this.configuration.lookupCredential('pinterest_oauth2');
        if (localVarCredential) {
            localVarHeaders = localVarHeaders.set('Authorization', 'Bearer ' + localVarCredential);
        }

        let localVarHttpHeaderAcceptSelected: string | undefined = options && options.httpHeaderAccept;
        if (localVarHttpHeaderAcceptSelected === undefined) {
            // to determine the Accept header
            const httpHeaderAccepts: string[] = [
                'application/json'
            ];
            localVarHttpHeaderAcceptSelected = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        }
        if (localVarHttpHeaderAcceptSelected !== undefined) {
            localVarHeaders = localVarHeaders.set('Accept', localVarHttpHeaderAcceptSelected);
        }

        let localVarHttpContext: HttpContext | undefined = options && options.context;
        if (localVarHttpContext === undefined) {
            localVarHttpContext = new HttpContext();
        }


        let responseType_: 'text' | 'json' | 'blob' = 'json';
        if (localVarHttpHeaderAcceptSelected) {
            if (localVarHttpHeaderAcceptSelected.startsWith('text')) {
                responseType_ = 'text';
            } else if (this.configuration.isJsonMime(localVarHttpHeaderAcceptSelected)) {
                responseType_ = 'json';
            } else {
                responseType_ = 'blob';
            }
        }

        return this.httpClient.get<{ [key: string]: AnalyticsMetricsResponse; }>(`${this.configuration.basePath}/user_account/analytics`,
            {
                context: localVarHttpContext,
                params: localVarQueryParameters,
                responseType: <any>responseType_,
                withCredentials: this.configuration.withCredentials,
                headers: localVarHeaders,
                observe: observe,
                reportProgress: reportProgress
            }
        );
    }

    /**
     * Get user account
     * Get account information for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-business-access\&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     * @param adAccountId Unique identifier of an ad account.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public userAccountGet(adAccountId?: string, observe?: 'body', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext}): Observable<Account>;
    public userAccountGet(adAccountId?: string, observe?: 'response', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext}): Observable<HttpResponse<Account>>;
    public userAccountGet(adAccountId?: string, observe?: 'events', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext}): Observable<HttpEvent<Account>>;
    public userAccountGet(adAccountId?: string, observe: any = 'body', reportProgress: boolean = false, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext}): Observable<any> {

        let localVarQueryParameters = new HttpParams({encoder: this.encoder});
        if (adAccountId !== undefined && adAccountId !== null) {
          localVarQueryParameters = this.addToHttpParams(localVarQueryParameters,
            <any>adAccountId, 'ad_account_id');
        }

        let localVarHeaders = this.defaultHeaders;

        let localVarCredential: string | undefined;
        // authentication (pinterest_oauth2) required
        localVarCredential = this.configuration.lookupCredential('pinterest_oauth2');
        if (localVarCredential) {
            localVarHeaders = localVarHeaders.set('Authorization', 'Bearer ' + localVarCredential);
        }

        let localVarHttpHeaderAcceptSelected: string | undefined = options && options.httpHeaderAccept;
        if (localVarHttpHeaderAcceptSelected === undefined) {
            // to determine the Accept header
            const httpHeaderAccepts: string[] = [
                'application/json'
            ];
            localVarHttpHeaderAcceptSelected = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        }
        if (localVarHttpHeaderAcceptSelected !== undefined) {
            localVarHeaders = localVarHeaders.set('Accept', localVarHttpHeaderAcceptSelected);
        }

        let localVarHttpContext: HttpContext | undefined = options && options.context;
        if (localVarHttpContext === undefined) {
            localVarHttpContext = new HttpContext();
        }


        let responseType_: 'text' | 'json' | 'blob' = 'json';
        if (localVarHttpHeaderAcceptSelected) {
            if (localVarHttpHeaderAcceptSelected.startsWith('text')) {
                responseType_ = 'text';
            } else if (this.configuration.isJsonMime(localVarHttpHeaderAcceptSelected)) {
                responseType_ = 'json';
            } else {
                responseType_ = 'blob';
            }
        }

        return this.httpClient.get<Account>(`${this.configuration.basePath}/user_account`,
            {
                context: localVarHttpContext,
                params: localVarQueryParameters,
                responseType: <any>responseType_,
                withCredentials: this.configuration.withCredentials,
                headers: localVarHeaders,
                observe: observe,
                reportProgress: reportProgress
            }
        );
    }

}
