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
    DetailedError,
    DetailedErrorFromJSON,
    DetailedErrorToJSON,
    IntegrationLogsRequest,
    IntegrationLogsRequestFromJSON,
    IntegrationLogsRequestToJSON,
    IntegrationLogsSuccessResponse,
    IntegrationLogsSuccessResponseFromJSON,
    IntegrationLogsSuccessResponseToJSON,
    IntegrationMetadata,
    IntegrationMetadataFromJSON,
    IntegrationMetadataToJSON,
    IntegrationRecord,
    IntegrationRecordFromJSON,
    IntegrationRecordToJSON,
    IntegrationRequest,
    IntegrationRequestFromJSON,
    IntegrationRequestToJSON,
    IntegrationRequestPatch,
    IntegrationRequestPatchFromJSON,
    IntegrationRequestPatchToJSON,
    IntegrationsGetList200Response,
    IntegrationsGetList200ResponseFromJSON,
    IntegrationsGetList200ResponseToJSON,
} from '../models';

export interface IntegrationsCommerceDelRequest {
    externalBusinessId: string;
}

export interface IntegrationsCommerceGetRequest {
    externalBusinessId: string;
}

export interface IntegrationsCommercePatchRequest {
    externalBusinessId: string;
    integrationRequestPatch?: IntegrationRequestPatch;
}

export interface IntegrationsCommercePostRequest {
    integrationRequest?: IntegrationRequest;
}

export interface IntegrationsGetByIdRequest {
    id: string;
}

export interface IntegrationsGetListRequest {
    bookmark?: string;
    pageSize?: number;
}

export interface IntegrationsLogsPostRequest {
    integrationLogsRequest: IntegrationLogsRequest;
}


/**
 * Delete commerce integration metadata for the given external business ID. Note: If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
 * Delete commerce integration
 */
function integrationsCommerceDelRaw<T>(requestParameters: IntegrationsCommerceDelRequest, requestConfig: runtime.TypedQueryConfig<T, void> = {}): QueryConfig<T> {
    if (requestParameters.externalBusinessId === null || requestParameters.externalBusinessId === undefined) {
        throw new runtime.RequiredError('externalBusinessId','Required parameter requestParameters.externalBusinessId was null or undefined when calling integrationsCommerceDel.');
    }

    let queryParameters = null;


    const headerParameters : runtime.HttpHeaders = {};


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["ads:write"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/integrations/commerce/{external_business_id}`.replace(`{${"external_business_id"}}`, encodeURIComponent(String(requestParameters.externalBusinessId))),
        meta,
        update: requestConfig.update,
        queryKey: requestConfig.queryKey,
        optimisticUpdate: requestConfig.optimisticUpdate,
        force: requestConfig.force,
        rollback: requestConfig.rollback,
        options: {
            method: 'DELETE',
            headers: headerParameters,
        },
        body: queryParameters,
    };

    const { transform: requestTransform } = requestConfig;
    if (requestTransform) {
    }

    return config;
}

/**
* Delete commerce integration metadata for the given external business ID. Note: If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
* Delete commerce integration
*/
export function integrationsCommerceDel<T>(requestParameters: IntegrationsCommerceDelRequest, requestConfig?: runtime.TypedQueryConfig<T, void>): QueryConfig<T> {
    return integrationsCommerceDelRaw(requestParameters, requestConfig);
}

/**
 * Get commerce integration metadata associated with the given external business ID. Note: If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
 * Get commerce integration
 */
function integrationsCommerceGetRaw<T>(requestParameters: IntegrationsCommerceGetRequest, requestConfig: runtime.TypedQueryConfig<T, IntegrationMetadata> = {}): QueryConfig<T> {
    if (requestParameters.externalBusinessId === null || requestParameters.externalBusinessId === undefined) {
        throw new runtime.RequiredError('externalBusinessId','Required parameter requestParameters.externalBusinessId was null or undefined when calling integrationsCommerceGet.');
    }

    let queryParameters = null;


    const headerParameters : runtime.HttpHeaders = {};


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["ads:read"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/integrations/commerce/{external_business_id}`.replace(`{${"external_business_id"}}`, encodeURIComponent(String(requestParameters.externalBusinessId))),
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
        config.transform = (body: ResponseBody, text: ResponseBody) => requestTransform(IntegrationMetadataFromJSON(body), text);
    }

    return config;
}

