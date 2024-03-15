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
* Enum class AdGroupSummaryStatus.
* @enum {}
* @readonly
*/
export default class AdGroupSummaryStatus {
    
        /**
         * value: "RUNNING"
         * @const
         */
        "RUNNING" = "RUNNING";

    
        /**
         * value: "PAUSED"
         * @const
         */
        "PAUSED" = "PAUSED";

    
        /**
         * value: "NOT_STARTED"
         * @const
         */
        "NOT_STARTED" = "NOT_STARTED";

    
        /**
         * value: "COMPLETED"
         * @const
         */
        "COMPLETED" = "COMPLETED";

    
        /**
         * value: "ADVERTISER_DISABLED"
         * @const
         */
        "ADVERTISER_DISABLED" = "ADVERTISER_DISABLED";

    
        /**
         * value: "ARCHIVED"
         * @const
         */
        "ARCHIVED" = "ARCHIVED";

    
        /**
         * value: "DRAFT"
         * @const
         */
        "DRAFT" = "DRAFT";

    
        /**
         * value: "DELETED_DRAFT"
         * @const
         */
        "DELETED_DRAFT" = "DELETED_DRAFT";

    

    /**
    * Returns a <code>AdGroupSummaryStatus</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/AdGroupSummaryStatus} The enum <code>AdGroupSummaryStatus</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}
