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
import { BulkReportingJobStatus } from './bulkReportingJobStatus';

export class CreateMMMReportResponseData {
    'reportStatus'?: BulkReportingJobStatus;
    'token'?: string;
    'message'?: string | null;
    'status'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "reportStatus",
            "baseName": "report_status",
            "type": "BulkReportingJobStatus"
        },
        {
            "name": "token",
            "baseName": "token",
            "type": "string"
        },
        {
            "name": "message",
            "baseName": "message",
            "type": "string"
        },
        {
            "name": "status",
            "baseName": "status",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return CreateMMMReportResponseData.attributeTypeMap;
    }
}

export namespace CreateMMMReportResponseData {
}
