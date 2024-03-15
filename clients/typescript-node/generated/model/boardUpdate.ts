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
* Board fields for updates
*/
export class BoardUpdate {
    'name'?: string;
    'description'?: string | null;
    'privacy'?: BoardUpdate.PrivacyEnum;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "name",
            "baseName": "name",
            "type": "string"
        },
        {
            "name": "description",
            "baseName": "description",
            "type": "string"
        },
        {
            "name": "privacy",
            "baseName": "privacy",
            "type": "BoardUpdate.PrivacyEnum"
        }    ];

    static getAttributeTypeMap() {
        return BoardUpdate.attributeTypeMap;
    }
}

export namespace BoardUpdate {
    export enum PrivacyEnum {
        Public = <any> 'PUBLIC',
        Secret = <any> 'SECRET'
    }
}
