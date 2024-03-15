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

import { HttpFile } from '../http/http';

export class SSIOInsertionOrderStatus {
    /**
    * Salesforce order id
    */
    'pinOrderId'?: string;
    /**
    * Salesforce insertion order status
    */
    'status'?: string;
    /**
    * Salesforce insertion order creation time
    */
    'creationTime'?: string | null;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "pinOrderId",
            "baseName": "pin_order_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "status",
            "baseName": "status",
            "type": "string",
            "format": ""
        },
        {
            "name": "creationTime",
            "baseName": "creation_time",
            "type": "string",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return SSIOInsertionOrderStatus.attributeTypeMap;
    }

    public constructor() {
    }
}

