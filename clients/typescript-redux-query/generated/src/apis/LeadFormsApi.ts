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
    LeadFormResponse,
    LeadFormResponseFromJSON,
    LeadFormResponseToJSON,
    LeadFormTestRequest,
    LeadFormTestRequestFromJSON,
    LeadFormTestRequestToJSON,
    LeadFormTestResponse,
    LeadFormTestResponseFromJSON,
    LeadFormTestResponseToJSON,
    LeadFormsList200Response,
    LeadFormsList200ResponseFromJSON,
    LeadFormsList200ResponseToJSON,
} from '../models';

export interface LeadFormGetRequest {
    adAccountId: string;
    leadFormId: string;
}

export interface LeadFormTestCreateRequest {
    adAccountId: string;
    leadFormId: string;
    leadFormTestRequest: LeadFormTestRequest;
}

export interface LeadFormsListRequest {
    adAccountId: string;
    pageSize?: number;
    order?: LeadFormsListOrderEnum;
    bookmark?: string;
}


/**
 * Gets a lead form given it\'s ID. It must also be associated with the provided ad account ID. Retrieving an advertiser\'s lead form will only contain results if you\'re a part of the Lead ads beta. If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
 * Get lead form by id
 */
function leadFormGetRaw<T>(requestParameters: LeadFormGetRequest, requestConfig: runtime.TypedQueryConfig<T, LeadFormResponse> = {}): QueryConfig<T> {
    if (requestParameters.adAccountId === null || requestParameters.adAccountId === undefined) {
        throw new runtime.RequiredError('adAccountId','Required parameter requestParameters.adAccountId was null or undefined when calling leadFormGet.');
    }

    if (requestParameters.leadFormId === null || requestParameters.leadFormId === undefined) {
        throw new runtime.RequiredError('leadFormId','Required parameter requestParameters.leadFormId was null or undefined when calling leadFormGet.');
    }

    let queryParameters = null;


    const headerParameters : runtime.HttpHeaders = {};


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["ads:read"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/ad_accounts/{ad_account_id}/lead_forms/{lead_form_id}`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters.adAccountId))).replace(`{${"lead_form_id"}}`, encodeURIComponent(String(requestParameters.leadFormId))),
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
        config.transform = (body: ResponseBody, text: ResponseBody) => requestTransform(LeadFormResponseFromJSON(body), text);
    }

    return config;
}

/**
* Gets a lead form given it\'s ID. It must also be associated with the provided ad account ID. Retrieving an advertiser\'s lead form will only contain results if you\'re a part of the Lead ads beta. If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
* Get lead form by id
*/
export function leadFormGet<T>(requestParameters: LeadFormGetRequest, requestConfig?: runtime.TypedQueryConfig<T, LeadFormResponse>): QueryConfig<T> {
    return leadFormGetRaw(requestParameters, requestConfig);
}

/**
 * Create lead form test data based on the list of answers provided as part of the body. - List of answers should follow the questions creation order.  <strong>This endpoint is currently in beta and not available to all apps. <a href=\'/docs/new/about-beta-access/\'>Learn more</a>.</strong>
 * Create lead form test data
 */
function leadFormTestCreateRaw<T>(requestParameters: LeadFormTestCreateRequest, requestConfig: runtime.TypedQueryConfig<T, LeadFormTestResponse> = {}): QueryConfig<T> {
    if (requestParameters.adAccountId === null || requestParameters.adAccountId === undefined) {
        throw new runtime.RequiredError('adAccountId','Required parameter requestParameters.adAccountId was null or undefined when calling leadFormTestCreate.');
    }

    if (requestParameters.leadFormId === null || requestParameters.leadFormId === undefined) {
        throw new runtime.RequiredError('leadFormId','Required parameter requestParameters.leadFormId was null or undefined when calling leadFormTestCreate.');
    }

    if (requestParameters.leadFormTestRequest === null || requestParameters.leadFormTestRequest === undefined) {
        throw new runtime.RequiredError('leadFormTestRequest','Required parameter requestParameters.leadFormTestRequest was null or undefined when calling leadFormTestCreate.');
    }

    let queryParameters = null;


    const headerParameters : runtime.HttpHeaders = {};

    headerParameters['Content-Type'] = 'application/json';


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["ads:write"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/ad_accounts/{ad_account_id}/lead_forms/{lead_form_id}/test`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters.adAccountId))).replace(`{${"lead_form_id"}}`, encodeURIComponent(String(requestParameters.leadFormId))),
        meta,
        update: requestConfig.update,
        queryKey: requestConfig.queryKey,
        optimisticUpdate: requestConfig.optimisticUpdate,
        force: requestConfig.force,
        rollback: requestConfig.rollback,
        options: {
            method: 'POST',
            headers: headerParameters,
        },
        body: queryParameters || LeadFormTestRequestToJSON(requestParameters.leadFormTestRequest),
    };

    const { transform: requestTransform } = requestConfig;
    if (requestTransform) {
        config.transform = (body: ResponseBody, text: ResponseBody) => requestTransform(LeadFormTestResponseFromJSON(body), text);
    }

    return config;
}

/**
* Create lead form test data based on the list of answers provided as part of the body. - List of answers should follow the questions creation order.  <strong>This endpoint is currently in beta and not available to all apps. <a href=\'/docs/new/about-beta-access/\'>Learn more</a>.</strong>
* Create lead form test data
*/
export function leadFormTestCreate<T>(requestParameters: LeadFormTestCreateRequest, requestConfig?: runtime.TypedQueryConfig<T, LeadFormTestResponse>): QueryConfig<T> {
    return leadFormTestCreateRaw(requestParameters, requestConfig);
}

/**
 * Gets all Lead Forms associated with an ad account ID. Retrieving an advertiser\'s list of lead forms will only contain results if you\'re a part of the Lead ads beta.  If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
 * Get lead forms
 */
function leadFormsListRaw<T>(requestParameters: LeadFormsListRequest, requestConfig: runtime.TypedQueryConfig<T, LeadFormsList200Response> = {}): QueryConfig<T> {
    if (requestParameters.adAccountId === null || requestParameters.adAccountId === undefined) {
        throw new runtime.RequiredError('adAccountId','Required parameter requestParameters.adAccountId was null or undefined when calling leadFormsList.');
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
        url: `${runtime.Configuration.basePath}/ad_accounts/{ad_account_id}/lead_forms`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters.adAccountId))),
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
        config.transform = (body: ResponseBody, text: ResponseBody) => requestTransform(LeadFormsList200ResponseFromJSON(body), text);
    }

    return config;
}

/**
* Gets all Lead Forms associated with an ad account ID. Retrieving an advertiser\'s list of lead forms will only contain results if you\'re a part of the Lead ads beta.  If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
* Get lead forms
*/
export function leadFormsList<T>(requestParameters: LeadFormsListRequest, requestConfig?: runtime.TypedQueryConfig<T, LeadFormsList200Response>): QueryConfig<T> {
    return leadFormsListRaw(requestParameters, requestConfig);
}


/**
    * @export
    * @enum {string}
    */
export enum LeadFormsListOrderEnum {
    Ascending = 'ASCENDING',
    Descending = 'DESCENDING'
}
