// tslint:disable
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


import { HttpMethods, QueryConfig, ResponseBody, ResponseText } from 'redux-query';
import * as runtime from '../runtime';
import {
    AdAccountsCatalogsProductGroupsList200Response,
    AdAccountsCatalogsProductGroupsList200ResponseFromJSON,
    AdAccountsCatalogsProductGroupsList200ResponseToJSON,
} from '../models';

export interface AdAccountsCatalogsProductGroupsListRequest {
    adAccountId: string;
    feedProfileId?: string;
}


/**
 * This endpoint is completely deprecated. Please use <a href=\'/docs/api/v5/#operation/catalogs_product_groups/list\'>List product groups</a> from Catalogs API instead.
 * Get catalog product groups
 */
function adAccountsCatalogsProductGroupsListRaw<T>(requestParameters: AdAccountsCatalogsProductGroupsListRequest, requestConfig: runtime.TypedQueryConfig<T, AdAccountsCatalogsProductGroupsList200Response> = {}): QueryConfig<T> {
    if (requestParameters.adAccountId === null || requestParameters.adAccountId === undefined) {
        throw new runtime.RequiredError('adAccountId','Required parameter requestParameters.adAccountId was null or undefined when calling adAccountsCatalogsProductGroupsList.');
    }

    let queryParameters = null;

    queryParameters = {};


    if (requestParameters.feedProfileId !== undefined) {
        queryParameters['feed_profile_id'] = requestParameters.feedProfileId;
    }

    const headerParameters : runtime.HttpHeaders = {};


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["ads:write"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/ad_accounts/{ad_account_id}/product_groups/catalogs`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters.adAccountId))),
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
        config.transform = (body: ResponseBody, text: ResponseBody) => requestTransform(AdAccountsCatalogsProductGroupsList200ResponseFromJSON(body), text);
    }

    return config;
}

/**
* This endpoint is completely deprecated. Please use <a href=\'/docs/api/v5/#operation/catalogs_product_groups/list\'>List product groups</a> from Catalogs API instead.
* Get catalog product groups
*/
export function adAccountsCatalogsProductGroupsList<T>(requestParameters: AdAccountsCatalogsProductGroupsListRequest, requestConfig?: runtime.TypedQueryConfig<T, AdAccountsCatalogsProductGroupsList200Response>): QueryConfig<T> {
    return adAccountsCatalogsProductGroupsListRaw(requestParameters, requestConfig);
}

