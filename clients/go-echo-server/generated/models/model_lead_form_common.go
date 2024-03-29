package models

// LeadFormCommon - Creation fields
type LeadFormCommon struct {

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
}
