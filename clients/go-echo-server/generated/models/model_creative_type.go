package models
// CreativeType : Ad creative type enum. For update, only draft ads may update creative type. </p><strong>Note:</strong> SHOP_THE_PIN has been deprecated. Please use COLLECTION instead.
type CreativeType string

// List of CreativeType
const (
	REGULAR CreativeType = "REGULAR"
	VIDEO CreativeType = "VIDEO"
	SHOPPING CreativeType = "SHOPPING"
	CAROUSEL CreativeType = "CAROUSEL"
	MAX_VIDEO CreativeType = "MAX_VIDEO"
	SHOP_THE_PIN CreativeType = "SHOP_THE_PIN"
	COLLECTION CreativeType = "COLLECTION"
	IDEA CreativeType = "IDEA"
	SHOWCASE CreativeType = "SHOWCASE"
	QUIZ CreativeType = "QUIZ"
)
