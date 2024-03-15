/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { IntegrationLog } from '../models/IntegrationLog';
import { HttpFile } from '../http/http';

/**
* Batch of logs sent from an integration application.
*/
export class IntegrationLogsRequest {
    'logs': Array<IntegrationLog>;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "logs",
            "baseName": "logs",
            "type": "Array<IntegrationLog>",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return IntegrationLogsRequest.attributeTypeMap;
    }

    public constructor() {
    }
}

