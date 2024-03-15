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




type RelatedTerms struct {

	// First input term. For example, if you pass \"?terms=clothes,workout\", then id will be \"clothes\"
	Id string `json:"id,omitempty"`

	// Total number of related terms returned
	RelatedTermCount int32 `json:"related_term_count,omitempty"`

	// The id of the advertiser.
	RelatedTermsList []RelatedTermsRelatedTermsListInner `json:"related_terms_list,omitempty"`
}

// AssertRelatedTermsRequired checks if the required fields are not zero-ed
func AssertRelatedTermsRequired(obj RelatedTerms) error {
	for _, el := range obj.RelatedTermsList {
		if err := AssertRelatedTermsRelatedTermsListInnerRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertRelatedTermsConstraints checks if the values respects the defined constraints
func AssertRelatedTermsConstraints(obj RelatedTerms) error {
	return nil
}
