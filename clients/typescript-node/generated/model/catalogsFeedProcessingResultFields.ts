/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { RequestFile } from './models';
import { CatalogsFeedIngestionDetails } from './catalogsFeedIngestionDetails';
import { CatalogsFeedProcessingStatus } from './catalogsFeedProcessingStatus';
import { CatalogsFeedProductCounts } from './catalogsFeedProductCounts';
import { CatalogsFeedValidationDetails } from './catalogsFeedValidationDetails';

export class CatalogsFeedProcessingResultFields {
    'ingestionDetails': CatalogsFeedIngestionDetails;
    'status': CatalogsFeedProcessingStatus;
    'productCounts': CatalogsFeedProductCounts | null;
    'validationDetails': CatalogsFeedValidationDetails;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "ingestionDetails",
            "baseName": "ingestion_details",
            "type": "CatalogsFeedIngestionDetails"
        },
        {
            "name": "status",
            "baseName": "status",
            "type": "CatalogsFeedProcessingStatus"
        },
        {
            "name": "productCounts",
            "baseName": "product_counts",
            "type": "CatalogsFeedProductCounts"
        },
        {
            "name": "validationDetails",
            "baseName": "validation_details",
            "type": "CatalogsFeedValidationDetails"
        }    ];

    static getAttributeTypeMap() {
        return CatalogsFeedProcessingResultFields.attributeTypeMap;
    }
}

