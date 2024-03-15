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


export interface SSIOAccountAddress { 
    /**
     * Address display
     */
    display?: string;
    /**
     * Purpose for which the address is used, usually Billing or Businness
     */
    purpose?: string;
    /**
     * Salesforce id for address
     */
    address_id?: string;
    /**
     * Legal entity for this insertion order
     */
    order_legal_entity?: string;
}

