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
import Currency from './Currency';
import SSIOInsertionOrderCommon from './SSIOInsertionOrderCommon';

/**
 * The SSIOCreateInsertionOrderRequest model module.
 * @module model/SSIOCreateInsertionOrderRequest
 * @version 1.1.1-pre.0
 */
class SSIOCreateInsertionOrderRequest {
    /**
     * Constructs a new <code>SSIOCreateInsertionOrderRequest</code>.
     * @alias module:model/SSIOCreateInsertionOrderRequest
     * @implements module:model/SSIOInsertionOrderCommon
     * @param startDate {String} Starting date of time period. Format: YYYY-MM-DD
     * @param poNumber {String} The po number
     * @param billingContactFirstname {String} The billing contact first name
     * @param billingContactLastname {String} The billing contact last name
     * @param billingContactEmail {String} The billing contact email
     * @param mediaContactFirstname {String} The media contact first name
     * @param mediaContactLastname {String} The media contact last name
     * @param mediaContactEmail {String} The media contact email
     * @param pmpId {String} The pmp id
     * @param orderName {String} The order name
     * @param orderLineType {module:model/SSIOCreateInsertionOrderRequest.OrderLineTypeEnum} Type can be Budget or Perpetual
     * @param acceptedTermsId {String} The SFDC id for the terms
     * @param billtoCompanyId {String} The bill-to company id
     * @param billtoBusinessAddressId {String} The bill-to business address id
     * @param billtoBillingAddressId {String} The bill-to billing address id
     * @param currencyInfo {module:model/Currency} 
     */
    constructor(startDate, poNumber, billingContactFirstname, billingContactLastname, billingContactEmail, mediaContactFirstname, mediaContactLastname, mediaContactEmail, pmpId, orderName, orderLineType, acceptedTermsId, billtoCompanyId, billtoBusinessAddressId, billtoBillingAddressId, currencyInfo) { 
        SSIOInsertionOrderCommon.initialize(this);
        SSIOCreateInsertionOrderRequest.initialize(this, startDate, poNumber, billingContactFirstname, billingContactLastname, billingContactEmail, mediaContactFirstname, mediaContactLastname, mediaContactEmail, pmpId, orderName, orderLineType, acceptedTermsId, billtoCompanyId, billtoBusinessAddressId, billtoBillingAddressId, currencyInfo);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, startDate, poNumber, billingContactFirstname, billingContactLastname, billingContactEmail, mediaContactFirstname, mediaContactLastname, mediaContactEmail, pmpId, orderName, orderLineType, acceptedTermsId, billtoCompanyId, billtoBusinessAddressId, billtoBillingAddressId, currencyInfo) { 
        obj['start_date'] = startDate;
        obj['po_number'] = poNumber;
        obj['billing_contact_firstname'] = billingContactFirstname;
        obj['billing_contact_lastname'] = billingContactLastname;
        obj['billing_contact_email'] = billingContactEmail;
        obj['media_contact_firstname'] = mediaContactFirstname;
        obj['media_contact_lastname'] = mediaContactLastname;
        obj['media_contact_email'] = mediaContactEmail;
        obj['pmp_id'] = pmpId;
        obj['order_name'] = orderName;
        obj['order_line_type'] = orderLineType;
        obj['accepted_terms_id'] = acceptedTermsId;
        obj['billto_company_id'] = billtoCompanyId;
        obj['billto_business_address_id'] = billtoBusinessAddressId;
        obj['billto_billing_address_id'] = billtoBillingAddressId;
        obj['currency_info'] = currencyInfo;
    }

