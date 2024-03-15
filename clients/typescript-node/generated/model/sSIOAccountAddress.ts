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

import { RequestFile } from './models';

export class SSIOAccountAddress {
    /**
    * Address display
    */
    'display'?: string;
    /**
    * Purpose for which the address is used, usually Billing or Businness
    */
    'purpose'?: string;
    /**
    * Salesforce id for address
    */
    'addressId'?: string;
    /**
    * Legal entity for this insertion order
    */
    'orderLegalEntity'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "display",
            "baseName": "display",
            "type": "string"
        },
        {
            "name": "purpose",
            "baseName": "purpose",
            "type": "string"
        },
        {
            "name": "addressId",
            "baseName": "address_id",
            "type": "string"
        },
        {
            "name": "orderLegalEntity",
            "baseName": "order_legal_entity",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return SSIOAccountAddress.attributeTypeMap;
    }
}

