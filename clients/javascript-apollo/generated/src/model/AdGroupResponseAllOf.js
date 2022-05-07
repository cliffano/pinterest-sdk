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
import AdGroupSummaryStatus from './AdGroupSummaryStatus';
import EntityStatus from './EntityStatus';
import PacingDeliveryType from './PacingDeliveryType';
import PlacementGroupType from './PlacementGroupType';
import TrackingUrls from './TrackingUrls';

/**
 * The AdGroupResponseAllOf model module.
 * @module model/AdGroupResponseAllOf
 * @version 5.3.0
 */
class AdGroupResponseAllOf {
    /**
     * @member {String} name
     * @type {String}
     */
    name;
    /**
     * @member {EntityStatus} status
     * @type {EntityStatus}
     */
    status;
    /**
     * @member {Number} budget_in_micro_currency
     * @type {Number}
     */
    budget_in_micro_currency;
    /**
     * @member {Number} bid_in_micro_currency
     * @type {Number}
     */
    bid_in_micro_currency;
    /**
     * @member {AdGroupResponseAllOf.BudgetTypeEnum} budget_type
     * @type {AdGroupResponseAllOf.BudgetTypeEnum}
     */
    budget_type;
    /**
     * @member {Number} start_time
     * @type {Number}
     */
    start_time;
    /**
     * @member {Number} end_time
     * @type {Number}
     */
    end_time;
    /**
     * @member {Object.<String, CodegenProperty{openApiType='array', baseName='inner', complexType='null', getter='getInner', setter='setInner', description='null', dataType='[String]', datatypeWithEnum='[String]', dataFormat='null', name='inner', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['inner'], ['String']);', baseType='Array', containerType='array', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "array",
  "items" : {
    "type" : "string"
  }
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=true, isString=false, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=true, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=CodegenProperty{openApiType='string', baseName='inner', complexType='null', getter='getInner', setter='setInner', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='inner', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['inner'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=false, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Inner', nameInSnakeCase='INNER', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=CodegenProperty{openApiType='string', baseName='inner', complexType='null', getter='getInner', setter='setInner', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='inner', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['inner'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=false, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Inner', nameInSnakeCase='INNER', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Inner', nameInSnakeCase='INNER', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}>} targeting_spec
     * @type {Object.<String, CodegenProperty{openApiType='array', baseName='inner', complexType='null', getter='getInner', setter='setInner', description='null', dataType='[String]', datatypeWithEnum='[String]', dataFormat='null', name='inner', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['inner'], ['String']);', baseType='Array', containerType='array', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "array",
  "items" : {
    "type" : "string"
  }
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=true, isString=false, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=true, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=CodegenProperty{openApiType='string', baseName='inner', complexType='null', getter='getInner', setter='setInner', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='inner', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['inner'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=false, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Inner', nameInSnakeCase='INNER', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=CodegenProperty{openApiType='string', baseName='inner', complexType='null', getter='getInner', setter='setInner', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='inner', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['inner'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=false, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Inner', nameInSnakeCase='INNER', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Inner', nameInSnakeCase='INNER', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}>}
     */
    targeting_spec;
    /**
     * @member {Number} lifetime_frequency_cap
     * @type {Number}
     */
    lifetime_frequency_cap;
    /**
     * @member {TrackingUrls} tracking_urls
     * @type {TrackingUrls}
     */
    tracking_urls;
    /**
     * @member {Boolean} auto_targeting_enabled
     * @type {Boolean}
     */
    auto_targeting_enabled;
    /**
     * @member {PlacementGroupType} placement_group
     * @type {PlacementGroupType}
     */
    placement_group;
    /**
     * @member {PacingDeliveryType} pacing_delivery_type
     * @type {PacingDeliveryType}
     */
    pacing_delivery_type;
    /**
     * @member {AdGroupResponseAllOf.ConversionLearningModeTypeEnum} conversion_learning_mode_type
     * @type {AdGroupResponseAllOf.ConversionLearningModeTypeEnum}
     */
    conversion_learning_mode_type;
    /**
     * @member {AdGroupSummaryStatus} summary_status
     * @type {AdGroupSummaryStatus}
     */
    summary_status;
    /**
     * @member {String} feed_profile_id
     * @type {String}
     */
    feed_profile_id;

    

