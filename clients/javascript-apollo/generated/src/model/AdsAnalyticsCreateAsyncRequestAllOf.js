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
import ConversionAttributionWindowDays from './ConversionAttributionWindowDays';
import ConversionReportAttributionType from './ConversionReportAttributionType';
import ConversionReportTimeType from './ConversionReportTimeType';
import Granularity from './Granularity';

/**
 * The AdsAnalyticsCreateAsyncRequestAllOf model module.
 * @module model/AdsAnalyticsCreateAsyncRequestAllOf
 * @version 5.3.0
 */
class AdsAnalyticsCreateAsyncRequestAllOf {
    /**
     * @member {String} start_date
     * @type {String}
     */
    start_date;
    /**
     * @member {String} end_date
     * @type {String}
     */
    end_date;
    /**
     * @member {Granularity} granularity
     * @type {Granularity}
     */
    granularity;
    /**
     * @member {ConversionAttributionWindowDays} click_window_days
     * @type {ConversionAttributionWindowDays}
     * @default 30
     */
    click_window_days = 30;
    /**
     * @member {ConversionAttributionWindowDays} engagement_window_days
     * @type {ConversionAttributionWindowDays}
     * @default 30
     */
    engagement_window_days = 30;
    /**
     * @member {ConversionAttributionWindowDays} view_window_days
     * @type {ConversionAttributionWindowDays}
     * @default 1
     */
    view_window_days = 1;
    /**
     * @member {ConversionReportTimeType} conversion_report_time
     * @type {ConversionReportTimeType}
     * @default 'TIME_OF_AD_ACTION'
     */
    conversion_report_time = 'TIME_OF_AD_ACTION';
    /**
     * @member {Array.<CodegenProperty{openApiType='ConversionReportAttributionType', baseName='attributionTypes', complexType='ConversionReportAttributionType', getter='getAttributionTypes', setter='setAttributionTypes', description='null', dataType='ConversionReportAttributionType', datatypeWithEnum='ConversionReportAttributionType', dataFormat='null', name='attributionTypes', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ConversionReportAttributionType.constructFromObject(data['attributionTypes']);', baseType='ConversionReportAttributionType', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/ConversionReportAttributionType"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=false, isContainer=false, isString=false, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=false, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues={values=[INDIVIDUAL, HOUSEHOLD], enumVars=[{name=INDIVIDUAL, isString=true, value="INDIVIDUAL"}, {name=HOUSEHOLD, isString=true, value="HOUSEHOLD"}]}, items=null, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='AttributionTypes', nameInSnakeCase='ATTRIBUTION_TYPES', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}>} attribution_types
     * @type {Array.<CodegenProperty{openApiType='ConversionReportAttributionType', baseName='attributionTypes', complexType='ConversionReportAttributionType', getter='getAttributionTypes', setter='setAttributionTypes', description='null', dataType='ConversionReportAttributionType', datatypeWithEnum='ConversionReportAttributionType', dataFormat='null', name='attributionTypes', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ConversionReportAttributionType.constructFromObject(data['attributionTypes']);', baseType='ConversionReportAttributionType', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/ConversionReportAttributionType"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=false, isContainer=false, isString=false, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=false, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues={values=[INDIVIDUAL, HOUSEHOLD], enumVars=[{name=INDIVIDUAL, isString=true, value="INDIVIDUAL"}, {name=HOUSEHOLD, isString=true, value="HOUSEHOLD"}]}, items=null, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='AttributionTypes', nameInSnakeCase='ATTRIBUTION_TYPES', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}>}
     */
    attribution_types;

    

    /**
     * Constructs a new <code>AdsAnalyticsCreateAsyncRequestAllOf</code>.
     * @alias module:model/AdsAnalyticsCreateAsyncRequestAllOf
     * @param startDate {String} Metric report start date (UTC). Format: YYYY-MM-DD
     * @param endDate {String} Metric report end date (UTC). Format: YYYY-MM-DD
     * @param granularity {Granularity} TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly
     */
    constructor(startDate, endDate, granularity) { 
        
        AdsAnalyticsCreateAsyncRequestAllOf.initialize(this, startDate, endDate, granularity);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, startDate, endDate, granularity) { 
        obj['start_date'] = startDate;
        obj['end_date'] = endDate;
        obj['granularity'] = granularity;
    }

    /**
     * Constructs a <code>AdsAnalyticsCreateAsyncRequestAllOf</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/AdsAnalyticsCreateAsyncRequestAllOf} obj Optional instance to populate.
     * @return {module:model/AdsAnalyticsCreateAsyncRequestAllOf} The populated <code>AdsAnalyticsCreateAsyncRequestAllOf</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new AdsAnalyticsCreateAsyncRequestAllOf();

            if (data.hasOwnProperty('start_date')) {
                obj['start_date'] = ApiClient.convertToType(data['start_date'], 'String');
            }
            if (data.hasOwnProperty('end_date')) {
                obj['end_date'] = ApiClient.convertToType(data['end_date'], 'String');
            }
            if (data.hasOwnProperty('granularity')) {
                obj['granularity'] = ApiClient.convertToType(data['granularity'], Granularity);
            }
            if (data.hasOwnProperty('click_window_days')) {
                obj['click_window_days'] = ApiClient.convertToType(data['click_window_days'], ConversionAttributionWindowDays);
            }
            if (data.hasOwnProperty('engagement_window_days')) {
                obj['engagement_window_days'] = ApiClient.convertToType(data['engagement_window_days'], ConversionAttributionWindowDays);
            }
            if (data.hasOwnProperty('view_window_days')) {
                obj['view_window_days'] = ApiClient.convertToType(data['view_window_days'], ConversionAttributionWindowDays);
            }
            if (data.hasOwnProperty('conversion_report_time')) {
                obj['conversion_report_time'] = ApiClient.convertToType(data['conversion_report_time'], ConversionReportTimeType);
            }
            if (data.hasOwnProperty('attribution_types')) {
                obj['attribution_types'] = ApiClient.convertToType(data['attribution_types'], [ConversionReportAttributionType]);
            }
        }
        return obj;
    }
}



export default AdsAnalyticsCreateAsyncRequestAllOf;

