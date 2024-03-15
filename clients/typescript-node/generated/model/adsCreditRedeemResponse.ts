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

export class AdsCreditRedeemResponse {
    /**
    * Returns true if the offer code was successfully applied(validateOnly=false) or can be applied(validateOnly=true).
    */
    'success'?: boolean;
    /**
    * Error code type if error occurs
    */
    'errorCode'?: number | null;
    /**
    * Reason for failure
    */
    'errorMessage'?: string | null;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "success",
            "baseName": "success",
            "type": "boolean"
        },
        {
            "name": "errorCode",
            "baseName": "errorCode",
            "type": "number"
        },
        {
            "name": "errorMessage",
            "baseName": "errorMessage",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return AdsCreditRedeemResponse.attributeTypeMap;
    }
}

