/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// CatalogsProductGroupFilterKeys struct for CatalogsProductGroupFilterKeys
type CatalogsProductGroupFilterKeys struct {
	MIN_PRICE CatalogsProductGroupPricingCriteria `json:"MIN_PRICE"`
	MAX_PRICE CatalogsProductGroupPricingCriteria `json:"MAX_PRICE"`
	CURRENCY CatalogsProductGroupCurrencyCriteria `json:"CURRENCY"`
	ITEM_ID CatalogsProductGroupCurrencyCriteria `json:"ITEM_ID"`
	AVAILABILITY CatalogsProductGroupMultipleStringCriteria `json:"AVAILABILITY"`
	BRAND CatalogsProductGroupMultipleStringCriteria `json:"BRAND"`
	CONDITION CatalogsProductGroupMultipleStringCriteria `json:"CONDITION"`
	CUSTOMLABEL0 CatalogsProductGroupMultipleStringCriteria `json:"CUSTOM_LABEL_0"`
	CUSTOMLABEL1 CatalogsProductGroupMultipleStringCriteria `json:"CUSTOM_LABEL_1"`
	CUSTOMLABEL2 CatalogsProductGroupMultipleStringCriteria `json:"CUSTOM_LABEL_2"`
	CUSTOMLABEL3 CatalogsProductGroupMultipleStringCriteria `json:"CUSTOM_LABEL_3"`
	CUSTOMLABEL4 CatalogsProductGroupMultipleStringCriteria `json:"CUSTOM_LABEL_4"`
	ITEM_GROUP_ID CatalogsProductGroupMultipleStringCriteria `json:"ITEM_GROUP_ID"`
	GENDER CatalogsProductGroupMultipleStringCriteria `json:"GENDER"`
	PRODUCTTYPE4 CatalogsProductGroupMultipleStringListCriteria `json:"PRODUCT_TYPE_4"`
	PRODUCTTYPE3 CatalogsProductGroupMultipleStringListCriteria `json:"PRODUCT_TYPE_3"`
	PRODUCTTYPE2 CatalogsProductGroupMultipleStringListCriteria `json:"PRODUCT_TYPE_2"`
	PRODUCTTYPE1 CatalogsProductGroupMultipleStringListCriteria `json:"PRODUCT_TYPE_1"`
	PRODUCTTYPE0 CatalogsProductGroupMultipleStringListCriteria `json:"PRODUCT_TYPE_0"`
	GOOGLEPRODUCTCATEGORY6 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_6"`
	GOOGLEPRODUCTCATEGORY5 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_5"`
	GOOGLEPRODUCTCATEGORY4 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_4"`
	GOOGLEPRODUCTCATEGORY3 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_3"`
	GOOGLEPRODUCTCATEGORY2 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_2"`
	GOOGLEPRODUCTCATEGORY1 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_1"`
	GOOGLEPRODUCTCATEGORY0 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_0"`
}
