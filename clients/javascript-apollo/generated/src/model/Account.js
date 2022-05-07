/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';

/**
 * The Account model module.
 * @module model/Account
 * @version 5.3.0
 */
class Account {
    /**
     * @member {Account.AccountTypeEnum} account_type
     * @type {Account.AccountTypeEnum}
     */
    account_type;
    /**
     * @member {String} profile_image
     * @type {String}
     */
    profile_image;
    /**
     * @member {String} website_url
     * @type {String}
     */
    website_url;
    /**
     * @member {String} username
     * @type {String}
     */
    username;

    

    /**
     * Constructs a new <code>Account</code>.
     * @alias module:model/Account
     */
    constructor() { 
        
        Account.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>Account</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Account} obj Optional instance to populate.
     * @return {module:model/Account} The populated <code>Account</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Account();

            if (data.hasOwnProperty('account_type')) {
                obj['account_type'] = ApiClient.convertToType(data['account_type'], 'String');
            }
            if (data.hasOwnProperty('profile_image')) {
                obj['profile_image'] = ApiClient.convertToType(data['profile_image'], 'String');
            }
            if (data.hasOwnProperty('website_url')) {
                obj['website_url'] = ApiClient.convertToType(data['website_url'], 'String');
            }
            if (data.hasOwnProperty('username')) {
                obj['username'] = ApiClient.convertToType(data['username'], 'String');
            }
        }
        return obj;
    }
}


/**
 * Allowed values for the <code>account_type</code> property.
 * @enum {String}
 * @readonly
 */
Account['AccountTypeEnum'] = {

    /**
     * value: "PINNER"
     * @const
     */
    "PINNER": "PINNER",

    /**
     * value: "BUSINESS"
     * @const
     */
    "BUSINESS": "BUSINESS"
};



export default Account;

