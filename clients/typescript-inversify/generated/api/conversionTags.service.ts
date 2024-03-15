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

import { ConversionEventResponse } from '../model/conversionEventResponse';
import { ConversionTagCreate } from '../model/conversionTagCreate';
import { ConversionTagListResponse } from '../model/conversionTagListResponse';
import { ConversionTagResponse } from '../model/conversionTagResponse';
import { PageVisitConversionTagsGet200Response } from '../model/pageVisitConversionTagsGet200Response';

import { COLLECTION_FORMATS }  from '../variables';



@injectable()
export class ConversionTagsService {
    private basePath: string = 'https://api.pinterest.com/v5';

    constructor(@inject('IApiHttpClient') private httpClient: IHttpClient,
        @inject('IAPIConfiguration') private APIConfiguration: IAPIConfiguration ) {
        if(this.APIConfiguration.basePath)
            this.basePath = this.APIConfiguration.basePath;
    }

    /**
     * Create conversion tag
     * Create a conversion tag, also known as &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/set-up-the-pinterest-tag\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Pinterest tag&lt;/a&gt;, with the option to enable enhanced match.&lt;p/&gt; The Pinterest Tag tracks actions people take on the ad account’s website after they view the ad account\&#39;s ad on Pinterest. The advertiser needs to customize this tag to track conversions.&lt;p/&gt; For more information, see:&lt;p/&gt; &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/set-up-the-pinterest-tag\&quot;&gt;Set up the Pinterest tag&lt;/a&gt;&lt;p/&gt; &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://developers.pinterest.com/docs/conversions/pinterest-tag/\&quot;&gt;Pinterest Tag&lt;/a&gt;&lt;p/&gt; &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://developers.pinterest.com/docs/conversions/enhanced-match/\&quot;&gt;Enhanced match&lt;/a&gt;
     * @param adAccountId Unique identifier of an ad account.
     * @param conversionTagCreate Conversion Tag to create
     
     */
    public conversionTagsCreate(adAccountId: string, conversionTagCreate: ConversionTagCreate, observe?: 'body', headers?: Headers): Observable<ConversionTagResponse>;
    public conversionTagsCreate(adAccountId: string, conversionTagCreate: ConversionTagCreate, observe?: 'response', headers?: Headers): Observable<HttpResponse<ConversionTagResponse>>;
    public conversionTagsCreate(adAccountId: string, conversionTagCreate: ConversionTagCreate, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (adAccountId === null || adAccountId === undefined){
            throw new Error('Required parameter adAccountId was null or undefined when calling conversionTagsCreate.');
        }

        if (conversionTagCreate === null || conversionTagCreate === undefined){
            throw new Error('Required parameter conversionTagCreate was null or undefined when calling conversionTagsCreate.');
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

        const response: Observable<HttpResponse<ConversionTagResponse>> = this.httpClient.post(`${this.basePath}/ad_accounts/${encodeURIComponent(String(adAccountId))}/conversion_tags`, conversionTagCreate , headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <ConversionTagResponse>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * Get conversion tag
     * Get information about an existing conversion tag.
     * @param adAccountId Unique identifier of an ad account.
     * @param conversionTagId Id of the conversion tag.
     
     */
    public conversionTagsGet(adAccountId: string, conversionTagId: string, observe?: 'body', headers?: Headers): Observable<ConversionTagResponse>;
    public conversionTagsGet(adAccountId: string, conversionTagId: string, observe?: 'response', headers?: Headers): Observable<HttpResponse<ConversionTagResponse>>;
    public conversionTagsGet(adAccountId: string, conversionTagId: string, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (adAccountId === null || adAccountId === undefined){
            throw new Error('Required parameter adAccountId was null or undefined when calling conversionTagsGet.');
        }

        if (conversionTagId === null || conversionTagId === undefined){
            throw new Error('Required parameter conversionTagId was null or undefined when calling conversionTagsGet.');
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';

        const response: Observable<HttpResponse<ConversionTagResponse>> = this.httpClient.get(`${this.basePath}/ad_accounts/${encodeURIComponent(String(adAccountId))}/conversion_tags/${encodeURIComponent(String(conversionTagId))}`, headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <ConversionTagResponse>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * Get conversion tags
     * List conversion tags associated with an ad account.
     * @param adAccountId Unique identifier of an ad account.
     * @param filterDeleted Filter out deleted tags.
     
     */
    public conversionTagsList(adAccountId: string, filterDeleted?: boolean, observe?: 'body', headers?: Headers): Observable<ConversionTagListResponse>;
    public conversionTagsList(adAccountId: string, filterDeleted?: boolean, observe?: 'response', headers?: Headers): Observable<HttpResponse<ConversionTagListResponse>>;
    public conversionTagsList(adAccountId: string, filterDeleted?: boolean, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (adAccountId === null || adAccountId === undefined){
            throw new Error('Required parameter adAccountId was null or undefined when calling conversionTagsList.');
        }

        let queryParameters: string[] = [];
        if (filterDeleted !== undefined) {
            queryParameters.push('filterDeleted='+encodeURIComponent(String(filterDeleted)));
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';

        const response: Observable<HttpResponse<ConversionTagListResponse>> = this.httpClient.get(`${this.basePath}/ad_accounts/${encodeURIComponent(String(adAccountId))}/conversion_tags?${queryParameters.join('&')}`, headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <ConversionTagListResponse>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * Get Ocpm eligible conversion tags
     * Get Ocpm eligible conversion tag events for an ad account.
     * @param adAccountId Unique identifier of an ad account.
     
     */
    public ocpmEligibleConversionTagsGet(adAccountId: string, observe?: 'body', headers?: Headers): Observable<{ [key: string]: Array<ConversionEventResponse>; }>;
    public ocpmEligibleConversionTagsGet(adAccountId: string, observe?: 'response', headers?: Headers): Observable<HttpResponse<{ [key: string]: Array<ConversionEventResponse>; }>>;
    public ocpmEligibleConversionTagsGet(adAccountId: string, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (adAccountId === null || adAccountId === undefined){
            throw new Error('Required parameter adAccountId was null or undefined when calling ocpmEligibleConversionTagsGet.');
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';

        const response: Observable<HttpResponse<{ [key: string]: Array<ConversionEventResponse>; }>> = this.httpClient.get(`${this.basePath}/ad_accounts/${encodeURIComponent(String(adAccountId))}/conversion_tags/ocpm_eligible`, headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <{ [key: string]: Array<ConversionEventResponse>; }>(httpResponse.response))
               );
        }
        return response;
    }


    /**
     * Get page visit conversion tags
     * Get all page visit conversion tag events for an ad account.
     * @param adAccountId Unique identifier of an ad account.
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/getting-started/pagination/\&#39;&gt;Pagination&lt;/a&gt; for more information.
     * @param order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items.
     * @param bookmark Cursor used to fetch the next page of items
     
     */
    public pageVisitConversionTagsGet(adAccountId: string, pageSize?: number, order?: 'ASCENDING' | 'DESCENDING', bookmark?: string, observe?: 'body', headers?: Headers): Observable<PageVisitConversionTagsGet200Response>;
    public pageVisitConversionTagsGet(adAccountId: string, pageSize?: number, order?: 'ASCENDING' | 'DESCENDING', bookmark?: string, observe?: 'response', headers?: Headers): Observable<HttpResponse<PageVisitConversionTagsGet200Response>>;
    public pageVisitConversionTagsGet(adAccountId: string, pageSize?: number, order?: 'ASCENDING' | 'DESCENDING', bookmark?: string, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (adAccountId === null || adAccountId === undefined){
            throw new Error('Required parameter adAccountId was null or undefined when calling pageVisitConversionTagsGet.');
        }

        let queryParameters: string[] = [];
        if (pageSize !== undefined) {
            queryParameters.push('pageSize='+encodeURIComponent(String(pageSize)));
        }
        if (order !== undefined) {
            queryParameters.push('order='+encodeURIComponent(String(order)));
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

        const response: Observable<HttpResponse<PageVisitConversionTagsGet200Response>> = this.httpClient.get(`${this.basePath}/ad_accounts/${encodeURIComponent(String(adAccountId))}/conversion_tags/page_visit?${queryParameters.join('&')}`, headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <PageVisitConversionTagsGet200Response>(httpResponse.response))
               );
        }
        return response;
    }

}
