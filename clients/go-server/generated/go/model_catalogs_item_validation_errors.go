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




type CatalogsItemValidationErrors struct {

	ADULT_INVALID CatalogsItemValidationDetails `json:"ADULT_INVALID,omitempty"`

	ADWORDS_FORMAT_INVALID CatalogsItemValidationDetails `json:"ADWORDS_FORMAT_INVALID,omitempty"`

	AVAILABILITY_INVALID CatalogsItemValidationDetails `json:"AVAILABILITY_INVALID,omitempty"`

	BLOCKLISTED_IMAGE_SIGNATURE CatalogsItemValidationDetails `json:"BLOCKLISTED_IMAGE_SIGNATURE,omitempty"`

	DESCRIPTION_MISSING CatalogsItemValidationDetails `json:"DESCRIPTION_MISSING,omitempty"`

	DUPLICATE_PRODUCTS CatalogsItemValidationDetails `json:"DUPLICATE_PRODUCTS,omitempty"`

	IMAGE_LINK_INVALID CatalogsItemValidationDetails `json:"IMAGE_LINK_INVALID,omitempty"`

	IMAGE_LINK_LENGTH_TOO_LONG CatalogsItemValidationDetails `json:"IMAGE_LINK_LENGTH_TOO_LONG,omitempty"`

	IMAGE_LINK_MISSING CatalogsItemValidationDetails `json:"IMAGE_LINK_MISSING,omitempty"`

	INVALID_DOMAIN CatalogsItemValidationDetails `json:"INVALID_DOMAIN,omitempty"`

	ITEMID_MISSING CatalogsItemValidationDetails `json:"ITEMID_MISSING,omitempty"`

	ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE CatalogsItemValidationDetails `json:"ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE,omitempty"`

	LINK_FORMAT_INVALID CatalogsItemValidationDetails `json:"LINK_FORMAT_INVALID,omitempty"`

	LINK_LENGTH_TOO_LONG CatalogsItemValidationDetails `json:"LINK_LENGTH_TOO_LONG,omitempty"`

	LIST_PRICE_INVALID CatalogsItemValidationDetails `json:"LIST_PRICE_INVALID,omitempty"`

	MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED CatalogsItemValidationDetails `json:"MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED,omitempty"`

	PARSE_LINE_ERROR CatalogsItemValidationDetails `json:"PARSE_LINE_ERROR,omitempty"`

	PINJOIN_CONTENT_UNSAFE CatalogsItemValidationDetails `json:"PINJOIN_CONTENT_UNSAFE,omitempty"`

	PRICE_CANNOT_BE_DETERMINED CatalogsItemValidationDetails `json:"PRICE_CANNOT_BE_DETERMINED,omitempty"`

	PRICE_MISSING CatalogsItemValidationDetails `json:"PRICE_MISSING,omitempty"`

	PRODUCT_LINK_MISSING CatalogsItemValidationDetails `json:"PRODUCT_LINK_MISSING,omitempty"`

	PRODUCT_PRICE_INVALID CatalogsItemValidationDetails `json:"PRODUCT_PRICE_INVALID,omitempty"`

	TITLE_MISSING CatalogsItemValidationDetails `json:"TITLE_MISSING,omitempty"`
}

// AssertCatalogsItemValidationErrorsRequired checks if the required fields are not zero-ed
func AssertCatalogsItemValidationErrorsRequired(obj CatalogsItemValidationErrors) error {
	if err := AssertCatalogsItemValidationDetailsRequired(obj.ADULT_INVALID); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.ADWORDS_FORMAT_INVALID); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.AVAILABILITY_INVALID); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.BLOCKLISTED_IMAGE_SIGNATURE); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.DESCRIPTION_MISSING); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.DUPLICATE_PRODUCTS); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.IMAGE_LINK_INVALID); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.IMAGE_LINK_LENGTH_TOO_LONG); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.IMAGE_LINK_MISSING); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.INVALID_DOMAIN); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.ITEMID_MISSING); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.LINK_FORMAT_INVALID); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.LINK_LENGTH_TOO_LONG); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.LIST_PRICE_INVALID); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.PARSE_LINE_ERROR); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.PINJOIN_CONTENT_UNSAFE); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.PRICE_CANNOT_BE_DETERMINED); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.PRICE_MISSING); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.PRODUCT_LINK_MISSING); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.PRODUCT_PRICE_INVALID); err != nil {
		return err
	}
	if err := AssertCatalogsItemValidationDetailsRequired(obj.TITLE_MISSING); err != nil {
		return err
	}
	return nil
}

// AssertCatalogsItemValidationErrorsConstraints checks if the values respects the defined constraints
func AssertCatalogsItemValidationErrorsConstraints(obj CatalogsItemValidationErrors) error {
	return nil
}
