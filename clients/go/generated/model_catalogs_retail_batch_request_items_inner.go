/*
Pinterest REST API

Pinterest's REST API

API version: 5.12.0
Contact: blah+oapicf@cliffano.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
	"fmt"
)

// CatalogsRetailBatchRequestItemsInner struct for CatalogsRetailBatchRequestItemsInner
type CatalogsRetailBatchRequestItemsInner struct {
	CatalogsCreateRetailItem *CatalogsCreateRetailItem
	CatalogsDeleteRetailItem *CatalogsDeleteRetailItem
	CatalogsUpdateRetailItem *CatalogsUpdateRetailItem
	CatalogsUpsertRetailItem *CatalogsUpsertRetailItem
}

// Unmarshal JSON data into any of the pointers in the struct
func (dst *CatalogsRetailBatchRequestItemsInner) UnmarshalJSON(data []byte) error {
	var err error
	// use discriminator value to speed up the lookup
	var jsonDict map[string]interface{}
	err = json.Unmarshal(data, &jsonDict)
	if err != nil {
		return fmt.Errorf("failed to unmarshal JSON into map for the discriminator lookup")
	}

	// check if the discriminator value is 'CREATE'
	if jsonDict["operation"] == "CREATE" {
		// try to unmarshal JSON data into CatalogsCreateRetailItem
		err = json.Unmarshal(data, &dst.CatalogsCreateRetailItem);
		if err == nil {
			jsonCatalogsCreateRetailItem, _ := json.Marshal(dst.CatalogsCreateRetailItem)
			if string(jsonCatalogsCreateRetailItem) == "{}" { // empty struct
				dst.CatalogsCreateRetailItem = nil
			} else {
				return nil // data stored in dst.CatalogsCreateRetailItem, return on the first match
			}
		} else {
			dst.CatalogsCreateRetailItem = nil
		}
	}

	// check if the discriminator value is 'DELETE'
	if jsonDict["operation"] == "DELETE" {
		// try to unmarshal JSON data into CatalogsDeleteRetailItem
		err = json.Unmarshal(data, &dst.CatalogsDeleteRetailItem);
		if err == nil {
			jsonCatalogsDeleteRetailItem, _ := json.Marshal(dst.CatalogsDeleteRetailItem)
			if string(jsonCatalogsDeleteRetailItem) == "{}" { // empty struct
				dst.CatalogsDeleteRetailItem = nil
			} else {
				return nil // data stored in dst.CatalogsDeleteRetailItem, return on the first match
			}
		} else {
			dst.CatalogsDeleteRetailItem = nil
		}
	}

	// check if the discriminator value is 'UPDATE'
	if jsonDict["operation"] == "UPDATE" {
		// try to unmarshal JSON data into CatalogsUpdateRetailItem
		err = json.Unmarshal(data, &dst.CatalogsUpdateRetailItem);
		if err == nil {
			jsonCatalogsUpdateRetailItem, _ := json.Marshal(dst.CatalogsUpdateRetailItem)
			if string(jsonCatalogsUpdateRetailItem) == "{}" { // empty struct
				dst.CatalogsUpdateRetailItem = nil
			} else {
				return nil // data stored in dst.CatalogsUpdateRetailItem, return on the first match
			}
		} else {
			dst.CatalogsUpdateRetailItem = nil
		}
	}

	// check if the discriminator value is 'UPSERT'
	if jsonDict["operation"] == "UPSERT" {
		// try to unmarshal JSON data into CatalogsUpsertRetailItem
		err = json.Unmarshal(data, &dst.CatalogsUpsertRetailItem);
		if err == nil {
			jsonCatalogsUpsertRetailItem, _ := json.Marshal(dst.CatalogsUpsertRetailItem)
			if string(jsonCatalogsUpsertRetailItem) == "{}" { // empty struct
				dst.CatalogsUpsertRetailItem = nil
			} else {
				return nil // data stored in dst.CatalogsUpsertRetailItem, return on the first match
			}
		} else {
			dst.CatalogsUpsertRetailItem = nil
		}
	}

	// check if the discriminator value is 'CatalogsCreateRetailItem'
	if jsonDict["operation"] == "CatalogsCreateRetailItem" {
		// try to unmarshal JSON data into CatalogsCreateRetailItem
		err = json.Unmarshal(data, &dst.CatalogsCreateRetailItem);
		if err == nil {
			jsonCatalogsCreateRetailItem, _ := json.Marshal(dst.CatalogsCreateRetailItem)
			if string(jsonCatalogsCreateRetailItem) == "{}" { // empty struct
				dst.CatalogsCreateRetailItem = nil
			} else {
				return nil // data stored in dst.CatalogsCreateRetailItem, return on the first match
			}
		} else {
			dst.CatalogsCreateRetailItem = nil
		}
	}

	// check if the discriminator value is 'CatalogsDeleteRetailItem'
	if jsonDict["operation"] == "CatalogsDeleteRetailItem" {
		// try to unmarshal JSON data into CatalogsDeleteRetailItem
		err = json.Unmarshal(data, &dst.CatalogsDeleteRetailItem);
		if err == nil {
			jsonCatalogsDeleteRetailItem, _ := json.Marshal(dst.CatalogsDeleteRetailItem)
			if string(jsonCatalogsDeleteRetailItem) == "{}" { // empty struct
				dst.CatalogsDeleteRetailItem = nil
			} else {
				return nil // data stored in dst.CatalogsDeleteRetailItem, return on the first match
			}
		} else {
			dst.CatalogsDeleteRetailItem = nil
		}
	}

	// check if the discriminator value is 'CatalogsUpdateRetailItem'
	if jsonDict["operation"] == "CatalogsUpdateRetailItem" {
		// try to unmarshal JSON data into CatalogsUpdateRetailItem
		err = json.Unmarshal(data, &dst.CatalogsUpdateRetailItem);
		if err == nil {
			jsonCatalogsUpdateRetailItem, _ := json.Marshal(dst.CatalogsUpdateRetailItem)
			if string(jsonCatalogsUpdateRetailItem) == "{}" { // empty struct
				dst.CatalogsUpdateRetailItem = nil
			} else {
				return nil // data stored in dst.CatalogsUpdateRetailItem, return on the first match
			}
		} else {
			dst.CatalogsUpdateRetailItem = nil
		}
	}

	// check if the discriminator value is 'CatalogsUpsertRetailItem'
	if jsonDict["operation"] == "CatalogsUpsertRetailItem" {
		// try to unmarshal JSON data into CatalogsUpsertRetailItem
		err = json.Unmarshal(data, &dst.CatalogsUpsertRetailItem);
		if err == nil {
			jsonCatalogsUpsertRetailItem, _ := json.Marshal(dst.CatalogsUpsertRetailItem)
			if string(jsonCatalogsUpsertRetailItem) == "{}" { // empty struct
				dst.CatalogsUpsertRetailItem = nil
			} else {
				return nil // data stored in dst.CatalogsUpsertRetailItem, return on the first match
			}
		} else {
			dst.CatalogsUpsertRetailItem = nil
		}
	}

	// try to unmarshal JSON data into CatalogsCreateRetailItem
	err = json.Unmarshal(data, &dst.CatalogsCreateRetailItem);
	if err == nil {
		jsonCatalogsCreateRetailItem, _ := json.Marshal(dst.CatalogsCreateRetailItem)
		if string(jsonCatalogsCreateRetailItem) == "{}" { // empty struct
			dst.CatalogsCreateRetailItem = nil
		} else {
			return nil // data stored in dst.CatalogsCreateRetailItem, return on the first match
		}
	} else {
		dst.CatalogsCreateRetailItem = nil
	}

	// try to unmarshal JSON data into CatalogsDeleteRetailItem
	err = json.Unmarshal(data, &dst.CatalogsDeleteRetailItem);
	if err == nil {
		jsonCatalogsDeleteRetailItem, _ := json.Marshal(dst.CatalogsDeleteRetailItem)
		if string(jsonCatalogsDeleteRetailItem) == "{}" { // empty struct
			dst.CatalogsDeleteRetailItem = nil
		} else {
			return nil // data stored in dst.CatalogsDeleteRetailItem, return on the first match
		}
	} else {
		dst.CatalogsDeleteRetailItem = nil
	}

	// try to unmarshal JSON data into CatalogsUpdateRetailItem
	err = json.Unmarshal(data, &dst.CatalogsUpdateRetailItem);
	if err == nil {
		jsonCatalogsUpdateRetailItem, _ := json.Marshal(dst.CatalogsUpdateRetailItem)
		if string(jsonCatalogsUpdateRetailItem) == "{}" { // empty struct
			dst.CatalogsUpdateRetailItem = nil
		} else {
			return nil // data stored in dst.CatalogsUpdateRetailItem, return on the first match
		}
	} else {
		dst.CatalogsUpdateRetailItem = nil
	}

	// try to unmarshal JSON data into CatalogsUpsertRetailItem
	err = json.Unmarshal(data, &dst.CatalogsUpsertRetailItem);
	if err == nil {
		jsonCatalogsUpsertRetailItem, _ := json.Marshal(dst.CatalogsUpsertRetailItem)
		if string(jsonCatalogsUpsertRetailItem) == "{}" { // empty struct
			dst.CatalogsUpsertRetailItem = nil
		} else {
			return nil // data stored in dst.CatalogsUpsertRetailItem, return on the first match
		}
	} else {
		dst.CatalogsUpsertRetailItem = nil
	}

	return fmt.Errorf("data failed to match schemas in anyOf(CatalogsRetailBatchRequestItemsInner)")
}

// Marshal data from the first non-nil pointers in the struct to JSON
func (src *CatalogsRetailBatchRequestItemsInner) MarshalJSON() ([]byte, error) {
	if src.CatalogsCreateRetailItem != nil {
		return json.Marshal(&src.CatalogsCreateRetailItem)
	}

	if src.CatalogsDeleteRetailItem != nil {
		return json.Marshal(&src.CatalogsDeleteRetailItem)
	}

	if src.CatalogsUpdateRetailItem != nil {
		return json.Marshal(&src.CatalogsUpdateRetailItem)
	}

	if src.CatalogsUpsertRetailItem != nil {
		return json.Marshal(&src.CatalogsUpsertRetailItem)
	}

	return nil, nil // no data in anyOf schemas
}

type NullableCatalogsRetailBatchRequestItemsInner struct {
	value *CatalogsRetailBatchRequestItemsInner
	isSet bool
}

func (v NullableCatalogsRetailBatchRequestItemsInner) Get() *CatalogsRetailBatchRequestItemsInner {
	return v.value
}

func (v *NullableCatalogsRetailBatchRequestItemsInner) Set(val *CatalogsRetailBatchRequestItemsInner) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsRetailBatchRequestItemsInner) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsRetailBatchRequestItemsInner) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsRetailBatchRequestItemsInner(val *CatalogsRetailBatchRequestItemsInner) *NullableCatalogsRetailBatchRequestItemsInner {
	return &NullableCatalogsRetailBatchRequestItemsInner{value: val, isSet: true}
}

func (v NullableCatalogsRetailBatchRequestItemsInner) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsRetailBatchRequestItemsInner) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


