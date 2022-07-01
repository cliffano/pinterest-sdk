/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

// OauthAccessTokenRequestRefresh - A request to exchange a refresh token for a new access token.
type OauthAccessTokenRequestRefresh struct {
	OauthAccessTokenRequest

	RefreshToken string `json:"refresh_token"`

	Scope string `json:"scope,omitempty"`
}

// AssertOauthAccessTokenRequestRefreshRequired checks if the required fields are not zero-ed
func AssertOauthAccessTokenRequestRefreshRequired(obj OauthAccessTokenRequestRefresh) error {
	elements := map[string]interface{}{
		"refresh_token": obj.RefreshToken,
		"grant_type": obj.GrantType,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	if err := AssertOauthAccessTokenRequestRequired(obj.OauthAccessTokenRequest); err != nil {
		return err
	}

	return nil
}

// AssertRecurseOauthAccessTokenRequestRefreshRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of OauthAccessTokenRequestRefresh (e.g. [][]OauthAccessTokenRequestRefresh), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseOauthAccessTokenRequestRefreshRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aOauthAccessTokenRequestRefresh, ok := obj.(OauthAccessTokenRequestRefresh)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertOauthAccessTokenRequestRefreshRequired(aOauthAccessTokenRequestRefresh)
	})
}
