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
* Enum class CatalogsFormat.
* @enum {}
* @readonly
*/
export default class CatalogsFormat {
    
        /**
         * value: "TSV"
         * @const
         */
        "TSV" = "TSV";

    
        /**
         * value: "CSV"
         * @const
         */
        "CSV" = "CSV";

    
        /**
         * value: "XML"
         * @const
         */
        "XML" = "XML";

    

    /**
    * Returns a <code>CatalogsFormat</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/CatalogsFormat} The enum <code>CatalogsFormat</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}

