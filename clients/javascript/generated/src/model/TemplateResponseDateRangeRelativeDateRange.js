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
 * The TemplateResponseDateRangeRelativeDateRange model module.
 * @module model/TemplateResponseDateRangeRelativeDateRange
 * @version 1.1.1-pre.0
 */
class TemplateResponseDateRangeRelativeDateRange {
    /**
     * Constructs a new <code>TemplateResponseDateRangeRelativeDateRange</code>.
     * The relative date range of the template
     * @alias module:model/TemplateResponseDateRangeRelativeDateRange
     */
    constructor() { 
        
        TemplateResponseDateRangeRelativeDateRange.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>TemplateResponseDateRangeRelativeDateRange</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/TemplateResponseDateRangeRelativeDateRange} obj Optional instance to populate.
     * @return {module:model/TemplateResponseDateRangeRelativeDateRange} The populated <code>TemplateResponseDateRangeRelativeDateRange</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new TemplateResponseDateRangeRelativeDateRange();

            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('start_days_in_past')) {
                obj['start_days_in_past'] = ApiClient.convertToType(data['start_days_in_past'], 'Number');
            }
            if (data.hasOwnProperty('end_days_in_past')) {
                obj['end_days_in_past'] = ApiClient.convertToType(data['end_days_in_past'], 'Number');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>TemplateResponseDateRangeRelativeDateRange</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>TemplateResponseDateRangeRelativeDateRange</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['type'] && !(typeof data['type'] === 'string' || data['type'] instanceof String)) {
            throw new Error("Expected the field `type` to be a primitive type in the JSON string but got " + data['type']);
        }

        return true;
    }


}



/**
 * The date range type
 * @member {String} type
 */
TemplateResponseDateRangeRelativeDateRange.prototype['type'] = undefined;

/**
 * The start date of the date range
 * @member {Number} start_days_in_past
 */
TemplateResponseDateRangeRelativeDateRange.prototype['start_days_in_past'] = undefined;

/**
 * The end date of the date range
 * @member {Number} end_days_in_past
 */
TemplateResponseDateRangeRelativeDateRange.prototype['end_days_in_past'] = undefined;






export default TemplateResponseDateRangeRelativeDateRange;

