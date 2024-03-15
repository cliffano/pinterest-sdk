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

/**
* Integration metadata
*/
export class IntegrationMetadata {
    'id'?: string;
    'externalBusinessId'?: string;
    'connectedMerchantId'?: string;
    'connectedUserId'?: string;
    'connectedAdvertiserId'?: string;
    'connectedLbaId'?: string;
    'connectedTagId'?: string;
    'partnerAccessTokenExpiry'?: number;
    'partnerRefreshTokenExpiry'?: number;
    'scopes'?: string;
    'createdTimestamp'?: number;
    'updatedTimestamp'?: number;
    'additionalId1'?: string;
    'partnerMetadata'?: string;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "id",
            "baseName": "id",
            "type": "string",
            "format": ""
        },
        {
            "name": "externalBusinessId",
            "baseName": "external_business_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "connectedMerchantId",
            "baseName": "connected_merchant_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "connectedUserId",
            "baseName": "connected_user_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "connectedAdvertiserId",
            "baseName": "connected_advertiser_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "connectedLbaId",
            "baseName": "connected_lba_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "connectedTagId",
            "baseName": "connected_tag_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "partnerAccessTokenExpiry",
            "baseName": "partner_access_token_expiry",
            "type": "number",
            "format": ""
        },
        {
            "name": "partnerRefreshTokenExpiry",
            "baseName": "partner_refresh_token_expiry",
            "type": "number",
            "format": ""
        },
        {
            "name": "scopes",
            "baseName": "scopes",
            "type": "string",
            "format": ""
        },
        {
            "name": "createdTimestamp",
            "baseName": "created_timestamp",
            "type": "number",
            "format": ""
        },
        {
            "name": "updatedTimestamp",
            "baseName": "updated_timestamp",
            "type": "number",
            "format": ""
        },
        {
            "name": "additionalId1",
            "baseName": "additional_id_1",
            "type": "string",
            "format": ""
        },
        {
            "name": "partnerMetadata",
            "baseName": "partner_metadata",
            "type": "string",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return IntegrationMetadata.attributeTypeMap;
    }

    public constructor() {
    }
}

