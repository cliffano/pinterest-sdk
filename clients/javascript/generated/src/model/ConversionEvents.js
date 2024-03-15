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
import ConversionEventsDataInner from './ConversionEventsDataInner';

/**
 * The ConversionEvents model module.
 * @module model/ConversionEvents
 * @version 1.1.1-pre.0
 */
class ConversionEvents {
    /**
     * Constructs a new <code>ConversionEvents</code>.
     * A list of events (one or more) encapsulated by a data object.
     * @alias module:model/ConversionEvents
     * @param data {Array.<module:model/ConversionEventsDataInner>} 
     */
    constructor(data) { 
        
        ConversionEvents.initialize(this, data);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, data) { 
        obj['data'] = data;
    }

    /**
     * Constructs a <code>ConversionEvents</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ConversionEvents} obj Optional instance to populate.
     * @return {module:model/ConversionEvents} The populated <code>ConversionEvents</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ConversionEvents();

            if (data.hasOwnProperty('data')) {
                obj['data'] = ApiClient.convertToType(data['data'], [ConversionEventsDataInner]);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>ConversionEvents</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>ConversionEvents</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of ConversionEvents.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        if (data['data']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['data'])) {
                throw new Error("Expected the field `data` to be an array in the JSON data but got " + data['data']);
            }
            // validate the optional field `data` (array)
            for (const item of data['data']) {
                ConversionEventsDataInner.validateJSON(item);
            };
        }

        return true;
    }


}

ConversionEvents.RequiredProperties = ["data"];

/**
 * @member {Array.<module:model/ConversionEventsDataInner>} data
 */
ConversionEvents.prototype['data'] = undefined;






export default ConversionEvents;
