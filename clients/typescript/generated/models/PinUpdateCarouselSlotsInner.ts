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

import { HttpFile } from '../http/http';

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

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "title",
            "baseName": "title",
            "type": "string",
            "format": ""
        },
        {
            "name": "description",
            "baseName": "description",
            "type": "string",
            "format": ""
        },
        {
            "name": "link",
            "baseName": "link",
            "type": "string",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return PinUpdateCarouselSlotsInner.attributeTypeMap;
    }

    public constructor() {
    }
}

