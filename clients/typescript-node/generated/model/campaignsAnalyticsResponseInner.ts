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

export class CampaignsAnalyticsResponseInner extends null<String, any> {
    /**
    * The ID of the campaing that this metrics belongs to.
    */
    'cAMPAIGNID': string;
    /**
    * Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`)
    */
    'dATE'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "cAMPAIGNID",
            "baseName": "CAMPAIGN_ID",
            "type": "string"
        },
        {
            "name": "dATE",
            "baseName": "DATE",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return super.getAttributeTypeMap().concat(CampaignsAnalyticsResponseInner.attributeTypeMap);
    }
}
