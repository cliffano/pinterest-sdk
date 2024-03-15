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

/**
* The operation performed by the batch. The DELETE_DISCONTINUED operation only updates availablity to \"Out of Stock\".
*/
export enum BatchOperation {
    Update = <any> 'UPDATE',
    Upsert = <any> 'UPSERT',
    Create = <any> 'CREATE',
    DeleteDiscontinued = <any> 'DELETE_DISCONTINUED',
    Delete = <any> 'DELETE'
}
