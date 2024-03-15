/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { CustomerList } from '../models/CustomerList';
import { HttpFile } from '../http/http';

export class CustomerListsList200Response {
    'items': Array<CustomerList>;
    'bookmark'?: string | null;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "items",
            "baseName": "items",
            "type": "Array<CustomerList>",
            "format": ""
        },
        {
            "name": "bookmark",
            "baseName": "bookmark",
            "type": "string",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return CustomerListsList200Response.attributeTypeMap;
    }

    public constructor() {
    }
}
