/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// CatalogsFeedProcessingResultFields struct for CatalogsFeedProcessingResultFields
type CatalogsFeedProcessingResultFields struct {
	IngestionDetails CatalogsFeedIngestionDetails `json:"ingestion_details"`
	Status CatalogsFeedProcessingStatus `json:"status"`
	ProductCounts *CatalogsFeedProductCounts `json:"product_counts"`
	ValidationDetails CatalogsFeedValidationDetails `json:"validation_details"`
}
