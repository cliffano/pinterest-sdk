/*
Pinterest REST API

Testing IntegrationsAPIService

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

func Test_openapi_IntegrationsAPIService(t *testing.T) {

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)

	t.Run("Test IntegrationsAPIService IntegrationsCommerceDel", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var externalBusinessId string

		httpRes, err := apiClient.IntegrationsAPI.IntegrationsCommerceDel(context.Background(), externalBusinessId).Execute()

		require.Nil(t, err)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test IntegrationsAPIService IntegrationsCommerceGet", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var externalBusinessId string

		resp, httpRes, err := apiClient.IntegrationsAPI.IntegrationsCommerceGet(context.Background(), externalBusinessId).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test IntegrationsAPIService IntegrationsCommercePatch", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var externalBusinessId string

		resp, httpRes, err := apiClient.IntegrationsAPI.IntegrationsCommercePatch(context.Background(), externalBusinessId).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test IntegrationsAPIService IntegrationsCommercePost", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		resp, httpRes, err := apiClient.IntegrationsAPI.IntegrationsCommercePost(context.Background()).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test IntegrationsAPIService IntegrationsGetById", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var id string

		resp, httpRes, err := apiClient.IntegrationsAPI.IntegrationsGetById(context.Background(), id).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test IntegrationsAPIService IntegrationsGetList", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		resp, httpRes, err := apiClient.IntegrationsAPI.IntegrationsGetList(context.Background()).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test IntegrationsAPIService IntegrationsLogsPost", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		resp, httpRes, err := apiClient.IntegrationsAPI.IntegrationsLogsPost(context.Background()).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

}
