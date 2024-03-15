/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi




type CatalogsProductGroupsList200ResponseAllOfItemsInner struct {

	// ID of the catalog product group.
	Id string `json:"id"`

	// Name of catalog product group
	Name string `json:"name,omitempty"`

	Description *string `json:"description,omitempty"`

	Filters CatalogsProductGroupFilters `json:"filters"`

	// boolean indicator of whether the product group is being featured or not
	IsFeatured bool `json:"is_featured,omitempty"`

	Type CatalogsProductGroupType `json:"type,omitempty"`

	Status CatalogsProductGroupStatus `json:"status,omitempty"`

	// Unix timestamp in seconds of when catalog product group was created.
	CreatedAt int32 `json:"created_at,omitempty"`

	// Unix timestamp in seconds of last time catalog product group was updated.
	UpdatedAt int32 `json:"updated_at,omitempty"`

	// id of the catalogs feed belonging to this catalog product group
	FeedId string `json:"feed_id"`

	CatalogType string `json:"catalog_type,omitempty"`
}

// AssertCatalogsProductGroupsList200ResponseAllOfItemsInnerRequired checks if the required fields are not zero-ed
func AssertCatalogsProductGroupsList200ResponseAllOfItemsInnerRequired(obj CatalogsProductGroupsList200ResponseAllOfItemsInner) error {
	elements := map[string]interface{}{
		"id": obj.Id,
		"filters": obj.Filters,
		"feed_id": obj.FeedId,
		"catalog_id": obj.CatalogId,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	if err := AssertCatalogsProductGroupFiltersRequired(obj.Filters); err != nil {
		return err
	}
	return nil
}

// AssertCatalogsProductGroupsList200ResponseAllOfItemsInnerConstraints checks if the values respects the defined constraints
func AssertCatalogsProductGroupsList200ResponseAllOfItemsInnerConstraints(obj CatalogsProductGroupsList200ResponseAllOfItemsInner) error {
	return nil
}
