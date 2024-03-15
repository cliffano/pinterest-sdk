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
import { KeywordUpdateBody } from '../model/keywordUpdateBody';
import { KeywordsGet200Response } from '../model/keywordsGet200Response';
import { KeywordsMetricsArrayResponse } from '../model/keywordsMetricsArrayResponse';
import { KeywordsRequest } from '../model/keywordsRequest';
import { KeywordsResponse } from '../model/keywordsResponse';
import { MatchType } from '../model/matchType';
import { TrendType } from '../model/trendType';
import { TrendingKeywordsResponse } from '../model/trendingKeywordsResponse';
import { TrendsSupportedRegion } from '../model/trendsSupportedRegion';
import { Configuration } from '../configuration';


@Injectable()
export class KeywordsService {

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
     * Get country\&#39;s keyword metrics
     * See keyword metrics for a specified country, aggregated across all of Pinterest. (Definitions are available from the \&quot;Get delivery metrics definitions\&quot; &lt;a href&#x3D;\&quot;/docs/api/v5/#operation/delivery_metrics/get\&quot;&gt;API endpoint&lt;/a&gt;).
     * @param adAccountId Unique identifier of an ad account.
     * @param countryCode Two letter country code (ISO 3166-1 alpha-2)
     * @param keywords Comma-separated keywords
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public countryKeywordsMetricsGet(adAccountId: string, countryCode: string, keywords: Array<string>, ): Observable<AxiosResponse<KeywordsMetricsArrayResponse>>;
    public countryKeywordsMetricsGet(adAccountId: string, countryCode: string, keywords: Array<string>, ): Observable<any> {

        if (adAccountId === null || adAccountId === undefined) {
            throw new Error('Required parameter adAccountId was null or undefined when calling countryKeywordsMetricsGet.');
        }

        if (countryCode === null || countryCode === undefined) {
            throw new Error('Required parameter countryCode was null or undefined when calling countryKeywordsMetricsGet.');
        }

        if (keywords === null || keywords === undefined) {
            throw new Error('Required parameter keywords was null or undefined when calling countryKeywordsMetricsGet.');
        }

        let queryParameters = new URLSearchParams();
        if (countryCode !== undefined && countryCode !== null) {
            queryParameters.append('country_code', <any>countryCode);
        }
        if (keywords) {
            queryParameters['keywords'] = keywords.join(COLLECTION_FORMATS['csv']);
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
        return this.httpClient.get<KeywordsMetricsArrayResponse>(`${this.basePath}/ad_accounts/${encodeURIComponent(String(ad_account_id))}/keywords/metrics`,
            {
                params: queryParameters,
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * Create keywords
     * &lt;p&gt;Create keywords for following entity types(advertiser, campaign, ad group or ad).&lt;/p&gt; &lt;p&gt;For more information, see &lt;a target&#x3D;\&quot;_blank\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/keyword-targeting\&quot;&gt;Keyword targeting&lt;/a&gt;.&lt;/p&gt; &lt;p&gt;&lt;b&gt;Notes:&lt;/b&gt;&lt;/p&gt; &lt;ul style&#x3D;\&quot;list-style-type: square;\&quot;&gt; &lt;li&gt;Advertisers and campaigns can only be assigned keywords with excluding (\&#39;_NEGATIVE\&#39;).&lt;/li&gt; &lt;li&gt;All keyword match types are available for ad groups.&lt;/li&gt; &lt;/ul&gt; &lt;p&gt;For more information on match types, see &lt;a  target&#x3D;\&quot;_blank\&quot; href&#x3D;\&quot;/docs/ads/targeting/#Match%20type%20and%20targeting%20level\&quot;&gt;match type enums&lt;/a&gt;.&lt;/p&gt; &lt;p&gt;&lt;b&gt;Returns:&lt;/b&gt;&lt;/p&gt; &lt;ul style&#x3D;\&quot;list-style-type: square;\&quot;&gt; &lt;li&gt;&lt;p&gt;A successful call returns an object containing an array of new keyword objects and an empty &amp;quot;errors&amp;quot; object array.&lt;/p&gt;&lt;/li&gt; &lt;li&gt;&lt;p&gt;An unsuccessful call returns an empty keywords array, and, instead, inserts the entire object with nulled/negated properties into the &amp;quot;errors&amp;quot; object array:&lt;/p&gt; &lt;pre class&#x3D;\&quot;last literal-block\&quot;&gt; { \&quot;keywords\&quot;: [], \&quot;errors\&quot;: [ { \&quot;data\&quot;: { \&quot;archived\&quot;: null, \&quot;match_type\&quot;: \&quot;EXACT\&quot;, \&quot;parent_type\&quot;: null, \&quot;value\&quot;: \&quot;foobar\&quot;, \&quot;parent_id\&quot;: null, \&quot;type\&quot;: \&quot;keyword\&quot;, \&quot;id\&quot;: null }, \&quot;error_messages\&quot;: [ \&quot;Advertisers and Campaigns only accept excluded targeting attributes.\&quot; ] } } &lt;/pre&gt;&lt;/li&gt; &lt;/ul&gt; &lt;p&gt;&lt;b&gt;Rate limit&lt;/b&gt;: &lt;a href&#x3D;\&quot;/docs/redoc/#tag/Rate-Limits\&quot;&gt;WRITE&lt;/a&gt;.&lt;/p&gt;
     * @param adAccountId Unique identifier of an ad account.
     * @param keywordsRequest 
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public keywordsCreate(adAccountId: string, keywordsRequest: KeywordsRequest, ): Observable<AxiosResponse<KeywordsResponse>>;
    public keywordsCreate(adAccountId: string, keywordsRequest: KeywordsRequest, ): Observable<any> {

        if (adAccountId === null || adAccountId === undefined) {
            throw new Error('Required parameter adAccountId was null or undefined when calling keywordsCreate.');
        }

        if (keywordsRequest === null || keywordsRequest === undefined) {
            throw new Error('Required parameter keywordsRequest was null or undefined when calling keywordsCreate.');
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
            'application/json'
        ];
        const httpContentTypeSelected: string | undefined = this.configuration.selectHeaderContentType(consumes);
        if (httpContentTypeSelected != undefined) {
            headers['Content-Type'] = httpContentTypeSelected;
        }
        return this.httpClient.post<KeywordsResponse>(`${this.basePath}/ad_accounts/${encodeURIComponent(String(ad_account_id))}/keywords`,
            keywordsRequest,
            {
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * Get keywords
     * &lt;p&gt;Get a list of keywords based on the filters provided. If no filter is provided, it will default to the ad_account_id filter, which means it will only return keywords that specifically have parent_id set to the ad_account_id. Note: Keywords can have ad_account_ids, campaign_ids, and ad_group_ids set as their parent_ids. Keywords created through Ads Manager will have their parent_id set to an ad_group_id, not ad_account_id.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a target&#x3D;\&quot;_blank\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/keyword-targeting\&quot;&gt;Keyword targeting&lt;/a&gt;.&lt;/p&gt; &lt;p&gt;&lt;b&gt;Notes:&lt;/b&gt;&lt;/p&gt; &lt;ul style&#x3D;\&quot;list-style-type: square;\&quot;&gt; &lt;li&gt;Advertisers and campaigns can only be assigned keywords with excluding (\&#39;_NEGATIVE\&#39;).&lt;/li&gt; &lt;li&gt;All keyword match types are available for ad groups.&lt;/li&gt; &lt;/ul&gt; &lt;p&gt;For more information on match types, see &lt;a target&#x3D;\&quot;_blank\&quot; href&#x3D;\&quot;/docs/ads/targeting/#Match%20type%20and%20targeting%20level\&quot;&gt;match type enums&lt;/a&gt;.&lt;/p&gt; &lt;p&gt;&lt;b&gt;Returns:&lt;/b&gt;&lt;/p&gt; &lt;ul style&#x3D;\&quot;list-style-type: square;\&quot;&gt; &lt;li&gt;&lt;p&gt;A successful call returns an object containing an array of new keyword objects and an empty &amp;quot;errors&amp;quot; object array.&lt;/p&gt;&lt;/li&gt; &lt;li&gt;&lt;p&gt;An unsuccessful call returns an empty keywords array, and, instead, inserts the entire object with nulled/negated properties into the &amp;quot;errors&amp;quot; object array:&lt;/p&gt; &lt;pre class&#x3D;\&quot;last literal-block\&quot;&gt; { \&quot;keywords\&quot;: [], \&quot;errors\&quot;: [ { \&quot;data\&quot;: { \&quot;archived\&quot;: null, \&quot;match_type\&quot;: \&quot;EXACT\&quot;, \&quot;parent_type\&quot;: null, \&quot;value\&quot;: \&quot;foobar\&quot;, \&quot;parent_id\&quot;: null, \&quot;type\&quot;: \&quot;keyword\&quot;, \&quot;id\&quot;: null }, \&quot;error_messages\&quot;: [ \&quot;Advertisers and Campaigns only accept excluded targeting attributes.\&quot; ] } } &lt;/pre&gt;&lt;/li&gt; &lt;/ul&gt;
     * @param adAccountId Unique identifier of an ad account.
     * @param campaignId Campaign Id to use to filter the results.
     * @param adGroupId Ad group Id.
     * @param matchTypes Keyword &lt;a target&#x3D;\&quot;_blank\&quot; href&#x3D;\&quot;/docs/ads/targeting/#Match%20type%20and%20targeting%20level\&quot;&gt;match type&lt;/a&gt;
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/getting-started/pagination/\&#39;&gt;Pagination&lt;/a&gt; for more information.
     * @param bookmark Cursor used to fetch the next page of items
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public keywordsGet(adAccountId: string, campaignId?: string, adGroupId?: string, matchTypes?: Array<MatchType>, pageSize?: number, bookmark?: string, ): Observable<AxiosResponse<KeywordsGet200Response>>;
    public keywordsGet(adAccountId: string, campaignId?: string, adGroupId?: string, matchTypes?: Array<MatchType>, pageSize?: number, bookmark?: string, ): Observable<any> {

        if (adAccountId === null || adAccountId === undefined) {
            throw new Error('Required parameter adAccountId was null or undefined when calling keywordsGet.');
        }






        let queryParameters = new URLSearchParams();
        if (campaignId !== undefined && campaignId !== null) {
            queryParameters.append('campaign_id', <any>campaignId);
        }
        if (adGroupId !== undefined && adGroupId !== null) {
            queryParameters.append('ad_group_id', <any>adGroupId);
        }
        if (matchTypes) {
            matchTypes.forEach((element) => {
                queryParameters.append('match_types', <any>element);
            })
        }
        if (pageSize !== undefined && pageSize !== null) {
            queryParameters.append('page_size', <any>pageSize);
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
        return this.httpClient.get<KeywordsGet200Response>(`${this.basePath}/ad_accounts/${encodeURIComponent(String(ad_account_id))}/keywords`,
            {
                params: queryParameters,
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * Update keywords
     * &lt;p&gt;Update one or more keywords\&#39; bid and archived fields.&lt;/p&gt; &lt;p&gt;Archiving a keyword effectively deletes it - keywords no longer receive metrics and no longer visible within the parent entity\&#39;s keywords list.&lt;/p&gt;
     * @param adAccountId Unique identifier of an ad account.
     * @param keywordUpdateBody 
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public keywordsUpdate(adAccountId: string, keywordUpdateBody: KeywordUpdateBody, ): Observable<AxiosResponse<KeywordsResponse>>;
    public keywordsUpdate(adAccountId: string, keywordUpdateBody: KeywordUpdateBody, ): Observable<any> {

        if (adAccountId === null || adAccountId === undefined) {
            throw new Error('Required parameter adAccountId was null or undefined when calling keywordsUpdate.');
        }

        if (keywordUpdateBody === null || keywordUpdateBody === undefined) {
            throw new Error('Required parameter keywordUpdateBody was null or undefined when calling keywordsUpdate.');
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
            'application/json'
        ];
        const httpContentTypeSelected: string | undefined = this.configuration.selectHeaderContentType(consumes);
        if (httpContentTypeSelected != undefined) {
            headers['Content-Type'] = httpContentTypeSelected;
        }
        return this.httpClient.patch<KeywordsResponse>(`${this.basePath}/ad_accounts/${encodeURIComponent(String(ad_account_id))}/keywords`,
            keywordUpdateBody,
            {
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * List trending keywords
     * &lt;p&gt;Get the top trending search keywords among the Pinterest user audience.&lt;/p&gt; &lt;p&gt;Trending keywords can be used to inform ad targeting, budget strategy, and creative decisions about which products and Pins will resonate with your audience.&lt;/p&gt; &lt;p&gt;Geographic, demographic and interest-based filters are available to narrow down to the top trends among a specific audience. Multiple trend types are supported that can be used to identify newly-popular, evergreen or seasonal keywords.&lt;/p&gt; &lt;p&gt;For an interactive way to explore this data, please visit &lt;a href&#x3D;\&quot;https://trends.pinterest.com\&quot;&gt;trends.pinterest.com&lt;/a&gt;.
     * @param region The geographic region of interest. Only top trends within the specified region will be returned.&lt;br /&gt; The &#x60;region&#x60; parameter is formatted as ISO 3166-2 country codes delimited by &#x60;+&#x60;, corresponding to the following geographic areas: - &#x60;US&#x60; - United States - &#x60;CA&#x60; - Canada - &#x60;DE&#x60; - Germany - &#x60;FR&#x60; - France - &#x60;ES&#x60; - Spain - &#x60;IT&#x60; - Italy - &#x60;DE+AT+CH&#x60; - Germanic countries - &#x60;GB+IE&#x60; - Great Britain &amp; Ireland - &#x60;IT+ES+PT+GR+MT&#x60; - Southern Europe - &#x60;PL+RO+HU+SK+CZ&#x60; - Eastern Europe - &#x60;SE+DK+FI+NO&#x60; - Nordic countries - &#x60;NL+BE+LU&#x60; - Benelux - &#x60;AR&#x60; - Argentina - &#x60;BR&#x60; - Brazil - &#x60;CO&#x60; - Colombia - &#x60;MX&#x60; - Mexico - &#x60;MX+AR+CO+CL&#x60; - Hispanic LatAm - &#x60;AU+NZ&#x60; - Australasia
     * @param trendType The methodology used to rank how trendy a keyword is. - &#x60;growing&#x60; trends have high upward growth in search volume over the last quarter - &#x60;monthly&#x60; trends have high search volume in the last month - &#x60;yearly&#x60; trends have high search volume in the last year - &#x60;seasonal&#x60; trends have high upward growth in search volume over the last month and exhibit a seasonal recurring pattern (typically annual)
     * @param interests If set, filters the results to trends associated with the specified interests.&lt;br /&gt; If unset, trends for all interests will be returned.&lt;br /&gt; The list of supported interests is: - &#x60;animals&#x60; - Animals - &#x60;architecture&#x60; - Architecture - &#x60;art&#x60; - Art - &#x60;beauty&#x60; - Beauty - &#x60;childrens_fashion&#x60; - Children\&#39;s Fashion - &#x60;design&#x60; - Design - &#x60;diy_and_crafts&#x60; - DIY &amp; Crafts - &#x60;education&#x60; - Education - &#x60;electronics&#x60; - Electronics - &#x60;entertainment&#x60; - Entertainment - &#x60;event_planning&#x60; - Event Planning - &#x60;finance&#x60; - Finance - &#x60;food_and_drinks&#x60; - Food &amp; Drink - &#x60;gardening&#x60; - Gardening - &#x60;health&#x60; - Health - &#x60;home_decor&#x60; - Home Decor - &#x60;mens_fashion&#x60; - Men\&#39;s Fashion - &#x60;parenting&#x60; - Parenting - &#x60;quotes&#x60; - Quotes - &#x60;sport&#x60; - Sports - &#x60;travel&#x60; - Travel - &#x60;vehicles&#x60; - Vehicles - &#x60;wedding&#x60; - Wedding - &#x60;womens_fashion&#x60; - Women\&#39;s Fashion
     * @param genders If set, filters the results to trends among users who identify with the specified gender(s).&lt;br /&gt; If unset, trends among all genders will be returned.&lt;br /&gt; The &#x60;unknown&#x60; group includes users with unspecified or customized gender profile settings.
     * @param ages If set, filters the results to trends among users in the specified age range(s).&lt;br /&gt; If unset, trends among all age groups will be returned.
     * @param normalizeAgainstGroup Governs how the resulting time series data will be normalized to a [0-100] scale.&lt;br /&gt; By default (&#x60;false&#x60;), the data will be normalized independently for each keyword.  The peak search volume observation in *each* keyword\&#39;s time series will be represented by the value 100.  This is ideal for analyzing when an individual keyword is expected to peak in interest.&lt;br /&gt; If set to &#x60;true&#x60;, the data will be normalized as a group.  The peak search volume observation across *all* keywords in the response will be represented by the value 100, and all other values scaled accordingly.  Use this option when you wish to compare relative search volume between multiple keywords.
     * @param limit The maximum number of trending keywords that will be returned. Keywords are returned in trend-ranked order, so a &#x60;limit&#x60; of 50 will return the top 50 trends.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public trendingKeywordsList(region: TrendsSupportedRegion, trendType: TrendType, interests?: Array<'animals' | 'architecture' | 'art' | 'beauty' | 'childrens_fashion' | 'design' | 'diy_and_crafts' | 'education' | 'electronics' | 'entertainment' | 'event_planning' | 'finance' | 'food_and_drinks' | 'gardening' | 'health' | 'home_decor' | 'mens_fashion' | 'parenting' | 'quotes' | 'sport' | 'travel' | 'vehicles' | 'wedding' | 'womens_fashion'>, genders?: Array<'female' | 'male' | 'unknown'>, ages?: Array<'18-24' | '25-34' | '35-44' | '45-49' | '50-54' | '55-64' | '65+'>, normalizeAgainstGroup?: boolean, limit?: number, ): Observable<AxiosResponse<TrendingKeywordsResponse>>;
    public trendingKeywordsList(region: TrendsSupportedRegion, trendType: TrendType, interests?: Array<'animals' | 'architecture' | 'art' | 'beauty' | 'childrens_fashion' | 'design' | 'diy_and_crafts' | 'education' | 'electronics' | 'entertainment' | 'event_planning' | 'finance' | 'food_and_drinks' | 'gardening' | 'health' | 'home_decor' | 'mens_fashion' | 'parenting' | 'quotes' | 'sport' | 'travel' | 'vehicles' | 'wedding' | 'womens_fashion'>, genders?: Array<'female' | 'male' | 'unknown'>, ages?: Array<'18-24' | '25-34' | '35-44' | '45-49' | '50-54' | '55-64' | '65+'>, normalizeAgainstGroup?: boolean, limit?: number, ): Observable<any> {

        if (region === null || region === undefined) {
            throw new Error('Required parameter region was null or undefined when calling trendingKeywordsList.');
        }

        if (trendType === null || trendType === undefined) {
            throw new Error('Required parameter trendType was null or undefined when calling trendingKeywordsList.');
        }






        let queryParameters = new URLSearchParams();
        if (interests) {
            interests.forEach((element) => {
                queryParameters.append('interests', <any>element);
            })
        }
        if (genders) {
            genders.forEach((element) => {
                queryParameters.append('genders', <any>element);
            })
        }
        if (ages) {
            ages.forEach((element) => {
                queryParameters.append('ages', <any>element);
            })
        }
        if (normalizeAgainstGroup !== undefined && normalizeAgainstGroup !== null) {
            queryParameters.append('normalize_against_group', <any>normalizeAgainstGroup);
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
        return this.httpClient.get<TrendingKeywordsResponse>(`${this.basePath}/trends/keywords/${encodeURIComponent(String(region))}/top/${encodeURIComponent(String(trend_type))}`,
            {
                params: queryParameters,
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
}
