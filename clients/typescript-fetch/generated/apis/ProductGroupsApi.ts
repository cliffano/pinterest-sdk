/* tslint:disable */
/* eslint-disable */
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


import * as runtime from '../runtime';
import type {
  AdAccountsCatalogsProductGroupsList200Response,
} from '../models/index';
import {
    AdAccountsCatalogsProductGroupsList200ResponseFromJSON,
    AdAccountsCatalogsProductGroupsList200ResponseToJSON,
} from '../models/index';

export interface AdAccountsCatalogsProductGroupsListRequest {
    adAccountId: string;
    feedProfileId?: string;
}

/**
 * 
 */
export class ProductGroupsApi extends runtime.BaseAPI {

    /**
     * This endpoint is completely deprecated. Please use <a href=\'/docs/api/v5/#operation/catalogs_product_groups/list\'>List product groups</a> from Catalogs API instead.
     * Get catalog product groups
     * @deprecated
     */
    async adAccountsCatalogsProductGroupsListRaw(requestParameters: AdAccountsCatalogsProductGroupsListRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<AdAccountsCatalogsProductGroupsList200Response>> {
        if (requestParameters['adAccountId'] == null) {
            throw new runtime.RequiredError(
                'adAccountId',
                'Required parameter "adAccountId" was null or undefined when calling adAccountsCatalogsProductGroupsList().'
            );
        }

        const queryParameters: any = {};

        if (requestParameters['feedProfileId'] != null) {
            queryParameters['feed_profile_id'] = requestParameters['feedProfileId'];
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["ads:write"]);
        }

        const response = await this.request({
            path: `/ad_accounts/{ad_account_id}/product_groups/catalogs`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters['adAccountId']))),
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => AdAccountsCatalogsProductGroupsList200ResponseFromJSON(jsonValue));
    }

    /**
     * This endpoint is completely deprecated. Please use <a href=\'/docs/api/v5/#operation/catalogs_product_groups/list\'>List product groups</a> from Catalogs API instead.
     * Get catalog product groups
     * @deprecated
     */
    async adAccountsCatalogsProductGroupsList(requestParameters: AdAccountsCatalogsProductGroupsListRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<AdAccountsCatalogsProductGroupsList200Response> {
        const response = await this.adAccountsCatalogsProductGroupsListRaw(requestParameters, initOverrides);
        return await response.value();
    }

}
