package models

import (
	"time"
)

// Pin - Pin
type Pin struct {

	Id string `json:"id,omitempty"`

	CreatedAt time.Time `json:"created_at,omitempty"`

	Link *string `json:"link,omitempty"`

	Title *string `json:"title,omitempty"`

	Description *string `json:"description,omitempty"`

	// Dominant pin color. Hex number, e.g. \\\"#6E7874\\\".
	DominantColor *string `json:"dominant_color,omitempty"`

	AltText *string `json:"alt_text,omitempty"`

	CreativeType *CreativeType `json:"creative_type,omitempty"`

	// The board to which this Pin belongs.
	BoardId string `json:"board_id,omitempty"`

	// The board section to which this Pin belongs.
	BoardSectionId *string `json:"board_section_id,omitempty"`

	BoardOwner BoardOwner `json:"board_owner,omitempty"`

	// Whether the \"operation user_account\" is the Pin owner.
	IsOwner bool `json:"is_owner,omitempty"`

	Media SummaryPinMedia `json:"media,omitempty"`

	MediaSource PinMediaSource `json:"media_source,omitempty"`

	// The source pin id if this pin was saved from another pin. <a href=\"https://help.pinterest.com/article/save-pins-on-pinterest\">Learn more</a>.
	ParentPinId *string `json:"parent_pin_id,omitempty"`

	// Whether the Pin is standard or not. See documentation on <a href=\"https://developers.pinterest.com/docs/content/update/\">Changes to Pin creation</a> for more information.
	IsStandard bool `json:"is_standard,omitempty"`

	// Whether the Pin has been promoted or not.
	HasBeenPromoted bool `json:"has_been_promoted,omitempty"`

	// Private note for this Pin. <a href=\"https://help.pinterest.com/en/article/add-notes-to-your-pins\">Learn more</a>.
	Note *string `json:"note,omitempty"`

	// Pin metrics with associated time intervals if any.
	PinMetrics *map[string]interface{} `json:"pin_metrics,omitempty"`
}
