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
import AdsAnalyticsTargetingType from './AdsAnalyticsTargetingType';

/**
 * The TargetingTypeFilter model module.
 * @module model/TargetingTypeFilter
 * @version 1.0.1-pre.0
 */
class TargetingTypeFilter {
    /**
     * Constructs a new <code>TargetingTypeFilter</code>.
     * @alias module:model/TargetingTypeFilter
     */
    constructor() { 
        
        TargetingTypeFilter.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>TargetingTypeFilter</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/TargetingTypeFilter} obj Optional instance to populate.
     * @return {module:model/TargetingTypeFilter} The populated <code>TargetingTypeFilter</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new TargetingTypeFilter();

            if (data.hasOwnProperty('targeting_types')) {
                obj['targeting_types'] = ApiClient.convertToType(data['targeting_types'], [AdsAnalyticsTargetingType]);
            }
        }
        return obj;
    }


}

/**
 * List of targeting types
 * @member {Array.<module:model/AdsAnalyticsTargetingType>} targeting_types
 */
TargetingTypeFilter.prototype['targeting_types'] = undefined;






export default TargetingTypeFilter;

