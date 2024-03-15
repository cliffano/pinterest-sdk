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


import (
	"fmt"
)


// LeadFormQuestionType : Lead form question type
type LeadFormQuestionType string

// List of LeadFormQuestionType
const (
	CUSTOM LeadFormQuestionType = "CUSTOM"
	FULL_NAME LeadFormQuestionType = "FULL_NAME"
	FIRST_NAME LeadFormQuestionType = "FIRST_NAME"
	LAST_NAME LeadFormQuestionType = "LAST_NAME"
	EMAIL LeadFormQuestionType = "EMAIL"
	PHONE_NUMBER LeadFormQuestionType = "PHONE_NUMBER"
	ZIP_CODE LeadFormQuestionType = "ZIP_CODE"
	AGE LeadFormQuestionType = "AGE"
	GENDER LeadFormQuestionType = "GENDER"
	CITY LeadFormQuestionType = "CITY"
	COUNTRY LeadFormQuestionType = "COUNTRY"
	PREFERRED_CONTACT_METHOD LeadFormQuestionType = "PREFERRED_CONTACT_METHOD"
	STATE_PROVINCE LeadFormQuestionType = "STATE_PROVINCE"
	ADDRESS LeadFormQuestionType = "ADDRESS"
	DATE_OF_BIRTH LeadFormQuestionType = "DATE_OF_BIRTH"
)

// AllowedLeadFormQuestionTypeEnumValues is all the allowed values of LeadFormQuestionType enum
var AllowedLeadFormQuestionTypeEnumValues = []LeadFormQuestionType{
	"CUSTOM",
	"FULL_NAME",
	"FIRST_NAME",
	"LAST_NAME",
	"EMAIL",
	"PHONE_NUMBER",
	"ZIP_CODE",
	"AGE",
	"GENDER",
	"CITY",
	"COUNTRY",
	"PREFERRED_CONTACT_METHOD",
	"STATE_PROVINCE",
	"ADDRESS",
	"DATE_OF_BIRTH",
}

// validLeadFormQuestionTypeEnumValue provides a map of LeadFormQuestionTypes for fast verification of use input
var validLeadFormQuestionTypeEnumValues = map[LeadFormQuestionType]struct{}{
	"CUSTOM": {},
	"FULL_NAME": {},
	"FIRST_NAME": {},
	"LAST_NAME": {},
	"EMAIL": {},
	"PHONE_NUMBER": {},
	"ZIP_CODE": {},
	"AGE": {},
	"GENDER": {},
	"CITY": {},
	"COUNTRY": {},
	"PREFERRED_CONTACT_METHOD": {},
	"STATE_PROVINCE": {},
	"ADDRESS": {},
	"DATE_OF_BIRTH": {},
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v LeadFormQuestionType) IsValid() bool {
	_, ok := validLeadFormQuestionTypeEnumValues[v]
	return ok
}

// NewLeadFormQuestionTypeFromValue returns a pointer to a valid LeadFormQuestionType
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewLeadFormQuestionTypeFromValue(v string) (LeadFormQuestionType, error) {
	ev := LeadFormQuestionType(v)
	if ev.IsValid() {
		return ev, nil
	} else {
		return "", fmt.Errorf("invalid value '%v' for LeadFormQuestionType: valid values are %v", v, AllowedLeadFormQuestionTypeEnumValues)
	}
}



// AssertLeadFormQuestionTypeRequired checks if the required fields are not zero-ed
func AssertLeadFormQuestionTypeRequired(obj LeadFormQuestionType) error {
	return nil
}

// AssertLeadFormQuestionTypeConstraints checks if the values respects the defined constraints
func AssertLeadFormQuestionTypeConstraints(obj LeadFormQuestionType) error {
	return nil
}