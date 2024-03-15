package models
// ActionType : Ad group billable event type. For update, only draft ad groups may update billable event.
type ActionType string

// List of ActionType
const (
	CLICKTHROUGH ActionType = "CLICKTHROUGH"
	IMPRESSION ActionType = "IMPRESSION"
	VIDEO_V_50_MRC ActionType = "VIDEO_V_50_MRC"
)
