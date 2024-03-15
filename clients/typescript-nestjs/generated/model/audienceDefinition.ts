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
 * Queryable audience representation.
 */
export interface AudienceDefinition { 
    /**
     * Generation date
     */
    date?: string | null;
    /**
     * Generated audience type to request.
     */
    type?: string;
    /**
     * Generated audience scope to request.
     */
    scope?: string;
}
