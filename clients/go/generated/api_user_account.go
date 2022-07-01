/*
Pinterest REST API

Pinterest's REST API

API version: 5.3.0
Contact: blah@cliffano.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"bytes"
	"context"
	"io/ioutil"
	"net/http"
	"net/url"
)

// Linger please
var (
	_ context.Context
)

// UserAccountApiService UserAccountApi service
type UserAccountApiService service

type ApiUserAccountAnalyticsRequest struct {
	ctx context.Context
	ApiService *UserAccountApiService
	startDate *string
	endDate *string
	fromClaimedContent *string
	pinFormat *string
	appTypes *string
	metricTypes *[]string
	splitField *string
	adAccountId *string
}

// Metric report start date (UTC). Format: YYYY-MM-DD
func (r ApiUserAccountAnalyticsRequest) StartDate(startDate string) ApiUserAccountAnalyticsRequest {
	r.startDate = &startDate
	return r
}
// Metric report end date (UTC). Format: YYYY-MM-DD
func (r ApiUserAccountAnalyticsRequest) EndDate(endDate string) ApiUserAccountAnalyticsRequest {
	r.endDate = &endDate
	return r
}
// Filter on Pins that match your claimed domain.
func (r ApiUserAccountAnalyticsRequest) FromClaimedContent(fromClaimedContent string) ApiUserAccountAnalyticsRequest {
	r.fromClaimedContent = &fromClaimedContent
	return r
}
// Pin formats to get data for, default is all.
func (r ApiUserAccountAnalyticsRequest) PinFormat(pinFormat string) ApiUserAccountAnalyticsRequest {
	r.pinFormat = &pinFormat
	return r
}
// Apps or devices to get data for, default is all.
func (r ApiUserAccountAnalyticsRequest) AppTypes(appTypes string) ApiUserAccountAnalyticsRequest {
	r.appTypes = &appTypes
	return r
}
// Metric types to get data for, default is all. 
func (r ApiUserAccountAnalyticsRequest) MetricTypes(metricTypes []string) ApiUserAccountAnalyticsRequest {
	r.metricTypes = &metricTypes
	return r
}
// How to split the data into groups. Not including this param means data won&#39;t be split.
func (r ApiUserAccountAnalyticsRequest) SplitField(splitField string) ApiUserAccountAnalyticsRequest {
	r.splitField = &splitField
	return r
}
// Unique identifier of an ad account.
func (r ApiUserAccountAnalyticsRequest) AdAccountId(adAccountId string) ApiUserAccountAnalyticsRequest {
	r.adAccountId = &adAccountId
	return r
}

func (r ApiUserAccountAnalyticsRequest) Execute() (*map[string]AnalyticsMetricsResponse, *http.Response, error) {
	return r.ApiService.UserAccountAnalyticsExecute(r)
}

/*
UserAccountAnalytics Get user account analytics

Get analytics for the "operation user_account"
- By default, the "operation user_account" is the token user_account.

Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".

 @param ctx context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @return ApiUserAccountAnalyticsRequest
*/
func (a *UserAccountApiService) UserAccountAnalytics(ctx context.Context) ApiUserAccountAnalyticsRequest {
	return ApiUserAccountAnalyticsRequest{
		ApiService: a,
		ctx: ctx,
	}
}

