package models

// CatalogsItemsCreateBatchRequest - Request object to create catalogs items
type CatalogsItemsCreateBatchRequest struct {

	Country Country `json:"country"`

	Language Language `json:"language"`

	Operation BatchOperation `json:"operation"`

	// Array with catalogs items
	Items []ItemCreateBatchRecord `json:"items"`
}
