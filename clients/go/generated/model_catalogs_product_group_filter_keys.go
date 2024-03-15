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

// CatalogsProductGroupFilterKeys struct for CatalogsProductGroupFilterKeys
type CatalogsProductGroupFilterKeys struct {
	AvailabilityFilter *AvailabilityFilter
	BrandFilter *BrandFilter
	ConditionFilter *ConditionFilter
	CurrencyFilter *CurrencyFilter
	CustomLabel0Filter *CustomLabel0Filter
	CustomLabel1Filter *CustomLabel1Filter
	CustomLabel2Filter *CustomLabel2Filter
	CustomLabel3Filter *CustomLabel3Filter
	CustomLabel4Filter *CustomLabel4Filter
	GenderFilter *GenderFilter
	GoogleProductCategory0Filter *GoogleProductCategory0Filter
	GoogleProductCategory1Filter *GoogleProductCategory1Filter
	GoogleProductCategory2Filter *GoogleProductCategory2Filter
	GoogleProductCategory3Filter *GoogleProductCategory3Filter
	GoogleProductCategory4Filter *GoogleProductCategory4Filter
	GoogleProductCategory5Filter *GoogleProductCategory5Filter
	GoogleProductCategory6Filter *GoogleProductCategory6Filter
	ItemGroupIdFilter *ItemGroupIdFilter
	ItemIdFilter *ItemIdFilter
	MaxPriceFilter *MaxPriceFilter
	MinPriceFilter *MinPriceFilter
	ProductType0Filter *ProductType0Filter
	ProductType1Filter *ProductType1Filter
	ProductType2Filter *ProductType2Filter
	ProductType3Filter *ProductType3Filter
	ProductType4Filter *ProductType4Filter
}

