/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


/**
 * Status for catalogs entities. Present in catalogs_feed values. When a feed is deleted, the response will inform DELETED as status.
 */
export type CatalogsStatus = 'ACTIVE' | 'INACTIVE';

export const CatalogsStatus = {
    Active: 'ACTIVE' as CatalogsStatus,
    Inactive: 'INACTIVE' as CatalogsStatus
};

