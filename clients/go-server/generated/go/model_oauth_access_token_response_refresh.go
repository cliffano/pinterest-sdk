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

// OauthAccessTokenResponseRefresh - A successful OAuth access token response for the refresh token flow.
type OauthAccessTokenResponseRefresh struct {
	OauthAccessTokenResponse
}

// AssertOauthAccessTokenResponseRefreshRequired checks if the required fields are not zero-ed
func AssertOauthAccessTokenResponseRefreshRequired(obj OauthAccessTokenResponseRefresh) error {
	elements := map[string]interface{}{
		"access_token": obj.AccessToken,
		"token_type": obj.TokenType,
		"expires_in": obj.ExpiresIn,
		"scope": obj.Scope,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	if err := AssertOauthAccessTokenResponseRequired(obj.OauthAccessTokenResponse); err != nil {
		return err
	}

	return nil
}

// AssertRecurseOauthAccessTokenResponseRefreshRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of OauthAccessTokenResponseRefresh (e.g. [][]OauthAccessTokenResponseRefresh), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseOauthAccessTokenResponseRefreshRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aOauthAccessTokenResponseRefresh, ok := obj.(OauthAccessTokenResponseRefresh)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertOauthAccessTokenResponseRefreshRequired(aOauthAccessTokenResponseRefresh)
	})
}
