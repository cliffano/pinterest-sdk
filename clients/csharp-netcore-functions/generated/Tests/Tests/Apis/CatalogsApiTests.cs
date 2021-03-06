/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using Xunit;

using Org.OpenAPITools.Client;
using Org.OpenAPITools.Apis;
// uncomment below to import models
//using Org.OpenAPITools.Models;

namespace Org.OpenAPITools.Test.Api
{
    /// <summary>
    ///  Class for testing CatalogsApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class CatalogsApiTests : IDisposable
    {
        private CatalogsApi instance;

        public CatalogsApiTests()
        {
            instance = new CatalogsApi();
        }

        public void Dispose()
        {
            // Cleanup when everything is done.
        }

        /// <summary>
        /// Test an instance of CatalogsApi
        /// </summary>
        [Fact]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsType' CatalogsApi
            //Assert.IsType<CatalogsApi>(instance);
        }

        /// <summary>
        /// Test CatalogsProductGroupsCreate
        /// </summary>
        [Fact]
        public void CatalogsProductGroupsCreateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //CatalogsProductGroupCreateRequest catalogsProductGroupCreateRequest = null;
            //var response = instance.CatalogsProductGroupsCreate(catalogsProductGroupCreateRequest);
            //Assert.IsType<Object>(response);
        }

        /// <summary>
        /// Test CatalogsProductGroupsDelete
        /// </summary>
        [Fact]
        public void CatalogsProductGroupsDeleteTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productGroupId = null;
            //instance.CatalogsProductGroupsDelete(productGroupId);
        }

        /// <summary>
        /// Test CatalogsProductGroupsList
        /// </summary>
        [Fact]
        public void CatalogsProductGroupsListTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string feedId = null;
            //string bookmark = null;
            //int? pageSize = null;
            //var response = instance.CatalogsProductGroupsList(feedId, bookmark, pageSize);
            //Assert.IsType<Paginated>(response);
        }

        /// <summary>
        /// Test CatalogsProductGroupsUpdate
        /// </summary>
        [Fact]
        public void CatalogsProductGroupsUpdateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productGroupId = null;
            //CatalogsProductGroupUpdateRequest catalogsProductGroupUpdateRequest = null;
            //var response = instance.CatalogsProductGroupsUpdate(productGroupId, catalogsProductGroupUpdateRequest);
            //Assert.IsType<CatalogsProductGroup>(response);
        }

        /// <summary>
        /// Test FeedProcessingResultsList
        /// </summary>
        [Fact]
        public void FeedProcessingResultsListTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string feedId = null;
            //string bookmark = null;
            //int? pageSize = null;
            //var response = instance.FeedProcessingResultsList(feedId, bookmark, pageSize);
            //Assert.IsType<Paginated>(response);
        }

        /// <summary>
        /// Test FeedsCreate
        /// </summary>
        [Fact]
        public void FeedsCreateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //CatalogsFeedsCreateRequest catalogsFeedsCreateRequest = null;
            //var response = instance.FeedsCreate(catalogsFeedsCreateRequest);
            //Assert.IsType<CatalogsFeed>(response);
        }

        /// <summary>
        /// Test FeedsDelete
        /// </summary>
        [Fact]
        public void FeedsDeleteTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string feedId = null;
            //instance.FeedsDelete(feedId);
        }

        /// <summary>
        /// Test FeedsGet
        /// </summary>
        [Fact]
        public void FeedsGetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string feedId = null;
            //var response = instance.FeedsGet(feedId);
            //Assert.IsType<CatalogsFeed>(response);
        }

        /// <summary>
        /// Test FeedsList
        /// </summary>
        [Fact]
        public void FeedsListTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string bookmark = null;
            //int? pageSize = null;
            //var response = instance.FeedsList(bookmark, pageSize);
            //Assert.IsType<Paginated>(response);
        }

        /// <summary>
        /// Test FeedsUpdate
        /// </summary>
        [Fact]
        public void FeedsUpdateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string feedId = null;
            //CatalogsFeedsUpdateRequest catalogsFeedsUpdateRequest = null;
            //var response = instance.FeedsUpdate(feedId, catalogsFeedsUpdateRequest);
            //Assert.IsType<CatalogsFeed>(response);
        }

        /// <summary>
        /// Test ItemsBatchGet
        /// </summary>
        [Fact]
        public void ItemsBatchGetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string batchId = null;
            //var response = instance.ItemsBatchGet(batchId);
            //Assert.IsType<CatalogsItemsBatch>(response);
        }

        /// <summary>
        /// Test ItemsBatchPost
        /// </summary>
        [Fact]
        public void ItemsBatchPostTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //CatalogsItemsBatchRequest catalogsItemsBatchRequest = null;
            //var response = instance.ItemsBatchPost(catalogsItemsBatchRequest);
            //Assert.IsType<CatalogsItemsBatch>(response);
        }

        /// <summary>
        /// Test ItemsGet
        /// </summary>
        [Fact]
        public void ItemsGetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string country = null;
            //List<string> itemIds = null;
            //string language = null;
            //var response = instance.ItemsGet(country, itemIds, language);
            //Assert.IsType<CatalogsItems>(response);
        }
    }
}
