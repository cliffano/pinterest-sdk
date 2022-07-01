/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { RequestFile } from './models';

/**
* Third-party tracking URLs. Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>.
*/
export class TrackingUrls {
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
        return TrackingUrls.attributeTypeMap;
    }
}

