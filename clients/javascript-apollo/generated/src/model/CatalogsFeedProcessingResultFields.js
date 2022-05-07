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
import CatalogsFeedIngestionDetails from './CatalogsFeedIngestionDetails';
import CatalogsFeedProcessingStatus from './CatalogsFeedProcessingStatus';
import CatalogsFeedProductCounts from './CatalogsFeedProductCounts';
import CatalogsFeedValidationDetails from './CatalogsFeedValidationDetails';

/**
 * The CatalogsFeedProcessingResultFields model module.
 * @module model/CatalogsFeedProcessingResultFields
 * @version 5.3.0
 */
class CatalogsFeedProcessingResultFields {
    /**
     * @member {CatalogsFeedIngestionDetails} ingestion_details
     * @type {CatalogsFeedIngestionDetails}
     */
    ingestion_details;
    /**
     * @member {CatalogsFeedProcessingStatus} status
     * @type {CatalogsFeedProcessingStatus}
     */
    status;
    /**
     * @member {CatalogsFeedProductCounts} product_counts
     * @type {CatalogsFeedProductCounts}
     */
    product_counts;
    /**
     * @member {CatalogsFeedValidationDetails} validation_details
     * @type {CatalogsFeedValidationDetails}
     */
    validation_details;

    

    /**
     * Constructs a new <code>CatalogsFeedProcessingResultFields</code>.
     * @alias module:model/CatalogsFeedProcessingResultFields
     * @param ingestionDetails {CatalogsFeedIngestionDetails} 
     * @param status {CatalogsFeedProcessingStatus} 
     * @param productCounts {CatalogsFeedProductCounts} 
     * @param validationDetails {CatalogsFeedValidationDetails} 
     */
    constructor(ingestionDetails, status, productCounts, validationDetails) { 
        
        CatalogsFeedProcessingResultFields.initialize(this, ingestionDetails, status, productCounts, validationDetails);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, ingestionDetails, status, productCounts, validationDetails) { 
        obj['ingestion_details'] = ingestionDetails;
        obj['status'] = status;
        obj['product_counts'] = productCounts;
        obj['validation_details'] = validationDetails;
    }

    /**
     * Constructs a <code>CatalogsFeedProcessingResultFields</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsFeedProcessingResultFields} obj Optional instance to populate.
     * @return {module:model/CatalogsFeedProcessingResultFields} The populated <code>CatalogsFeedProcessingResultFields</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsFeedProcessingResultFields();

            if (data.hasOwnProperty('ingestion_details')) {
                obj['ingestion_details'] = CatalogsFeedIngestionDetails.constructFromObject(data['ingestion_details']);
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = CatalogsFeedProcessingStatus.constructFromObject(data['status']);
            }
            if (data.hasOwnProperty('product_counts')) {
                obj['product_counts'] = CatalogsFeedProductCounts.constructFromObject(data['product_counts']);
            }
            if (data.hasOwnProperty('validation_details')) {
                obj['validation_details'] = CatalogsFeedValidationDetails.constructFromObject(data['validation_details']);
            }
        }
        return obj;
    }
}



export default CatalogsFeedProcessingResultFields;

