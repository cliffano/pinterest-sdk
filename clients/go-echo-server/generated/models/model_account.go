package models

type Account struct {

	// Type of account
	AccountType string `json:"account_type,omitempty"`

	// User account ID.
	Id string `json:"id,omitempty"`

	ProfileImage string `json:"profile_image,omitempty"`

	WebsiteUrl string `json:"website_url,omitempty"`

	Username string `json:"username,omitempty"`

	// Profile about description.
	About string `json:"about,omitempty"`

	BusinessName *string `json:"business_name,omitempty"`

	// User account board count.<br/>**Note**: Board count on user account level may differ from counts found elsewhere due to attribution of collaborative Boards.
	BoardCount *int32 `json:"board_count,omitempty"`

	// User account pin count. This includes both created and saved pins.
	PinCount *int32 `json:"pin_count,omitempty"`

	// User account follower count.
	FollowerCount *int32 `json:"follower_count,omitempty"`

	// User account following count.
	FollowingCount *int32 `json:"following_count,omitempty"`

	// User account monthly views.
	MonthlyViews *int32 `json:"monthly_views,omitempty"`
}
