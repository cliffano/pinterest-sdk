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

import type { Observable } from 'rxjs';
import type { AjaxResponse } from 'rxjs/ajax';
import { BaseAPI, throwIfNullOrUndefined, encodeURI } from '../runtime';
import type { OperationOpts, HttpHeaders, HttpQuery } from '../runtime';
import type {
    TermsOfService,
} from '../models';

export interface TermsOfServiceGetRequest {
    adAccountId: string;
    includeHtml?: boolean;
    tosType?: string;
}

/**
 * no description
 */
export class TermsOfServiceApi extends BaseAPI {

    /**
     * Get the text of the terms of service and see whether the advertiser has accepted the terms of service.
     * Get terms of service
     */
    termsOfServiceGet({ adAccountId, includeHtml, tosType }: TermsOfServiceGetRequest): Observable<TermsOfService>
    termsOfServiceGet({ adAccountId, includeHtml, tosType }: TermsOfServiceGetRequest, opts?: OperationOpts): Observable<AjaxResponse<TermsOfService>>
    termsOfServiceGet({ adAccountId, includeHtml, tosType }: TermsOfServiceGetRequest, opts?: OperationOpts): Observable<TermsOfService | AjaxResponse<TermsOfService>> {
        throwIfNullOrUndefined(adAccountId, 'adAccountId', 'termsOfServiceGet');

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['ads:read'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = {};

        if (includeHtml != null) { query['include_html'] = includeHtml; }
        if (tosType != null) { query['tos_type'] = tosType; }

        return this.request<TermsOfService>({
            url: '/ad_accounts/{ad_account_id}/terms_of_service'.replace('{ad_account_id}', encodeURI(adAccountId)),
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

}
