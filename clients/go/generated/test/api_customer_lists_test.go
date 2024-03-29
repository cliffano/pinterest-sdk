/*
Pinterest REST API

Testing CustomerListsAPIService

*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech);

package openapi

import (
	"context"
	"github.com/stretchr/testify/assert"
	"github.com/stretchr/testify/require"
	"testing"
	openapiclient "github.com/oapicf/pinterest-sdk"
)

func Test_openapi_CustomerListsAPIService(t *testing.T) {

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)

	t.Run("Test CustomerListsAPIService CustomerListsCreate", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var adAccountId string

		resp, httpRes, err := apiClient.CustomerListsAPI.CustomerListsCreate(context.Background(), adAccountId).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test CustomerListsAPIService CustomerListsGet", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var adAccountId string
		var customerListId string

		resp, httpRes, err := apiClient.CustomerListsAPI.CustomerListsGet(context.Background(), adAccountId, customerListId).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test CustomerListsAPIService CustomerListsList", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var adAccountId string

		resp, httpRes, err := apiClient.CustomerListsAPI.CustomerListsList(context.Background(), adAccountId).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test CustomerListsAPIService CustomerListsUpdate", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var adAccountId string
		var customerListId string

		resp, httpRes, err := apiClient.CustomerListsAPI.CustomerListsUpdate(context.Background(), adAccountId, customerListId).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

}
