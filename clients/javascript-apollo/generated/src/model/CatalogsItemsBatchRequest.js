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
import BatchOperation from './BatchOperation';
import Country from './Country';
import ItemBatchRecord from './ItemBatchRecord';
import Language from './Language';

/**
 * The CatalogsItemsBatchRequest model module.
 * @module model/CatalogsItemsBatchRequest
 * @version 5.3.0
 */
class CatalogsItemsBatchRequest {
    /**
     * @member {Country} country
     * @type {Country}
     */
    country;
    /**
     * @member {Language} language
     * @type {Language}
     */
    language;
    /**
     * @member {BatchOperation} operation
     * @type {BatchOperation}
     */
    operation;
    /**
     * @member {Array.<CodegenProperty{openApiType='ItemBatchRecord', baseName='items', complexType='ItemBatchRecord', getter='getItems', setter='setItems', description='null', dataType='ItemBatchRecord', datatypeWithEnum='ItemBatchRecord', dataFormat='null', name='items', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ItemBatchRecord.constructFromObject(data['items']);', baseType='ItemBatchRecord', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/ItemBatchRecord"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=true, isContainer=false, isString=false, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=false, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Items', nameInSnakeCase='ITEMS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}>} items
     * @type {Array.<CodegenProperty{openApiType='ItemBatchRecord', baseName='items', complexType='ItemBatchRecord', getter='getItems', setter='setItems', description='null', dataType='ItemBatchRecord', datatypeWithEnum='ItemBatchRecord', dataFormat='null', name='items', min='null', max='null', defaultValue='null', defaultValueWithParam=' = ItemBatchRecord.constructFromObject(data['items']);', baseType='ItemBatchRecord', containerType='null', title='null', unescapedDescription='null', maxLength=null, minLength=null, pattern='null', example='null', jsonSchema='{
  "$ref" : "#/components/schemas/ItemBatchRecord"
}', minimum='null', maximum='null', exclusiveMinimum=false, exclusiveMaximum=false, required=false, deprecated=false, hasMoreNonReadOnly=false, isPrimitiveType=false, isModel=true, isContainer=false, isString=false, isNumeric=false, isInteger=false, isShort=false, isLong=false, isUnboundedInteger=false, isNumber=false, isFloat=false, isDouble=false, isDecimal=false, isByteArray=false, isBinary=false, isFile=false, isBoolean=false, isDate=false, isDateTime=false, isUuid=false, isUri=false, isEmail=false, isFreeFormObject=false, isArray=false, isMap=false, isEnum=false, isReadOnly=false, isWriteOnly=false, isNullable=false, isSelfReference=false, isCircularReference=false, isDiscriminator=false, _enum=null, allowableValues=null, items=null, additionalProperties=null, vars=[], requiredVars=[], mostInnerItems=null, vendorExtensions={}, hasValidation=false, isInherited=false, discriminatorValue='null', nameInCamelCase='Items', nameInSnakeCase='ITEMS', enumName='null', maxItems=null, minItems=null, maxProperties=null, minProperties=null, uniqueItems=false, multipleOf=null, isXmlAttribute=false, xmlPrefix='null', xmlName='null', xmlNamespace='null', isXmlWrapped=false, isNull=false, getAdditionalPropertiesIsAnyType=false, getHasVars=false, getHasRequired=false, getHasDiscriminatorWithNonEmptyMapping=false, composedSchemas=null, hasMultipleTypes=false}>}
     */
    items;

    

    /**
     * Constructs a new <code>CatalogsItemsBatchRequest</code>.
     * Request object of catalogs items batch
     * @alias module:model/CatalogsItemsBatchRequest
     */
    constructor() { 
        
        CatalogsItemsBatchRequest.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>CatalogsItemsBatchRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsItemsBatchRequest} obj Optional instance to populate.
     * @return {module:model/CatalogsItemsBatchRequest} The populated <code>CatalogsItemsBatchRequest</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsItemsBatchRequest();

            if (data.hasOwnProperty('country')) {
                obj['country'] = Country.constructFromObject(data['country']);
            }
            if (data.hasOwnProperty('language')) {
                obj['language'] = Language.constructFromObject(data['language']);
            }
            if (data.hasOwnProperty('operation')) {
                obj['operation'] = BatchOperation.constructFromObject(data['operation']);
            }
            if (data.hasOwnProperty('items')) {
                obj['items'] = ApiClient.convertToType(data['items'], [ItemBatchRecord]);
            }
        }
        return obj;
    }
}



export default CatalogsItemsBatchRequest;

