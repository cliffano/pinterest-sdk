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
import { CatalogsFeedCredentials } from './catalogsFeedCredentials';
import { CatalogsFeedProcessingSchedule } from './catalogsFeedProcessingSchedule';
import { CatalogsFeedsUpdateRequest } from './catalogsFeedsUpdateRequest';
import { CatalogsFormat } from './catalogsFormat';
import { CatalogsStatus } from './catalogsStatus';
import { CatalogsType } from './catalogsType';
import { CatalogsVerticalFeedsUpdateRequest } from './catalogsVerticalFeedsUpdateRequest';
import { NullableCurrency } from './nullableCurrency';
import { ProductAvailabilityType } from './productAvailabilityType';

export class FeedsUpdateRequest {
    'defaultAvailability'?: ProductAvailabilityType | null;
    'defaultCurrency'?: NullableCurrency | null;
    /**
    * A human-friendly name associated to a given feed.
    */
    'name'?: string;
    'format'?: CatalogsFormat;
    'credentials'?: CatalogsFeedCredentials | null;
    /**
    * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
    */
    'location'?: string;
    'preferredProcessingSchedule'?: CatalogsFeedProcessingSchedule | null;
    'status'?: CatalogsStatus;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "defaultAvailability",
            "baseName": "default_availability",
            "type": "ProductAvailabilityType"
        },
        {
            "name": "defaultCurrency",
            "baseName": "default_currency",
            "type": "NullableCurrency"
        },
        {
            "name": "name",
            "baseName": "name",
            "type": "string"
        },
        {
            "name": "format",
            "baseName": "format",
            "type": "CatalogsFormat"
        },
        {
            "name": "credentials",
            "baseName": "credentials",
            "type": "CatalogsFeedCredentials"
        },
        {
            "name": "location",
            "baseName": "location",
            "type": "string"
        },
        {
            "name": "preferredProcessingSchedule",
            "baseName": "preferred_processing_schedule",
            "type": "CatalogsFeedProcessingSchedule"
        },
        {
            "name": "status",
            "baseName": "status",
            "type": "CatalogsStatus"
        }    ];

    static getAttributeTypeMap() {
        return FeedsUpdateRequest.attributeTypeMap;
    }
}

export namespace FeedsUpdateRequest {
}
