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
* Third-party tracking URLs.<br> JSON object with the format: {\"<a href=\"https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\">Tracking event enum</a>\":[URL string array],...}<br> For example: {\"impression\": [\"URL1\", \"URL2\"], \"click\": [\"URL1\", \"URL2\", \"URL3\"]}.<br>Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.<br><br> For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>.
*/
export class AdGroupCommonTrackingUrls {
    'impression'?: Array<string>;
    'click'?: Array<string>;
    'engagement'?: Array<string>;
    'buyableButton'?: Array<string>;
    'audienceVerification'?: Array<string>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "impression",
            "baseName": "impression",
            "type": "Array<string>"
        },
        {
            "name": "click",
            "baseName": "click",
            "type": "Array<string>"
        },
        {
            "name": "engagement",
            "baseName": "engagement",
            "type": "Array<string>"
        },
        {
            "name": "buyableButton",
            "baseName": "buyable_button",
            "type": "Array<string>"
        },
        {
            "name": "audienceVerification",
            "baseName": "audience_verification",
            "type": "Array<string>"
        }    ];

    static getAttributeTypeMap() {
        return AdGroupCommonTrackingUrls.attributeTypeMap;
    }
}

