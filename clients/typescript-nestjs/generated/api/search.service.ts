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

import { Inject, Injectable, Optional } from '@nestjs/common';
import { HttpService } from '@nestjs/axios';
import { AxiosResponse } from 'axios';
import { Observable } from 'rxjs';
import { PinsList200Response } from '../model/pinsList200Response';
import { SearchPartnerPins200Response } from '../model/searchPartnerPins200Response';
import { SearchUserBoardsGet200Response } from '../model/searchUserBoardsGet200Response';
import { Configuration } from '../configuration';


@Injectable()
export class SearchService {

    protected basePath = 'https://api.pinterest.com/v5';
    public defaultHeaders: Record<string,string> = {};
    public configuration = new Configuration();

    constructor(protected httpClient: HttpService, @Optional() configuration: Configuration) {
        this.configuration = configuration || this.configuration;
        this.basePath = configuration?.basePath || this.basePath;
    }

    /**
     * @param consumes string[] mime-types
     * @return true: consumes contains 'multipart/form-data', false: otherwise
     */
    private canConsumeForm(consumes: string[]): boolean {
        const form = 'multipart/form-data';
        return consumes.includes(form);
    }

    /**
     * Search pins by a given search term
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/new/about-beta-access/\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get the top 10 Pins by a given search term.
     * @param term Search term to look up pins.
     * @param countryCode Two letter country code (ISO 3166-1 alpha-2)
     * @param bookmark Cursor used to fetch the next page of items
     * @param locale Search locale.
     * @param limit Max search result size
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public searchPartnerPins(term: string, countryCode: string, bookmark?: string, locale?: string, limit?: number, ): Observable<AxiosResponse<SearchPartnerPins200Response>>;
    public searchPartnerPins(term: string, countryCode: string, bookmark?: string, locale?: string, limit?: number, ): Observable<any> {

        if (term === null || term === undefined) {
            throw new Error('Required parameter term was null or undefined when calling searchPartnerPins.');
        }

        if (countryCode === null || countryCode === undefined) {
            throw new Error('Required parameter countryCode was null or undefined when calling searchPartnerPins.');
        }




        let queryParameters = new URLSearchParams();
        if (term !== undefined && term !== null) {
            queryParameters.append('term', <any>term);
        }
        if (countryCode !== undefined && countryCode !== null) {
            queryParameters.append('country_code', <any>countryCode);
        }
        if (bookmark !== undefined && bookmark !== null) {
            queryParameters.append('bookmark', <any>bookmark);
        }
        if (locale !== undefined && locale !== null) {
            queryParameters.append('locale', <any>locale);
        }
        if (limit !== undefined && limit !== null) {
            queryParameters.append('limit', <any>limit);
        }

        let headers = {...this.defaultHeaders};

        // authentication (pinterest_oauth2) required
        if (this.configuration.accessToken) {
            const accessToken = typeof this.configuration.accessToken === 'function'
                ? this.configuration.accessToken()
                : this.configuration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }

        // to determine the Accept header
        let httpHeaderAccepts: string[] = [
            'application/json'
        ];
        const httpHeaderAcceptSelected: string | undefined = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        if (httpHeaderAcceptSelected != undefined) {
            headers['Accept'] = httpHeaderAcceptSelected;
        }

        // to determine the Content-Type header
        const consumes: string[] = [
        ];
        return this.httpClient.get<SearchPartnerPins200Response>(`${this.basePath}/search/partner/pins`,
            {
                params: queryParameters,
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * Search user\&#39;s boards
     * Search for boards for the \&quot;operation user_account\&quot;. This includes boards of all board types. - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;\&#39;/docs/reference/business-access/\&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     * @param adAccountId Unique identifier of an ad account.
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/getting-started/pagination/\&#39;&gt;Pagination&lt;/a&gt; for more information.
     * @param query Search query. Can contain pin description keywords or comma-separated pin IDs.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public searchUserBoardsGet(adAccountId?: string, bookmark?: string, pageSize?: number, query?: string, ): Observable<AxiosResponse<SearchUserBoardsGet200Response>>;
    public searchUserBoardsGet(adAccountId?: string, bookmark?: string, pageSize?: number, query?: string, ): Observable<any> {





        let queryParameters = new URLSearchParams();
        if (adAccountId !== undefined && adAccountId !== null) {
            queryParameters.append('ad_account_id', <any>adAccountId);
        }
        if (bookmark !== undefined && bookmark !== null) {
            queryParameters.append('bookmark', <any>bookmark);
        }
        if (pageSize !== undefined && pageSize !== null) {
            queryParameters.append('page_size', <any>pageSize);
        }
        if (query !== undefined && query !== null) {
            queryParameters.append('query', <any>query);
        }

        let headers = {...this.defaultHeaders};

        // authentication (pinterest_oauth2) required
        if (this.configuration.accessToken) {
            const accessToken = typeof this.configuration.accessToken === 'function'
                ? this.configuration.accessToken()
                : this.configuration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }

        // to determine the Accept header
        let httpHeaderAccepts: string[] = [
            'application/json'
        ];
        const httpHeaderAcceptSelected: string | undefined = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        if (httpHeaderAcceptSelected != undefined) {
            headers['Accept'] = httpHeaderAcceptSelected;
        }

        // to determine the Content-Type header
        const consumes: string[] = [
        ];
        return this.httpClient.get<SearchUserBoardsGet200Response>(`${this.basePath}/search/boards`,
            {
                params: queryParameters,
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * Search user\&#39;s Pins
     * Search for pins for the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;\&#39;/docs/reference/business-access/\&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     * @param query Search query. Can contain pin description keywords or comma-separated pin IDs.
     * @param adAccountId Unique identifier of an ad account.
     * @param bookmark Cursor used to fetch the next page of items
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public searchUserPinsList(query: string, adAccountId?: string, bookmark?: string, ): Observable<AxiosResponse<PinsList200Response>>;
    public searchUserPinsList(query: string, adAccountId?: string, bookmark?: string, ): Observable<any> {

        if (query === null || query === undefined) {
            throw new Error('Required parameter query was null or undefined when calling searchUserPinsList.');
        }



        let queryParameters = new URLSearchParams();
        if (adAccountId !== undefined && adAccountId !== null) {
            queryParameters.append('ad_account_id', <any>adAccountId);
        }
        if (query !== undefined && query !== null) {
            queryParameters.append('query', <any>query);
        }
        if (bookmark !== undefined && bookmark !== null) {
            queryParameters.append('bookmark', <any>bookmark);
        }

        let headers = {...this.defaultHeaders};

        // authentication (pinterest_oauth2) required
        if (this.configuration.accessToken) {
            const accessToken = typeof this.configuration.accessToken === 'function'
                ? this.configuration.accessToken()
                : this.configuration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }

        // to determine the Accept header
        let httpHeaderAccepts: string[] = [
            'application/json'
        ];
        const httpHeaderAcceptSelected: string | undefined = this.configuration.selectHeaderAccept(httpHeaderAccepts);
        if (httpHeaderAcceptSelected != undefined) {
            headers['Accept'] = httpHeaderAcceptSelected;
        }

        // to determine the Content-Type header
        const consumes: string[] = [
        ];
        return this.httpClient.get<PinsList200Response>(`${this.basePath}/search/pins`,
            {
                params: queryParameters,
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
}
