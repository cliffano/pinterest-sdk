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
 * The operation performed by the batch. The DELETE_DISCONTINUED operation only updates availablity to \"Out of Stock\".
 */
export type BatchOperation = 'UPDATE' | 'UPSERT' | 'CREATE' | 'DELETE_DISCONTINUED' | 'DELETE';

export const BatchOperation = {
    Update: 'UPDATE' as BatchOperation,
    Upsert: 'UPSERT' as BatchOperation,
    Create: 'CREATE' as BatchOperation,
    DeleteDiscontinued: 'DELETE_DISCONTINUED' as BatchOperation,
    Delete: 'DELETE' as BatchOperation
};

