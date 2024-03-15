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




type Interest struct {

	CanonicalUrl string `json:"canonical_url,omitempty"`

	Id string `json:"id,omitempty"`

	Key string `json:"key,omitempty"`

	Name string `json:"name,omitempty"`
}

// AssertInterestRequired checks if the required fields are not zero-ed
func AssertInterestRequired(obj Interest) error {
	return nil
}

// AssertInterestConstraints checks if the values respects the defined constraints
func AssertInterestConstraints(obj Interest) error {
	return nil
}