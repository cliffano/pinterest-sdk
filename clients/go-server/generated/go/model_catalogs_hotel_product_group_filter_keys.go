/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi




type CatalogsHotelProductGroupFilterKeys struct {

	PRICE CatalogsProductGroupPricingCurrencyCriteria `json:"PRICE"`

	HOTEL_ID CatalogsProductGroupMultipleStringCriteria `json:"HOTEL_ID"`

	BRAND CatalogsProductGroupMultipleStringCriteria `json:"BRAND"`

	CUSTOMLABEL0 CatalogsProductGroupMultipleStringCriteria `json:"CUSTOM_LABEL_0"`

	CUSTOMLABEL1 CatalogsProductGroupMultipleStringCriteria `json:"CUSTOM_LABEL_1"`

	CUSTOMLABEL2 CatalogsProductGroupMultipleStringCriteria `json:"CUSTOM_LABEL_2"`

	CUSTOMLABEL3 CatalogsProductGroupMultipleStringCriteria `json:"CUSTOM_LABEL_3"`

	CUSTOMLABEL4 CatalogsProductGroupMultipleStringCriteria `json:"CUSTOM_LABEL_4"`

	COUNTRY CatalogsProductGroupMultipleCountriesCriteria `json:"COUNTRY"`
}

// AssertCatalogsHotelProductGroupFilterKeysRequired checks if the required fields are not zero-ed
func AssertCatalogsHotelProductGroupFilterKeysRequired(obj CatalogsHotelProductGroupFilterKeys) error {
	elements := map[string]interface{}{
		"PRICE": obj.PRICE,
		"HOTEL_ID": obj.HOTEL_ID,
		"BRAND": obj.BRAND,
		"CUSTOM_LABEL_0": obj.CUSTOMLABEL0,
		"CUSTOM_LABEL_1": obj.CUSTOMLABEL1,
		"CUSTOM_LABEL_2": obj.CUSTOMLABEL2,
		"CUSTOM_LABEL_3": obj.CUSTOMLABEL3,
		"CUSTOM_LABEL_4": obj.CUSTOMLABEL4,
		"COUNTRY": obj.COUNTRY,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	if err := AssertCatalogsProductGroupPricingCurrencyCriteriaRequired(obj.PRICE); err != nil {
		return err
	}
	if err := AssertCatalogsProductGroupMultipleStringCriteriaRequired(obj.HOTEL_ID); err != nil {
		return err
	}
	if err := AssertCatalogsProductGroupMultipleStringCriteriaRequired(obj.BRAND); err != nil {
		return err
	}
	if err := AssertCatalogsProductGroupMultipleStringCriteriaRequired(obj.CUSTOMLABEL0); err != nil {
		return err
	}
	if err := AssertCatalogsProductGroupMultipleStringCriteriaRequired(obj.CUSTOMLABEL1); err != nil {
		return err
	}
	if err := AssertCatalogsProductGroupMultipleStringCriteriaRequired(obj.CUSTOMLABEL2); err != nil {
		return err
	}
	if err := AssertCatalogsProductGroupMultipleStringCriteriaRequired(obj.CUSTOMLABEL3); err != nil {
		return err
	}
	if err := AssertCatalogsProductGroupMultipleStringCriteriaRequired(obj.CUSTOMLABEL4); err != nil {
		return err
	}
	if err := AssertCatalogsProductGroupMultipleCountriesCriteriaRequired(obj.COUNTRY); err != nil {
		return err
	}
	return nil
}

// AssertCatalogsHotelProductGroupFilterKeysConstraints checks if the values respects the defined constraints
func AssertCatalogsHotelProductGroupFilterKeysConstraints(obj CatalogsHotelProductGroupFilterKeys) error {
	return nil
}
