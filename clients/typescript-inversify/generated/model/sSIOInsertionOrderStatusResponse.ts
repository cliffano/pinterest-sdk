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


export interface SSIOInsertionOrderStatusResponse { 
    /**
     * Salesforce order id
     */
    pin_order_id?: string;
    /**
     * Salesforce insertion order status
     */
    status?: string;
    /**
     * Salesforce insertion order creation time
     */
    creation_time?: string | null;
}
