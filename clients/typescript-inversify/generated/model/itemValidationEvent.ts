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
 * Object describing an item validation event
 */
export interface ItemValidationEvent { 
    /**
     * The attribute that the item validation event references
     */
    attribute?: string;
    /**
     * The event code that the item validation event references
     */
    code?: number;
    /**
     * Title message describing the item validation event
     */
    message?: string;
}
