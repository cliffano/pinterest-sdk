package models

type SsioAccountItem struct {

	// Salesforce id for billto_info
	Id string `json:"id,omitempty"`

	// Salesforce id for IO Terms and Conditions
	IoTermsId string `json:"io_terms_id,omitempty"`

	// Salesforce text for IO Terms and Conditions
	IoTerms string `json:"io_terms,omitempty"`

	// Salesforce id for US Terms and Conditions
	UsTermsId string `json:"us_terms_id,omitempty"`

	// Salesforce text for US Terms and Conditions
	UsTerms string `json:"us_terms,omitempty"`

	// Salesforce id for Rest of the World Terms and Conditions
	RowTermsId string `json:"row_terms_id,omitempty"`

	// Salesforce text for Rest of the World Terms and Conditions
	RowTerms string `json:"row_terms,omitempty"`

	// Insertion Order Type - Pinterest Paper or Agency Paper
	IoType string `json:"io_type,omitempty"`

	// Address information that is associated with this account.
	Addresses []SsioAccountAddress `json:"addresses,omitempty"`
}
