/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using Xunit;

using System;
using System.Linq;
using System.IO;
using System.Collections.Generic;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Model;
using Org.OpenAPITools.Client;
using System.Reflection;
using Newtonsoft.Json;

namespace Org.OpenAPITools.Test.Model
{
    /// <summary>
    ///  Class for testing OauthAccessTokenResponse
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the model.
    /// </remarks>
    public class OauthAccessTokenResponseTests : IDisposable
    {
        // TODO uncomment below to declare an instance variable for OauthAccessTokenResponse
        //private OauthAccessTokenResponse instance;

        public OauthAccessTokenResponseTests()
        {
            // TODO uncomment below to create an instance of OauthAccessTokenResponse
            //instance = new OauthAccessTokenResponse();
        }

        public void Dispose()
        {
            // Cleanup when everything is done.
        }

        /// <summary>
        /// Test an instance of OauthAccessTokenResponse
        /// </summary>
        [Fact]
        public void OauthAccessTokenResponseInstanceTest()
        {
            // TODO uncomment below to test "IsType" OauthAccessTokenResponse
            //Assert.IsType<OauthAccessTokenResponse>(instance);
        }

        /// <summary>
        /// Test deserialize a OauthAccessTokenResponseRefresh from type OauthAccessTokenResponse
        /// </summary>
        [Fact]
        public void OauthAccessTokenResponseRefreshDeserializeFromOauthAccessTokenResponseTest()
        {
            // TODO uncomment below to test deserialize a OauthAccessTokenResponseRefresh from type OauthAccessTokenResponse
            //Assert.IsType<OauthAccessTokenResponse>(JsonConvert.DeserializeObject<OauthAccessTokenResponse>(new OauthAccessTokenResponseRefresh().ToJson()));
        }
        /// <summary>
        /// Test deserialize a OauthAccessTokenResponseCode from type OauthAccessTokenResponse
        /// </summary>
        [Fact]
        public void OauthAccessTokenResponseCodeDeserializeFromOauthAccessTokenResponseTest()
        {
            // TODO uncomment below to test deserialize a OauthAccessTokenResponseCode from type OauthAccessTokenResponse
            //Assert.IsType<OauthAccessTokenResponse>(JsonConvert.DeserializeObject<OauthAccessTokenResponse>(new OauthAccessTokenResponseCode().ToJson()));
        }

        /// <summary>
        /// Test the property 'ResponseType'
        /// </summary>
        [Fact]
        public void ResponseTypeTest()
        {
            // TODO unit test for the property 'ResponseType'
        }
        /// <summary>
        /// Test the property 'AccessToken'
        /// </summary>
        [Fact]
        public void AccessTokenTest()
        {
            // TODO unit test for the property 'AccessToken'
        }
        /// <summary>
        /// Test the property 'TokenType'
        /// </summary>
        [Fact]
        public void TokenTypeTest()
        {
            // TODO unit test for the property 'TokenType'
        }
        /// <summary>
        /// Test the property 'ExpiresIn'
        /// </summary>
        [Fact]
        public void ExpiresInTest()
        {
            // TODO unit test for the property 'ExpiresIn'
        }
        /// <summary>
        /// Test the property 'Scope'
        /// </summary>
        [Fact]
        public void ScopeTest()
        {
            // TODO unit test for the property 'Scope'
        }

    }

}
