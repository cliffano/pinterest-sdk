package models
// ConversionTagType : conversion tag type
type ConversionTagType string

// List of ConversionTagType
const (
	PAGE_LOAD ConversionTagType = "PAGE_LOAD"
	UNKNOWN ConversionTagType = "UNKNOWN"
	INITIALIZED ConversionTagType = "INITIALIZED"
	PAGE_VISIT ConversionTagType = "PAGE_VISIT"
	SIGNUP ConversionTagType = "SIGNUP"
	CHECKOUT ConversionTagType = "CHECKOUT"
	CUSTOM ConversionTagType = "CUSTOM"
	VIEW_CATEGORY ConversionTagType = "VIEW_CATEGORY"
	SEARCH ConversionTagType = "SEARCH"
	ADD_TO_CART ConversionTagType = "ADD_TO_CART"
	WATCH_VIDEO ConversionTagType = "WATCH_VIDEO"
	LEAD ConversionTagType = "LEAD"
	APP_INSTALL ConversionTagType = "APP_INSTALL"
	WEB_SESSION ConversionTagType = "WEB_SESSION"
	EXTERNAL_MEASUREMENT ConversionTagType = "EXTERNAL_MEASUREMENT"
)
