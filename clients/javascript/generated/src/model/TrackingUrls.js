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
 * The TrackingUrls model module.
 * @module model/TrackingUrls
 * @version 1.0.1-pre.0
 */
class TrackingUrls {
    /**
     * Constructs a new <code>TrackingUrls</code>.
     * Third-party tracking URLs. Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Third-party and dynamic tracking&lt;/a&gt;.
     * @alias module:model/TrackingUrls
     */
    constructor() { 
        
        TrackingUrls.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>TrackingUrls</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/TrackingUrls} obj Optional instance to populate.
     * @return {module:model/TrackingUrls} The populated <code>TrackingUrls</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new TrackingUrls();

            if (data.hasOwnProperty('impression')) {
                obj['impression'] = ApiClient.convertToType(data['impression'], ['String']);
            }
            if (data.hasOwnProperty('click')) {
                obj['click'] = ApiClient.convertToType(data['click'], ['String']);
            }
            if (data.hasOwnProperty('engagement')) {
                obj['engagement'] = ApiClient.convertToType(data['engagement'], ['String']);
            }
            if (data.hasOwnProperty('buyable_button')) {
                obj['buyable_button'] = ApiClient.convertToType(data['buyable_button'], ['String']);
            }
            if (data.hasOwnProperty('audience_verification')) {
                obj['audience_verification'] = ApiClient.convertToType(data['audience_verification'], ['String']);
            }
        }
        return obj;
    }


}

/**
 * @member {Array.<String>} impression
 */
TrackingUrls.prototype['impression'] = undefined;

/**
 * @member {Array.<String>} click
 */
TrackingUrls.prototype['click'] = undefined;

/**
 * @member {Array.<String>} engagement
 */
TrackingUrls.prototype['engagement'] = undefined;

/**
 * @member {Array.<String>} buyable_button
 */
TrackingUrls.prototype['buyable_button'] = undefined;

/**
 * @member {Array.<String>} audience_verification
 */
TrackingUrls.prototype['audience_verification'] = undefined;






export default TrackingUrls;

