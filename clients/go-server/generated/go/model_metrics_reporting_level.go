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
// MetricsReportingLevel : Level of the reporting request
type MetricsReportingLevel string

// List of MetricsReportingLevel
const (
	ADVERTISER MetricsReportingLevel = "ADVERTISER"
	ADVERTISER_TARGETING MetricsReportingLevel = "ADVERTISER_TARGETING"
	CAMPAIGN MetricsReportingLevel = "CAMPAIGN"
	CAMPAIGN_TARGETING MetricsReportingLevel = "CAMPAIGN_TARGETING"
	AD_GROUP MetricsReportingLevel = "AD_GROUP"
	AD_GROUP_TARGETING MetricsReportingLevel = "AD_GROUP_TARGETING"
	PIN_PROMOTION MetricsReportingLevel = "PIN_PROMOTION"
	PIN_PROMOTION_TARGETING MetricsReportingLevel = "PIN_PROMOTION_TARGETING"
	KEYWORD MetricsReportingLevel = "KEYWORD"
	PRODUCT_GROUP MetricsReportingLevel = "PRODUCT_GROUP"
	PRODUCT_GROUP_TARGETING MetricsReportingLevel = "PRODUCT_GROUP_TARGETING"
	PRODUCT_ITEM MetricsReportingLevel = "PRODUCT_ITEM"
)

// AssertMetricsReportingLevelRequired checks if the required fields are not zero-ed
func AssertMetricsReportingLevelRequired(obj MetricsReportingLevel) error {
	return nil
}

// AssertRecurseMetricsReportingLevelRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of MetricsReportingLevel (e.g. [][]MetricsReportingLevel), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseMetricsReportingLevelRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aMetricsReportingLevel, ok := obj.(MetricsReportingLevel)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertMetricsReportingLevelRequired(aMetricsReportingLevel)
	})
}
