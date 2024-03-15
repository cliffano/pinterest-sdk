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
/* tslint:disable:no-unused-variable member-ordering */

import { Observable } from 'rxjs/Observable';

import { map } from 'rxjs/operators';
import IHttpClient from '../IHttpClient';
import { inject, injectable } from 'inversify';
import { IAPIConfiguration } from '../IAPIConfiguration';
import { Headers } from '../Headers';
import HttpResponse from '../HttpResponse';

import { AdAccountCreateSubscriptionRequest } from '../model/adAccountCreateSubscriptionRequest';
import { AdAccountCreateSubscriptionResponse } from '../model/adAccountCreateSubscriptionResponse';
import { AdAccountGetSubscriptionResponse } from '../model/adAccountGetSubscriptionResponse';
import { AdAccountsSubscriptionsGetList200Response } from '../model/adAccountsSubscriptionsGetList200Response';

import { COLLECTION_FORMATS }  from '../variables';



@injectable()
export class LeadAdsService {
    private basePath: string = 'https://api.pinterest.com/v5';

    constructor(@inject('IApiHttpClient') private httpClient: IHttpClient,
        @inject('IAPIConfiguration') private APIConfiguration: IAPIConfiguration ) {
        if(this.APIConfiguration.basePath)
            this.basePath = this.APIConfiguration.basePath;
    }

