/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

// ItemBatchRecord - Object describing an item batch record
type ItemBatchRecord struct {

	// The catalog item id in the merchant namespace
	ItemId string `json:"item_id,omitempty"`

	Attributes ItemAttributes `json:"attributes,omitempty"`
}

// AssertItemBatchRecordRequired checks if the required fields are not zero-ed
func AssertItemBatchRecordRequired(obj ItemBatchRecord) error {
	if err := AssertItemAttributesRequired(obj.Attributes); err != nil {
		return err
	}
	return nil
}

// AssertRecurseItemBatchRecordRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ItemBatchRecord (e.g. [][]ItemBatchRecord), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseItemBatchRecordRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aItemBatchRecord, ok := obj.(ItemBatchRecord)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertItemBatchRecordRequired(aItemBatchRecord)
	})
}