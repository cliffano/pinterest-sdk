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
import EntityStatus from './EntityStatus';
import TrackingUrls from './TrackingUrls';

/**
 * The AdResponseAllOf model module.
 * @module model/AdResponseAllOf
 * @version 5.3.0
 */
class AdResponseAllOf {
    /**
     * @member {String} ad_group_id
     * @type {String}
     */
    ad_group_id;
    /**
     * @member {String} android_deep_link
     * @type {String}
     */
    android_deep_link;
    /**
     * @member {Array.<CodegenProperty{openApiType='string', baseName='carouselAndroidDeepLinks', complexType='null', getter='getCarouselAndroidDeepLinks', setter='setCarouselAndroidDeepLinks', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='carouselAndroidDeepLinks', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['carouselAndroidDeepLinks'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=false, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='CarouselAndroidDeepLinks', nameInSnakeCase='CAROUSEL_ANDROID_DEEP_LINKS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}>} carousel_android_deep_links
     * @type {Array.<CodegenProperty{openApiType='string', baseName='carouselAndroidDeepLinks', complexType='null', getter='getCarouselAndroidDeepLinks', setter='setCarouselAndroidDeepLinks', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='carouselAndroidDeepLinks', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['carouselAndroidDeepLinks'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=false, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='CarouselAndroidDeepLinks', nameInSnakeCase='CAROUSEL_ANDROID_DEEP_LINKS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}>}
     */
    carousel_android_deep_links;
    /**
     * @member {Array.<CodegenProperty{openApiType='string', baseName='carouselDestinationUrls', complexType='null', getter='getCarouselDestinationUrls', setter='setCarouselDestinationUrls', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='carouselDestinationUrls', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['carouselDestinationUrls'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=false, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='CarouselDestinationUrls', nameInSnakeCase='CAROUSEL_DESTINATION_URLS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}>} carousel_destination_urls
     * @type {Array.<CodegenProperty{openApiType='string', baseName='carouselDestinationUrls', complexType='null', getter='getCarouselDestinationUrls', setter='setCarouselDestinationUrls', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='carouselDestinationUrls', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['carouselDestinationUrls'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=false, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='CarouselDestinationUrls', nameInSnakeCase='CAROUSEL_DESTINATION_URLS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}>}
     */
    carousel_destination_urls;
    /**
     * @member {Array.<CodegenProperty{openApiType='string', baseName='carouselIosDeepLinks', complexType='null', getter='getCarouselIosDeepLinks', setter='setCarouselIosDeepLinks', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='carouselIosDeepLinks', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['carouselIosDeepLinks'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=false, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='CarouselIosDeepLinks', nameInSnakeCase='CAROUSEL_IOS_DEEP_LINKS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}>} carousel_ios_deep_links
     * @type {Array.<CodegenProperty{openApiType='string', baseName='carouselIosDeepLinks', complexType='null', getter='getCarouselIosDeepLinks', setter='setCarouselIosDeepLinks', description='null', dataType='String', datatypeWithEnum='String', dataFormat='null', name='carouselIosDeepLinks', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ApiClient.convertToType(data['carouselIosDeepLinks'], 'String');', baseType='String', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "type" : "string"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=true, isModel=false, isContainer=false, isString=true, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=false, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='CarouselIosDeepLinks', nameInSnakeCase='CAROUSEL_IOS_DEEP_LINKS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}>}
     */
    carousel_ios_deep_links;
    /**
     * @member {String} click_tracking_url
     * @type {String}
     */
    click_tracking_url;
    /**
     * @member {AdResponseAllOf.CreativeTypeEnum} creative_type
     * @type {AdResponseAllOf.CreativeTypeEnum}
     */
    creative_type;
    /**
     * @member {String} destination_url
     * @type {String}
     */
    destination_url;
    /**
     * @member {String} ios_deep_link
     * @type {String}
     */
    ios_deep_link;
    /**
     * @member {Boolean} is_pin_deleted
     * @type {Boolean}
     */
    is_pin_deleted;
    /**
     * @member {Boolean} is_removable
     * @type {Boolean}
     */
    is_removable;
    /**
     * @member {String} name
     * @type {String}
     */
    name;
    /**
     * @member {String} pin_id
     * @type {String}
     */
    pin_id;
    /**
     * @member {EntityStatus} status
     * @type {EntityStatus}
     */
    status;
    /**
     * @member {TrackingUrls} tracking_urls
     * @type {TrackingUrls}
     */
    tracking_urls;
    /**
     * @member {String} view_tracking_url
     * @type {String}
     */
    view_tracking_url;

    

