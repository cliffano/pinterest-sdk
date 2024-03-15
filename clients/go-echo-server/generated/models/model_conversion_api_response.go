package models

// ConversionApiResponse - Schema describing the object in the response, which contains information about the events that were received and processed.
type ConversionApiResponse struct {

	// Total number of events received in the request.
	NumEventsReceived int32 `json:"num_events_received"`

	// Number of events that were successfully processed from the events.
	NumEventsProcessed int32 `json:"num_events_processed"`

	// Specific messages for each event received. The order will match the order in which the events were received in the request.
	Events []ConversionApiResponseEventsInner `json:"events"`
}
