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
    OrderLine,
    OrderLineFromJSON,
    OrderLineToJSON,
    OrderLinesList200Response,
    OrderLinesList200ResponseFromJSON,
    OrderLinesList200ResponseToJSON,
} from '../models';

export interface OrderLinesGetRequest {
    adAccountId: string;
    orderLineId: string;
}

export interface OrderLinesListRequest {
    adAccountId: string;
    pageSize?: number;
    order?: OrderLinesListOrderEnum;
    bookmark?: string;
}


/**
 * Get a specific existing order line associated with an ad account.
 * Get order line
 */
function orderLinesGetRaw<T>(requestParameters: OrderLinesGetRequest, requestConfig: runtime.TypedQueryConfig<T, OrderLine> = {}): QueryConfig<T> {
    if (requestParameters.adAccountId === null || requestParameters.adAccountId === undefined) {
        throw new runtime.RequiredError('adAccountId','Required parameter requestParameters.adAccountId was null or undefined when calling orderLinesGet.');
    }

    if (requestParameters.orderLineId === null || requestParameters.orderLineId === undefined) {
        throw new runtime.RequiredError('orderLineId','Required parameter requestParameters.orderLineId was null or undefined when calling orderLinesGet.');
    }

    let queryParameters = null;


    const headerParameters : runtime.HttpHeaders = {};


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["ads:read"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/ad_accounts/{ad_account_id}/order_lines/{order_line_id}`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters.adAccountId))).replace(`{${"order_line_id"}}`, encodeURIComponent(String(requestParameters.orderLineId))),
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
        config.transform = (body: ResponseBody, text: ResponseBody) => requestTransform(OrderLineFromJSON(body), text);
    }

    return config;
}

/**
* Get a specific existing order line associated with an ad account.
* Get order line
*/
export function orderLinesGet<T>(requestParameters: OrderLinesGetRequest, requestConfig?: runtime.TypedQueryConfig<T, OrderLine>): QueryConfig<T> {
    return orderLinesGetRaw(requestParameters, requestConfig);
}

/**
 * List existing order lines associated with an ad account.
 * Get order lines
 */
function orderLinesListRaw<T>(requestParameters: OrderLinesListRequest, requestConfig: runtime.TypedQueryConfig<T, OrderLinesList200Response> = {}): QueryConfig<T> {
    if (requestParameters.adAccountId === null || requestParameters.adAccountId === undefined) {
        throw new runtime.RequiredError('adAccountId','Required parameter requestParameters.adAccountId was null or undefined when calling orderLinesList.');
    }

    let queryParameters = null;

    queryParameters = {};


    if (requestParameters.pageSize !== undefined) {
        queryParameters['page_size'] = requestParameters.pageSize;
    }


    if (requestParameters.order !== undefined) {
        queryParameters['order'] = requestParameters.order;
    }


    if (requestParameters.bookmark !== undefined) {
        queryParameters['bookmark'] = requestParameters.bookmark;
    }

    const headerParameters : runtime.HttpHeaders = {};


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["ads:read"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/ad_accounts/{ad_account_id}/order_lines`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters.adAccountId))),
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
        config.transform = (body: ResponseBody, text: ResponseBody) => requestTransform(OrderLinesList200ResponseFromJSON(body), text);
    }

    return config;
}

/**
* List existing order lines associated with an ad account.
* Get order lines
*/
export function orderLinesList<T>(requestParameters: OrderLinesListRequest, requestConfig?: runtime.TypedQueryConfig<T, OrderLinesList200Response>): QueryConfig<T> {
    return orderLinesListRaw(requestParameters, requestConfig);
}


/**
    * @export
    * @enum {string}
    */
export enum OrderLinesListOrderEnum {
    Ascending = 'ASCENDING',
    Descending = 'DESCENDING'
}
