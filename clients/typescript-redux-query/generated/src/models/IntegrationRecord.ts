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
 * Integration record
 * @export
 * @interface IntegrationRecord
 */
export interface IntegrationRecord  {
    /**
     * 
     * @type {string}
     * @memberof IntegrationRecord
     */
    id?: string;
    /**
     * 
     * @type {string}
     * @memberof IntegrationRecord
     */
    externalBusinessId?: string;
    /**
     * 
     * @type {string}
     * @memberof IntegrationRecord
     */
    connectedMerchantId?: string;
    /**
     * 
     * @type {string}
     * @memberof IntegrationRecord
     */
    readonly connectedUserId?: string;
    /**
     * 
     * @type {string}
     * @memberof IntegrationRecord
     */
    readonly connectedAdvertiserId?: string;
    /**
     * 
     * @type {string}
     * @memberof IntegrationRecord
     */
    connectedLbaId?: string;
    /**
     * 
     * @type {string}
     * @memberof IntegrationRecord
     */
    connectedTagId?: string;
    /**
     * 
     * @type {string}
     * @memberof IntegrationRecord
     */
    partnerAccessToken?: string;
    /**
     * 
     * @type {string}
     * @memberof IntegrationRecord
     */
    partnerRefreshToken?: string;
    /**
     * 
     * @type {string}
     * @memberof IntegrationRecord
     */
    partnerPrimaryEmail?: string;
    /**
     * 
     * @type {number}
     * @memberof IntegrationRecord
     */
    partnerAccessTokenExpiry?: number;
    /**
     * 
     * @type {number}
     * @memberof IntegrationRecord
     */
    partnerRefreshTokenExpiry?: number;
    /**
     * 
     * @type {string}
     * @memberof IntegrationRecord
     */
    scopes?: string;
    /**
     * 
     * @type {string}
     * @memberof IntegrationRecord
     */
    partnerMetadata?: string;
    /**
     * 
     * @type {string}
     * @memberof IntegrationRecord
     */
    additionalId1?: string;
    /**
     * 
     * @type {number}
     * @memberof IntegrationRecord
     */
    createdTime?: number;
    /**
     * 
     * @type {number}
     * @memberof IntegrationRecord
     */
    updatedTime?: number;
}

export function IntegrationRecordFromJSON(json: any): IntegrationRecord {
    return {
        'id': !exists(json, 'id') ? undefined : json['id'],
        'externalBusinessId': !exists(json, 'external_business_id') ? undefined : json['external_business_id'],
        'connectedMerchantId': !exists(json, 'connected_merchant_id') ? undefined : json['connected_merchant_id'],
        'connectedUserId': !exists(json, 'connected_user_id') ? undefined : json['connected_user_id'],
        'connectedAdvertiserId': !exists(json, 'connected_advertiser_id') ? undefined : json['connected_advertiser_id'],
        'connectedLbaId': !exists(json, 'connected_lba_id') ? undefined : json['connected_lba_id'],
        'connectedTagId': !exists(json, 'connected_tag_id') ? undefined : json['connected_tag_id'],
        'partnerAccessToken': !exists(json, 'partner_access_token') ? undefined : json['partner_access_token'],
        'partnerRefreshToken': !exists(json, 'partner_refresh_token') ? undefined : json['partner_refresh_token'],
        'partnerPrimaryEmail': !exists(json, 'partner_primary_email') ? undefined : json['partner_primary_email'],
        'partnerAccessTokenExpiry': !exists(json, 'partner_access_token_expiry') ? undefined : json['partner_access_token_expiry'],
        'partnerRefreshTokenExpiry': !exists(json, 'partner_refresh_token_expiry') ? undefined : json['partner_refresh_token_expiry'],
        'scopes': !exists(json, 'scopes') ? undefined : json['scopes'],
        'partnerMetadata': !exists(json, 'partner_metadata') ? undefined : json['partner_metadata'],
        'additionalId1': !exists(json, 'additional_id_1') ? undefined : json['additional_id_1'],
        'createdTime': !exists(json, 'created_time') ? undefined : json['created_time'],
        'updatedTime': !exists(json, 'updated_time') ? undefined : json['updated_time'],
    };
}

export function IntegrationRecordToJSON(value?: IntegrationRecord): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'id': value.id,
        'external_business_id': value.externalBusinessId,
        'connected_merchant_id': value.connectedMerchantId,
        'connected_lba_id': value.connectedLbaId,
        'connected_tag_id': value.connectedTagId,
        'partner_access_token': value.partnerAccessToken,
        'partner_refresh_token': value.partnerRefreshToken,
        'partner_primary_email': value.partnerPrimaryEmail,
        'partner_access_token_expiry': value.partnerAccessTokenExpiry,
        'partner_refresh_token_expiry': value.partnerRefreshTokenExpiry,
        'scopes': value.scopes,
        'partner_metadata': value.partnerMetadata,
        'additional_id_1': value.additionalId1,
        'created_time': value.createdTime,
        'updated_time': value.updatedTime,
    };
}

