/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type CampaignResponseAllOf struct {

	// Campaign ID.
	Id string `json:"id"`
}

// AssertCampaignResponseAllOfRequired checks if the required fields are not zero-ed
func AssertCampaignResponseAllOfRequired(obj CampaignResponseAllOf) error {
	elements := map[string]interface{}{
		"id": obj.Id,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecurseCampaignResponseAllOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of CampaignResponseAllOf (e.g. [][]CampaignResponseAllOf), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseCampaignResponseAllOfRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aCampaignResponseAllOf, ok := obj.(CampaignResponseAllOf)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertCampaignResponseAllOfRequired(aCampaignResponseAllOf)
	})
}
