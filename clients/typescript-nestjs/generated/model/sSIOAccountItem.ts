/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
import { SSIOAccountAddress } from './sSIOAccountAddress';


export interface SSIOAccountItem { 
    /**
     * Salesforce id for billto_info
     */
    id?: string;
    /**
     * Salesforce id for IO Terms and Conditions
     */
    io_terms_id?: string;
    /**
     * Salesforce text for IO Terms and Conditions
     */
    io_terms?: string;
    /**
     * Salesforce id for US Terms and Conditions
     */
    us_terms_id?: string;
    /**
     * Salesforce text for US Terms and Conditions
     */
    us_terms?: string;
    /**
     * Salesforce id for Rest of the World Terms and Conditions
     */
    row_terms_id?: string;
    /**
     * Salesforce text for Rest of the World Terms and Conditions
     */
    row_terms?: string;
    /**
     * Insertion Order Type - Pinterest Paper or Agency Paper
     */
    io_type?: string;
    /**
     * Address information that is associated with this account.
     */
    addresses?: Array<SSIOAccountAddress>;
}

