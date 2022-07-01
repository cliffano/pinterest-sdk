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
using NUnit.Framework;

using Org.OpenAPITools.Client;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Model;

namespace Org.OpenAPITools.Test
{
    /// <summary>
    ///  Class for testing UserAccountApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class UserAccountApiTests
    {
        private UserAccountApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new UserAccountApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of UserAccountApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOf' UserAccountApi
            //Assert.IsInstanceOf(typeof(UserAccountApi), instance);
        }

        
        /// <summary>
        /// Test UserAccountAnalytics
        /// </summary>
        [Test]
        public void UserAccountAnalyticsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //DateTime startDate = null;
            //DateTime endDate = null;
            //string fromClaimedContent = null;
            //string pinFormat = null;
            //string appTypes = null;
            //List<string> metricTypes = null;
            //string splitField = null;
            //string adAccountId = null;
            //var response = instance.UserAccountAnalytics(startDate, endDate, fromClaimedContent, pinFormat, appTypes, metricTypes, splitField, adAccountId);
            //Assert.IsInstanceOf(typeof(Dictionary<string, AnalyticsMetricsResponse>), response, "response is Dictionary<string, AnalyticsMetricsResponse>");
        }
        
        /// <summary>
        /// Test UserAccountGet
        /// </summary>
        [Test]
        public void UserAccountGetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string adAccountId = null;
            //var response = instance.UserAccountGet(adAccountId);
            //Assert.IsInstanceOf(typeof(Account), response, "response is Account");
        }
        
    }

}
