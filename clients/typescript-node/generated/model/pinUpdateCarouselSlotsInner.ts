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

export class PinUpdateCarouselSlotsInner {
    /**
    * Carousel Pin slot title.
    */
    'title'?: string;
    /**
    * Carousel Pin slot description.
    */
    'description'?: string;
    /**
    * Carousel Pin slot link.
    */
    'link'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "title",
            "baseName": "title",
            "type": "string"
        },
        {
            "name": "description",
            "baseName": "description",
            "type": "string"
        },
        {
            "name": "link",
            "baseName": "link",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return PinUpdateCarouselSlotsInner.attributeTypeMap;
    }
}

