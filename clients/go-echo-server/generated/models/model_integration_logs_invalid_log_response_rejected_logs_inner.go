package models

type IntegrationLogsInvalidLogResponseRejectedLogsInner struct {

	// Index of the log in the batch.
	LogIndex int32 `json:"log_index,omitempty"`

	// The field name containing an invalid value.
	Field string `json:"field"`

	// The value that is invalid.
	Value string `json:"value"`

	// The reason the value is invalid.
	Reason string `json:"reason"`
}
