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

import { DataStatus } from '../models/DataStatus';
import { HttpFile } from '../http/http';

export class AnalyticsDailyMetrics {
    'dataStatus'?: DataStatus;
    /**
    * Metrics date (UTC): YYYY-MM-DD.
    */
    'date'?: string;
    /**
    * The metric name and daily value for each requested metric
    */
    'metrics'?: { [key: string]: number; };

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "dataStatus",
            "baseName": "data_status",
            "type": "DataStatus",
            "format": ""
        },
        {
            "name": "date",
            "baseName": "date",
            "type": "string",
            "format": ""
        },
        {
            "name": "metrics",
            "baseName": "metrics",
            "type": "{ [key: string]: number; }",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return AnalyticsDailyMetrics.attributeTypeMap;
    }

    public constructor() {
    }
}


