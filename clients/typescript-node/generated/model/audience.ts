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
import { AudienceRule } from './audienceRule';

export class Audience {
    /**
    * Ad account ID.
    */
    'adAccountId'?: string;
    /**
    * Audience ID.
    */
    'id'?: string;
    /**
    * Audience name.
    */
    'name'?: string;
    /**
    * <a href=\"/docs/reference/glossary/#Audience Types\">Audience types</a>: ACTALIKE, ENGAGEMENT, CUSTOMER_LIST and VISITOR
    */
    'audienceType'?: string;
    /**
    * Audience description.
    */
    'description'?: string | null;
    'rule'?: AudienceRule;
    /**
    * Audience size.
    */
    'size'?: number | null;
    /**
    * Audience status. READY, INITIALIZING, TOO_SMALL - Each audience list needs to have at least 100 people with Pinterest accounts before you can start using it.
    */
    'status'?: string;
    /**
    * Always \"audience\".
    */
    'type'?: string;
    /**
    * Creation time. Unix timestamp in seconds.
    */
    'createdTimestamp'?: number | null;
    /**
    * Last update time. Unix timestamp in seconds.
    */
    'updatedTimestamp'?: number | null;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "adAccountId",
            "baseName": "ad_account_id",
            "type": "string"
        },
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "name",
            "baseName": "name",
            "type": "string"
        },
        {
            "name": "audienceType",
            "baseName": "audience_type",
            "type": "string"
        },
        {
            "name": "description",
            "baseName": "description",
            "type": "string"
        },
        {
            "name": "rule",
            "baseName": "rule",
            "type": "AudienceRule"
        },
        {
            "name": "size",
            "baseName": "size",
            "type": "number"
        },
        {
            "name": "status",
            "baseName": "status",
            "type": "string"
        },
        {
            "name": "type",
            "baseName": "type",
            "type": "string"
        },
        {
            "name": "createdTimestamp",
            "baseName": "created_timestamp",
            "type": "number"
        },
        {
            "name": "updatedTimestamp",
            "baseName": "updated_timestamp",
            "type": "number"
        }    ];

    static getAttributeTypeMap() {
        return Audience.attributeTypeMap;
    }
}

