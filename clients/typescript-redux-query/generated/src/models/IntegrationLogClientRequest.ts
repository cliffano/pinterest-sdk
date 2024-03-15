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

import { exists, mapValues } from '../runtime';
/**
 * HTTP request details included in the log sent by the client.
 * @export
 * @interface IntegrationLogClientRequest
 */
export interface IntegrationLogClientRequest  {
    /**
     * 
     * @type {string}
     * @memberof IntegrationLogClientRequest
     */
    method: IntegrationLogClientRequestMethodEnum;
    /**
     * HTTP request host from host header.
     * @type {string}
     * @memberof IntegrationLogClientRequest
     */
    host: string;
    /**
     * HTTP request path.
     * @type {string}
     * @memberof IntegrationLogClientRequest
     */
    path: string;
    /**
     * HTTP request headers as key-value pairs.
     * @type {{ [key: string]: string; }}
     * @memberof IntegrationLogClientRequest
     */
    requestHeaders?: { [key: string]: string; };
    /**
     * HTTP response headers as key-value pairs.
     * @type {{ [key: string]: string; }}
     * @memberof IntegrationLogClientRequest
     */
    responseHeaders?: { [key: string]: string; };
    /**
     * 
     * @type {number}
     * @memberof IntegrationLogClientRequest
     */
    responseStatusCode?: number;
}

export function IntegrationLogClientRequestFromJSON(json: any): IntegrationLogClientRequest {
    return {
        'method': json['method'],
        'host': json['host'],
        'path': json['path'],
        'requestHeaders': !exists(json, 'request_headers') ? undefined : json['request_headers'],
        'responseHeaders': !exists(json, 'response_headers') ? undefined : json['response_headers'],
        'responseStatusCode': !exists(json, 'response_status_code') ? undefined : json['response_status_code'],
    };
}

export function IntegrationLogClientRequestToJSON(value?: IntegrationLogClientRequest): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'method': value.method,
        'host': value.host,
        'path': value.path,
        'request_headers': value.requestHeaders,
        'response_headers': value.responseHeaders,
        'response_status_code': value.responseStatusCode,
    };
}

/**
* @export
* @enum {string}
*/
export enum IntegrationLogClientRequestMethodEnum {
    Get = 'GET',
    Head = 'HEAD',
    Post = 'POST',
    Put = 'PUT',
    Delete = 'DELETE',
    Connect = 'CONNECT',
    Options = 'OPTIONS',
    Trace = 'TRACE',
    Patch = 'PATCH'
}