// Unmarshal JSON data into any of the pointers in the struct
func (dst *CatalogsProductGroupFilterKeys) UnmarshalJSON(data []byte) error {
	var err error
	// try to unmarshal JSON data into AvailabilityFilter
	err = json.Unmarshal(data, &dst.AvailabilityFilter);
	if err == nil {
		jsonAvailabilityFilter, _ := json.Marshal(dst.AvailabilityFilter)
		if string(jsonAvailabilityFilter) == "{}" { // empty struct
			dst.AvailabilityFilter = nil
		} else {
			return nil // data stored in dst.AvailabilityFilter, return on the first match
		}
	} else {
		dst.AvailabilityFilter = nil
	}

	// try to unmarshal JSON data into BrandFilter
	err = json.Unmarshal(data, &dst.BrandFilter);
	if err == nil {
		jsonBrandFilter, _ := json.Marshal(dst.BrandFilter)
		if string(jsonBrandFilter) == "{}" { // empty struct
			dst.BrandFilter = nil
		} else {
			return nil // data stored in dst.BrandFilter, return on the first match
		}
	} else {
		dst.BrandFilter = nil
	}

	// try to unmarshal JSON data into ConditionFilter
	err = json.Unmarshal(data, &dst.ConditionFilter);
	if err == nil {
		jsonConditionFilter, _ := json.Marshal(dst.ConditionFilter)
		if string(jsonConditionFilter) == "{}" { // empty struct
			dst.ConditionFilter = nil
		} else {
			return nil // data stored in dst.ConditionFilter, return on the first match
		}
	} else {
		dst.ConditionFilter = nil
	}

	// try to unmarshal JSON data into CurrencyFilter
	err = json.Unmarshal(data, &dst.CurrencyFilter);
	if err == nil {
		jsonCurrencyFilter, _ := json.Marshal(dst.CurrencyFilter)
		if string(jsonCurrencyFilter) == "{}" { // empty struct
			dst.CurrencyFilter = nil
		} else {
			return nil // data stored in dst.CurrencyFilter, return on the first match
		}
	} else {
		dst.CurrencyFilter = nil
	}

	// try to unmarshal JSON data into CustomLabel0Filter
	err = json.Unmarshal(data, &dst.CustomLabel0Filter);
	if err == nil {
		jsonCustomLabel0Filter, _ := json.Marshal(dst.CustomLabel0Filter)
		if string(jsonCustomLabel0Filter) == "{}" { // empty struct
			dst.CustomLabel0Filter = nil
		} else {
			return nil // data stored in dst.CustomLabel0Filter, return on the first match
		}
	} else {
		dst.CustomLabel0Filter = nil
	}

	// try to unmarshal JSON data into CustomLabel1Filter
	err = json.Unmarshal(data, &dst.CustomLabel1Filter);
	if err == nil {
		jsonCustomLabel1Filter, _ := json.Marshal(dst.CustomLabel1Filter)
		if string(jsonCustomLabel1Filter) == "{}" { // empty struct
			dst.CustomLabel1Filter = nil
		} else {
			return nil // data stored in dst.CustomLabel1Filter, return on the first match
		}
	} else {
		dst.CustomLabel1Filter = nil
	}

	// try to unmarshal JSON data into CustomLabel2Filter
	err = json.Unmarshal(data, &dst.CustomLabel2Filter);
	if err == nil {
		jsonCustomLabel2Filter, _ := json.Marshal(dst.CustomLabel2Filter)
		if string(jsonCustomLabel2Filter) == "{}" { // empty struct
			dst.CustomLabel2Filter = nil
		} else {
			return nil // data stored in dst.CustomLabel2Filter, return on the first match
		}
	} else {
		dst.CustomLabel2Filter = nil
	}

	// try to unmarshal JSON data into CustomLabel3Filter
	err = json.Unmarshal(data, &dst.CustomLabel3Filter);
	if err == nil {
		jsonCustomLabel3Filter, _ := json.Marshal(dst.CustomLabel3Filter)
		if string(jsonCustomLabel3Filter) == "{}" { // empty struct
			dst.CustomLabel3Filter = nil
		} else {
			return nil // data stored in dst.CustomLabel3Filter, return on the first match
		}
	} else {
		dst.CustomLabel3Filter = nil
	}

	// try to unmarshal JSON data into CustomLabel4Filter
	err = json.Unmarshal(data, &dst.CustomLabel4Filter);
	if err == nil {
		jsonCustomLabel4Filter, _ := json.Marshal(dst.CustomLabel4Filter)
		if string(jsonCustomLabel4Filter) == "{}" { // empty struct
			dst.CustomLabel4Filter = nil
		} else {
			return nil // data stored in dst.CustomLabel4Filter, return on the first match
		}
	} else {
		dst.CustomLabel4Filter = nil
	}

	// try to unmarshal JSON data into GenderFilter
	err = json.Unmarshal(data, &dst.GenderFilter);
	if err == nil {
		jsonGenderFilter, _ := json.Marshal(dst.GenderFilter)
		if string(jsonGenderFilter) == "{}" { // empty struct
			dst.GenderFilter = nil
		} else {
			return nil // data stored in dst.GenderFilter, return on the first match
		}
	} else {
		dst.GenderFilter = nil
	}

	// try to unmarshal JSON data into GoogleProductCategory0Filter
	err = json.Unmarshal(data, &dst.GoogleProductCategory0Filter);
	if err == nil {
		jsonGoogleProductCategory0Filter, _ := json.Marshal(dst.GoogleProductCategory0Filter)
		if string(jsonGoogleProductCategory0Filter) == "{}" { // empty struct
			dst.GoogleProductCategory0Filter = nil
		} else {
			return nil // data stored in dst.GoogleProductCategory0Filter, return on the first match
		}
	} else {
		dst.GoogleProductCategory0Filter = nil
	}

	// try to unmarshal JSON data into GoogleProductCategory1Filter
	err = json.Unmarshal(data, &dst.GoogleProductCategory1Filter);
	if err == nil {
		jsonGoogleProductCategory1Filter, _ := json.Marshal(dst.GoogleProductCategory1Filter)
		if string(jsonGoogleProductCategory1Filter) == "{}" { // empty struct
			dst.GoogleProductCategory1Filter = nil
		} else {
			return nil // data stored in dst.GoogleProductCategory1Filter, return on the first match
		}
	} else {
		dst.GoogleProductCategory1Filter = nil
	}

	// try to unmarshal JSON data into GoogleProductCategory2Filter
	err = json.Unmarshal(data, &dst.GoogleProductCategory2Filter);
	if err == nil {
		jsonGoogleProductCategory2Filter, _ := json.Marshal(dst.GoogleProductCategory2Filter)
		if string(jsonGoogleProductCategory2Filter) == "{}" { // empty struct
			dst.GoogleProductCategory2Filter = nil
		} else {
			return nil // data stored in dst.GoogleProductCategory2Filter, return on the first match
		}
	} else {
		dst.GoogleProductCategory2Filter = nil
	}

	// try to unmarshal JSON data into GoogleProductCategory3Filter
	err = json.Unmarshal(data, &dst.GoogleProductCategory3Filter);
	if err == nil {
		jsonGoogleProductCategory3Filter, _ := json.Marshal(dst.GoogleProductCategory3Filter)
		if string(jsonGoogleProductCategory3Filter) == "{}" { // empty struct
			dst.GoogleProductCategory3Filter = nil
		} else {
			return nil // data stored in dst.GoogleProductCategory3Filter, return on the first match
		}
	} else {
		dst.GoogleProductCategory3Filter = nil
	}

	// try to unmarshal JSON data into GoogleProductCategory4Filter
	err = json.Unmarshal(data, &dst.GoogleProductCategory4Filter);
	if err == nil {
		jsonGoogleProductCategory4Filter, _ := json.Marshal(dst.GoogleProductCategory4Filter)
		if string(jsonGoogleProductCategory4Filter) == "{}" { // empty struct
			dst.GoogleProductCategory4Filter = nil
		} else {
			return nil // data stored in dst.GoogleProductCategory4Filter, return on the first match
		}
	} else {
		dst.GoogleProductCategory4Filter = nil
	}

	// try to unmarshal JSON data into GoogleProductCategory5Filter
	err = json.Unmarshal(data, &dst.GoogleProductCategory5Filter);
	if err == nil {
		jsonGoogleProductCategory5Filter, _ := json.Marshal(dst.GoogleProductCategory5Filter)
		if string(jsonGoogleProductCategory5Filter) == "{}" { // empty struct
			dst.GoogleProductCategory5Filter = nil
		} else {
			return nil // data stored in dst.GoogleProductCategory5Filter, return on the first match
		}
	} else {
		dst.GoogleProductCategory5Filter = nil
	}

	// try to unmarshal JSON data into GoogleProductCategory6Filter
	err = json.Unmarshal(data, &dst.GoogleProductCategory6Filter);
	if err == nil {
		jsonGoogleProductCategory6Filter, _ := json.Marshal(dst.GoogleProductCategory6Filter)
		if string(jsonGoogleProductCategory6Filter) == "{}" { // empty struct
			dst.GoogleProductCategory6Filter = nil
		} else {
			return nil // data stored in dst.GoogleProductCategory6Filter, return on the first match
		}
	} else {
		dst.GoogleProductCategory6Filter = nil
	}

	// try to unmarshal JSON data into ItemGroupIdFilter
	err = json.Unmarshal(data, &dst.ItemGroupIdFilter);
	if err == nil {
		jsonItemGroupIdFilter, _ := json.Marshal(dst.ItemGroupIdFilter)
		if string(jsonItemGroupIdFilter) == "{}" { // empty struct
			dst.ItemGroupIdFilter = nil
		} else {
			return nil // data stored in dst.ItemGroupIdFilter, return on the first match
		}
	} else {
		dst.ItemGroupIdFilter = nil
	}

	// try to unmarshal JSON data into ItemIdFilter
	err = json.Unmarshal(data, &dst.ItemIdFilter);
	if err == nil {
		jsonItemIdFilter, _ := json.Marshal(dst.ItemIdFilter)
		if string(jsonItemIdFilter) == "{}" { // empty struct
			dst.ItemIdFilter = nil
		} else {
			return nil // data stored in dst.ItemIdFilter, return on the first match
		}
	} else {
		dst.ItemIdFilter = nil
	}

	// try to unmarshal JSON data into MaxPriceFilter
	err = json.Unmarshal(data, &dst.MaxPriceFilter);
	if err == nil {
		jsonMaxPriceFilter, _ := json.Marshal(dst.MaxPriceFilter)
		if string(jsonMaxPriceFilter) == "{}" { // empty struct
			dst.MaxPriceFilter = nil
		} else {
			return nil // data stored in dst.MaxPriceFilter, return on the first match
		}
	} else {
		dst.MaxPriceFilter = nil
	}

	// try to unmarshal JSON data into MinPriceFilter
	err = json.Unmarshal(data, &dst.MinPriceFilter);
	if err == nil {
		jsonMinPriceFilter, _ := json.Marshal(dst.MinPriceFilter)
		if string(jsonMinPriceFilter) == "{}" { // empty struct
			dst.MinPriceFilter = nil
		} else {
			return nil // data stored in dst.MinPriceFilter, return on the first match
		}
	} else {
		dst.MinPriceFilter = nil
	}

	// try to unmarshal JSON data into ProductType0Filter
	err = json.Unmarshal(data, &dst.ProductType0Filter);
	if err == nil {
		jsonProductType0Filter, _ := json.Marshal(dst.ProductType0Filter)
		if string(jsonProductType0Filter) == "{}" { // empty struct
			dst.ProductType0Filter = nil
		} else {
			return nil // data stored in dst.ProductType0Filter, return on the first match
		}
	} else {
		dst.ProductType0Filter = nil
	}

	// try to unmarshal JSON data into ProductType1Filter
	err = json.Unmarshal(data, &dst.ProductType1Filter);
	if err == nil {
		jsonProductType1Filter, _ := json.Marshal(dst.ProductType1Filter)
		if string(jsonProductType1Filter) == "{}" { // empty struct
			dst.ProductType1Filter = nil
		} else {
			return nil // data stored in dst.ProductType1Filter, return on the first match
		}
	} else {
		dst.ProductType1Filter = nil
	}

	// try to unmarshal JSON data into ProductType2Filter
	err = json.Unmarshal(data, &dst.ProductType2Filter);
	if err == nil {
		jsonProductType2Filter, _ := json.Marshal(dst.ProductType2Filter)
		if string(jsonProductType2Filter) == "{}" { // empty struct
			dst.ProductType2Filter = nil
		} else {
			return nil // data stored in dst.ProductType2Filter, return on the first match
		}
	} else {
		dst.ProductType2Filter = nil
	}

	// try to unmarshal JSON data into ProductType3Filter
	err = json.Unmarshal(data, &dst.ProductType3Filter);
	if err == nil {
		jsonProductType3Filter, _ := json.Marshal(dst.ProductType3Filter)
		if string(jsonProductType3Filter) == "{}" { // empty struct
			dst.ProductType3Filter = nil
		} else {
			return nil // data stored in dst.ProductType3Filter, return on the first match
		}
	} else {
		dst.ProductType3Filter = nil
	}

	// try to unmarshal JSON data into ProductType4Filter
	err = json.Unmarshal(data, &dst.ProductType4Filter);
	if err == nil {
		jsonProductType4Filter, _ := json.Marshal(dst.ProductType4Filter)
		if string(jsonProductType4Filter) == "{}" { // empty struct
			dst.ProductType4Filter = nil
		} else {
			return nil // data stored in dst.ProductType4Filter, return on the first match
		}
	} else {
		dst.ProductType4Filter = nil
	}

	return fmt.Errorf("data failed to match schemas in anyOf(CatalogsProductGroupFilterKeys)")
}

