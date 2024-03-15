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
 * The PinsAnalyticsMetricTypesParameterInner model module.
 * @module model/PinsAnalyticsMetricTypesParameterInner
 * @version 1.1.1-pre.0
 */
class PinsAnalyticsMetricTypesParameterInner {
    /**
     * Constructs a new <code>PinsAnalyticsMetricTypesParameterInner</code>.
     * @alias module:model/PinsAnalyticsMetricTypesParameterInner
     * @param {(module:model/String)} instance The actual instance to initialize PinsAnalyticsMetricTypesParameterInner.
     */
    constructor(instance = null) {
        if (instance === null) {
            this.actualInstance = null;
            return;
        }
        var match = 0;
        var errorMessages = [];
        // Standard Pin metric types
        try {
            // validate string
            if (!(typeof instance === 'string')) {
                throw new Error("Invalid value. Must be string. Input: " + JSON.stringify(instance));
            }
            this.actualInstance = instance;
            match++;
        } catch(err) {
            // json data failed to deserialize into String
            errorMessages.push("Failed to construct String: " + err)
        }

        // Video Pin metric types
        try {
            // validate string
            if (!(typeof instance === 'string')) {
                throw new Error("Invalid value. Must be string. Input: " + JSON.stringify(instance));
            }
            this.actualInstance = instance;
            match++;
        } catch(err) {
            // json data failed to deserialize into String
            errorMessages.push("Failed to construct String: " + err)
        }

        if (match > 1) {
            throw new Error("Multiple matches found constructing `PinsAnalyticsMetricTypesParameterInner` with oneOf schemas String. Input: " + JSON.stringify(instance));
        } else if (match === 0) {
            this.actualInstance = null; // clear the actual instance in case there are multiple matches
            throw new Error("No match found constructing `PinsAnalyticsMetricTypesParameterInner` with oneOf schemas String. Details: " +
                            errorMessages.join(", "));
        } else { // only 1 match
            // the input is valid
        }
    }

    /**
     * Constructs a <code>PinsAnalyticsMetricTypesParameterInner</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PinsAnalyticsMetricTypesParameterInner} obj Optional instance to populate.
     * @return {module:model/PinsAnalyticsMetricTypesParameterInner} The populated <code>PinsAnalyticsMetricTypesParameterInner</code> instance.
     */
    static constructFromObject(data, obj) {
        return new PinsAnalyticsMetricTypesParameterInner(data);
    }

    /**
     * Gets the actual instance, which can be <code>String</code>.
     * @return {(module:model/String)} The actual instance.
     */
    getActualInstance() {
        return this.actualInstance;
    }

    /**
     * Sets the actual instance, which can be <code>String</code>.
     * @param {(module:model/String)} obj The actual instance.
     */
    setActualInstance(obj) {
       this.actualInstance = PinsAnalyticsMetricTypesParameterInner.constructFromObject(obj).getActualInstance();
    }

    /**
     * Returns the JSON representation of the actual instance.
     * @return {string}
     */
    toJSON = function(){
        return this.getActualInstance();
    }

    /**
     * Create an instance of PinsAnalyticsMetricTypesParameterInner from a JSON string.
     * @param {string} json_string JSON string.
     * @return {module:model/PinsAnalyticsMetricTypesParameterInner} An instance of PinsAnalyticsMetricTypesParameterInner.
     */
    static fromJSON = function(json_string){
        return PinsAnalyticsMetricTypesParameterInner.constructFromObject(JSON.parse(json_string));
    }
}


PinsAnalyticsMetricTypesParameterInner.OneOf = ["String"];

export default PinsAnalyticsMetricTypesParameterInner;

