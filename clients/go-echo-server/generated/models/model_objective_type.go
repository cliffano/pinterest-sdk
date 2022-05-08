package models
// ObjectiveType : Campaign objective type.
type ObjectiveType string

// List of ObjectiveType
const (
	AWARENESS ObjectiveType = "AWARENESS"
	CONSIDERATION ObjectiveType = "CONSIDERATION"
	VIDEO_VIEW ObjectiveType = "VIDEO_VIEW"
	WEB_CONVERSION ObjectiveType = "WEB_CONVERSION"
	CATALOG_SALES ObjectiveType = "CATALOG_SALES"
	WEB_SESSIONS ObjectiveType = "WEB_SESSIONS"
	AWARENESS_RESERVED ObjectiveType = "AWARENESS_RESERVED"
	ENGAGEMENT ObjectiveType = "ENGAGEMENT"
)