// Marshal data from the first non-nil pointers in the struct to JSON
func (src *CatalogsProductGroupFilterKeys) MarshalJSON() ([]byte, error) {
	if src.AvailabilityFilter != nil {
		return json.Marshal(&src.AvailabilityFilter)
	}

	if src.BrandFilter != nil {
		return json.Marshal(&src.BrandFilter)
	}

	if src.ConditionFilter != nil {
		return json.Marshal(&src.ConditionFilter)
	}

	if src.CurrencyFilter != nil {
		return json.Marshal(&src.CurrencyFilter)
	}

	if src.CustomLabel0Filter != nil {
		return json.Marshal(&src.CustomLabel0Filter)
	}

	if src.CustomLabel1Filter != nil {
		return json.Marshal(&src.CustomLabel1Filter)
	}

	if src.CustomLabel2Filter != nil {
		return json.Marshal(&src.CustomLabel2Filter)
	}

	if src.CustomLabel3Filter != nil {
		return json.Marshal(&src.CustomLabel3Filter)
	}

	if src.CustomLabel4Filter != nil {
		return json.Marshal(&src.CustomLabel4Filter)
	}

	if src.GenderFilter != nil {
		return json.Marshal(&src.GenderFilter)
	}

	if src.GoogleProductCategory0Filter != nil {
		return json.Marshal(&src.GoogleProductCategory0Filter)
	}

	if src.GoogleProductCategory1Filter != nil {
		return json.Marshal(&src.GoogleProductCategory1Filter)
	}

	if src.GoogleProductCategory2Filter != nil {
		return json.Marshal(&src.GoogleProductCategory2Filter)
	}

	if src.GoogleProductCategory3Filter != nil {
		return json.Marshal(&src.GoogleProductCategory3Filter)
	}

	if src.GoogleProductCategory4Filter != nil {
		return json.Marshal(&src.GoogleProductCategory4Filter)
	}

	if src.GoogleProductCategory5Filter != nil {
		return json.Marshal(&src.GoogleProductCategory5Filter)
	}

	if src.GoogleProductCategory6Filter != nil {
		return json.Marshal(&src.GoogleProductCategory6Filter)
	}

	if src.ItemGroupIdFilter != nil {
		return json.Marshal(&src.ItemGroupIdFilter)
	}

	if src.ItemIdFilter != nil {
		return json.Marshal(&src.ItemIdFilter)
	}

	if src.MaxPriceFilter != nil {
		return json.Marshal(&src.MaxPriceFilter)
	}

	if src.MinPriceFilter != nil {
		return json.Marshal(&src.MinPriceFilter)
	}

	if src.ProductType0Filter != nil {
		return json.Marshal(&src.ProductType0Filter)
	}

	if src.ProductType1Filter != nil {
		return json.Marshal(&src.ProductType1Filter)
	}

	if src.ProductType2Filter != nil {
		return json.Marshal(&src.ProductType2Filter)
	}

	if src.ProductType3Filter != nil {
		return json.Marshal(&src.ProductType3Filter)
	}

	if src.ProductType4Filter != nil {
		return json.Marshal(&src.ProductType4Filter)
	}

	return nil, nil // no data in anyOf schemas
}

type NullableCatalogsProductGroupFilterKeys struct {
	value *CatalogsProductGroupFilterKeys
	isSet bool
}

func (v NullableCatalogsProductGroupFilterKeys) Get() *CatalogsProductGroupFilterKeys {
	return v.value
}

func (v *NullableCatalogsProductGroupFilterKeys) Set(val *CatalogsProductGroupFilterKeys) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsProductGroupFilterKeys) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsProductGroupFilterKeys) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsProductGroupFilterKeys(val *CatalogsProductGroupFilterKeys) *NullableCatalogsProductGroupFilterKeys {
	return &NullableCatalogsProductGroupFilterKeys{value: val, isSet: true}
}

func (v NullableCatalogsProductGroupFilterKeys) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsProductGroupFilterKeys) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


