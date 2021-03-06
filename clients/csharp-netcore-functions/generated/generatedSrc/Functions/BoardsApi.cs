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
    public partial class BoardsApi
    { 
        [FunctionName("BoardsApi_BoardSectionsCreate")]
        public async Task<IActionResult> _BoardSectionsCreate([HttpTrigger(AuthorizationLevel.Anonymous, "POST", Route = "/boards/{board_id}/sections")]HttpRequest req, ExecutionContext context, [RegularExpression("/^\\d+$/")]string boardId)
        {
            var method = this.GetType().GetMethod("BoardSectionsCreate");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context,  })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("BoardsApi_BoardSectionsDelete")]
        public async Task<IActionResult> _BoardSectionsDelete([HttpTrigger(AuthorizationLevel.Anonymous, "DELETE", Route = "/boards/{board_id}/sections/{section_id}")]HttpRequest req, ExecutionContext context, [RegularExpression("/^\\d+$/")]string boardId, [RegularExpression("/^\\d+$/")]string sectionId)
        {
            var method = this.GetType().GetMethod("BoardSectionsDelete");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context, ,  })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("BoardsApi_BoardSectionsList")]
        public async Task<IActionResult> _BoardSectionsList([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/boards/{board_id}/sections")]HttpRequest req, ExecutionContext context, [RegularExpression("/^\\d+$/")]string boardId)
        {
            var method = this.GetType().GetMethod("BoardSectionsList");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context,  })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("BoardsApi_BoardSectionsListPins")]
        public async Task<IActionResult> _BoardSectionsListPins([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/boards/{board_id}/sections/{section_id}/pins")]HttpRequest req, ExecutionContext context, [RegularExpression("/^\\d+$/")]string boardId, [RegularExpression("/^\\d+$/")]string sectionId)
        {
            var method = this.GetType().GetMethod("BoardSectionsListPins");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context, ,  })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("BoardsApi_BoardSectionsUpdate")]
        public async Task<IActionResult> _BoardSectionsUpdate([HttpTrigger(AuthorizationLevel.Anonymous, "PATCH", Route = "/boards/{board_id}/sections/{section_id}")]HttpRequest req, ExecutionContext context, [RegularExpression("/^\\d+$/")]string boardId, [RegularExpression("/^\\d+$/")]string sectionId)
        {
            var method = this.GetType().GetMethod("BoardSectionsUpdate");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context, ,  })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("BoardsApi_BoardsCreate")]
        public async Task<IActionResult> _BoardsCreate([HttpTrigger(AuthorizationLevel.Anonymous, "POST", Route = "/boards")]HttpRequest req, ExecutionContext context)
        {
            var method = this.GetType().GetMethod("BoardsCreate");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("BoardsApi_BoardsDelete")]
        public async Task<IActionResult> _BoardsDelete([HttpTrigger(AuthorizationLevel.Anonymous, "DELETE", Route = "/boards/{board_id}")]HttpRequest req, ExecutionContext context, [RegularExpression("/^\\d+$/")]string boardId)
        {
            var method = this.GetType().GetMethod("BoardsDelete");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context,  })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("BoardsApi_BoardsGet")]
        public async Task<IActionResult> _BoardsGet([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/boards/{board_id}")]HttpRequest req, ExecutionContext context, [RegularExpression("/^\\d+$/")]string boardId)
        {
            var method = this.GetType().GetMethod("BoardsGet");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context,  })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("BoardsApi_BoardsList")]
        public async Task<IActionResult> _BoardsList([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/boards")]HttpRequest req, ExecutionContext context)
        {
            var method = this.GetType().GetMethod("BoardsList");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("BoardsApi_BoardsListPins")]
        public async Task<IActionResult> _BoardsListPins([HttpTrigger(AuthorizationLevel.Anonymous, "GET", Route = "/boards/{board_id}/pins")]HttpRequest req, ExecutionContext context, [RegularExpression("/^\\d+$/")]string boardId)
        {
            var method = this.GetType().GetMethod("BoardsListPins");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context,  })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }

        [FunctionName("BoardsApi_BoardsUpdate")]
        public async Task<IActionResult> _BoardsUpdate([HttpTrigger(AuthorizationLevel.Anonymous, "PATCH", Route = "/boards/{board_id}")]HttpRequest req, ExecutionContext context, [RegularExpression("/^\\d+$/")]string boardId)
        {
            var method = this.GetType().GetMethod("BoardsUpdate");

            return method != null 
                ? (await ((Task<IActionResult>)method.Invoke(this, new object[] { req, context,  })).ConfigureAwait(false))
                : new StatusCodeResult((int)HttpStatusCode.NotImplemented);
        }
    }
}

