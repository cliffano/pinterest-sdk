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
using System.Net;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Azure.WebJobs;
using Microsoft.Azure.WebJobs.Extensions.Http;

namespace Org.OpenAPITools.Apis
{ 
    public partial class MediaApi
    { 
        [FunctionName("MediaApi_MediaCreate")]
        public async Task<IActionResult> _MediaCreate([HttpTrigger(AuthorizationLevel.Anonymous, "POST", Route = "/media")]HttpRequest req, ExecutionContext context)
        {
            var method = this.GetType().GetMethod("MediaCreate");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("MediaApi_MediaGet")]
        public async Task<IActionResult> _MediaGet([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/media/{media_id}")]HttpRequest req, ExecutionContext context, [RegularExpression("/^\\d+$/")]string mediaId)
        {
            var method = this.GetType().GetMethod("MediaGet");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context,  })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("MediaApi_MediaList")]
        public async Task<IActionResult> _MediaList([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/media")]HttpRequest req, ExecutionContext context)
        {
            var method = this.GetType().GetMethod("MediaList");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }
    }
}

