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
import TargetingSpecSHOPPINGRETARGETING from './TargetingSpecSHOPPINGRETARGETING';

/**
 * The TargetingSpec model module.
 * @module model/TargetingSpec
 * @version 1.1.1-pre.0
 */
class TargetingSpec {
    /**
     * Constructs a new <code>TargetingSpec</code>.
     * Ad group targeting specification defining the ad group target audience. For example, {\&quot;APPTYPE\&quot;:[\&quot;iphone\&quot;], \&quot;GENDER\&quot;:[\&quot;male\&quot;], \&quot;LOCALE\&quot;:[\&quot;en-US\&quot;], \&quot;LOCATION\&quot;:[\&quot;501\&quot;], \&quot;AGE_BUCKET\&quot;:[\&quot;25-34\&quot;]}
     * @alias module:model/TargetingSpec
     */
    constructor() { 
        
        TargetingSpec.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>TargetingSpec</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/TargetingSpec} obj Optional instance to populate.
     * @return {module:model/TargetingSpec} The populated <code>TargetingSpec</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new TargetingSpec();

            if (data.hasOwnProperty('AGE_BUCKET')) {
                obj['AGE_BUCKET'] = ApiClient.convertToType(data['AGE_BUCKET'], ['String']);
            }
            if (data.hasOwnProperty('APPTYPE')) {
                obj['APPTYPE'] = ApiClient.convertToType(data['APPTYPE'], ['String']);
            }
            if (data.hasOwnProperty('AUDIENCE_EXCLUDE')) {
                obj['AUDIENCE_EXCLUDE'] = ApiClient.convertToType(data['AUDIENCE_EXCLUDE'], ['String']);
            }
            if (data.hasOwnProperty('AUDIENCE_INCLUDE&#39;')) {
                obj['AUDIENCE_INCLUDE&#39;'] = ApiClient.convertToType(data['AUDIENCE_INCLUDE''], ['String']);
            }
            if (data.hasOwnProperty('GENDER')) {
                obj['GENDER'] = ApiClient.convertToType(data['GENDER'], ['String']);
            }
            if (data.hasOwnProperty('GEO')) {
                obj['GEO'] = ApiClient.convertToType(data['GEO'], ['String']);
            }
            if (data.hasOwnProperty('INTEREST')) {
                obj['INTEREST'] = ApiClient.convertToType(data['INTEREST'], ['String']);
            }
            if (data.hasOwnProperty('LOCALE')) {
                obj['LOCALE'] = ApiClient.convertToType(data['LOCALE'], ['String']);
            }
            if (data.hasOwnProperty('LOCATION')) {
                obj['LOCATION'] = ApiClient.convertToType(data['LOCATION'], ['String']);
            }
            if (data.hasOwnProperty('SHOPPING_RETARGETING')) {
                obj['SHOPPING_RETARGETING'] = ApiClient.convertToType(data['SHOPPING_RETARGETING'], [TargetingSpecSHOPPINGRETARGETING]);
            }
            if (data.hasOwnProperty('TARGETING_STRATEGY')) {
                obj['TARGETING_STRATEGY'] = ApiClient.convertToType(data['TARGETING_STRATEGY'], ['String']);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>TargetingSpec</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>TargetingSpec</code>.
     */
    static validateJSON(data) {
        // ensure the json data is an array
        if (!Array.isArray(data['AGE_BUCKET'])) {
            throw new Error("Expected the field `AGE_BUCKET` to be an array in the JSON data but got " + data['AGE_BUCKET']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['APPTYPE'])) {
            throw new Error("Expected the field `APPTYPE` to be an array in the JSON data but got " + data['APPTYPE']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['AUDIENCE_EXCLUDE'])) {
            throw new Error("Expected the field `AUDIENCE_EXCLUDE` to be an array in the JSON data but got " + data['AUDIENCE_EXCLUDE']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['AUDIENCE_INCLUDE''])) {
            throw new Error("Expected the field `AUDIENCE_INCLUDE'` to be an array in the JSON data but got " + data['AUDIENCE_INCLUDE'']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['GENDER'])) {
            throw new Error("Expected the field `GENDER` to be an array in the JSON data but got " + data['GENDER']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['GEO'])) {
            throw new Error("Expected the field `GEO` to be an array in the JSON data but got " + data['GEO']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['INTEREST'])) {
            throw new Error("Expected the field `INTEREST` to be an array in the JSON data but got " + data['INTEREST']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['LOCALE'])) {
            throw new Error("Expected the field `LOCALE` to be an array in the JSON data but got " + data['LOCALE']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['LOCATION'])) {
            throw new Error("Expected the field `LOCATION` to be an array in the JSON data but got " + data['LOCATION']);
        }
        if (data['SHOPPING_RETARGETING']) { // data not null
            // ensure the json data is an array
            if (!Array.isArray(data['SHOPPING_RETARGETING'])) {
                throw new Error("Expected the field `SHOPPING_RETARGETING` to be an array in the JSON data but got " + data['SHOPPING_RETARGETING']);
            }
            // validate the optional field `SHOPPING_RETARGETING` (array)
            for (const item of data['SHOPPING_RETARGETING']) {
                TargetingSpecSHOPPINGRETARGETING.validateJSON(item);
            };
        }
        // ensure the json data is an array
        if (!Array.isArray(data['TARGETING_STRATEGY'])) {
            throw new Error("Expected the field `TARGETING_STRATEGY` to be an array in the JSON data but got " + data['TARGETING_STRATEGY']);
        }

        return true;
    }


}



/**
 * Age ranges. If the AGE_BUCKET field is missing, the default behavior in terms of ad delivery is that **All age buckets** will be targeted.
 * @member {Array.<module:model/TargetingSpec.AGEBUCKETEnum>} AGE_BUCKET
 */
TargetingSpec.prototype['AGE_BUCKET'] = undefined;

/**
 * Allowed devices. If the APPTYPE field is missing, the default behavior in terms of ad delivery is that **All devices/apptypes** will be targeted.
 * @member {Array.<module:model/TargetingSpec.APPTYPEEnum>} APPTYPE
 */
TargetingSpec.prototype['APPTYPE'] = undefined;

/**
 * Excluded customer list IDs. Used to drive new customer acquisition goals. For example: [\"2542620905475\"]. Audience lists need to have at least 100 people with Pinterest accounts in them. If the AUDIENCE_EXCLUDE field is missing, the default behavior in terms of ad delivery is that **No users will be excluded**.
 * @member {Array.<String>} AUDIENCE_EXCLUDE
 */
TargetingSpec.prototype['AUDIENCE_EXCLUDE'] = undefined;

/**
 * Targeted customer list IDs. For example: [\"2542620905473\"]. Audience lists need to have at least 100 people with Pinterest accounts in them Audience lists need to have at least 100 people with Pinterest accounts in them. If the AUDIENCE_INCLUDE field is missing, the default behavior in terms of ad delivery is that **All users will be included**.
 * @member {Array.<String>} AUDIENCE_INCLUDE&#39;
 */
TargetingSpec.prototype['AUDIENCE_INCLUDE&#39;'] = undefined;

/**
 * Targeted genders. Values: [\"unknown\",\"male\",\"female\"]. If the GENDER field is missing, the default behavior in terms of ad delivery is that **All genders will be targeted**.
 * @member {Array.<module:model/TargetingSpec.GENDEREnum>} GENDER
 */
TargetingSpec.prototype['GENDER'] = undefined;

/**
 * Location region codes, e.g., \"BE-VOV\" (East Flanders, Belgium) For complete list, <a href=\"https://help.pinterest.com/sub/helpcenter/partner/pinterest_location_targeting_codes.xlsx\" target=\"_blank\">click here</a> or postal codes, e.g., \"US-94107\". Use either region codes or postal codes but not both. If the GEO field is missing, the default behavior in terms of ad delivery is that **No geos will be selected**.
 * @member {Array.<String>} GEO
 */
TargetingSpec.prototype['GEO'] = undefined;

/**
 * Array of interest object IDs. If the INTEREST field is missing, the default behavior in terms of ad delivery is that **All interests will be targeted**.
 * @member {Array.<String>} INTEREST
 */
TargetingSpec.prototype['INTEREST'] = undefined;

/**
 * 24 ISO 639-1 two letter language codes. If the LOCALE field is missing, the default behavior in terms of ad delivery is that **All languages will be target, only english non-sublanguage will be targeted**.
 * @member {Array.<String>} LOCALE
 */
TargetingSpec.prototype['LOCALE'] = undefined;

/**
 * 22 ISO Alpha 2 two letter country codes or US Nielsen DMA (Designated Market Area) codes (location region codes) (e.g., [\"US\", \"807\"]). For complete list, click here. Location-Country and Location-Metro codes apply. If the LOCATION field is missing, the default behavior in terms of ad delivery is that **Selects default country if not specified (US) and all regions within that country**.
 * @member {Array.<String>} LOCATION
 */
TargetingSpec.prototype['LOCATION'] = undefined;

/**
 * Array of object: lookback_window [Integer]: Number of days ago to start lookback timeframe for dynamic retargeting tag_types [Array of integer]: Event types to target for dynamic retargeting exclusion_window [Integer]: Number of days ago to stop lookback timeframe for dynamic retargeting
 * @member {Array.<module:model/TargetingSpecSHOPPINGRETARGETING>} SHOPPING_RETARGETING
 */
TargetingSpec.prototype['SHOPPING_RETARGETING'] = undefined;

/**
 * 
 * @member {Array.<module:model/TargetingSpec.TARGETINGSTRATEGYEnum>} TARGETING_STRATEGY
 */
TargetingSpec.prototype['TARGETING_STRATEGY'] = undefined;





/**
 * Allowed values for the <code>AGE_BUCKET</code> property.
 * @enum {String}
 * @readonly
 */
TargetingSpec['AGEBUCKETEnum'] = {

    /**
     * value: "18-24"
     * @const
     */
    "18-24": "18-24",

    /**
     * value: "21+"
     * @const
     */
    "21+": "21+",

    /**
     * value: "25-34"
     * @const
     */
    "25-34": "25-34",

    /**
     * value: "35-44"
     * @const
     */
    "35-44": "35-44",

    /**
     * value: "45-49"
     * @const
     */
    "45-49": "45-49",

    /**
     * value: "50-54"
     * @const
     */
    "50-54": "50-54",

    /**
     * value: "55-64"
     * @const
     */
    "55-64": "55-64",

    /**
     * value: "65+"
     * @const
     */
    "65+": "65+"
};


/**
 * Allowed values for the <code>APPTYPE</code> property.
 * @enum {String}
 * @readonly
 */
TargetingSpec['APPTYPEEnum'] = {

    /**
     * value: "android_mobile"
     * @const
     */
    "android_mobile": "android_mobile",

    /**
     * value: "android_tablet"
     * @const
     */
    "android_tablet": "android_tablet",

    /**
     * value: "ipad"
     * @const
     */
    "ipad": "ipad",

    /**
     * value: "iphone"
     * @const
     */
    "iphone": "iphone",

    /**
     * value: "web"
     * @const
     */
    "web": "web",

    /**
     * value: "web_mobile"
     * @const
     */
    "web_mobile": "web_mobile"
};


/**
 * Allowed values for the <code>GENDER</code> property.
 * @enum {String}
 * @readonly
 */
TargetingSpec['GENDEREnum'] = {

    /**
     * value: "unknown"
     * @const
     */
    "unknown": "unknown",

    /**
     * value: "male"
     * @const
     */
    "male": "male",

    /**
     * value: "female"
     * @const
     */
    "female": "female"
};


/**
 * Allowed values for the <code>TARGETING_STRATEGY</code> property.
 * @enum {String}
 * @readonly
 */
TargetingSpec['TARGETINGSTRATEGYEnum'] = {

    /**
     * value: "CHOOSE_YOUR_OWN"
     * @const
     */
    "CHOOSE_YOUR_OWN": "CHOOSE_YOUR_OWN",

    /**
     * value: "FIND_NEW_CUSTOMERS"
     * @const
     */
    "FIND_NEW_CUSTOMERS": "FIND_NEW_CUSTOMERS",

    /**
     * value: "RECONNECT_WITH_USERS"
     * @const
     */
    "RECONNECT_WITH_USERS": "RECONNECT_WITH_USERS"
};



export default TargetingSpec;

