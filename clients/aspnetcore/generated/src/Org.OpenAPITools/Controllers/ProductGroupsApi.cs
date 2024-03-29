/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Http;
using Swashbuckle.AspNetCore.Annotations;
using Swashbuckle.AspNetCore.SwaggerGen;
using Newtonsoft.Json;
using Org.OpenAPITools.Attributes;
using Org.OpenAPITools.Models;

namespace Org.OpenAPITools.Controllers
{ 
    /// <summary>
    /// 
    /// </summary>
    [ApiController]
    public class ProductGroupsApiController : ControllerBase
    { 
        /// <summary>
        /// Get catalog product groups
        /// </summary>
        /// <remarks>This endpoint is completely deprecated. Please use &lt;a href&#x3D;&#39;/docs/api/v5/#operation/catalogs_product_groups/list&#39;&gt;List product groups&lt;/a&gt; from Catalogs API instead.</remarks>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="feedProfileId">The feed profile id whose catalog product groups we want to return.</param>
        /// <response code="200">Success</response>
        /// <response code="400">Invalid ad account ads parameters.</response>
        /// <response code="401">Access Denied. This can happen if account is not yet approved to operate as Merchant on Pinterest.</response>
        /// <response code="404">Merchant data not found.</response>
        /// <response code="0">Unexpected error</response>
        [HttpGet]
        [Route("/v5/ad_accounts/{ad_account_id}/product_groups/catalogs")]
        [ValidateModelState]
        [SwaggerOperation("AdAccountsCatalogsProductGroupsList")]
        [SwaggerResponse(statusCode: 200, type: typeof(AdAccountsCatalogsProductGroupsList200Response), description: "Success")]
        [SwaggerResponse(statusCode: 400, type: typeof(Error), description: "Invalid ad account ads parameters.")]
        [SwaggerResponse(statusCode: 401, type: typeof(Error), description: "Access Denied. This can happen if account is not yet approved to operate as Merchant on Pinterest.")]
        [SwaggerResponse(statusCode: 404, type: typeof(Error), description: "Merchant data not found.")]
        [SwaggerResponse(statusCode: 0, type: typeof(Error), description: "Unexpected error")]
        [Obsolete]
        public virtual IActionResult AdAccountsCatalogsProductGroupsList([FromRoute (Name = "ad_account_id")][Required][RegularExpression("^\\d+$")] [MaxLength(18)]string adAccountId, [FromQuery (Name = "feed_profile_id")][RegularExpression("^\\d+$")] [MaxLength(18)]string feedProfileId)
        {

            //TODO: Uncomment the next line to return response 200 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(200, default(AdAccountsCatalogsProductGroupsList200Response));
            //TODO: Uncomment the next line to return response 400 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(400, default(Error));
            //TODO: Uncomment the next line to return response 401 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(401, default(Error));
            //TODO: Uncomment the next line to return response 404 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(404, default(Error));
            //TODO: Uncomment the next line to return response 0 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(0, default(Error));
            string exampleJson = null;
            exampleJson = "{\n  \"bookmark\" : \"bookmark\",\n  \"items\" : [ {\n    \"filter_v2\" : {\n      \"1\" : [ \"123chars_title\" ]\n    },\n    \"product_count\" : 6,\n    \"last_update\" : 1622742155000,\n    \"featured_position\" : 2,\n    \"name\" : \"Most Popular\",\n    \"created_at\" : 1621350033000,\n    \"feed_profile_id\" : \"feed_profile_id\",\n    \"id\" : \"2680059592705\",\n    \"merchant_id\" : \"2680059592705\",\n    \"filters\" : {\n      \"1\" : [ \"123chars_title\" ]\n    },\n    \"type\" : {\n      \"owner\" : {\n        \"username\" : \"username\"\n      },\n      \"board_pins_modified_at\" : \"2020-01-01T20:10:40Z\",\n      \"name\" : \"Summer Recipes\",\n      \"pin_count\" : 5,\n      \"created_at\" : \"2020-01-01T20:10:40Z\",\n      \"description\" : \"My favorite summer recipes\",\n      \"collaborator_count\" : 17,\n      \"privacy\" : \"PUBLIC\",\n      \"id\" : \"549755885175\",\n      \"media\" : {\n        \"pin_thumbnail_urls\" : [ \"https://i.pinimg.com/150x150/b4/57/10/b45710f1ede96af55230f4b43935c4af.jpg\", \"https://i.pinimg.com/150x150/dd/ff/46/ddff4616e39c1935cd05738794fa860e.jpg\", \"https://i.pinimg.com/150x150/84/ac/59/84ac59b670ccb5b903dace480a98930c.jpg\", \"https://i.pinimg.com/150x150/4c/54/6f/4c546f521be85e30838fb742bfff6936.jpg\" ],\n        \"image_cover_url\" : \"https://i.pinimg.com/400x300/fd/cd/d5/fdcdd5a6d8a80824add0d054125cd957.jpg\"\n      },\n      \"follower_count\" : 13\n    },\n    \"status\" : \"ACTIVE\"\n  }, {\n    \"filter_v2\" : {\n      \"1\" : [ \"123chars_title\" ]\n    },\n    \"product_count\" : 6,\n    \"last_update\" : 1622742155000,\n    \"featured_position\" : 2,\n    \"name\" : \"Most Popular\",\n    \"created_at\" : 1621350033000,\n    \"feed_profile_id\" : \"feed_profile_id\",\n    \"id\" : \"2680059592705\",\n    \"merchant_id\" : \"2680059592705\",\n    \"filters\" : {\n      \"1\" : [ \"123chars_title\" ]\n    },\n    \"type\" : {\n      \"owner\" : {\n        \"username\" : \"username\"\n      },\n      \"board_pins_modified_at\" : \"2020-01-01T20:10:40Z\",\n      \"name\" : \"Summer Recipes\",\n      \"pin_count\" : 5,\n      \"created_at\" : \"2020-01-01T20:10:40Z\",\n      \"description\" : \"My favorite summer recipes\",\n      \"collaborator_count\" : 17,\n      \"privacy\" : \"PUBLIC\",\n      \"id\" : \"549755885175\",\n      \"media\" : {\n        \"pin_thumbnail_urls\" : [ \"https://i.pinimg.com/150x150/b4/57/10/b45710f1ede96af55230f4b43935c4af.jpg\", \"https://i.pinimg.com/150x150/dd/ff/46/ddff4616e39c1935cd05738794fa860e.jpg\", \"https://i.pinimg.com/150x150/84/ac/59/84ac59b670ccb5b903dace480a98930c.jpg\", \"https://i.pinimg.com/150x150/4c/54/6f/4c546f521be85e30838fb742bfff6936.jpg\" ],\n        \"image_cover_url\" : \"https://i.pinimg.com/400x300/fd/cd/d5/fdcdd5a6d8a80824add0d054125cd957.jpg\"\n      },\n      \"follower_count\" : 13\n    },\n    \"status\" : \"ACTIVE\"\n  } ]\n}";
            exampleJson = "{\n  \"code\" : 0,\n  \"message\" : \"message\"\n}";
            exampleJson = "{\n  \"code\" : 0,\n  \"message\" : \"message\"\n}";
            exampleJson = "{\n  \"code\" : 0,\n  \"message\" : \"message\"\n}";
            exampleJson = "{\n  \"code\" : 0,\n  \"message\" : \"message\"\n}";
            
            var example = exampleJson != null
            ? JsonConvert.DeserializeObject<AdAccountsCatalogsProductGroupsList200Response>(exampleJson)
            : default(AdAccountsCatalogsProductGroupsList200Response);
            //TODO: Change the data returned
            return new ObjectResult(example);
        }
    }
}
