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
import DataOutputFormat from './DataOutputFormat';
import MetricsReportingLevel from './MetricsReportingLevel';
import ReportingColumnAsync from './ReportingColumnAsync';

/**
 * The AdsAnalyticsCreateAsyncRequestAllOf1 model module.
 * @module model/AdsAnalyticsCreateAsyncRequestAllOf1
 * @version 1.0.1-pre.0
 */
class AdsAnalyticsCreateAsyncRequestAllOf1 {
    /**
     * Constructs a new <code>AdsAnalyticsCreateAsyncRequestAllOf1</code>.
     * @alias module:model/AdsAnalyticsCreateAsyncRequestAllOf1
     * @param columns {Array.<module:model/ReportingColumnAsync>} Metric and entity columns
     * @param level {module:model/MetricsReportingLevel} Level of the report
     */
    constructor(columns, level) { 
        
        AdsAnalyticsCreateAsyncRequestAllOf1.initialize(this, columns, level);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, columns, level) { 
        obj['columns'] = columns;
        obj['level'] = level;
    }

    /**
     * Constructs a <code>AdsAnalyticsCreateAsyncRequestAllOf1</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/AdsAnalyticsCreateAsyncRequestAllOf1} obj Optional instance to populate.
     * @return {module:model/AdsAnalyticsCreateAsyncRequestAllOf1} The populated <code>AdsAnalyticsCreateAsyncRequestAllOf1</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new AdsAnalyticsCreateAsyncRequestAllOf1();

            if (data.hasOwnProperty('columns')) {
                obj['columns'] = ApiClient.convertToType(data['columns'], [ReportingColumnAsync]);
            }
            if (data.hasOwnProperty('level')) {
                obj['level'] = ApiClient.convertToType(data['level'], MetricsReportingLevel);
            }
            if (data.hasOwnProperty('report_format')) {
                obj['report_format'] = ApiClient.convertToType(data['report_format'], DataOutputFormat);
            }
        }
        return obj;
    }


}

/**
 * Metric and entity columns
 * @member {Array.<module:model/ReportingColumnAsync>} columns
 */
AdsAnalyticsCreateAsyncRequestAllOf1.prototype['columns'] = undefined;

/**
 * Level of the report
 * @member {module:model/MetricsReportingLevel} level
 */
AdsAnalyticsCreateAsyncRequestAllOf1.prototype['level'] = undefined;

/**
 * Specification for formatting report data
 * @member {module:model/DataOutputFormat} report_format
 * @default 'JSON'
 */
AdsAnalyticsCreateAsyncRequestAllOf1.prototype['report_format'] = 'JSON';






export default AdsAnalyticsCreateAsyncRequestAllOf1;

