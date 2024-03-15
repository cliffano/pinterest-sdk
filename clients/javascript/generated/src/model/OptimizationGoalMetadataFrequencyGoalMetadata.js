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
 * The OptimizationGoalMetadataFrequencyGoalMetadata model module.
 * @module model/OptimizationGoalMetadataFrequencyGoalMetadata
 * @version 1.1.1-pre.0
 */
class OptimizationGoalMetadataFrequencyGoalMetadata {
    /**
     * Constructs a new <code>OptimizationGoalMetadataFrequencyGoalMetadata</code>.
     * @alias module:model/OptimizationGoalMetadataFrequencyGoalMetadata
     */
    constructor() { 
        
        OptimizationGoalMetadataFrequencyGoalMetadata.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>OptimizationGoalMetadataFrequencyGoalMetadata</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OptimizationGoalMetadataFrequencyGoalMetadata} obj Optional instance to populate.
     * @return {module:model/OptimizationGoalMetadataFrequencyGoalMetadata} The populated <code>OptimizationGoalMetadataFrequencyGoalMetadata</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OptimizationGoalMetadataFrequencyGoalMetadata();

            if (data.hasOwnProperty('frequency')) {
                obj['frequency'] = ApiClient.convertToType(data['frequency'], 'Number');
            }
            if (data.hasOwnProperty('timerange')) {
                obj['timerange'] = ApiClient.convertToType(data['timerange'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>OptimizationGoalMetadataFrequencyGoalMetadata</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>OptimizationGoalMetadataFrequencyGoalMetadata</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['timerange'] && !(typeof data['timerange'] === 'string' || data['timerange'] instanceof String)) {
            throw new Error("Expected the field `timerange` to be a primitive type in the JSON string but got " + data['timerange']);
        }

        return true;
    }


}



/**
 * @member {Number} frequency
 */
OptimizationGoalMetadataFrequencyGoalMetadata.prototype['frequency'] = undefined;

/**
 * User entity counts time range
 * @member {module:model/OptimizationGoalMetadataFrequencyGoalMetadata.TimerangeEnum} timerange
 */
OptimizationGoalMetadataFrequencyGoalMetadata.prototype['timerange'] = undefined;





/**
 * Allowed values for the <code>timerange</code> property.
 * @enum {String}
 * @readonly
 */
OptimizationGoalMetadataFrequencyGoalMetadata['TimerangeEnum'] = {

    /**
     * value: "THIRTY_DAY"
     * @const
     */
    "THIRTY_DAY": "THIRTY_DAY",

    /**
     * value: "DAY"
     * @const
     */
    "DAY": "DAY",

    /**
     * value: "SEVEN_DAY"
     * @const
     */
    "SEVEN_DAY": "SEVEN_DAY",

    /**
     * value: "TWENTY_MINUTE"
     * @const
     */
    "TWENTY_MINUTE": "TWENTY_MINUTE",

    /**
     * value: "TEN_MINUTE"
     * @const
     */
    "TEN_MINUTE": "TEN_MINUTE",

    /**
     * value: "TWENTY_FOUR_HOUR"
     * @const
     */
    "TWENTY_FOUR_HOUR": "TWENTY_FOUR_HOUR"
};



export default OptimizationGoalMetadataFrequencyGoalMetadata;

