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
* Schema used for creating the integration metadata.
*/
export class IntegrationRequest {
    /**
    * External business ID for the integration.
    */
    'externalBusinessId'?: string | null;
    'connectedMerchantId'?: string;
    'connectedAdvertiserId'?: string;
    'connectedLbaId'?: string;
    'connectedTagId'?: string;
    'partnerAccessToken'?: string;
    'partnerRefreshToken'?: string;
    'partnerPrimaryEmail'?: string;
    'partnerAccessTokenExpiry'?: number;
    'partnerRefreshTokenExpiry'?: number;
    'scopes'?: string;
    'additionalId1'?: string;
    'partnerMetadata'?: string;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
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
            "name": "partnerAccessToken",
            "baseName": "partner_access_token",
            "type": "string",
            "format": ""
        },
        {
            "name": "partnerRefreshToken",
            "baseName": "partner_refresh_token",
            "type": "string",
            "format": ""
        },
        {
            "name": "partnerPrimaryEmail",
            "baseName": "partner_primary_email",
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
        return IntegrationRequest.attributeTypeMap;
    }

    public constructor() {
    }
}
