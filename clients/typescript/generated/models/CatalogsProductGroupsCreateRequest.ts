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

import { CatalogsProductGroupCreateRequest } from '../models/CatalogsProductGroupCreateRequest';
import { CatalogsProductGroupFiltersRequest } from '../models/CatalogsProductGroupFiltersRequest';
import { CatalogsVerticalProductGroupCreateRequest } from '../models/CatalogsVerticalProductGroupCreateRequest';
import { HttpFile } from '../http/http';

export class CatalogsProductGroupsCreateRequest {
    'name': string;
    'description'?: string | null;
    /**
    * boolean indicator of whether the product group is being featured or not
    */
    'isFeatured'?: boolean;
    'filters': CatalogsProductGroupFiltersRequest;
    /**
    * Catalog Feed id pertaining to the catalog product group.
    */
    'feedId': string;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "name",
            "baseName": "name",
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
            "name": "isFeatured",
            "baseName": "is_featured",
            "type": "boolean",
            "format": ""
        },
        {
            "name": "filters",
            "baseName": "filters",
            "type": "CatalogsProductGroupFiltersRequest",
            "format": ""
        },
        {
            "name": "feedId",
            "baseName": "feed_id",
            "type": "string",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return CatalogsProductGroupsCreateRequest.attributeTypeMap;
    }

    public constructor() {
    }
}



