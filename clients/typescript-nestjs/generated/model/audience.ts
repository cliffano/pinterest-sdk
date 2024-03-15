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
import { AudienceRule } from './audienceRule';


export interface Audience { 
    /**
     * Ad account ID.
     */
    ad_account_id?: string;
    /**
     * Audience ID.
     */
    id?: string;
    /**
     * Audience name.
     */
    name?: string;
    /**
     * <a href=\"/docs/reference/glossary/#Audience Types\">Audience types</a>: ACTALIKE, ENGAGEMENT, CUSTOMER_LIST and VISITOR
     */
    audience_type?: string;
    /**
     * Audience description.
     */
    description?: string | null;
    rule?: AudienceRule;
    /**
     * Audience size.
     */
    size?: number | null;
    /**
     * Audience status. READY, INITIALIZING, TOO_SMALL - Each audience list needs to have at least 100 people with Pinterest accounts before you can start using it.
     */
    status?: string;
    /**
     * Always \"audience\".
     */
    type?: string;
    /**
     * Creation time. Unix timestamp in seconds.
     */
    created_timestamp?: number | null;
    /**
     * Last update time. Unix timestamp in seconds.
     */
    updated_timestamp?: number | null;
}
