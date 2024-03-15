package models
// PacingDeliveryType : Ad group pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day. When using CBO, only the STANDARD pacing delivery type is allowed.
type PacingDeliveryType string

// List of PacingDeliveryType
const (
	STANDARD PacingDeliveryType = "STANDARD"
	ACCELERATED PacingDeliveryType = "ACCELERATED"
)
