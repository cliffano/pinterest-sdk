/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';
/**
* Enum class CatalogsStatus.
* @enum {}
* @readonly
*/
export default class CatalogsStatus {
    
        /**
         * value: "ACTIVE"
         * @const
         */
        "ACTIVE" = "ACTIVE";

    
        /**
         * value: "INACTIVE"
         * @const
         */
        "INACTIVE" = "INACTIVE";

    

    /**
    * Returns a <code>CatalogsStatus</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/CatalogsStatus} The enum <code>CatalogsStatus</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}