/**
* Get commerce integration metadata associated with the given external business ID. Note: If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
* Get commerce integration
*/
export function integrationsCommerceGet<T>(requestParameters: IntegrationsCommerceGetRequest, requestConfig?: runtime.TypedQueryConfig<T, IntegrationMetadata>): QueryConfig<T> {
    return integrationsCommerceGetRaw(requestParameters, requestConfig);
}

/**
 * Update commerce integration metadata for the given external business ID. Note: If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
 * Update commerce integration
 */
function integrationsCommercePatchRaw<T>(requestParameters: IntegrationsCommercePatchRequest, requestConfig: runtime.TypedQueryConfig<T, IntegrationMetadata> = {}): QueryConfig<T> {
    if (requestParameters.externalBusinessId === null || requestParameters.externalBusinessId === undefined) {
        throw new runtime.RequiredError('externalBusinessId','Required parameter requestParameters.externalBusinessId was null or undefined when calling integrationsCommercePatch.');
    }

    let queryParameters = null;


    const headerParameters : runtime.HttpHeaders = {};

    headerParameters['Content-Type'] = 'application/json';


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["ads:write"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/integrations/commerce/{external_business_id}`.replace(`{${"external_business_id"}}`, encodeURIComponent(String(requestParameters.externalBusinessId))),
        meta,
        update: requestConfig.update,
        queryKey: requestConfig.queryKey,
        optimisticUpdate: requestConfig.optimisticUpdate,
        force: requestConfig.force,
        rollback: requestConfig.rollback,
        options: {
            method: 'PATCH',
            headers: headerParameters,
        },
        body: queryParameters || IntegrationRequestPatchToJSON(requestParameters.integrationRequestPatch),
    };

    const { transform: requestTransform } = requestConfig;
    if (requestTransform) {
        config.transform = (body: ResponseBody, text: ResponseBody) => requestTransform(IntegrationMetadataFromJSON(body), text);
    }

    return config;
}

/**
* Update commerce integration metadata for the given external business ID. Note: If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
* Update commerce integration
*/
export function integrationsCommercePatch<T>(requestParameters: IntegrationsCommercePatchRequest, requestConfig?: runtime.TypedQueryConfig<T, IntegrationMetadata>): QueryConfig<T> {
    return integrationsCommercePatchRaw(requestParameters, requestConfig);
}

/**
 * Create commerce integration metadata to link an external business ID with a Pinterest merchant & ad account. Note: If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
 * Create commerce integration
 */
function integrationsCommercePostRaw<T>(requestParameters: IntegrationsCommercePostRequest, requestConfig: runtime.TypedQueryConfig<T, IntegrationMetadata> = {}): QueryConfig<T> {
    let queryParameters = null;


    const headerParameters : runtime.HttpHeaders = {};

    headerParameters['Content-Type'] = 'application/json';


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["ads:write"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/integrations/commerce`,
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
        body: queryParameters || IntegrationRequestToJSON(requestParameters.integrationRequest),
    };

    const { transform: requestTransform } = requestConfig;
    if (requestTransform) {
        config.transform = (body: ResponseBody, text: ResponseBody) => requestTransform(IntegrationMetadataFromJSON(body), text);
    }

    return config;
}

/**
* Create commerce integration metadata to link an external business ID with a Pinterest merchant & ad account. Note: If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
* Create commerce integration
*/
export function integrationsCommercePost<T>(requestParameters: IntegrationsCommercePostRequest, requestConfig?: runtime.TypedQueryConfig<T, IntegrationMetadata>): QueryConfig<T> {
    return integrationsCommercePostRaw(requestParameters, requestConfig);
}

/**
 * Get integration metadata by ID. Note: If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
 * Get integration metadata
 */
