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

import { AdAccountOwner } from '../models/AdAccountOwner';
import { BusinessAccessRole } from '../models/BusinessAccessRole';
import { Country } from '../models/Country';
import { Currency } from '../models/Currency';
import { HttpFile } from '../http/http';

export class AdAccount {
    'id'?: string;
    'name'?: string;
    'owner'?: AdAccountOwner;
    'country'?: Country;
    'currency'?: Currency;
    'permissions'?: Array<BusinessAccessRole>;
    /**
    * Creation time. Unix timestamp in seconds.
    */
    'createdTime'?: number | null;
    /**
    * Last update time. Unix timestamp in seconds.
    */
    'updatedTime'?: number | null;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "id",
            "baseName": "id",
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
            "name": "owner",
            "baseName": "owner",
            "type": "AdAccountOwner",
            "format": ""
        },
        {
            "name": "country",
            "baseName": "country",
            "type": "Country",
            "format": ""
        },
        {
            "name": "currency",
            "baseName": "currency",
            "type": "Currency",
            "format": ""
        },
        {
            "name": "permissions",
            "baseName": "permissions",
            "type": "Array<BusinessAccessRole>",
            "format": ""
        },
        {
            "name": "createdTime",
            "baseName": "created_time",
            "type": "number",
            "format": ""
        },
        {
            "name": "updatedTime",
            "baseName": "updated_time",
            "type": "number",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return AdAccount.attributeTypeMap;
    }

    public constructor() {
    }
}



