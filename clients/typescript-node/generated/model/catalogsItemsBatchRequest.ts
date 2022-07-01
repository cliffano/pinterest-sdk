/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { RequestFile } from './models';
import { BatchOperation } from './batchOperation';
import { Country } from './country';
import { ItemBatchRecord } from './itemBatchRecord';
import { Language } from './language';

/**
* Request object of catalogs items batch
*/
export class CatalogsItemsBatchRequest {
    'country'?: Country;
    'language'?: Language;
    'operation'?: BatchOperation;
    /**
    * Array with catalogs items
    */
    'items'?: Array<ItemBatchRecord>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "country",
            "baseName": "country",
            "type": "Country"
        },
        {
            "name": "language",
            "baseName": "language",
            "type": "Language"
        },
        {
            "name": "operation",
            "baseName": "operation",
            "type": "BatchOperation"
        },
        {
            "name": "items",
            "baseName": "items",
            "type": "Array<ItemBatchRecord>"
        }    ];

    static getAttributeTypeMap() {
        return CatalogsItemsBatchRequest.attributeTypeMap;
    }
}

