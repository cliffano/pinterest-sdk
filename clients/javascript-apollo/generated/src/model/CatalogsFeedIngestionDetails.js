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
import CatalogsFeedIngestionErrors from './CatalogsFeedIngestionErrors';
import CatalogsFeedIngestionInfo from './CatalogsFeedIngestionInfo';

/**
 * The CatalogsFeedIngestionDetails model module.
 * @module model/CatalogsFeedIngestionDetails
 * @version 5.3.0
 */
class CatalogsFeedIngestionDetails {
    /**
     * @member {CatalogsFeedIngestionErrors} errors
     * @type {CatalogsFeedIngestionErrors}
     */
    errors;
    /**
     * @member {CatalogsFeedIngestionInfo} info
     * @type {CatalogsFeedIngestionInfo}
     */
    info;

    

    /**
     * Constructs a new <code>CatalogsFeedIngestionDetails</code>.
     * @alias module:model/CatalogsFeedIngestionDetails
     * @param errors {CatalogsFeedIngestionErrors} 
     * @param info {CatalogsFeedIngestionInfo} 
     */
    constructor(errors, info) { 
        
        CatalogsFeedIngestionDetails.initialize(this, errors, info);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, errors, info) { 
        obj['errors'] = errors;
        obj['info'] = info;
    }

    /**
     * Constructs a <code>CatalogsFeedIngestionDetails</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsFeedIngestionDetails} obj Optional instance to populate.
     * @return {module:model/CatalogsFeedIngestionDetails} The populated <code>CatalogsFeedIngestionDetails</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsFeedIngestionDetails();

            if (data.hasOwnProperty('errors')) {
                obj['errors'] = CatalogsFeedIngestionErrors.constructFromObject(data['errors']);
            }
            if (data.hasOwnProperty('info')) {
                obj['info'] = CatalogsFeedIngestionInfo.constructFromObject(data['info']);
            }
        }
        return obj;
    }
}



export default CatalogsFeedIngestionDetails;

