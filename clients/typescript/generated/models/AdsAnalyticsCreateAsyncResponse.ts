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

import { BulkReportingJobStatus } from '../models/BulkReportingJobStatus';
import { HttpFile } from '../http/http';

export class AdsAnalyticsCreateAsyncResponse {
    'reportStatus'?: BulkReportingJobStatus;
    'token'?: string;
    'message'?: string | null;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "reportStatus",
            "baseName": "report_status",
            "type": "BulkReportingJobStatus",
            "format": ""
        },
        {
            "name": "token",
            "baseName": "token",
            "type": "string",
            "format": ""
        },
        {
            "name": "message",
            "baseName": "message",
            "type": "string",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return AdsAnalyticsCreateAsyncResponse.attributeTypeMap;
    }

    public constructor() {
    }
}



