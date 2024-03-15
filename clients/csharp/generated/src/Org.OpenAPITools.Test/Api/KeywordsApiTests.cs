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
    ///  Class for testing KeywordsApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class KeywordsApiTests : IDisposable
    {
        private KeywordsApi instance;

        public KeywordsApiTests()
        {
            instance = new KeywordsApi();
        }

        public void Dispose()
        {
            // Cleanup when everything is done.
        }

        /// <summary>
        /// Test an instance of KeywordsApi
        /// </summary>
        [Fact]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsType' KeywordsApi
            //Assert.IsType<KeywordsApi>(instance);
        }

        /// <summary>
        /// Test CountryKeywordsMetricsGet
        /// </summary>
        [Fact]
        public void CountryKeywordsMetricsGetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string adAccountId = null;
            //string countryCode = null;
            //List<string> keywords = null;
            //var response = instance.CountryKeywordsMetricsGet(adAccountId, countryCode, keywords);
            //Assert.IsType<KeywordsMetricsArrayResponse>(response);
        }

        /// <summary>
        /// Test KeywordsCreate
        /// </summary>
        [Fact]
        public void KeywordsCreateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string adAccountId = null;
            //KeywordsRequest keywordsRequest = null;
            //var response = instance.KeywordsCreate(adAccountId, keywordsRequest);
            //Assert.IsType<KeywordsResponse>(response);
        }

        /// <summary>
        /// Test KeywordsGet
        /// </summary>
        [Fact]
        public void KeywordsGetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string adAccountId = null;
            //string? campaignId = null;
            //string? adGroupId = null;
            //List<MatchType>? matchTypes = null;
            //int? pageSize = null;
            //string? bookmark = null;
            //var response = instance.KeywordsGet(adAccountId, campaignId, adGroupId, matchTypes, pageSize, bookmark);
            //Assert.IsType<KeywordsGet200Response>(response);
        }

        /// <summary>
        /// Test KeywordsUpdate
        /// </summary>
        [Fact]
        public void KeywordsUpdateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string adAccountId = null;
            //KeywordUpdateBody keywordUpdateBody = null;
            //var response = instance.KeywordsUpdate(adAccountId, keywordUpdateBody);
            //Assert.IsType<KeywordsResponse>(response);
        }

        /// <summary>
        /// Test TrendingKeywordsList
        /// </summary>
        [Fact]
        public void TrendingKeywordsListTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //TrendsSupportedRegion region = null;
            //TrendType trendType = null;
            //List<string>? interests = null;
            //List<string>? genders = null;
            //List<string>? ages = null;
            //bool? normalizeAgainstGroup = null;
            //int? limit = null;
            //var response = instance.TrendingKeywordsList(region, trendType, interests, genders, ages, normalizeAgainstGroup, limit);
            //Assert.IsType<TrendingKeywordsResponse>(response);
        }
    }
}
