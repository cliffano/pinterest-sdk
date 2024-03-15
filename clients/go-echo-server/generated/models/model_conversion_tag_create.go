package models

type ConversionTagCreate struct {

	// Conversion tag name.
	Name string `json:"name"`

	// Whether Automatic Enhanced Match email is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
	AemEnabled *bool `json:"aem_enabled,omitempty"`

	// Metadata ingestion frequency.
	MdFrequency *float32 `json:"md_frequency,omitempty"`

	// Whether Automatic Enhanced Match name is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
	AemFnlnEnabled *bool `json:"aem_fnln_enabled,omitempty"`

	// Whether Automatic Enhanced Match phone is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
	AemPhEnabled *bool `json:"aem_ph_enabled,omitempty"`

	// Whether Automatic Enhanced Match gender is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
	AemGeEnabled *bool `json:"aem_ge_enabled,omitempty"`

	// Whether Automatic Enhanced Match birthdate is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
	AemDbEnabled *bool `json:"aem_db_enabled,omitempty"`

	// Whether Automatic Enhanced Match location is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
	AemLocEnabled *bool `json:"aem_loc_enabled,omitempty"`
}