    /**
     * Constructs a new <code>AdResponseAllOf</code>.
     * Creation fields
     * @alias module:model/AdResponseAllOf
     */
    constructor() { 
        
        AdResponseAllOf.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>AdResponseAllOf</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/AdResponseAllOf} obj Optional instance to populate.
     * @return {module:model/AdResponseAllOf} The populated <code>AdResponseAllOf</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new AdResponseAllOf();

            if (data.hasOwnProperty('ad_group_id')) {
                obj['ad_group_id'] = ApiClient.convertToType(data['ad_group_id'], 'String');
            }
            if (data.hasOwnProperty('android_deep_link')) {
                obj['android_deep_link'] = ApiClient.convertToType(data['android_deep_link'], 'String');
            }
            if (data.hasOwnProperty('carousel_android_deep_links')) {
                obj['carousel_android_deep_links'] = ApiClient.convertToType(data['carousel_android_deep_links'], ['String']);
            }
            if (data.hasOwnProperty('carousel_destination_urls')) {
                obj['carousel_destination_urls'] = ApiClient.convertToType(data['carousel_destination_urls'], ['String']);
            }
            if (data.hasOwnProperty('carousel_ios_deep_links')) {
                obj['carousel_ios_deep_links'] = ApiClient.convertToType(data['carousel_ios_deep_links'], ['String']);
            }
            if (data.hasOwnProperty('click_tracking_url')) {
                obj['click_tracking_url'] = ApiClient.convertToType(data['click_tracking_url'], 'String');
            }
            if (data.hasOwnProperty('creative_type')) {
                obj['creative_type'] = ApiClient.convertToType(data['creative_type'], 'String');
            }
            if (data.hasOwnProperty('destination_url')) {
                obj['destination_url'] = ApiClient.convertToType(data['destination_url'], 'String');
            }
            if (data.hasOwnProperty('ios_deep_link')) {
                obj['ios_deep_link'] = ApiClient.convertToType(data['ios_deep_link'], 'String');
            }
            if (data.hasOwnProperty('is_pin_deleted')) {
                obj['is_pin_deleted'] = ApiClient.convertToType(data['is_pin_deleted'], 'Boolean');
            }
            if (data.hasOwnProperty('is_removable')) {
                obj['is_removable'] = ApiClient.convertToType(data['is_removable'], 'Boolean');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('pin_id')) {
                obj['pin_id'] = ApiClient.convertToType(data['pin_id'], 'String');
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = EntityStatus.constructFromObject(data['status']);
            }
            if (data.hasOwnProperty('tracking_urls')) {
                obj['tracking_urls'] = ApiClient.convertToType(data['tracking_urls'], TrackingUrls);
            }
            if (data.hasOwnProperty('view_tracking_url')) {
                obj['view_tracking_url'] = ApiClient.convertToType(data['view_tracking_url'], 'String');
            }
        }
        return obj;
    }
}


/**
 * Allowed values for the <code>creative_type</code> property.
 * @enum {String}
 * @readonly
 */
AdResponseAllOf['CreativeTypeEnum'] = {

    /**
     * value: "REGULAR"
     * @const
     */
    "REGULAR": "REGULAR",

    /**
     * value: "VIDEO"
     * @const
     */
    "VIDEO": "VIDEO",

    /**
     * value: "SHOPPING"
     * @const
     */
    "SHOPPING": "SHOPPING",

    /**
     * value: "CAROUSEL"
     * @const
     */
    "CAROUSEL": "CAROUSEL",

    /**
     * value: "MAX_VIDEO"
     * @const
     */
    "MAX_VIDEO": "MAX_VIDEO",

    /**
     * value: "SHOP_THE_PIN"
     * @const
     */
    "SHOP_THE_PIN": "SHOP_THE_PIN",

    /**
     * value: "STORY"
     * @const
     */
    "STORY": "STORY"
};



export default AdResponseAllOf;