    /**
     * Delete lead ads subscription
     * Delete an existing lead ads webhook subscription by ID. - Only requests for the OWNER or ADMIN of the ad_account will be allowed.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/new/about-beta-access/\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
     * @param adAccountId Unique identifier of an ad account.
     * @param subscriptionId Unique identifier of a subscription.
     
     */
    public adAccountsSubscriptionsDelById(adAccountId: string, subscriptionId: string, observe?: 'body', headers?: Headers): Observable<any>;
    public adAccountsSubscriptionsDelById(adAccountId: string, subscriptionId: string, observe?: 'response', headers?: Headers): Observable<HttpResponse<any>>;
    public adAccountsSubscriptionsDelById(adAccountId: string, subscriptionId: string, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (adAccountId === null || adAccountId === undefined){
            throw new Error('Required parameter adAccountId was null or undefined when calling adAccountsSubscriptionsDelById.');
        }

        if (subscriptionId === null || subscriptionId === undefined){
            throw new Error('Required parameter subscriptionId was null or undefined when calling adAccountsSubscriptionsDelById.');
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';

        const response: Observable<HttpResponse<any>> = this.httpClient.delete(`${this.basePath}/ad_accounts/${encodeURIComponent(String(adAccountId))}/leads/subscriptions/${encodeURIComponent(String(subscriptionId))}`, headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <any>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * Get lead ads subscription
     * Get a specific lead ads subscription record. - Only requests for the OWNER or ADMIN of the ad_account will be allowed.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/new/about-beta-access/\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
     * @param adAccountId Unique identifier of an ad account.
     * @param subscriptionId Unique identifier of a subscription.
     
     */
    public adAccountsSubscriptionsGetById(adAccountId: string, subscriptionId: string, observe?: 'body', headers?: Headers): Observable<AdAccountGetSubscriptionResponse>;
    public adAccountsSubscriptionsGetById(adAccountId: string, subscriptionId: string, observe?: 'response', headers?: Headers): Observable<HttpResponse<AdAccountGetSubscriptionResponse>>;
    public adAccountsSubscriptionsGetById(adAccountId: string, subscriptionId: string, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (adAccountId === null || adAccountId === undefined){
            throw new Error('Required parameter adAccountId was null or undefined when calling adAccountsSubscriptionsGetById.');
        }

        if (subscriptionId === null || subscriptionId === undefined){
            throw new Error('Required parameter subscriptionId was null or undefined when calling adAccountsSubscriptionsGetById.');
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';

        const response: Observable<HttpResponse<AdAccountGetSubscriptionResponse>> = this.httpClient.get(`${this.basePath}/ad_accounts/${encodeURIComponent(String(adAccountId))}/leads/subscriptions/${encodeURIComponent(String(subscriptionId))}`, headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <AdAccountGetSubscriptionResponse>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * Get lead ads subscriptions
     * Get the advertiser\&#39;s list of lead ads subscriptions. - Only requests for the OWNER or ADMIN of the ad_account will be allowed.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/new/about-beta-access/\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
     * @param adAccountId Unique identifier of an ad account.
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/getting-started/pagination/\&#39;&gt;Pagination&lt;/a&gt; for more information.
     * @param bookmark Cursor used to fetch the next page of items
     
     */
    public adAccountsSubscriptionsGetList(adAccountId: string, pageSize?: number, bookmark?: string, observe?: 'body', headers?: Headers): Observable<AdAccountsSubscriptionsGetList200Response>;
    public adAccountsSubscriptionsGetList(adAccountId: string, pageSize?: number, bookmark?: string, observe?: 'response', headers?: Headers): Observable<HttpResponse<AdAccountsSubscriptionsGetList200Response>>;
    public adAccountsSubscriptionsGetList(adAccountId: string, pageSize?: number, bookmark?: string, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (adAccountId === null || adAccountId === undefined){
            throw new Error('Required parameter adAccountId was null or undefined when calling adAccountsSubscriptionsGetList.');
        }

        let queryParameters: string[] = [];
        if (pageSize !== undefined) {
            queryParameters.push('pageSize='+encodeURIComponent(String(pageSize)));
        }
        if (bookmark !== undefined) {
            queryParameters.push('bookmark='+encodeURIComponent(String(bookmark)));
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';

        const response: Observable<HttpResponse<AdAccountsSubscriptionsGetList200Response>> = this.httpClient.get(`${this.basePath}/ad_accounts/${encodeURIComponent(String(adAccountId))}/leads/subscriptions?${queryParameters.join('&')}`, headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <AdAccountsSubscriptionsGetList200Response>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * Create lead ads subscription
     * Create a lead ads webhook subscription. - Only requests for the OWNER or ADMIN of the ad_account will be allowed. - Advertisers can set up multiple integrations using ad_account_id + lead_form_id but only one integration per unique records.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/new/about-beta-access/\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
     * @param adAccountId Unique identifier of an ad account.
     * @param adAccountCreateSubscriptionRequest Subscription to create.
     
     */
    public adAccountsSubscriptionsPost(adAccountId: string, adAccountCreateSubscriptionRequest: AdAccountCreateSubscriptionRequest, observe?: 'body', headers?: Headers): Observable<AdAccountCreateSubscriptionResponse>;
    public adAccountsSubscriptionsPost(adAccountId: string, adAccountCreateSubscriptionRequest: AdAccountCreateSubscriptionRequest, observe?: 'response', headers?: Headers): Observable<HttpResponse<AdAccountCreateSubscriptionResponse>>;
    public adAccountsSubscriptionsPost(adAccountId: string, adAccountCreateSubscriptionRequest: AdAccountCreateSubscriptionRequest, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (adAccountId === null || adAccountId === undefined){
            throw new Error('Required parameter adAccountId was null or undefined when calling adAccountsSubscriptionsPost.');
        }

        if (adAccountCreateSubscriptionRequest === null || adAccountCreateSubscriptionRequest === undefined){
            throw new Error('Required parameter adAccountCreateSubscriptionRequest was null or undefined when calling adAccountsSubscriptionsPost.');
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';
        headers['Content-Type'] = 'application/json';

        const response: Observable<HttpResponse<AdAccountCreateSubscriptionResponse>> = this.httpClient.post(`${this.basePath}/ad_accounts/${encodeURIComponent(String(adAccountId))}/leads/subscriptions`, adAccountCreateSubscriptionRequest , headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <AdAccountCreateSubscriptionResponse>(httpResponse.response))
               );
        }
        return response;
    }

}