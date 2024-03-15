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
import PinMedia from './PinMedia';

/**
 * The SummaryPinMedia model module.
 * @module model/SummaryPinMedia
 * @version 1.1.1-pre.0
 */
class SummaryPinMedia {
    /**
     * Constructs a new <code>SummaryPinMedia</code>.
     * @alias module:model/SummaryPinMedia
     * @extends module:model/PinMedia
     * @implements module:model/PinMedia
     */
    constructor() { 
        PinMedia.initialize(this);
        SummaryPinMedia.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>SummaryPinMedia</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SummaryPinMedia} obj Optional instance to populate.
     * @return {module:model/SummaryPinMedia} The populated <code>SummaryPinMedia</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SummaryPinMedia();
            PinMedia.constructFromObject(data, obj);
            PinMedia.constructFromObject(data, obj);

        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>SummaryPinMedia</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>SummaryPinMedia</code>.
     */
    static validateJSON(data) {

        return true;
    }


}




// Implement PinMedia interface:
/**
 * @member {String} media_type
 */
PinMedia.prototype['media_type'] = undefined;




export default SummaryPinMedia;

