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




// QuizPinOption -  This field contains multiple options to a quiz question.
type QuizPinOption struct {

	Id float32 `json:"id,omitempty"`

	Text string `json:"text,omitempty"`
}

// AssertQuizPinOptionRequired checks if the required fields are not zero-ed
func AssertQuizPinOptionRequired(obj QuizPinOption) error {
	return nil
}

// AssertQuizPinOptionConstraints checks if the values respects the defined constraints
func AssertQuizPinOptionConstraints(obj QuizPinOption) error {
	return nil
}