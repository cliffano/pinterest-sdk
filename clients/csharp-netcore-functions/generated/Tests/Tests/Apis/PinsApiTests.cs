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
    ///  Class for testing PinsApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class PinsApiTests : IDisposable
    {
        private PinsApi instance;

        public PinsApiTests()
        {
            instance = new PinsApi();
        }

        public void Dispose()
        {
            // Cleanup when everything is done.
        }

        /// <summary>
        /// Test an instance of PinsApi
        /// </summary>
        [Fact]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsType' PinsApi
            //Assert.IsType<PinsApi>(instance);
        }

        /// <summary>
        /// Test PinsAnalytics
        /// </summary>
        [Fact]
        public void PinsAnalyticsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string pinId = null;
            //DateTime startDate = null;
            //DateTime endDate = null;
            //List<string> metricTypes = null;
            //string appTypes = null;
            //string splitField = null;
            //string adAccountId = null;
            //var response = instance.PinsAnalytics(pinId, startDate, endDate, metricTypes, appTypes, splitField, adAccountId);
            //Assert.IsType<Dictionary<string, AnalyticsMetricsResponse>>(response);
        }

        /// <summary>
        /// Test PinsCreate
        /// </summary>
        [Fact]
        public void PinsCreateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //Pin pin = null;
            //var response = instance.PinsCreate(pin);
            //Assert.IsType<Pin>(response);
        }

        /// <summary>
        /// Test PinsDelete
        /// </summary>
        [Fact]
        public void PinsDeleteTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string pinId = null;
            //instance.PinsDelete(pinId);
        }

        /// <summary>
        /// Test PinsGet
        /// </summary>
        [Fact]
        public void PinsGetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string pinId = null;
            //string adAccountId = null;
            //var response = instance.PinsGet(pinId, adAccountId);
            //Assert.IsType<Pin>(response);
        }
    }
}
