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
    public class TermsOfServiceApiController : ControllerBase
    { 
        /// <summary>
        /// Get terms of service
        /// </summary>
        /// <remarks>Get the text of the terms of service and see whether the advertiser has accepted the terms of service.</remarks>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="includeHtml">Return HTML in TOS text.</param>
        /// <param name="tosType">Request type.</param>
        /// <response code="200">Success</response>
        /// <response code="0">Unexpected error</response>
        [HttpGet]
        [Route("/v5/ad_accounts/{ad_account_id}/terms_of_service")]
        [ValidateModelState]
        [SwaggerOperation("TermsOfServiceGet")]
        [SwaggerResponse(statusCode: 200, type: typeof(TermsOfService), description: "Success")]
        [SwaggerResponse(statusCode: 0, type: typeof(Error), description: "Unexpected error")]
        public virtual IActionResult TermsOfServiceGet([FromRoute (Name = "ad_account_id")][Required][RegularExpression("^\\d+$")] [MaxLength(18)]string adAccountId, [FromQuery (Name = "include_html")]bool? includeHtml, [FromQuery (Name = "tos_type")]string tosType)
        {

            //TODO: Uncomment the next line to return response 200 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(200, default(TermsOfService));
            //TODO: Uncomment the next line to return response 0 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(0, default(Error));
            string exampleJson = null;
            exampleJson = "{\n  \"has_accepted\" : true,\n  \"html\" : \"example test\",\n  \"id\" : \"2650449554526\",\n  \"ad_account_id\" : \"549755885175\"\n}";
            exampleJson = "{\n  \"code\" : 0,\n  \"message\" : \"message\"\n}";
            
            var example = exampleJson != null
            ? JsonConvert.DeserializeObject<TermsOfService>(exampleJson)
            : default(TermsOfService);
            //TODO: Change the data returned
            return new ObjectResult(example);
        }
    }
}