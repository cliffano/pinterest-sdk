/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
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
    ///  Class for testing MediaApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class MediaApiTests : IDisposable
    {
        private MediaApi instance;

        public MediaApiTests()
        {
            instance = new MediaApi();
        }

        public void Dispose()
        {
            // Cleanup when everything is done.
        }

        /// <summary>
        /// Test an instance of MediaApi
        /// </summary>
        [Fact]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsType' MediaApi
            //Assert.IsType<MediaApi>(instance);
        }

        /// <summary>
        /// Test MediaCreate
        /// </summary>
        [Fact]
        public void MediaCreateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //MediaUploadRequest mediaUploadRequest = null;
            //var response = instance.MediaCreate(mediaUploadRequest);
            //Assert.IsType<MediaUpload>(response);
        }

        /// <summary>
        /// Test MediaGet
        /// </summary>
        [Fact]
        public void MediaGetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string mediaId = null;
            //var response = instance.MediaGet(mediaId);
            //Assert.IsType<MediaUploadDetails>(response);
        }

        /// <summary>
        /// Test MediaList
        /// </summary>
        [Fact]
        public void MediaListTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string bookmark = null;
            //int? pageSize = null;
            //var response = instance.MediaList(bookmark, pageSize);
            //Assert.IsType<Paginated>(response);
        }
    }
}
