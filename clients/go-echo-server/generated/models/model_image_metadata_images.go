package models

type ImageMetadataImages struct {

	Var150x150 ImageDetails `json:"150x150,omitempty"`

	Var400x300 ImageDetails `json:"400x300,omitempty"`

	Var600x ImageDetails `json:"600x,omitempty"`

	Var1200x ImageDetails `json:"1200x,omitempty"`
}
