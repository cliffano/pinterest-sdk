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

/**
 * HTTP request details included in the log sent by the client.
 * @export
 * @interface IntegrationLogClientRequest
 */
export interface IntegrationLogClientRequest {
    /**
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
    request_headers?: { [key: string]: string; };
    /**
     * HTTP response headers as key-value pairs.
     * @type {{ [key: string]: string; }}
     * @memberof IntegrationLogClientRequest
     */
    response_headers?: { [key: string]: string; };
    /**
     * @type {number}
     * @memberof IntegrationLogClientRequest
     */
    response_status_code?: number;
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