    /**
     * Constructs a new <code>AdGroupResponseAllOf</code>.
     * @alias module:model/AdGroupResponseAllOf
     */
    constructor() { 
        
        AdGroupResponseAllOf.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>AdGroupResponseAllOf</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/AdGroupResponseAllOf} obj Optional instance to populate.
     * @return {module:model/AdGroupResponseAllOf} The populated <code>AdGroupResponseAllOf</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new AdGroupResponseAllOf();

            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = ApiClient.convertToType(data['status'], EntityStatus);
            }
            if (data.hasOwnProperty('budget_in_micro_currency')) {
                obj['budget_in_micro_currency'] = ApiClient.convertToType(data['budget_in_micro_currency'], 'Number');
            }
            if (data.hasOwnProperty('bid_in_micro_currency')) {
                obj['bid_in_micro_currency'] = ApiClient.convertToType(data['bid_in_micro_currency'], 'Number');
            }
            if (data.hasOwnProperty('budget_type')) {
                obj['budget_type'] = ApiClient.convertToType(data['budget_type'], 'String');
            }
            if (data.hasOwnProperty('start_time')) {
                obj['start_time'] = ApiClient.convertToType(data['start_time'], 'Number');
            }
            if (data.hasOwnProperty('end_time')) {
                obj['end_time'] = ApiClient.convertToType(data['end_time'], 'Number');
            }
            if (data.hasOwnProperty('targeting_spec')) {
                obj['targeting_spec'] = ApiClient.convertToType(data['targeting_spec'], {'String': ['String']});
            }
            if (data.hasOwnProperty('lifetime_frequency_cap')) {
                obj['lifetime_frequency_cap'] = ApiClient.convertToType(data['lifetime_frequency_cap'], 'Number');
            }
            if (data.hasOwnProperty('tracking_urls')) {
                obj['tracking_urls'] = ApiClient.convertToType(data['tracking_urls'], TrackingUrls);
            }
            if (data.hasOwnProperty('auto_targeting_enabled')) {
                obj['auto_targeting_enabled'] = ApiClient.convertToType(data['auto_targeting_enabled'], 'Boolean');
            }
            if (data.hasOwnProperty('placement_group')) {
                obj['placement_group'] = ApiClient.convertToType(data['placement_group'], PlacementGroupType);
            }
            if (data.hasOwnProperty('pacing_delivery_type')) {
                obj['pacing_delivery_type'] = ApiClient.convertToType(data['pacing_delivery_type'], PacingDeliveryType);
            }
            if (data.hasOwnProperty('conversion_learning_mode_type')) {
                obj['conversion_learning_mode_type'] = ApiClient.convertToType(data['conversion_learning_mode_type'], 'String');
            }
            if (data.hasOwnProperty('summary_status')) {
                obj['summary_status'] = ApiClient.convertToType(data['summary_status'], AdGroupSummaryStatus);
            }
            if (data.hasOwnProperty('feed_profile_id')) {
                obj['feed_profile_id'] = ApiClient.convertToType(data['feed_profile_id'], 'String');
            }
        }
        return obj;
    }
}


/**
 * Allowed values for the <code>budget_type</code> property.
 * @enum {String}
 * @readonly
 */
AdGroupResponseAllOf['BudgetTypeEnum'] = {

    /**
     * value: "DAILY"
     * @const
     */
    "DAILY": "DAILY",

    /**
     * value: "LIFETIME"
     * @const
     */
    "LIFETIME": "LIFETIME",

    /**
     * value: "CBO_ADGROUP"
     * @const
     */
    "CBO_ADGROUP": "CBO_ADGROUP"
};


/**
 * Allowed values for the <code>conversion_learning_mode_type</code> property.
 * @enum {String}
 * @readonly
 */
AdGroupResponseAllOf['ConversionLearningModeTypeEnum'] = {

    /**
     * value: "NOT_ACTIVE"
     * @const
     */
    "NOT_ACTIVE": "NOT_ACTIVE",

    /**
     * value: "ACTIVE"
     * @const
     */
    "ACTIVE": "ACTIVE",

    /**
     * value: "null"
     * @const
     */
    "null": "null"
};



export default AdGroupResponseAllOf;

