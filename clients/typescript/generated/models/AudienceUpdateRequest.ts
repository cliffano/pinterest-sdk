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

import { AudienceRule } from '../models/AudienceRule';
import { AudienceUpdateOperationType } from '../models/AudienceUpdateOperationType';
import { HttpFile } from '../http/http';

export class AudienceUpdateRequest {
    /**
    * Ad account ID.
    */
    'adAccountId'?: string;
    /**
    * Audience name.
    */
    'name'?: string;
    'rule'?: AudienceRule;
    /**
    * Audience description.
    */
    'description'?: string;
    'operationType'?: AudienceUpdateOperationType;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "adAccountId",
            "baseName": "ad_account_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "name",
            "baseName": "name",
            "type": "string",
            "format": ""
        },
        {
            "name": "rule",
            "baseName": "rule",
            "type": "AudienceRule",
            "format": ""
        },
        {
            "name": "description",
            "baseName": "description",
            "type": "string",
            "format": ""
        },
        {
            "name": "operationType",
            "baseName": "operation_type",
            "type": "AudienceUpdateOperationType",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return AudienceUpdateRequest.attributeTypeMap;
    }

    public constructor() {
    }
}



