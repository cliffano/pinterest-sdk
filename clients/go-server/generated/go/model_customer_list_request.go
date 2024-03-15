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




type CustomerListRequest struct {

	// Customer list name.
	Name string `json:"name"`

	// Records list. Can be any combination of emails, MAIDs, or IDFAs. Emails must be lowercase and can be plain text or hashed using SHA1, SHA256, or MD5. MAIDs and IDFAs must be hashed with SHA1, SHA256, or MD5.
	Records string `json:"records"`

	ListType UserListType `json:"list_type,omitempty"`

	// Customer list errors.
	Exceptions map[string]interface{} `json:"exceptions,omitempty"`
}

// AssertCustomerListRequestRequired checks if the required fields are not zero-ed
func AssertCustomerListRequestRequired(obj CustomerListRequest) error {
	elements := map[string]interface{}{
		"name": obj.Name,
		"records": obj.Records,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertCustomerListRequestConstraints checks if the values respects the defined constraints
func AssertCustomerListRequestConstraints(obj CustomerListRequest) error {
	return nil
}
