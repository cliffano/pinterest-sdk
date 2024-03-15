package models

// PinUpdate - Pin fields for updates
type PinUpdate struct {

	// Pin's alternative text.
	AltText *string `json:"alt_text,omitempty"`

	// The id of the board to move the Pin onto.
	BoardId *string `json:"board_id,omitempty"`

	// <a href=\"https://help.pinterest.com/en/article/create-a-board-section\">Board section</a> ID.
	BoardSectionId *string `json:"board_section_id,omitempty"`

	// Pin description - 800 characters maximum.
	Description *string `json:"description,omitempty"`

	// URL viewer is taken to when they click pin.
	Link *string `json:"link,omitempty"`

	// The native pin title that creators explicitly prefer to display.
	Title *string `json:"title,omitempty"`

	// Carousel Pin slots data.
	CarouselSlots []PinUpdateCarouselSlotsInner `json:"carousel_slots,omitempty"`

	// Private note for this Pin. <a href=\"https://help.pinterest.com/en/article/add-notes-to-your-pins\">Learn more</a>.
	Note *string `json:"note,omitempty"`
}
