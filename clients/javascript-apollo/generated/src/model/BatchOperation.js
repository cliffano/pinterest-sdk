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
* Enum class BatchOperation.
* @enum {}
* @readonly
*/
export default class BatchOperation {
    
        /**
         * value: "UPDATE"
         * @const
         */
        "UPDATE" = "UPDATE";

    
        /**
         * value: "CREATE"
         * @const
         */
        "CREATE" = "CREATE";

    
        /**
         * value: "UPSERT"
         * @const
         */
        "UPSERT" = "UPSERT";

    

    /**
    * Returns a <code>BatchOperation</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/BatchOperation} The enum <code>BatchOperation</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}