// Execute executes the request
//  @return map[string]AnalyticsMetricsResponse
func (a *UserAccountApiService) UserAccountAnalyticsExecute(r ApiUserAccountAnalyticsRequest) (*map[string]AnalyticsMetricsResponse, *http.Response, error) {
	var (
		localVarHTTPMethod   = http.MethodGet
		localVarPostBody     interface{}
		formFiles            []formFile
		localVarReturnValue  *map[string]AnalyticsMetricsResponse
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "UserAccountApiService.UserAccountAnalytics")
	if err != nil {
		return localVarReturnValue, nil, &GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/user_account/analytics"

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := url.Values{}
	localVarFormParams := url.Values{}
	if r.startDate == nil {
		return localVarReturnValue, nil, reportError("startDate is required and must be specified")
	}
	if r.endDate == nil {
		return localVarReturnValue, nil, reportError("endDate is required and must be specified")
	}

	localVarQueryParams.Add("start_date", parameterToString(*r.startDate, ""))
	localVarQueryParams.Add("end_date", parameterToString(*r.endDate, ""))
	if r.fromClaimedContent != nil {
		localVarQueryParams.Add("from_claimed_content", parameterToString(*r.fromClaimedContent, ""))
	}
	if r.pinFormat != nil {
		localVarQueryParams.Add("pin_format", parameterToString(*r.pinFormat, ""))
	}
	if r.appTypes != nil {
		localVarQueryParams.Add("app_types", parameterToString(*r.appTypes, ""))
	}
	if r.metricTypes != nil {
		localVarQueryParams.Add("metric_types", parameterToString(*r.metricTypes, "csv"))
	}
	if r.splitField != nil {
		localVarQueryParams.Add("split_field", parameterToString(*r.splitField, ""))
	}
	if r.adAccountId != nil {
		localVarQueryParams.Add("ad_account_id", parameterToString(*r.adAccountId, ""))
	}
	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"application/json"}

	// set Accept header
	localVarHTTPHeaderAccept := selectHeaderAccept(localVarHTTPHeaderAccepts)
	if localVarHTTPHeaderAccept != "" {
		localVarHeaderParams["Accept"] = localVarHTTPHeaderAccept
	}
	req, err := a.client.prepareRequest(r.ctx, localVarPath, localVarHTTPMethod, localVarPostBody, localVarHeaderParams, localVarQueryParams, localVarFormParams, formFiles)
	if err != nil {
		return localVarReturnValue, nil, err
	}

	localVarHTTPResponse, err := a.client.callAPI(req)
	if err != nil || localVarHTTPResponse == nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	localVarBody, err := ioutil.ReadAll(localVarHTTPResponse.Body)
	localVarHTTPResponse.Body.Close()
	localVarHTTPResponse.Body = ioutil.NopCloser(bytes.NewBuffer(localVarBody))
	if err != nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	if localVarHTTPResponse.StatusCode >= 300 {
		newErr := &GenericOpenAPIError{
			body:  localVarBody,
			error: localVarHTTPResponse.Status,
		}
		if localVarHTTPResponse.StatusCode == 403 {
			var v Error
			err = a.client.decode(&v, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
			if err != nil {
				newErr.error = err.Error()
				return localVarReturnValue, localVarHTTPResponse, newErr
			}
			newErr.model = v
			return localVarReturnValue, localVarHTTPResponse, newErr
		}
			var v Error
			err = a.client.decode(&v, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
			if err != nil {
				newErr.error = err.Error()
				return localVarReturnValue, localVarHTTPResponse, newErr
			}
			newErr.model = v
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	err = a.client.decode(&localVarReturnValue, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
	if err != nil {
		newErr := &GenericOpenAPIError{
			body:  localVarBody,
			error: err.Error(),
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	return localVarReturnValue, localVarHTTPResponse, nil
}

type ApiUserAccountGetRequest struct {
	ctx context.Context
	ApiService *UserAccountApiService
	adAccountId *string
}

// Unique identifier of an ad account.
func (r ApiUserAccountGetRequest) AdAccountId(adAccountId string) ApiUserAccountGetRequest {
	r.adAccountId = &adAccountId
	return r
}

func (r ApiUserAccountGetRequest) Execute() (*Account, *http.Response, error) {
	return r.ApiService.UserAccountGetExecute(r)
}

/*
UserAccountGet Get user account

Get account information for the "operation user_account"
- By default, the "operation user_account" is the token user_account.

If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account". See <a href='/docs/api/v5/#tag/Understanding-business-access'>Understanding Business Access</a> for more information.

 @param ctx context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @return ApiUserAccountGetRequest
*/
func (a *UserAccountApiService) UserAccountGet(ctx context.Context) ApiUserAccountGetRequest {
	return ApiUserAccountGetRequest{
		ApiService: a,
		ctx: ctx,
	}
}

// Execute executes the request
//  @return Account
func (a *UserAccountApiService) UserAccountGetExecute(r ApiUserAccountGetRequest) (*Account, *http.Response, error) {
	var (
		localVarHTTPMethod   = http.MethodGet
		localVarPostBody     interface{}
		formFiles            []formFile
		localVarReturnValue  *Account
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "UserAccountApiService.UserAccountGet")
	if err != nil {
		return localVarReturnValue, nil, &GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/user_account"

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := url.Values{}
	localVarFormParams := url.Values{}

	if r.adAccountId != nil {
		localVarQueryParams.Add("ad_account_id", parameterToString(*r.adAccountId, ""))
	}
	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"application/json"}

	// set Accept header
	localVarHTTPHeaderAccept := selectHeaderAccept(localVarHTTPHeaderAccepts)
	if localVarHTTPHeaderAccept != "" {
		localVarHeaderParams["Accept"] = localVarHTTPHeaderAccept
	}
	req, err := a.client.prepareRequest(r.ctx, localVarPath, localVarHTTPMethod, localVarPostBody, localVarHeaderParams, localVarQueryParams, localVarFormParams, formFiles)
	if err != nil {
		return localVarReturnValue, nil, err
	}

	localVarHTTPResponse, err := a.client.callAPI(req)
	if err != nil || localVarHTTPResponse == nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	localVarBody, err := ioutil.ReadAll(localVarHTTPResponse.Body)
	localVarHTTPResponse.Body.Close()
	localVarHTTPResponse.Body = ioutil.NopCloser(bytes.NewBuffer(localVarBody))
	if err != nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	if localVarHTTPResponse.StatusCode >= 300 {
		newErr := &GenericOpenAPIError{
			body:  localVarBody,
			error: localVarHTTPResponse.Status,
		}
		if localVarHTTPResponse.StatusCode == 403 {
			var v Error
			err = a.client.decode(&v, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
			if err != nil {
				newErr.error = err.Error()
				return localVarReturnValue, localVarHTTPResponse, newErr
			}
			newErr.model = v
			return localVarReturnValue, localVarHTTPResponse, newErr
		}
			var v Error
			err = a.client.decode(&v, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
			if err != nil {
				newErr.error = err.Error()
				return localVarReturnValue, localVarHTTPResponse, newErr
			}
			newErr.model = v
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	err = a.client.decode(&localVarReturnValue, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
	if err != nil {
		newErr := &GenericOpenAPIError{
			body:  localVarBody,
			error: err.Error(),
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	return localVarReturnValue, localVarHTTPResponse, nil
}
