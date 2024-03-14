/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


import * as runtime from '../runtime';
import type {
  Audience,
  AudienceCreateRequest,
  AudienceUpdateRequest,
  AudiencesList200Response,
} from '../models/index';
import {
    AudienceFromJSON,
    AudienceToJSON,
    AudienceCreateRequestFromJSON,
    AudienceCreateRequestToJSON,
    AudienceUpdateRequestFromJSON,
    AudienceUpdateRequestToJSON,
    AudiencesList200ResponseFromJSON,
    AudiencesList200ResponseToJSON,
} from '../models/index';

export interface AudiencesCreateRequest {
    adAccountId: string;
    audienceCreateRequest: AudienceCreateRequest;
}

export interface AudiencesGetRequest {
    adAccountId: string;
    audienceId: string;
}

export interface AudiencesListRequest {
    adAccountId: string;
    bookmark?: string;
    entityStatuses?: Array<AudiencesListEntityStatusesEnum>;
    order?: AudiencesListOrderEnum;
    pageSize?: number;
}

export interface AudiencesUpdateRequest {
    adAccountId: string;
    audienceId: string;
    audienceUpdateRequest?: AudienceUpdateRequest;
}

/**
 * 
 */
export class AudiencesApi extends runtime.BaseAPI {

    /**
     * Create an audience you can use in targeting for specific ad groups. Targeting combines customer information with the ways users interact with Pinterest to help you reach specific groups of users; you can include or exclude specific audience_ids when you create an ad group. <p/> For more, see <a class=\"reference external\" href=\"https://help.pinterest.com/en/business/article/audience-targeting\" target=\"_blank\">Audience targeting</a>.
     * Create audience
     */
    async audiencesCreateRaw(requestParameters: AudiencesCreateRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<Audience>> {
        if (requestParameters['adAccountId'] == null) {
            throw new runtime.RequiredError(
                'adAccountId',
                'Required parameter "adAccountId" was null or undefined when calling audiencesCreate().'
            );
        }

        if (requestParameters['audienceCreateRequest'] == null) {
            throw new runtime.RequiredError(
                'audienceCreateRequest',
                'Required parameter "audienceCreateRequest" was null or undefined when calling audiencesCreate().'
            );
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["ads:write"]);
        }

        const response = await this.request({
            path: `/ad_accounts/{ad_account_id}/audiences`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters['adAccountId']))),
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: AudienceCreateRequestToJSON(requestParameters['audienceCreateRequest']),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => AudienceFromJSON(jsonValue));
    }

    /**
     * Create an audience you can use in targeting for specific ad groups. Targeting combines customer information with the ways users interact with Pinterest to help you reach specific groups of users; you can include or exclude specific audience_ids when you create an ad group. <p/> For more, see <a class=\"reference external\" href=\"https://help.pinterest.com/en/business/article/audience-targeting\" target=\"_blank\">Audience targeting</a>.
     * Create audience
     */
    async audiencesCreate(requestParameters: AudiencesCreateRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<Audience> {
        const response = await this.audiencesCreateRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Get a specific audience given the audience ID.
     * Get audience
     */
    async audiencesGetRaw(requestParameters: AudiencesGetRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<Audience>> {
        if (requestParameters['adAccountId'] == null) {
            throw new runtime.RequiredError(
                'adAccountId',
                'Required parameter "adAccountId" was null or undefined when calling audiencesGet().'
            );
        }

        if (requestParameters['audienceId'] == null) {
            throw new runtime.RequiredError(
                'audienceId',
                'Required parameter "audienceId" was null or undefined when calling audiencesGet().'
            );
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["ads:read"]);
        }

        const response = await this.request({
            path: `/ad_accounts/{ad_account_id}/audiences/{audience_id}`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters['adAccountId']))).replace(`{${"audience_id"}}`, encodeURIComponent(String(requestParameters['audienceId']))),
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => AudienceFromJSON(jsonValue));
    }

    /**
     * Get a specific audience given the audience ID.
     * Get audience
     */
    async audiencesGet(requestParameters: AudiencesGetRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<Audience> {
        const response = await this.audiencesGetRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Get list of audiences for the ad account.
     * List audiences
     */
    async audiencesListRaw(requestParameters: AudiencesListRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<AudiencesList200Response>> {
        if (requestParameters['adAccountId'] == null) {
            throw new runtime.RequiredError(
                'adAccountId',
                'Required parameter "adAccountId" was null or undefined when calling audiencesList().'
            );
        }

        const queryParameters: any = {};

        if (requestParameters['bookmark'] != null) {
            queryParameters['bookmark'] = requestParameters['bookmark'];
        }

        if (requestParameters['entityStatuses'] != null) {
            queryParameters['entity_statuses'] = requestParameters['entityStatuses'];
        }

        if (requestParameters['order'] != null) {
            queryParameters['order'] = requestParameters['order'];
        }

        if (requestParameters['pageSize'] != null) {
            queryParameters['page_size'] = requestParameters['pageSize'];
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["ads:read"]);
        }

        const response = await this.request({
            path: `/ad_accounts/{ad_account_id}/audiences`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters['adAccountId']))),
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => AudiencesList200ResponseFromJSON(jsonValue));
    }

    /**
     * Get list of audiences for the ad account.
     * List audiences
     */
    async audiencesList(requestParameters: AudiencesListRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<AudiencesList200Response> {
        const response = await this.audiencesListRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Update (edit or remove) an existing targeting audience.
     * Update audience
     */
    async audiencesUpdateRaw(requestParameters: AudiencesUpdateRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<Audience>> {
        if (requestParameters['adAccountId'] == null) {
            throw new runtime.RequiredError(
                'adAccountId',
                'Required parameter "adAccountId" was null or undefined when calling audiencesUpdate().'
            );
        }

        if (requestParameters['audienceId'] == null) {
            throw new runtime.RequiredError(
                'audienceId',
                'Required parameter "audienceId" was null or undefined when calling audiencesUpdate().'
            );
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["ads:write"]);
        }

        const response = await this.request({
            path: `/ad_accounts/{ad_account_id}/audiences/{audience_id}`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters['adAccountId']))).replace(`{${"audience_id"}}`, encodeURIComponent(String(requestParameters['audienceId']))),
            method: 'PATCH',
            headers: headerParameters,
            query: queryParameters,
            body: AudienceUpdateRequestToJSON(requestParameters['audienceUpdateRequest']),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => AudienceFromJSON(jsonValue));
    }

    /**
     * Update (edit or remove) an existing targeting audience.
     * Update audience
     */
    async audiencesUpdate(requestParameters: AudiencesUpdateRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<Audience> {
        const response = await this.audiencesUpdateRaw(requestParameters, initOverrides);
        return await response.value();
    }

}

/**
 * @export
 */
export const AudiencesListEntityStatusesEnum = {
    Active: 'ACTIVE',
    Paused: 'PAUSED',
    Archived: 'ARCHIVED'
} as const;
export type AudiencesListEntityStatusesEnum = typeof AudiencesListEntityStatusesEnum[keyof typeof AudiencesListEntityStatusesEnum];
/**
 * @export
 */
export const AudiencesListOrderEnum = {
    Ascending: 'ASCENDING',
    Descending: 'DESCENDING'
} as const;
export type AudiencesListOrderEnum = typeof AudiencesListOrderEnum[keyof typeof AudiencesListOrderEnum];
