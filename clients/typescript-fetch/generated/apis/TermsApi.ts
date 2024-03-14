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
  RelatedTerms,
} from '../models/index';
import {
    RelatedTermsFromJSON,
    RelatedTermsToJSON,
} from '../models/index';

export interface TermsRelatedListRequest {
    terms: Array<string>;
}

export interface TermsSuggestedListRequest {
    term: string;
    limit?: number;
}

/**
 * 
 */
export class TermsApi extends runtime.BaseAPI {

    /**
     * Get a list of terms logically related to each input term. <p/> Example: the term \'workout\' would list related terms like \'one song workout\', \'yoga workout\', \'workout motivation\', etc.
     * List related terms
     */
    async termsRelatedListRaw(requestParameters: TermsRelatedListRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<RelatedTerms>> {
        if (requestParameters['terms'] == null) {
            throw new runtime.RequiredError(
                'terms',
                'Required parameter "terms" was null or undefined when calling termsRelatedList().'
            );
        }

        const queryParameters: any = {};

        if (requestParameters['terms'] != null) {
            queryParameters['terms'] = requestParameters['terms'];
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["ads:read"]);
        }

        const response = await this.request({
            path: `/terms/related`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => RelatedTermsFromJSON(jsonValue));
    }

    /**
     * Get a list of terms logically related to each input term. <p/> Example: the term \'workout\' would list related terms like \'one song workout\', \'yoga workout\', \'workout motivation\', etc.
     * List related terms
     */
    async termsRelatedList(requestParameters: TermsRelatedListRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<RelatedTerms> {
        const response = await this.termsRelatedListRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Get popular search terms that begin with your input term. <p/> Example: \'sport\' would return popular terms like \'sports bar\' and \'sportswear\', but not \'motor sports\' since the phrase does not begin with the given term.
     * List suggested terms
     */
    async termsSuggestedListRaw(requestParameters: TermsSuggestedListRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<Array<string>>> {
        if (requestParameters['term'] == null) {
            throw new runtime.RequiredError(
                'term',
                'Required parameter "term" was null or undefined when calling termsSuggestedList().'
            );
        }

        const queryParameters: any = {};

        if (requestParameters['term'] != null) {
            queryParameters['term'] = requestParameters['term'];
        }

        if (requestParameters['limit'] != null) {
            queryParameters['limit'] = requestParameters['limit'];
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["ads:read"]);
        }

        const response = await this.request({
            path: `/terms/suggested`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse<any>(response);
    }

    /**
     * Get popular search terms that begin with your input term. <p/> Example: \'sport\' would return popular terms like \'sports bar\' and \'sportswear\', but not \'motor sports\' since the phrase does not begin with the given term.
     * List suggested terms
     */
    async termsSuggestedList(requestParameters: TermsSuggestedListRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<Array<string>> {
        const response = await this.termsSuggestedListRaw(requestParameters, initOverrides);
        return await response.value();
    }

}
