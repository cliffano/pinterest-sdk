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




type AdArrayResponseElement struct {

	Data AdResponse `json:"data,omitempty"`

	Exceptions Exception `json:"exceptions,omitempty"`
}

// AssertAdArrayResponseElementRequired checks if the required fields are not zero-ed
func AssertAdArrayResponseElementRequired(obj AdArrayResponseElement) error {
	if err := AssertAdResponseRequired(obj.Data); err != nil {
		return err
	}
	if err := AssertExceptionRequired(obj.Exceptions); err != nil {
		return err
	}
	return nil
}

// AssertAdArrayResponseElementConstraints checks if the values respects the defined constraints
func AssertAdArrayResponseElementConstraints(obj AdArrayResponseElement) error {
	return nil
}
