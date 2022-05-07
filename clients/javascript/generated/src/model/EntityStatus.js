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
* Enum class EntityStatus.
* @enum {}
* @readonly
*/
export default class EntityStatus {
    
        /**
         * value: "ACTIVE"
         * @const
         */
        "ACTIVE" = "ACTIVE";

    
        /**
         * value: "PAUSED"
         * @const
         */
        "PAUSED" = "PAUSED";

    
        /**
         * value: "ARCHIVED"
         * @const
         */
        "ARCHIVED" = "ARCHIVED";

    

    /**
    * Returns a <code>EntityStatus</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/EntityStatus} The enum <code>EntityStatus</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}

