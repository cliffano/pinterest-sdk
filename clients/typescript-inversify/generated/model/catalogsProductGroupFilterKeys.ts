/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
import { AvailabilityFilter } from './availabilityFilter';
import { BrandFilter } from './brandFilter';
import { CatalogsProductGroupCurrencyCriteria } from './catalogsProductGroupCurrencyCriteria';
import { CatalogsProductGroupMultipleStringCriteria } from './catalogsProductGroupMultipleStringCriteria';
import { CatalogsProductGroupMultipleStringListCriteria } from './catalogsProductGroupMultipleStringListCriteria';
import { CatalogsProductGroupPricingCriteria } from './catalogsProductGroupPricingCriteria';
import { ConditionFilter } from './conditionFilter';
import { CurrencyFilter } from './currencyFilter';
import { CustomLabel0Filter } from './customLabel0Filter';
import { CustomLabel1Filter } from './customLabel1Filter';
import { CustomLabel2Filter } from './customLabel2Filter';
import { CustomLabel3Filter } from './customLabel3Filter';
import { CustomLabel4Filter } from './customLabel4Filter';
import { GenderFilter } from './genderFilter';
import { GoogleProductCategory0Filter } from './googleProductCategory0Filter';
import { GoogleProductCategory1Filter } from './googleProductCategory1Filter';
import { GoogleProductCategory2Filter } from './googleProductCategory2Filter';
import { GoogleProductCategory3Filter } from './googleProductCategory3Filter';
import { GoogleProductCategory4Filter } from './googleProductCategory4Filter';
import { GoogleProductCategory5Filter } from './googleProductCategory5Filter';
import { GoogleProductCategory6Filter } from './googleProductCategory6Filter';
import { ItemGroupIdFilter } from './itemGroupIdFilter';
import { ItemIdFilter } from './itemIdFilter';
import { MaxPriceFilter } from './maxPriceFilter';
import { MinPriceFilter } from './minPriceFilter';
import { ProductType0Filter } from './productType0Filter';
import { ProductType1Filter } from './productType1Filter';
import { ProductType2Filter } from './productType2Filter';
import { ProductType3Filter } from './productType3Filter';
import { ProductType4Filter } from './productType4Filter';


export interface CatalogsProductGroupFilterKeys { 
    MIN_PRICE: CatalogsProductGroupPricingCriteria;
    MAX_PRICE: CatalogsProductGroupPricingCriteria;
    CURRENCY: CatalogsProductGroupCurrencyCriteria;
    ITEM_ID: CatalogsProductGroupCurrencyCriteria;
    AVAILABILITY: CatalogsProductGroupMultipleStringCriteria;
    BRAND: CatalogsProductGroupMultipleStringCriteria;
    CONDITION: CatalogsProductGroupMultipleStringCriteria;
    CUSTOM_LABEL_0: CatalogsProductGroupMultipleStringCriteria;
    CUSTOM_LABEL_1: CatalogsProductGroupMultipleStringCriteria;
    CUSTOM_LABEL_2: CatalogsProductGroupMultipleStringCriteria;
    CUSTOM_LABEL_3: CatalogsProductGroupMultipleStringCriteria;
    CUSTOM_LABEL_4: CatalogsProductGroupMultipleStringCriteria;
    ITEM_GROUP_ID: CatalogsProductGroupMultipleStringCriteria;
    GENDER: CatalogsProductGroupMultipleStringCriteria;
    PRODUCT_TYPE_4: CatalogsProductGroupMultipleStringListCriteria;
    PRODUCT_TYPE_3: CatalogsProductGroupMultipleStringListCriteria;
    PRODUCT_TYPE_2: CatalogsProductGroupMultipleStringListCriteria;
    PRODUCT_TYPE_1: CatalogsProductGroupMultipleStringListCriteria;
    PRODUCT_TYPE_0: CatalogsProductGroupMultipleStringListCriteria;
    GOOGLE_PRODUCT_CATEGORY_6: CatalogsProductGroupMultipleStringListCriteria;
    GOOGLE_PRODUCT_CATEGORY_5: CatalogsProductGroupMultipleStringListCriteria;
    GOOGLE_PRODUCT_CATEGORY_4: CatalogsProductGroupMultipleStringListCriteria;
    GOOGLE_PRODUCT_CATEGORY_3: CatalogsProductGroupMultipleStringListCriteria;
    GOOGLE_PRODUCT_CATEGORY_2: CatalogsProductGroupMultipleStringListCriteria;
    GOOGLE_PRODUCT_CATEGORY_1: CatalogsProductGroupMultipleStringListCriteria;
    GOOGLE_PRODUCT_CATEGORY_0: CatalogsProductGroupMultipleStringListCriteria;
}
