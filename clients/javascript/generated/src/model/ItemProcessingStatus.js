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
* Enum class ItemProcessingStatus.
* @enum {}
* @readonly
*/
export default class ItemProcessingStatus {
    
        /**
         * value: "SUCCESS"
         * @const
         */
        "SUCCESS" = "SUCCESS";

    
        /**
         * value: "FAILURE"
         * @const
         */
        "FAILURE" = "FAILURE";

    
        /**
         * value: "PROCESSING"
         * @const
         */
        "PROCESSING" = "PROCESSING";

    

    /**
    * Returns a <code>ItemProcessingStatus</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/ItemProcessingStatus} The enum <code>ItemProcessingStatus</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}

