package models

type CustomerList struct {

	// Associated ad account ID.
	AdAccountId string `json:"ad_account_id,omitempty"`

	// Creation time. Unix timestamp in seconds.
	CreatedTime float32 `json:"created_time,omitempty"`

	// Customer list ID.
	Id string `json:"id,omitempty"`

	// Customer list name.
	Name string `json:"name,omitempty"`

	// Total number of list updates.  List creation counts as one batch. Each <a href=\"/docs/redoc/#operation/ads_v3_customer_list_add_handler_PUT\">Append</a> or <a href=\"/docs/redoc/#operation/ads_v3_customer_list_remove_handler_PUT\">Remove API</a> call counts as another. List creation via the Ads Manager UI could result in more than one batch since the UI breaks up large lists.
	NumBatches float32 `json:"num_batches,omitempty"`

	// Number of removed user records. In a <a href=\"/docs/redoc/#operation/ads_v3_customer_list_remove_handler_PUT\">Remove API</a> call, this counter increases even if the user is not found in the list.
	NumRemovedUserRecords float32 `json:"num_removed_user_records,omitempty"`

	// Number of uploaded user records. In an <a href=\"/docs/redoc/#operation/ads_v3_customer_list_add_handler_PUT\">Append API</a> call, this counter increases even if the uploaded user is already in the list.
	NumUploadedUserRecords float32 `json:"num_uploaded_user_records,omitempty"`

	// Customer list status. TOO_SMALL - the list has less than 100 Pinterest users.
	Status string `json:"status,omitempty"`

	// Always \"customerlist\".
	Type string `json:"type,omitempty"`

	// Last update time. Unix timestamp in seconds.
	UpdatedTime float32 `json:"updated_time,omitempty"`

	// Customer list errors
	Exceptions map[string]interface{} `json:"exceptions,omitempty"`
}
