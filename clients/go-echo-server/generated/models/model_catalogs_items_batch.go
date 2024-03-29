package models

// CatalogsItemsBatch - Object describing the catalogs items batch
type CatalogsItemsBatch struct {

	CatalogType CatalogsType `json:"catalog_type"`

	// Id of the catalogs items batch
	BatchId string `json:"batch_id,omitempty"`

	// Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD
	CreatedTime time.Time `json:"created_time,omitempty"`

	// Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD
	CompletedTime *time.Time `json:"completed_time,omitempty"`

	Status BatchOperationStatus `json:"status,omitempty"`

	// Array with the catalogs items processing records part of the catalogs items batch
	Items []HotelProcessingRecord `json:"items,omitempty"`
}
