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
    BrandFilter,
    BrandFilterFromJSON,
    BrandFilterToJSON,
    CatalogsProductGroupMultipleCountriesCriteria,
    CatalogsProductGroupMultipleCountriesCriteriaFromJSON,
    CatalogsProductGroupMultipleCountriesCriteriaToJSON,
    CatalogsProductGroupMultipleStringCriteria,
    CatalogsProductGroupMultipleStringCriteriaFromJSON,
    CatalogsProductGroupMultipleStringCriteriaToJSON,
    CatalogsProductGroupPricingCurrencyCriteria,
    CatalogsProductGroupPricingCurrencyCriteriaFromJSON,
    CatalogsProductGroupPricingCurrencyCriteriaToJSON,
    CountryFilter,
    CountryFilterFromJSON,
    CountryFilterToJSON,
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
    HotelIdFilter,
    HotelIdFilterFromJSON,
    HotelIdFilterToJSON,
    PriceFilter,
    PriceFilterFromJSON,
    PriceFilterToJSON,
} from './';

/**
 * 
 * @export
 * @interface CatalogsHotelProductGroupFilterKeys
 */
export interface CatalogsHotelProductGroupFilterKeys  {
    /**
     * 
     * @type {CatalogsProductGroupPricingCurrencyCriteria}
     * @memberof CatalogsHotelProductGroupFilterKeys
     */
    pRICE: CatalogsProductGroupPricingCurrencyCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsHotelProductGroupFilterKeys
     */
    hOTELID: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsHotelProductGroupFilterKeys
     */
    bRAND: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsHotelProductGroupFilterKeys
     */
    cUSTOMLABEL0: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsHotelProductGroupFilterKeys
     */
    cUSTOMLABEL1: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsHotelProductGroupFilterKeys
     */
    cUSTOMLABEL2: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsHotelProductGroupFilterKeys
     */
    cUSTOMLABEL3: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsHotelProductGroupFilterKeys
     */
    cUSTOMLABEL4: CatalogsProductGroupMultipleStringCriteria;
    /**
     * 
     * @type {CatalogsProductGroupMultipleCountriesCriteria}
     * @memberof CatalogsHotelProductGroupFilterKeys
     */
    cOUNTRY: CatalogsProductGroupMultipleCountriesCriteria;
}

export function CatalogsHotelProductGroupFilterKeysFromJSON(json: any): CatalogsHotelProductGroupFilterKeys {
    return {
        'pRICE': CatalogsProductGroupPricingCurrencyCriteriaFromJSON(json['PRICE']),
        'hOTELID': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['HOTEL_ID']),
        'bRAND': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['BRAND']),
        'cUSTOMLABEL0': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['CUSTOM_LABEL_0']),
        'cUSTOMLABEL1': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['CUSTOM_LABEL_1']),
        'cUSTOMLABEL2': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['CUSTOM_LABEL_2']),
        'cUSTOMLABEL3': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['CUSTOM_LABEL_3']),
        'cUSTOMLABEL4': CatalogsProductGroupMultipleStringCriteriaFromJSON(json['CUSTOM_LABEL_4']),
        'cOUNTRY': CatalogsProductGroupMultipleCountriesCriteriaFromJSON(json['COUNTRY']),
    };
}

export function CatalogsHotelProductGroupFilterKeysToJSON(value?: CatalogsHotelProductGroupFilterKeys): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'PRICE': CatalogsProductGroupPricingCurrencyCriteriaToJSON(value.pRICE),
        'HOTEL_ID': CatalogsProductGroupMultipleStringCriteriaToJSON(value.hOTELID),
        'BRAND': CatalogsProductGroupMultipleStringCriteriaToJSON(value.bRAND),
        'CUSTOM_LABEL_0': CatalogsProductGroupMultipleStringCriteriaToJSON(value.cUSTOMLABEL0),
        'CUSTOM_LABEL_1': CatalogsProductGroupMultipleStringCriteriaToJSON(value.cUSTOMLABEL1),
        'CUSTOM_LABEL_2': CatalogsProductGroupMultipleStringCriteriaToJSON(value.cUSTOMLABEL2),
        'CUSTOM_LABEL_3': CatalogsProductGroupMultipleStringCriteriaToJSON(value.cUSTOMLABEL3),
        'CUSTOM_LABEL_4': CatalogsProductGroupMultipleStringCriteriaToJSON(value.cUSTOMLABEL4),
        'COUNTRY': CatalogsProductGroupMultipleCountriesCriteriaToJSON(value.cOUNTRY),
    };
}


