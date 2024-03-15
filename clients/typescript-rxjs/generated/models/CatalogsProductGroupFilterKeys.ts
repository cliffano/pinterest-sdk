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

import type {
    AvailabilityFilter,
    BrandFilter,
    CatalogsProductGroupCurrencyCriteria,
    CatalogsProductGroupMultipleGenderCriteria,
    CatalogsProductGroupMultipleStringCriteria,
    CatalogsProductGroupMultipleStringListCriteria,
    CatalogsProductGroupPricingCriteria,
    ConditionFilter,
    CurrencyFilter,
    CustomLabel0Filter,
    CustomLabel1Filter,
    CustomLabel2Filter,
    CustomLabel3Filter,
    CustomLabel4Filter,
    GenderFilter,
    GoogleProductCategory0Filter,
    GoogleProductCategory1Filter,
    GoogleProductCategory2Filter,
    GoogleProductCategory3Filter,
    GoogleProductCategory4Filter,
    GoogleProductCategory5Filter,
    GoogleProductCategory6Filter,
    ItemGroupIdFilter,
    ItemIdFilter,
    MaxPriceFilter,
    MinPriceFilter,
    ProductType0Filter,
    ProductType1Filter,
    ProductType2Filter,
    ProductType3Filter,
    ProductType4Filter,
} from './';

/**
 * @export
 * @interface CatalogsProductGroupFilterKeys
 */
export interface CatalogsProductGroupFilterKeys {
    /**
     * @type {CatalogsProductGroupPricingCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    MIN_PRICE: CatalogsProductGroupPricingCriteria;
    /**
     * @type {CatalogsProductGroupPricingCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    MAX_PRICE: CatalogsProductGroupPricingCriteria;
    /**
     * @type {CatalogsProductGroupCurrencyCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    CURRENCY: CatalogsProductGroupCurrencyCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    ITEM_ID: CatalogsProductGroupMultipleStringCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    AVAILABILITY: CatalogsProductGroupMultipleStringCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    BRAND: CatalogsProductGroupMultipleStringCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    CONDITION: CatalogsProductGroupMultipleStringCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    CUSTOM_LABEL_0: CatalogsProductGroupMultipleStringCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    CUSTOM_LABEL_1: CatalogsProductGroupMultipleStringCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    CUSTOM_LABEL_2: CatalogsProductGroupMultipleStringCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    CUSTOM_LABEL_3: CatalogsProductGroupMultipleStringCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    CUSTOM_LABEL_4: CatalogsProductGroupMultipleStringCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    ITEM_GROUP_ID: CatalogsProductGroupMultipleStringCriteria;
    /**
     * @type {CatalogsProductGroupMultipleGenderCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    GENDER: CatalogsProductGroupMultipleGenderCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    PRODUCT_TYPE_4: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    PRODUCT_TYPE_3: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    PRODUCT_TYPE_2: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    PRODUCT_TYPE_1: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    PRODUCT_TYPE_0: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    GOOGLE_PRODUCT_CATEGORY_6: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    GOOGLE_PRODUCT_CATEGORY_5: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    GOOGLE_PRODUCT_CATEGORY_4: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    GOOGLE_PRODUCT_CATEGORY_3: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    GOOGLE_PRODUCT_CATEGORY_2: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    GOOGLE_PRODUCT_CATEGORY_1: CatalogsProductGroupMultipleStringListCriteria;
    /**
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof CatalogsProductGroupFilterKeys
     */
    GOOGLE_PRODUCT_CATEGORY_0: CatalogsProductGroupMultipleStringListCriteria;
}
