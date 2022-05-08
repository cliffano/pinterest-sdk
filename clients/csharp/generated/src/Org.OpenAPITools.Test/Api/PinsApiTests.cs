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
using NUnit.Framework;

using Org.OpenAPITools.Client;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Model;

namespace Org.OpenAPITools.Test
{
    /// <summary>
    ///  Class for testing PinsApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class PinsApiTests
    {
        private PinsApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new PinsApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of PinsApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOf' PinsApi
            //Assert.IsInstanceOf(typeof(PinsApi), instance);
        }

        
        /// <summary>
        /// Test PinsAnalytics
        /// </summary>
        [Test]
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
            //Assert.IsInstanceOf(typeof(Dictionary<string, AnalyticsMetricsResponse>), response, "response is Dictionary<string, AnalyticsMetricsResponse>");
        }
        
        /// <summary>
        /// Test PinsCreate
        /// </summary>
        [Test]
        public void PinsCreateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //Pin pin = null;
            //var response = instance.PinsCreate(pin);
            //Assert.IsInstanceOf(typeof(Pin), response, "response is Pin");
        }
        
        /// <summary>
        /// Test PinsDelete
        /// </summary>
        [Test]
        public void PinsDeleteTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string pinId = null;
            //instance.PinsDelete(pinId);
            
        }
        
        /// <summary>
        /// Test PinsGet
        /// </summary>
        [Test]
        public void PinsGetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string pinId = null;
            //string adAccountId = null;
            //var response = instance.PinsGet(pinId, adAccountId);
            //Assert.IsInstanceOf(typeof(Pin), response, "response is Pin");
        }
        
    }

}