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




type CatalogsProductGroupMultipleStringCriteria struct {

	Values []string `json:"values"`

	Negated bool `json:"negated,omitempty"`
}

// AssertCatalogsProductGroupMultipleStringCriteriaRequired checks if the required fields are not zero-ed
func AssertCatalogsProductGroupMultipleStringCriteriaRequired(obj CatalogsProductGroupMultipleStringCriteria) error {
	elements := map[string]interface{}{
		"values": obj.Values,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertCatalogsProductGroupMultipleStringCriteriaConstraints checks if the values respects the defined constraints
func AssertCatalogsProductGroupMultipleStringCriteriaConstraints(obj CatalogsProductGroupMultipleStringCriteria) error {
	return nil
}