    /**
     * Constructs a <code>SSIOCreateInsertionOrderRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SSIOCreateInsertionOrderRequest} obj Optional instance to populate.
     * @return {module:model/SSIOCreateInsertionOrderRequest} The populated <code>SSIOCreateInsertionOrderRequest</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SSIOCreateInsertionOrderRequest();
            SSIOInsertionOrderCommon.constructFromObject(data, obj);

            if (data.hasOwnProperty('start_date')) {
                obj['start_date'] = ApiClient.convertToType(data['start_date'], 'String');
            }
            if (data.hasOwnProperty('end_date')) {
                obj['end_date'] = ApiClient.convertToType(data['end_date'], 'String');
            }
            if (data.hasOwnProperty('po_number')) {
                obj['po_number'] = ApiClient.convertToType(data['po_number'], 'String');
            }
            if (data.hasOwnProperty('budget_amount')) {
                obj['budget_amount'] = ApiClient.convertToType(data['budget_amount'], 'Number');
            }
            if (data.hasOwnProperty('billing_contact_firstname')) {
                obj['billing_contact_firstname'] = ApiClient.convertToType(data['billing_contact_firstname'], 'String');
            }
            if (data.hasOwnProperty('billing_contact_lastname')) {
                obj['billing_contact_lastname'] = ApiClient.convertToType(data['billing_contact_lastname'], 'String');
            }
            if (data.hasOwnProperty('billing_contact_email')) {
                obj['billing_contact_email'] = ApiClient.convertToType(data['billing_contact_email'], 'String');
            }
            if (data.hasOwnProperty('media_contact_firstname')) {
                obj['media_contact_firstname'] = ApiClient.convertToType(data['media_contact_firstname'], 'String');
            }
            if (data.hasOwnProperty('media_contact_lastname')) {
                obj['media_contact_lastname'] = ApiClient.convertToType(data['media_contact_lastname'], 'String');
            }
            if (data.hasOwnProperty('media_contact_email')) {
                obj['media_contact_email'] = ApiClient.convertToType(data['media_contact_email'], 'String');
            }
            if (data.hasOwnProperty('agency_link')) {
                obj['agency_link'] = ApiClient.convertToType(data['agency_link'], 'String');
            }
            if (data.hasOwnProperty('user_email')) {
                obj['user_email'] = ApiClient.convertToType(data['user_email'], 'String');
            }
            if (data.hasOwnProperty('accepted_terms_time')) {
                obj['accepted_terms_time'] = ApiClient.convertToType(data['accepted_terms_time'], 'Number');
            }
            if (data.hasOwnProperty('pmp_id')) {
                obj['pmp_id'] = ApiClient.convertToType(data['pmp_id'], 'String');
            }
            if (data.hasOwnProperty('order_name')) {
                obj['order_name'] = ApiClient.convertToType(data['order_name'], 'String');
            }
            if (data.hasOwnProperty('order_line_type')) {
                obj['order_line_type'] = ApiClient.convertToType(data['order_line_type'], 'String');
            }
            if (data.hasOwnProperty('accepted_terms_id')) {
                obj['accepted_terms_id'] = ApiClient.convertToType(data['accepted_terms_id'], 'String');
            }
            if (data.hasOwnProperty('billto_company_id')) {
                obj['billto_company_id'] = ApiClient.convertToType(data['billto_company_id'], 'String');
            }
            if (data.hasOwnProperty('billto_business_address_id')) {
                obj['billto_business_address_id'] = ApiClient.convertToType(data['billto_business_address_id'], 'String');
            }
            if (data.hasOwnProperty('billto_billing_address_id')) {
                obj['billto_billing_address_id'] = ApiClient.convertToType(data['billto_billing_address_id'], 'String');
            }
            if (data.hasOwnProperty('estimated_monthly_spend')) {
                obj['estimated_monthly_spend'] = ApiClient.convertToType(data['estimated_monthly_spend'], 'Number');
            }
            if (data.hasOwnProperty('currency_info')) {
                obj['currency_info'] = Currency.constructFromObject(data['currency_info']);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>SSIOCreateInsertionOrderRequest</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>SSIOCreateInsertionOrderRequest</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of SSIOCreateInsertionOrderRequest.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        // ensure the json data is a string
        if (data['start_date'] && !(typeof data['start_date'] === 'string' || data['start_date'] instanceof String)) {
            throw new Error("Expected the field `start_date` to be a primitive type in the JSON string but got " + data['start_date']);
        }
        // ensure the json data is a string
        if (data['end_date'] && !(typeof data['end_date'] === 'string' || data['end_date'] instanceof String)) {
            throw new Error("Expected the field `end_date` to be a primitive type in the JSON string but got " + data['end_date']);
        }
        // ensure the json data is a string
        if (data['po_number'] && !(typeof data['po_number'] === 'string' || data['po_number'] instanceof String)) {
            throw new Error("Expected the field `po_number` to be a primitive type in the JSON string but got " + data['po_number']);
        }
        // ensure the json data is a string
        if (data['billing_contact_firstname'] && !(typeof data['billing_contact_firstname'] === 'string' || data['billing_contact_firstname'] instanceof String)) {
            throw new Error("Expected the field `billing_contact_firstname` to be a primitive type in the JSON string but got " + data['billing_contact_firstname']);
        }
        // ensure the json data is a string
        if (data['billing_contact_lastname'] && !(typeof data['billing_contact_lastname'] === 'string' || data['billing_contact_lastname'] instanceof String)) {
            throw new Error("Expected the field `billing_contact_lastname` to be a primitive type in the JSON string but got " + data['billing_contact_lastname']);
        }
        // ensure the json data is a string
        if (data['billing_contact_email'] && !(typeof data['billing_contact_email'] === 'string' || data['billing_contact_email'] instanceof String)) {
            throw new Error("Expected the field `billing_contact_email` to be a primitive type in the JSON string but got " + data['billing_contact_email']);
        }
        // ensure the json data is a string
        if (data['media_contact_firstname'] && !(typeof data['media_contact_firstname'] === 'string' || data['media_contact_firstname'] instanceof String)) {
            throw new Error("Expected the field `media_contact_firstname` to be a primitive type in the JSON string but got " + data['media_contact_firstname']);
        }
        // ensure the json data is a string
        if (data['media_contact_lastname'] && !(typeof data['media_contact_lastname'] === 'string' || data['media_contact_lastname'] instanceof String)) {
            throw new Error("Expected the field `media_contact_lastname` to be a primitive type in the JSON string but got " + data['media_contact_lastname']);
        }
        // ensure the json data is a string
        if (data['media_contact_email'] && !(typeof data['media_contact_email'] === 'string' || data['media_contact_email'] instanceof String)) {
            throw new Error("Expected the field `media_contact_email` to be a primitive type in the JSON string but got " + data['media_contact_email']);
        }
        // ensure the json data is a string
        if (data['agency_link'] && !(typeof data['agency_link'] === 'string' || data['agency_link'] instanceof String)) {
            throw new Error("Expected the field `agency_link` to be a primitive type in the JSON string but got " + data['agency_link']);
        }
        // ensure the json data is a string
        if (data['user_email'] && !(typeof data['user_email'] === 'string' || data['user_email'] instanceof String)) {
            throw new Error("Expected the field `user_email` to be a primitive type in the JSON string but got " + data['user_email']);
        }
        // ensure the json data is a string
        if (data['pmp_id'] && !(typeof data['pmp_id'] === 'string' || data['pmp_id'] instanceof String)) {
            throw new Error("Expected the field `pmp_id` to be a primitive type in the JSON string but got " + data['pmp_id']);
        }
        // ensure the json data is a string
        if (data['order_name'] && !(typeof data['order_name'] === 'string' || data['order_name'] instanceof String)) {
            throw new Error("Expected the field `order_name` to be a primitive type in the JSON string but got " + data['order_name']);
        }
        // ensure the json data is a string
        if (data['order_line_type'] && !(typeof data['order_line_type'] === 'string' || data['order_line_type'] instanceof String)) {
            throw new Error("Expected the field `order_line_type` to be a primitive type in the JSON string but got " + data['order_line_type']);
        }
        // ensure the json data is a string
        if (data['accepted_terms_id'] && !(typeof data['accepted_terms_id'] === 'string' || data['accepted_terms_id'] instanceof String)) {
            throw new Error("Expected the field `accepted_terms_id` to be a primitive type in the JSON string but got " + data['accepted_terms_id']);
        }
        // ensure the json data is a string
        if (data['billto_company_id'] && !(typeof data['billto_company_id'] === 'string' || data['billto_company_id'] instanceof String)) {
            throw new Error("Expected the field `billto_company_id` to be a primitive type in the JSON string but got " + data['billto_company_id']);
        }
        // ensure the json data is a string
        if (data['billto_business_address_id'] && !(typeof data['billto_business_address_id'] === 'string' || data['billto_business_address_id'] instanceof String)) {
            throw new Error("Expected the field `billto_business_address_id` to be a primitive type in the JSON string but got " + data['billto_business_address_id']);
        }
        // ensure the json data is a string
        if (data['billto_billing_address_id'] && !(typeof data['billto_billing_address_id'] === 'string' || data['billto_billing_address_id'] instanceof String)) {
            throw new Error("Expected the field `billto_billing_address_id` to be a primitive type in the JSON string but got " + data['billto_billing_address_id']);
        }

        return true;
    }


}

SSIOCreateInsertionOrderRequest.RequiredProperties = ["start_date", "po_number", "billing_contact_firstname", "billing_contact_lastname", "billing_contact_email", "media_contact_firstname", "media_contact_lastname", "media_contact_email", "pmp_id", "order_name", "order_line_type", "accepted_terms_id", "billto_company_id", "billto_business_address_id", "billto_billing_address_id", "currency_info"];

/**
 * Starting date of time period. Format: YYYY-MM-DD
 * @member {String} start_date
 */
SSIOCreateInsertionOrderRequest.prototype['start_date'] = undefined;

/**
 * End date of time period. Format: YYYY-MM-DD
 * @member {String} end_date
 */
SSIOCreateInsertionOrderRequest.prototype['end_date'] = undefined;

/**
 * The po number
 * @member {String} po_number
 */
SSIOCreateInsertionOrderRequest.prototype['po_number'] = undefined;

/**
 * If Budget order line, the budget amount.
 * @member {Number} budget_amount
 */
SSIOCreateInsertionOrderRequest.prototype['budget_amount'] = undefined;

/**
 * The billing contact first name
 * @member {String} billing_contact_firstname
 */
SSIOCreateInsertionOrderRequest.prototype['billing_contact_firstname'] = undefined;

/**
 * The billing contact last name
 * @member {String} billing_contact_lastname
 */
SSIOCreateInsertionOrderRequest.prototype['billing_contact_lastname'] = undefined;

/**
 * The billing contact email
 * @member {String} billing_contact_email
 */
SSIOCreateInsertionOrderRequest.prototype['billing_contact_email'] = undefined;

/**
 * The media contact first name
 * @member {String} media_contact_firstname
 */
SSIOCreateInsertionOrderRequest.prototype['media_contact_firstname'] = undefined;

/**
 * The media contact last name
 * @member {String} media_contact_lastname
 */
SSIOCreateInsertionOrderRequest.prototype['media_contact_lastname'] = undefined;

/**
 * The media contact email
 * @member {String} media_contact_email
 */
SSIOCreateInsertionOrderRequest.prototype['media_contact_email'] = undefined;

/**
 * URL link for agency
 * @member {String} agency_link
 */
SSIOCreateInsertionOrderRequest.prototype['agency_link'] = undefined;

/**
 * The email of user submitting the insertion order
 * @member {String} user_email
 */
SSIOCreateInsertionOrderRequest.prototype['user_email'] = undefined;

/**
 * The UTC timestamp (to the nearest sec) of when terms were accepted
 * @member {Number} accepted_terms_time
 */
SSIOCreateInsertionOrderRequest.prototype['accepted_terms_time'] = undefined;

/**
 * The pmp id
 * @member {String} pmp_id
 */
SSIOCreateInsertionOrderRequest.prototype['pmp_id'] = undefined;

/**
 * The order name
 * @member {String} order_name
 */
SSIOCreateInsertionOrderRequest.prototype['order_name'] = undefined;

/**
 * Type can be Budget or Perpetual
 * @member {module:model/SSIOCreateInsertionOrderRequest.OrderLineTypeEnum} order_line_type
 */
SSIOCreateInsertionOrderRequest.prototype['order_line_type'] = undefined;

/**
 * The SFDC id for the terms
 * @member {String} accepted_terms_id
 */
SSIOCreateInsertionOrderRequest.prototype['accepted_terms_id'] = undefined;

/**
 * The bill-to company id
 * @member {String} billto_company_id
 */
SSIOCreateInsertionOrderRequest.prototype['billto_company_id'] = undefined;

/**
 * The bill-to business address id
 * @member {String} billto_business_address_id
 */
SSIOCreateInsertionOrderRequest.prototype['billto_business_address_id'] = undefined;

/**
 * The bill-to billing address id
 * @member {String} billto_billing_address_id
 */
SSIOCreateInsertionOrderRequest.prototype['billto_billing_address_id'] = undefined;

/**
 * If Ongoing (perpetual) order line, the estimated monthly spend
 * @member {Number} estimated_monthly_spend
 */
SSIOCreateInsertionOrderRequest.prototype['estimated_monthly_spend'] = undefined;

/**
 * @member {module:model/Currency} currency_info
 */
SSIOCreateInsertionOrderRequest.prototype['currency_info'] = undefined;


// Implement SSIOInsertionOrderCommon interface:
/**
 * Starting date of time period. Format: YYYY-MM-DD
 * @member {String} start_date
 */
SSIOInsertionOrderCommon.prototype['start_date'] = undefined;
/**
 * End date of time period. Format: YYYY-MM-DD
 * @member {String} end_date
 */
SSIOInsertionOrderCommon.prototype['end_date'] = undefined;
/**
 * The po number
 * @member {String} po_number
 */
SSIOInsertionOrderCommon.prototype['po_number'] = undefined;
/**
 * If Budget order line, the budget amount.
 * @member {Number} budget_amount
 */
SSIOInsertionOrderCommon.prototype['budget_amount'] = undefined;
/**
 * The billing contact first name
 * @member {String} billing_contact_firstname
 */
SSIOInsertionOrderCommon.prototype['billing_contact_firstname'] = undefined;
/**
 * The billing contact last name
 * @member {String} billing_contact_lastname
 */
SSIOInsertionOrderCommon.prototype['billing_contact_lastname'] = undefined;
/**
 * The billing contact email
 * @member {String} billing_contact_email
 */
SSIOInsertionOrderCommon.prototype['billing_contact_email'] = undefined;
/**
 * The media contact first name
 * @member {String} media_contact_firstname
 */
SSIOInsertionOrderCommon.prototype['media_contact_firstname'] = undefined;
/**
 * The media contact last name
 * @member {String} media_contact_lastname
 */
SSIOInsertionOrderCommon.prototype['media_contact_lastname'] = undefined;
/**
 * The media contact email
 * @member {String} media_contact_email
 */
SSIOInsertionOrderCommon.prototype['media_contact_email'] = undefined;
/**
 * URL link for agency
 * @member {String} agency_link
 */
SSIOInsertionOrderCommon.prototype['agency_link'] = undefined;
/**
 * The email of user submitting the insertion order
 * @member {String} user_email
 */
SSIOInsertionOrderCommon.prototype['user_email'] = undefined;



/**
 * Allowed values for the <code>order_line_type</code> property.
 * @enum {String}
 * @readonly
 */
SSIOCreateInsertionOrderRequest['OrderLineTypeEnum'] = {

    /**
     * value: "BUDGET"
     * @const
     */
    "BUDGET": "BUDGET",

    /**
     * value: "PERPETUALS"
     * @const
     */
    "PERPETUALS": "PERPETUALS"
};



export default SSIOCreateInsertionOrderRequest;

