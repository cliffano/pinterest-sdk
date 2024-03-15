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

import { AdAccountsCatalogsProductGroupsList200Response } from '../model/adAccountsCatalogsProductGroupsList200Response';

import { COLLECTION_FORMATS }  from '../variables';



@injectable()
export class ProductGroupsService {
    private basePath: string = 'https://api.pinterest.com/v5';

    constructor(@inject('IApiHttpClient') private httpClient: IHttpClient,
        @inject('IAPIConfiguration') private APIConfiguration: IAPIConfiguration ) {
        if(this.APIConfiguration.basePath)
            this.basePath = this.APIConfiguration.basePath;
    }

    /**
     * Get catalog product groups
     * This endpoint is completely deprecated. Please use &lt;a href&#x3D;\&#39;/docs/api/v5/#operation/catalogs_product_groups/list\&#39;&gt;List product groups&lt;/a&gt; from Catalogs API instead.
     * @param adAccountId Unique identifier of an ad account.
     * @param feedProfileId The feed profile id whose catalog product groups we want to return.
     
     */
    public adAccountsCatalogsProductGroupsList(adAccountId: string, feedProfileId?: string, observe?: 'body', headers?: Headers): Observable<AdAccountsCatalogsProductGroupsList200Response>;
    public adAccountsCatalogsProductGroupsList(adAccountId: string, feedProfileId?: string, observe?: 'response', headers?: Headers): Observable<HttpResponse<AdAccountsCatalogsProductGroupsList200Response>>;
    public adAccountsCatalogsProductGroupsList(adAccountId: string, feedProfileId?: string, observe: any = 'body', headers: Headers = {}): Observable<any> {
        if (adAccountId === null || adAccountId === undefined){
            throw new Error('Required parameter adAccountId was null or undefined when calling adAccountsCatalogsProductGroupsList.');
        }

        let queryParameters: string[] = [];
        if (feedProfileId !== undefined) {
            queryParameters.push('feedProfileId='+encodeURIComponent(String(feedProfileId)));
        }

        // authentication (pinterest_oauth2) required
        if (this.APIConfiguration.accessToken) {
            let accessToken = typeof this.APIConfiguration.accessToken === 'function'
                ? this.APIConfiguration.accessToken()
                : this.APIConfiguration.accessToken;
            headers['Authorization'] = 'Bearer ' + accessToken;
        }
        headers['Accept'] = 'application/json';

        const response: Observable<HttpResponse<AdAccountsCatalogsProductGroupsList200Response>> = this.httpClient.get(`${this.basePath}/ad_accounts/${encodeURIComponent(String(adAccountId))}/product_groups/catalogs?${queryParameters.join('&')}`, headers);
        if (observe === 'body') {
               return response.pipe(
                   map((httpResponse: HttpResponse) => <AdAccountsCatalogsProductGroupsList200Response>(httpResponse.response))
               );
        }
        return response;
    }

}