function integrationsGetByIdRaw<T>(requestParameters: IntegrationsGetByIdRequest, requestConfig: runtime.TypedQueryConfig<T, IntegrationRecord> = {}): QueryConfig<T> {
    if (requestParameters.id === null || requestParameters.id === undefined) {
        throw new runtime.RequiredError('id','Required parameter requestParameters.id was null or undefined when calling integrationsGetById.');
    }

    let queryParameters = null;


    const headerParameters : runtime.HttpHeaders = {};


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["ads:read"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/integrations/{id}`.replace(`{${"id"}}`, encodeURIComponent(String(requestParameters.id))),
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
        config.transform = (body: ResponseBody, text: ResponseBody) => requestTransform(IntegrationRecordFromJSON(body), text);
    }

    return config;
}

/**
* Get integration metadata by ID. Note: If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
* Get integration metadata
*/
export function integrationsGetById<T>(requestParameters: IntegrationsGetByIdRequest, requestConfig?: runtime.TypedQueryConfig<T, IntegrationRecord>): QueryConfig<T> {
    return integrationsGetByIdRaw(requestParameters, requestConfig);
}

/**
 * Get integration metadata list. Note: If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
 * Get integration metadata list
 */
function integrationsGetListRaw<T>(requestParameters: IntegrationsGetListRequest, requestConfig: runtime.TypedQueryConfig<T, IntegrationsGetList200Response> = {}): QueryConfig<T> {
    let queryParameters = null;

    queryParameters = {};


    if (requestParameters.bookmark !== undefined) {
        queryParameters['bookmark'] = requestParameters.bookmark;
    }


    if (requestParameters.pageSize !== undefined) {
        queryParameters['page_size'] = requestParameters.pageSize;
    }

    const headerParameters : runtime.HttpHeaders = {};


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["ads:read"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/integrations`,
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
        config.transform = (body: ResponseBody, text: ResponseBody) => requestTransform(IntegrationsGetList200ResponseFromJSON(body), text);
    }

    return config;
}

/**
* Get integration metadata list. Note: If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
* Get integration metadata list
*/
export function integrationsGetList<T>(requestParameters: IntegrationsGetListRequest, requestConfig?: runtime.TypedQueryConfig<T, IntegrationsGetList200Response>): QueryConfig<T> {
    return integrationsGetListRaw(requestParameters, requestConfig);
}

/**
 * This endpoint receives batched logs from integration applications on partner platforms. Note: If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
 * Receives batched logs from integration applications.
 */
function integrationsLogsPostRaw<T>(requestParameters: IntegrationsLogsPostRequest, requestConfig: runtime.TypedQueryConfig<T, IntegrationLogsSuccessResponse> = {}): QueryConfig<T> {
    if (requestParameters.integrationLogsRequest === null || requestParameters.integrationLogsRequest === undefined) {
        throw new runtime.RequiredError('integrationLogsRequest','Required parameter requestParameters.integrationLogsRequest was null or undefined when calling integrationsLogsPost.');
    }

    let queryParameters = null;


    const headerParameters : runtime.HttpHeaders = {};

    headerParameters['Content-Type'] = 'application/json';


    const { meta = {} } = requestConfig;

    meta.authType = ['oauth', ["ads:write"]];
    const config: QueryConfig<T> = {
        url: `${runtime.Configuration.basePath}/integrations/logs`,
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
        body: queryParameters || IntegrationLogsRequestToJSON(requestParameters.integrationLogsRequest),
    };

    const { transform: requestTransform } = requestConfig;
    if (requestTransform) {
        config.transform = (body: ResponseBody, text: ResponseBody) => requestTransform(IntegrationLogsSuccessResponseFromJSON(body), text);
    }

    return config;
}

/**
* This endpoint receives batched logs from integration applications on partner platforms. Note: If you\'re interested in joining the beta, please reach out to your Pinterest account manager.
* Receives batched logs from integration applications.
*/
export function integrationsLogsPost<T>(requestParameters: IntegrationsLogsPostRequest, requestConfig?: runtime.TypedQueryConfig<T, IntegrationLogsSuccessResponse>): QueryConfig<T> {
    return integrationsLogsPostRaw(requestParameters, requestConfig);
}

