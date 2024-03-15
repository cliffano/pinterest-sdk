/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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
using Org.OpenAPITools.Api;
// uncomment below to import models
//using Org.OpenAPITools.Model;

namespace Org.OpenAPITools.Test.Api
{
    /// <summary>
    ///  Class for testing BulkApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class BulkApiTests : IDisposable
    {
        private BulkApi instance;

        public BulkApiTests()
        {
            instance = new BulkApi();
        }

        public void Dispose()
        {
            // Cleanup when everything is done.
        }

        /// <summary>
        /// Test an instance of BulkApi
        /// </summary>
        [Fact]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsType' BulkApi
            //Assert.IsType<BulkApi>(instance);
        }

        /// <summary>
        /// Test BulkDownloadCreate
        /// </summary>
        [Fact]
        public void BulkDownloadCreateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string adAccountId = null;
            //BulkDownloadRequest bulkDownloadRequest = null;
            //var response = instance.BulkDownloadCreate(adAccountId, bulkDownloadRequest);
            //Assert.IsType<BulkDownloadResponse>(response);
        }

        /// <summary>
        /// Test BulkRequestGet
        /// </summary>
        [Fact]
        public void BulkRequestGetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string adAccountId = null;
            //string bulkRequestId = null;
            //bool? includeDetails = null;
            //var response = instance.BulkRequestGet(adAccountId, bulkRequestId, includeDetails);
            //Assert.IsType<BulkUpsertStatusResponse>(response);
        }

        /// <summary>
        /// Test BulkUpsertCreate
        /// </summary>
        [Fact]
        public void BulkUpsertCreateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string adAccountId = null;
            //BulkUpsertRequest bulkUpsertRequest = null;
            //var response = instance.BulkUpsertCreate(adAccountId, bulkUpsertRequest);
            //Assert.IsType<BulkUpsertResponse>(response);
        }
    }
}
