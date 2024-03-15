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




type RelatedTermsRelatedTermsListInner struct {

	Term string `json:"term,omitempty"`

	RelatedTerms []string `json:"related_terms,omitempty"`
}

// AssertRelatedTermsRelatedTermsListInnerRequired checks if the required fields are not zero-ed
func AssertRelatedTermsRelatedTermsListInnerRequired(obj RelatedTermsRelatedTermsListInner) error {
	return nil
}

// AssertRelatedTermsRelatedTermsListInnerConstraints checks if the values respects the defined constraints
func AssertRelatedTermsRelatedTermsListInnerConstraints(obj RelatedTermsRelatedTermsListInner) error {
	return nil
}
