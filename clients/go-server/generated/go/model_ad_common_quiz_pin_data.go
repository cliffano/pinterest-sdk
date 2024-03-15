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




// AdCommonQuizPinData - Before creating a quiz ad, you must create an organic Pin using POST/Create Pin for each result in the quiz. Quiz ads cannot be saved by a Pinner. Quiz ad results can be saved.
type AdCommonQuizPinData struct {

	Questions []QuizPinQuestion `json:"questions,omitempty"`

	Results []QuizPinResult `json:"results,omitempty"`
}

// AssertAdCommonQuizPinDataRequired checks if the required fields are not zero-ed
func AssertAdCommonQuizPinDataRequired(obj AdCommonQuizPinData) error {
	for _, el := range obj.Questions {
		if err := AssertQuizPinQuestionRequired(el); err != nil {
			return err
		}
	}
	for _, el := range obj.Results {
		if err := AssertQuizPinResultRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertAdCommonQuizPinDataConstraints checks if the values respects the defined constraints
func AssertAdCommonQuizPinDataConstraints(obj AdCommonQuizPinData) error {
	return nil
}
