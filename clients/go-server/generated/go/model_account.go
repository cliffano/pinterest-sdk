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

type Account struct {

	// Type of account
	AccountType string `json:"account_type,omitempty"`

	ProfileImage string `json:"profile_image,omitempty"`

	WebsiteUrl string `json:"website_url,omitempty"`

	Username string `json:"username,omitempty"`
}

// AssertAccountRequired checks if the required fields are not zero-ed
func AssertAccountRequired(obj Account) error {
	return nil
}

// AssertRecurseAccountRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of Account (e.g. [][]Account), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseAccountRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAccount, ok := obj.(Account)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertAccountRequired(aAccount)
	})
}
