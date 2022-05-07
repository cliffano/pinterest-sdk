/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';
/**
* Enum class AdsAnalyticsTargetingType.
* @enum {}
* @readonly
*/
export default class AdsAnalyticsTargetingType {
    
        /**
         * value: "KEYWORD"
         * @const
         */
        "KEYWORD" = "KEYWORD";

    
        /**
         * value: "APPTYPE"
         * @const
         */
        "APPTYPE" = "APPTYPE";

    
        /**
         * value: "GENDER"
         * @const
         */
        "GENDER" = "GENDER";

    
        /**
         * value: "LOCATION"
         * @const
         */
        "LOCATION" = "LOCATION";

    
        /**
         * value: "PLACEMENT"
         * @const
         */
        "PLACEMENT" = "PLACEMENT";

    
        /**
         * value: "COUNTRY"
         * @const
         */
        "COUNTRY" = "COUNTRY";

    
        /**
         * value: "TARGETED_INTEREST"
         * @const
         */
        "TARGETED_INTEREST" = "TARGETED_INTEREST";

    
        /**
         * value: "PINNER_INTEREST"
         * @const
         */
        "PINNER_INTEREST" = "PINNER_INTEREST";

    
        /**
         * value: "AUDIENCE_INCLUDE"
         * @const
         */
        "AUDIENCE_INCLUDE" = "AUDIENCE_INCLUDE";

    
        /**
         * value: "AUDIENCE_EXCLUDE"
         * @const
         */
        "AUDIENCE_EXCLUDE" = "AUDIENCE_EXCLUDE";

    
        /**
         * value: "GEO"
         * @const
         */
        "GEO" = "GEO";

    
        /**
         * value: "AGE_BUCKET"
         * @const
         */
        "AGE_BUCKET" = "AGE_BUCKET";

    
        /**
         * value: "REGION"
         * @const
         */
        "REGION" = "REGION";

    

    /**
    * Returns a <code>AdsAnalyticsTargetingType</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/AdsAnalyticsTargetingType} The enum <code>AdsAnalyticsTargetingType</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}

