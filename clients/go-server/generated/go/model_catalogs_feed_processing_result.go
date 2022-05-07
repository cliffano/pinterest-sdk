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

import (
	"time"
)

type CatalogsFeedProcessingResult struct {

	CreatedAt time.Time `json:"created_at,omitempty"`

	Id string `json:"id,omitempty"`

	UpdatedAt time.Time `json:"updated_at,omitempty"`

	IngestionDetails CatalogsFeedIngestionDetails `json:"ingestion_details"`

	Status CatalogsFeedProcessingStatus `json:"status"`

	ProductCounts *CatalogsFeedProductCounts `json:"product_counts"`

	ValidationDetails CatalogsFeedValidationDetails `json:"validation_details"`
}

// AssertCatalogsFeedProcessingResultRequired checks if the required fields are not zero-ed
func AssertCatalogsFeedProcessingResultRequired(obj CatalogsFeedProcessingResult) error {
	elements := map[string]interface{}{
		"ingestion_details": obj.IngestionDetails,
		"status": obj.Status,
		"product_counts": obj.ProductCounts,
		"validation_details": obj.ValidationDetails,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	if err := AssertCatalogsFeedIngestionDetailsRequired(obj.IngestionDetails); err != nil {
		return err
	}
	if obj.ProductCounts != nil {
		if err := AssertCatalogsFeedProductCountsRequired(*obj.ProductCounts); err != nil {
			return err
		}
	}
	if err := AssertCatalogsFeedValidationDetailsRequired(obj.ValidationDetails); err != nil {
		return err
	}
	return nil
}

// AssertRecurseCatalogsFeedProcessingResultRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of CatalogsFeedProcessingResult (e.g. [][]CatalogsFeedProcessingResult), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseCatalogsFeedProcessingResultRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aCatalogsFeedProcessingResult, ok := obj.(CatalogsFeedProcessingResult)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertCatalogsFeedProcessingResultRequired(aCatalogsFeedProcessingResult)
	})
}
