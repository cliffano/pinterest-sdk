/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';
/**
* Enum class ConversionReportAttributionType.
* @enum {}
* @readonly
*/
export default class ConversionReportAttributionType {
    
        /**
         * value: "INDIVIDUAL"
         * @const
         */
        "INDIVIDUAL" = "INDIVIDUAL";

    
        /**
         * value: "HOUSEHOLD"
         * @const
         */
        "HOUSEHOLD" = "HOUSEHOLD";

    

    /**
    * Returns a <code>ConversionReportAttributionType</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/ConversionReportAttributionType} The enum <code>ConversionReportAttributionType</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}

