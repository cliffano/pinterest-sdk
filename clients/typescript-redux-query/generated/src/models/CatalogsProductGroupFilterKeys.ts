// tslint:disable
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

import { exists, mapValues } from '../runtime';
import {
    AvailabilityFilter,
    AvailabilityFilterFromJSON,
    AvailabilityFilterToJSON,
    BrandFilter,
    BrandFilterFromJSON,
    BrandFilterToJSON,
    CatalogsProductGroupCurrencyCriteria,
    CatalogsProductGroupCurrencyCriteriaFromJSON,
    CatalogsProductGroupCurrencyCriteriaToJSON,
    CatalogsProductGroupMultipleGenderCriteria,
    CatalogsProductGroupMultipleGenderCriteriaFromJSON,
    CatalogsProductGroupMultipleGenderCriteriaToJSON,
    CatalogsProductGroupMultipleStringCriteria,
    CatalogsProductGroupMultipleStringCriteriaFromJSON,
    CatalogsProductGroupMultipleStringCriteriaToJSON,
    CatalogsProductGroupMultipleStringListCriteria,
    CatalogsProductGroupMultipleStringListCriteriaFromJSON,
    CatalogsProductGroupMultipleStringListCriteriaToJSON,
    CatalogsProductGroupPricingCriteria,
    CatalogsProductGroupPricingCriteriaFromJSON,
    CatalogsProductGroupPricingCriteriaToJSON,
    ConditionFilter,
    ConditionFilterFromJSON,
    ConditionFilterToJSON,
    CurrencyFilter,
    CurrencyFilterFromJSON,
    CurrencyFilterToJSON,
    CustomLabel0Filter,
    CustomLabel0FilterFromJSON,
    CustomLabel0FilterToJSON,
    CustomLabel1Filter,
    CustomLabel1FilterFromJSON,
    CustomLabel1FilterToJSON,
    CustomLabel2Filter,
    CustomLabel2FilterFromJSON,
    CustomLabel2FilterToJSON,
    CustomLabel3Filter,
    CustomLabel3FilterFromJSON,
    CustomLabel3FilterToJSON,
    CustomLabel4Filter,
    CustomLabel4FilterFromJSON,
    CustomLabel4FilterToJSON,
    GenderFilter,
    GenderFilterFromJSON,
    GenderFilterToJSON,
    GoogleProductCategory0Filter,
    GoogleProductCategory0FilterFromJSON,
    GoogleProductCategory0FilterToJSON,
    GoogleProductCategory1Filter,
    GoogleProductCategory1FilterFromJSON,
    GoogleProductCategory1FilterToJSON,
    GoogleProductCategory2Filter,
    GoogleProductCategory2FilterFromJSON,
    GoogleProductCategory2FilterToJSON,
    GoogleProductCategory3Filter,
    GoogleProductCategory3FilterFromJSON,
    GoogleProductCategory3FilterToJSON,
    GoogleProductCategory4Filter,
    GoogleProductCategory4FilterFromJSON,
    GoogleProductCategory4FilterToJSON,
    GoogleProductCategory5Filter,
    GoogleProductCategory5FilterFromJSON,
    GoogleProductCategory5FilterToJSON,
    GoogleProductCategory6Filter,
    GoogleProductCategory6FilterFromJSON,
    GoogleProductCategory6FilterToJSON,
    ItemGroupIdFilter,
    ItemGroupIdFilterFromJSON,
    ItemGroupIdFilterToJSON,
    ItemIdFilter,
    ItemIdFilterFromJSON,
    ItemIdFilterToJSON,
    MaxPriceFilter,
    MaxPriceFilterFromJSON,
    MaxPriceFilterToJSON,
    MinPriceFilter,
    MinPriceFilterFromJSON,
    MinPriceFilterToJSON,
    ProductType0Filter,
    ProductType0FilterFromJSON,
    ProductType0FilterToJSON,
    ProductType1Filter,
    ProductType1FilterFromJSON,
    ProductType1FilterToJSON,
    ProductType2Filter,
    ProductType2FilterFromJSON,
    ProductType2FilterToJSON,
    ProductType3Filter,
    ProductType3FilterFromJSON,
    ProductType3FilterToJSON,
    ProductType4Filter,
    ProductType4FilterFromJSON,
    ProductType4FilterToJSON,
} from './';

/**
 * 
 * @export
 * @interface CatalogsProductGroupFilterKeys
 */
