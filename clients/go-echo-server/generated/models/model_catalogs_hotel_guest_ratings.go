package models

// CatalogsHotelGuestRatings - If specified, you must provide all properties
type CatalogsHotelGuestRatings struct {

	// Your hotel's rating.
	Score float32 `json:"score,omitempty"`

	// Total number of people who have rated this hotel.
	NumberOfReviewers int32 `json:"number_of_reviewers,omitempty"`

	// Max value for the hotel rating score.
	MaxScore float32 `json:"max_score,omitempty"`

	// System you use for guest reviews.
	RatingSystem string `json:"rating_system,omitempty"`
}
