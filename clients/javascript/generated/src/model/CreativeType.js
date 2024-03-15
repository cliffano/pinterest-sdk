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
* Enum class CreativeType.
* @enum {}
* @readonly
*/
export default class CreativeType {
    
        /**
         * value: "REGULAR"
         * @const
         */
        "REGULAR" = "REGULAR";

    
        /**
         * value: "VIDEO"
         * @const
         */
        "VIDEO" = "VIDEO";

    
        /**
         * value: "SHOPPING"
         * @const
         */
        "SHOPPING" = "SHOPPING";

    
        /**
         * value: "CAROUSEL"
         * @const
         */
        "CAROUSEL" = "CAROUSEL";

    
        /**
         * value: "MAX_VIDEO"
         * @const
         */
        "MAX_VIDEO" = "MAX_VIDEO";

    
        /**
         * value: "SHOP_THE_PIN"
         * @const
         */
        "SHOP_THE_PIN" = "SHOP_THE_PIN";

    
        /**
         * value: "COLLECTION"
         * @const
         */
        "COLLECTION" = "COLLECTION";

    
        /**
         * value: "IDEA"
         * @const
         */
        "IDEA" = "IDEA";

    
        /**
         * value: "SHOWCASE"
         * @const
         */
        "SHOWCASE" = "SHOWCASE";

    
        /**
         * value: "QUIZ"
         * @const
         */
        "QUIZ" = "QUIZ";

    

    /**
    * Returns a <code>CreativeType</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/CreativeType} The enum <code>CreativeType</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}