export interface CatalogsProductGroupFilterKeys  {
    /**
     * 
     * @type {CatalogsProductGroupPricingCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    mINPRICE: CatalogsProductGroupPricingCriteria;
    /**
     * 
     * @type {CatalogsProductGroupPricingCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    mAXPRICE: CatalogsProductGroupPricingCriteria;
    /**
     * 
     * @type {CatalogsProductGroupCurrencyCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    cURRENCY: CatalogsProductGroupCurrencyCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    iTEMID: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    aVAILABILITY: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    bRAND: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    cONDITION: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    cUSTOMLABEL0: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    cUSTOMLABEL1: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    cUSTOMLABEL2: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    cUSTOMLABEL3: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    cUSTOMLABEL4: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    iTEMGROUPID: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleGenderCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    gENDER: CatalogsProductGroupMultipleGenderCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    pRODUCTTYPE4: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    pRODUCTTYPE3: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    pRODUCTTYPE2: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    pRODUCTTYPE1: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    pRODUCTTYPE0: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    gOOGLEPRODUCTCATEGORY6: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    gOOGLEPRODUCTCATEGORY5: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    gOOGLEPRODUCTCATEGORY4: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    gOOGLEPRODUCTCATEGORY3: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    gOOGLEPRODUCTCATEGORY2: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    gOOGLEPRODUCTCATEGORY1: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    gOOGLEPRODUCTCATEGORY0: CatalogsProductGroupMultipleStringListCriteria;
}

export function CatalogsProductGroupFilterKeysFromJSON(json: any): CatalogsProductGroupFilterKeys {
    return {
        'mINPRICE': CatalogsProductGroupPricingCriteriaFromJSON(json['MIN_PRICE']),
        'mAXPRICE': CatalogsProductGroupPricingCriteriaFromJSON(json['MAX_PRICE']),
        'cURRENCY': CatalogsProductGroupCurrencyCriteriaFromJSON(json['CURRENCY']),
        'iTEMID': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['ITEM_ID']),
        'aVAILABILITY': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['AVAILABILITY']),
        'bRAND': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['BRAND']),
        'cONDITION': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['CONDITION']),
        'cUSTOMLABEL0': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['CUSTOM_LABEL_0']),
        'cUSTOMLABEL1': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['CUSTOM_LABEL_1']),
        'cUSTOMLABEL2': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['CUSTOM_LABEL_2']),
        'cUSTOMLABEL3': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['CUSTOM_LABEL_3']),
        'cUSTOMLABEL4': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['CUSTOM_LABEL_4']),
        'iTEMGROUPID': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['ITEM_GROUP_ID']),
        'gENDER': CatalogsProductGroupMultipleGenderCriteriaFromJSON(json['GENDER']),
        'pRODUCTTYPE4': CatalogsProductGroupMultipleStringListCriteriaFromJSON(json['PRODUCT_TYPE_4']),
        'pRODUCTTYPE3': CatalogsProductGroupMultipleStringListCriteriaFromJSON(json['PRODUCT_TYPE_3']),
        'pRODUCTTYPE2': CatalogsProductGroupMultipleStringListCriteriaFromJSON(json['PRODUCT_TYPE_2']),
        'pRODUCTTYPE1': CatalogsProductGroupMultipleStringListCriteriaFromJSON(json['PRODUCT_TYPE_1']),
        'pRODUCTTYPE0': CatalogsProductGroupMultipleStringListCriteriaFromJSON(json['PRODUCT_TYPE_0']),
        'gOOGLEPRODUCTCATEGORY6': CatalogsProductGroupMultipleStringListCriteriaFromJSON(json['GOOGLE_PRODUCT_CATEGORY_6']),
        'gOOGLEPRODUCTCATEGORY5': CatalogsProductGroupMultipleStringListCriteriaFromJSON(json['GOOGLE_PRODUCT_CATEGORY_5']),
        'gOOGLEPRODUCTCATEGORY4': CatalogsProductGroupMultipleStringListCriteriaFromJSON(json['GOOGLE_PRODUCT_CATEGORY_4']),
        'gOOGLEPRODUCTCATEGORY3': CatalogsProductGroupMultipleStringListCriteriaFromJSON(json['GOOGLE_PRODUCT_CATEGORY_3']),
        'gOOGLEPRODUCTCATEGORY2': CatalogsProductGroupMultipleStringListCriteriaFromJSON(json['GOOGLE_PRODUCT_CATEGORY_2']),
        'gOOGLEPRODUCTCATEGORY1': CatalogsProductGroupMultipleStringListCriteriaFromJSON(json['GOOGLE_PRODUCT_CATEGORY_1']),
        'gOOGLEPRODUCTCATEGORY0': CatalogsProductGroupMultipleStringListCriteriaFromJSON(json['GOOGLE_PRODUCT_CATEGORY_0']),
    };
}

export function CatalogsProductGroupFilterKeysToJSON(value?: CatalogsProductGroupFilterKeys): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'MIN_PRICE': CatalogsProductGroupPricingCriteriaToJSON(value.mINPRICE),
        'MAX_PRICE': CatalogsProductGroupPricingCriteriaToJSON(value.mAXPRICE),
        'CURRENCY': CatalogsProductGroupCurrencyCriteriaToJSON(value.cURRENCY),
        'ITEM_ID': CatalogsProductGroupMultipleStringCriteriaToJSON(value.iTEMID),
        'AVAILABILITY': CatalogsProductGroupMultipleStringCriteriaToJSON(value.aVAILABILITY),
        'BRAND': CatalogsProductGroupMultipleStringCriteriaToJSON(value.bRAND),
        'CONDITION': CatalogsProductGroupMultipleStringCriteriaToJSON(value.cONDITION),
        'CUSTOM_LABEL_0': CatalogsProductGroupMultipleStringCriteriaToJSON(value.cUSTOMLABEL0),
        'CUSTOM_LABEL_1': CatalogsProductGroupMultipleStringCriteriaToJSON(value.cUSTOMLABEL1),
        'CUSTOM_LABEL_2': CatalogsProductGroupMultipleStringCriteriaToJSON(value.cUSTOMLABEL2),
        'CUSTOM_LABEL_3': CatalogsProductGroupMultipleStringCriteriaToJSON(value.cUSTOMLABEL3),
        'CUSTOM_LABEL_4': CatalogsProductGroupMultipleStringCriteriaToJSON(value.cUSTOMLABEL4),
        'ITEM_GROUP_ID': CatalogsProductGroupMultipleStringCriteriaToJSON(value.iTEMGROUPID),
        'GENDER': CatalogsProductGroupMultipleGenderCriteriaToJSON(value.gENDER),
        'PRODUCT_TYPE_4': CatalogsProductGroupMultipleStringListCriteriaToJSON(value.pRODUCTTYPE4),
        'PRODUCT_TYPE_3': CatalogsProductGroupMultipleStringListCriteriaToJSON(value.pRODUCTTYPE3),
        'PRODUCT_TYPE_2': CatalogsProductGroupMultipleStringListCriteriaToJSON(value.pRODUCTTYPE2),
        'PRODUCT_TYPE_1': CatalogsProductGroupMultipleStringListCriteriaToJSON(value.pRODUCTTYPE1),
        'PRODUCT_TYPE_0': CatalogsProductGroupMultipleStringListCriteriaToJSON(value.pRODUCTTYPE0),
        'GOOGLE_PRODUCT_CATEGORY_6': CatalogsProductGroupMultipleStringListCriteriaToJSON(value.gOOGLEPRODUCTCATEGORY6),
        'GOOGLE_PRODUCT_CATEGORY_5': CatalogsProductGroupMultipleStringListCriteriaToJSON(value.gOOGLEPRODUCTCATEGORY5),
        'GOOGLE_PRODUCT_CATEGORY_4': CatalogsProductGroupMultipleStringListCriteriaToJSON(value.gOOGLEPRODUCTCATEGORY4),
        'GOOGLE_PRODUCT_CATEGORY_3': CatalogsProductGroupMultipleStringListCriteriaToJSON(value.gOOGLEPRODUCTCATEGORY3),
        'GOOGLE_PRODUCT_CATEGORY_2': CatalogsProductGroupMultipleStringListCriteriaToJSON(value.gOOGLEPRODUCTCATEGORY2),
        'GOOGLE_PRODUCT_CATEGORY_1': CatalogsProductGroupMultipleStringListCriteriaToJSON(value.gOOGLEPRODUCTCATEGORY1),
        'GOOGLE_PRODUCT_CATEGORY_0': CatalogsProductGroupMultipleStringListCriteriaToJSON(value.gOOGLEPRODUCTCATEGORY0),
    };
}


