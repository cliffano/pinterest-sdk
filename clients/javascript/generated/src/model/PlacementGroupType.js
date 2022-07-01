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
* Enum class PlacementGroupType.
* @enum {}
* @readonly
*/
export default class PlacementGroupType {
    
        /**
         * value: "ALL"
         * @const
         */
        "ALL" = "ALL";

    
        /**
         * value: "SEARCH"
         * @const
         */
        "SEARCH" = "SEARCH";

    
        /**
         * value: "BROWSE"
         * @const
         */
        "BROWSE" = "BROWSE";

    
        /**
         * value: "OTHER"
         * @const
         */
        "OTHER" = "OTHER";

    

    /**
    * Returns a <code>PlacementGroupType</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/PlacementGroupType} The enum <code>PlacementGroupType</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}

