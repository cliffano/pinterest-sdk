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
 * Schema used for updating the integration metadata.
 */
export interface IntegrationRequestPatch { 
    connected_merchant_id?: string;
    connected_advertiser_id?: string;
    connected_lba_id?: string;
    connected_tag_id?: string;
    partner_access_token?: string;
    partner_refresh_token?: string;
    partner_primary_email?: string;
    partner_access_token_expiry?: number;
    partner_refresh_token_expiry?: number;
    scopes?: string;
    additional_id_1?: string;
    partner_metadata?: string;
}
