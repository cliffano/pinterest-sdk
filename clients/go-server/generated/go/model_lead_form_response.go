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




type LeadFormResponse struct {

	// Internal name of the lead form.
	Name *string `json:"name,omitempty"`

	// A link to the advertiser's privacy policy. This will be included in the lead form's disclosure language.
	PrivacyPolicyLink *string `json:"privacy_policy_link,omitempty"`

	// Whether the advertiser has accepted Pinterest's terms of service for creating a lead ad.
	HasAcceptedTerms bool `json:"has_accepted_terms,omitempty"`

	// A message for people who complete the form to let them know what happens next.
	CompletionMessage *string `json:"completion_message,omitempty"`

	Status LeadFormStatus `json:"status,omitempty"`

	// Additional disclosure language to be included in the lead form.
	DisclosureLanguage *string `json:"disclosure_language,omitempty"`

	// List of questions to be displayed on the lead form.
	Questions []LeadFormQuestion `json:"questions,omitempty"`

	// The ID of this lead form
	Id string `json:"id,omitempty"`

	// The Ad Account ID that this lead form belongs to.
	AdAccountId string `json:"ad_account_id,omitempty"`

	// Lead form creation time. Unix timestamp in seconds.
	CreatedTime int32 `json:"created_time,omitempty"`

	// Last update time. Unix timestamp in seconds.
	UpdatedTime int32 `json:"updated_time,omitempty"`
}

// AssertLeadFormResponseRequired checks if the required fields are not zero-ed
func AssertLeadFormResponseRequired(obj LeadFormResponse) error {
	for _, el := range obj.Questions {
		if err := AssertLeadFormQuestionRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertLeadFormResponseConstraints checks if the values respects the defined constraints
func AssertLeadFormResponseConstraints(obj LeadFormResponse) error {
	return nil
}
