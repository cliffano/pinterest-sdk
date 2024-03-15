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
import { AudienceDefinitionResponse } from '../model/audienceDefinitionResponse';
import { AudienceInsightType } from '../model/audienceInsightType';
import { AudienceInsightsResponse } from '../model/audienceInsightsResponse';
import { Configuration } from '../configuration';


@Injectable()
export class AudienceInsightsService {

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
     * Get audience insights
     * Get Audience Insights for an ad account. The response will return insights for 3 types of audiences: the ad account\&#39;s engaged audience on Pinterest, the ad account\&#39;s total audience on Pinterest and Pinterest\&#39;s total audience.&lt;p/&gt; &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/audience-insights\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Learn more about Audience Insights&lt;/a&gt;.
     * @param adAccountId Unique identifier of an ad account.
     * @param audienceInsightType Type of audience insights.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public audienceInsightsGet(adAccountId: string, audienceInsightType: AudienceInsightType, ): Observable<AxiosResponse<AudienceInsightsResponse>>;
    public audienceInsightsGet(adAccountId: string, audienceInsightType: AudienceInsightType, ): Observable<any> {

        if (adAccountId === null || adAccountId === undefined) {
            throw new Error('Required parameter adAccountId was null or undefined when calling audienceInsightsGet.');
        }

        if (audienceInsightType === null || audienceInsightType === undefined) {
            throw new Error('Required parameter audienceInsightType was null or undefined when calling audienceInsightsGet.');
        }

        let queryParameters = new URLSearchParams();
        if (audienceInsightType !== undefined && audienceInsightType !== null) {
            queryParameters.append('audience_insight_type', <any>audienceInsightType);
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
        return this.httpClient.get<AudienceInsightsResponse>(`${this.basePath}/ad_accounts/${encodeURIComponent(String(ad_account_id))}/audience_insights`,
            {
                params: queryParameters,
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
    /**
     * Get audience insights scope and type
     * Get the scope and type of available audiences, which along with a date, is an audience that has recently had an interaction (referred to here as a type) on pins. Interacted pins can belong to at least the most common **partner** or **Pinterest** scopes. This means that user interactions made on advertiser or partner pins will have the **partner** scope. You can also have user interactions performed in general on Pinterest with the **Pinterest** scope. In that case, you can then use the returned type and scope values together on requests to other endpoints to retrieve insight metrics for a desired audience.
     * @param adAccountId Unique identifier of an ad account.
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public audienceInsightsScopeAndTypeGet(adAccountId: string, ): Observable<AxiosResponse<AudienceDefinitionResponse>>;
    public audienceInsightsScopeAndTypeGet(adAccountId: string, ): Observable<any> {

        if (adAccountId === null || adAccountId === undefined) {
            throw new Error('Required parameter adAccountId was null or undefined when calling audienceInsightsScopeAndTypeGet.');
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
        return this.httpClient.get<AudienceDefinitionResponse>(`${this.basePath}/ad_accounts/${encodeURIComponent(String(ad_account_id))}/insights/audiences`,
            {
                withCredentials: this.configuration.withCredentials,
                headers: headers
            }
        );
    }
}