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




type ConversionTagConfigs struct {

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

// AssertConversionTagConfigsRequired checks if the required fields are not zero-ed
func AssertConversionTagConfigsRequired(obj ConversionTagConfigs) error {
	return nil
}

// AssertConversionTagConfigsConstraints checks if the values respects the defined constraints
func AssertConversionTagConfigsConstraints(obj ConversionTagConfigs) error {
	return nil
}
