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
    public class ProductGroupPromotionsApiController : ControllerBase
    { 
        /// <summary>
        /// Create product group promotions
        /// </summary>
        /// <remarks>Add one or more product groups from your catalog to an existing ad group. (Product groups added to an ad group are a &#39;product group promotion.&#39;)</remarks>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="productGroupPromotionCreateRequest">List of Product Group Promotions to create, size limit [1, 30].</param>
        /// <response code="200">Success</response>
        /// <response code="0">Unexpected error</response>
        [HttpPost]
        [Route("/v5/ad_accounts/{ad_account_id}/product_group_promotions")]
        [Consumes("application/json")]
        [ValidateModelState]
        [SwaggerOperation("ProductGroupPromotionsCreate")]
        [SwaggerResponse(statusCode: 200, type: typeof(ProductGroupPromotionResponse), description: "Success")]
        [SwaggerResponse(statusCode: 0, type: typeof(Error), description: "Unexpected error")]
        public virtual IActionResult ProductGroupPromotionsCreate([FromRoute (Name = "ad_account_id")][Required][RegularExpression("^\\d+$")] [MaxLength(18)]string adAccountId, [FromBody]ProductGroupPromotionCreateRequest productGroupPromotionCreateRequest)
        {

            //TODO: Uncomment the next line to return response 200 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(200, default(ProductGroupPromotionResponse));
            //TODO: Uncomment the next line to return response 0 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(0, default(Error));
            string exampleJson = null;
            exampleJson = "{\n  \"items\" : [ {\n    \"data\" : {\n      \"catalog_product_group_id\" : \"1231235\",\n      \"bid_in_micro_currency\" : 14000000,\n      \"relative_definition\" : \"product_type_1='beverage appliances'\",\n      \"slideshow_collections_description\" : \"slideshow description\",\n      \"collections_hero_pin_id\" : \"123123\",\n      \"catalog_product_group_name\" : \"catalogProductGroupName\",\n      \"slideshow_collections_title\" : \"slideshow title\",\n      \"is_mdl\" : true,\n      \"parent_id\" : \"1231234\",\n      \"creative_type\" : \"REGULAR\",\n      \"grid_click_type\" : \"CLOSEUP\",\n      \"definition\" : \"*/product_type_0='kitchen'/product_type_1='beverage appliances'\",\n      \"id\" : \"2680059592705\",\n      \"ad_group_id\" : \"2680059592705\",\n      \"collections_hero_destination_url\" : \"http://www.pinterest.com\",\n      \"included\" : true,\n      \"tracking_url\" : \"https://www.pinterest.com\",\n      \"status\" : \"ACTIVE\"\n    },\n    \"exceptions\" : [ {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    }, {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    } ]\n  }, {\n    \"data\" : {\n      \"catalog_product_group_id\" : \"1231235\",\n      \"bid_in_micro_currency\" : 14000000,\n      \"relative_definition\" : \"product_type_1='beverage appliances'\",\n      \"slideshow_collections_description\" : \"slideshow description\",\n      \"collections_hero_pin_id\" : \"123123\",\n      \"catalog_product_group_name\" : \"catalogProductGroupName\",\n      \"slideshow_collections_title\" : \"slideshow title\",\n      \"is_mdl\" : true,\n      \"parent_id\" : \"1231234\",\n      \"creative_type\" : \"REGULAR\",\n      \"grid_click_type\" : \"CLOSEUP\",\n      \"definition\" : \"*/product_type_0='kitchen'/product_type_1='beverage appliances'\",\n      \"id\" : \"2680059592705\",\n      \"ad_group_id\" : \"2680059592705\",\n      \"collections_hero_destination_url\" : \"http://www.pinterest.com\",\n      \"included\" : true,\n      \"tracking_url\" : \"https://www.pinterest.com\",\n      \"status\" : \"ACTIVE\"\n    },\n    \"exceptions\" : [ {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    }, {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    } ]\n  } ]\n}";
            exampleJson = "{\n  \"code\" : 0,\n  \"message\" : \"message\"\n}";
            
            var example = exampleJson != null
            ? JsonConvert.DeserializeObject<ProductGroupPromotionResponse>(exampleJson)
            : default(ProductGroupPromotionResponse);
            //TODO: Change the data returned
            return new ObjectResult(example);
        }

        /// <summary>
        /// Get a product group promotion by id
        /// </summary>
        /// <remarks>Get a product group promotion by id</remarks>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="productGroupPromotionId">Unique identifier of a product group promotion</param>
        /// <response code="200">Success</response>
        /// <response code="0">Unexpected error</response>
        [HttpGet]
        [Route("/v5/ad_accounts/{ad_account_id}/product_group_promotions/{product_group_promotion_id}")]
        [ValidateModelState]
        [SwaggerOperation("ProductGroupPromotionsGet")]
        [SwaggerResponse(statusCode: 200, type: typeof(ProductGroupPromotionResponse), description: "Success")]
        [SwaggerResponse(statusCode: 0, type: typeof(Error), description: "Unexpected error")]
        public virtual IActionResult ProductGroupPromotionsGet([FromRoute (Name = "ad_account_id")][Required][RegularExpression("^\\d+$")] [MaxLength(18)]string adAccountId, [FromRoute (Name = "product_group_promotion_id")][Required][RegularExpression("^\\d+$")] [MaxLength(18)]string productGroupPromotionId)
        {

            //TODO: Uncomment the next line to return response 200 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(200, default(ProductGroupPromotionResponse));
            //TODO: Uncomment the next line to return response 0 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(0, default(Error));
            string exampleJson = null;
            exampleJson = "{\n  \"items\" : [ {\n    \"data\" : {\n      \"catalog_product_group_id\" : \"1231235\",\n      \"bid_in_micro_currency\" : 14000000,\n      \"relative_definition\" : \"product_type_1='beverage appliances'\",\n      \"slideshow_collections_description\" : \"slideshow description\",\n      \"collections_hero_pin_id\" : \"123123\",\n      \"catalog_product_group_name\" : \"catalogProductGroupName\",\n      \"slideshow_collections_title\" : \"slideshow title\",\n      \"is_mdl\" : true,\n      \"parent_id\" : \"1231234\",\n      \"creative_type\" : \"REGULAR\",\n      \"grid_click_type\" : \"CLOSEUP\",\n      \"definition\" : \"*/product_type_0='kitchen'/product_type_1='beverage appliances'\",\n      \"id\" : \"2680059592705\",\n      \"ad_group_id\" : \"2680059592705\",\n      \"collections_hero_destination_url\" : \"http://www.pinterest.com\",\n      \"included\" : true,\n      \"tracking_url\" : \"https://www.pinterest.com\",\n      \"status\" : \"ACTIVE\"\n    },\n    \"exceptions\" : [ {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    }, {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    } ]\n  }, {\n    \"data\" : {\n      \"catalog_product_group_id\" : \"1231235\",\n      \"bid_in_micro_currency\" : 14000000,\n      \"relative_definition\" : \"product_type_1='beverage appliances'\",\n      \"slideshow_collections_description\" : \"slideshow description\",\n      \"collections_hero_pin_id\" : \"123123\",\n      \"catalog_product_group_name\" : \"catalogProductGroupName\",\n      \"slideshow_collections_title\" : \"slideshow title\",\n      \"is_mdl\" : true,\n      \"parent_id\" : \"1231234\",\n      \"creative_type\" : \"REGULAR\",\n      \"grid_click_type\" : \"CLOSEUP\",\n      \"definition\" : \"*/product_type_0='kitchen'/product_type_1='beverage appliances'\",\n      \"id\" : \"2680059592705\",\n      \"ad_group_id\" : \"2680059592705\",\n      \"collections_hero_destination_url\" : \"http://www.pinterest.com\",\n      \"included\" : true,\n      \"tracking_url\" : \"https://www.pinterest.com\",\n      \"status\" : \"ACTIVE\"\n    },\n    \"exceptions\" : [ {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    }, {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    } ]\n  } ]\n}";
            exampleJson = "{\n  \"code\" : 0,\n  \"message\" : \"message\"\n}";
            
            var example = exampleJson != null
            ? JsonConvert.DeserializeObject<ProductGroupPromotionResponse>(exampleJson)
            : default(ProductGroupPromotionResponse);
            //TODO: Change the data returned
            return new ObjectResult(example);
        }

        /// <summary>
        /// Get product group promotions
        /// </summary>
        /// <remarks>List existing product group promotions associated with an ad account.  Include either ad_group_id or product_group_promotion_ids in your request.  &lt;b&gt;Note:&lt;/b&gt; ad_group_ids and product_group_promotion_ids are mutually exclusive parameters. Only provide one. If multiple options are provided, product_group_promotion_ids takes precedence over ad_group_ids. If none are provided, the endpoint returns an error.</remarks>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="productGroupPromotionIds">List of Product group promotion Ids.</param>
        /// <param name="entityStatuses">Entity status</param>
        /// <param name="adGroupId">Ad group Id.</param>
        /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information.</param>
        /// <param name="order">The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items.</param>
        /// <param name="bookmark">Cursor used to fetch the next page of items</param>
        /// <response code="200">Success</response>
        /// <response code="0">Unexpected error</response>
        [HttpGet]
        [Route("/v5/ad_accounts/{ad_account_id}/product_group_promotions")]
        [ValidateModelState]
        [SwaggerOperation("ProductGroupPromotionsList")]
        [SwaggerResponse(statusCode: 200, type: typeof(ProductGroupPromotionsList200Response), description: "Success")]
        [SwaggerResponse(statusCode: 0, type: typeof(Error), description: "Unexpected error")]
        public virtual IActionResult ProductGroupPromotionsList([FromRoute (Name = "ad_account_id")][Required][RegularExpression("^\\d+$")] [MaxLength(18)]string adAccountId, [FromQuery (Name = "product_group_promotion_ids")]List<string> productGroupPromotionIds, [FromQuery (Name = "entity_statuses")]List<string> entityStatuses, [FromQuery (Name = "ad_group_id")][RegularExpression("^\\d+$")] [MaxLength(18)]string adGroupId, [FromQuery (Name = "page_size")][Range(1, 250)]int? pageSize, [FromQuery (Name = "order")]string order, [FromQuery (Name = "bookmark")]string bookmark)
        {

            //TODO: Uncomment the next line to return response 200 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(200, default(ProductGroupPromotionsList200Response));
            //TODO: Uncomment the next line to return response 0 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(0, default(Error));
            string exampleJson = null;
            exampleJson = "{\n  \"bookmark\" : \"bookmark\",\n  \"items\" : [ {\n    \"data\" : {\n      \"catalog_product_group_id\" : \"1231235\",\n      \"bid_in_micro_currency\" : 14000000,\n      \"relative_definition\" : \"product_type_1='beverage appliances'\",\n      \"slideshow_collections_description\" : \"slideshow description\",\n      \"collections_hero_pin_id\" : \"123123\",\n      \"catalog_product_group_name\" : \"catalogProductGroupName\",\n      \"slideshow_collections_title\" : \"slideshow title\",\n      \"is_mdl\" : true,\n      \"parent_id\" : \"1231234\",\n      \"creative_type\" : \"REGULAR\",\n      \"grid_click_type\" : \"CLOSEUP\",\n      \"definition\" : \"*/product_type_0='kitchen'/product_type_1='beverage appliances'\",\n      \"id\" : \"2680059592705\",\n      \"ad_group_id\" : \"2680059592705\",\n      \"collections_hero_destination_url\" : \"http://www.pinterest.com\",\n      \"included\" : true,\n      \"tracking_url\" : \"https://www.pinterest.com\",\n      \"status\" : \"ACTIVE\"\n    },\n    \"exceptions\" : [ {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    }, {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    } ]\n  }, {\n    \"data\" : {\n      \"catalog_product_group_id\" : \"1231235\",\n      \"bid_in_micro_currency\" : 14000000,\n      \"relative_definition\" : \"product_type_1='beverage appliances'\",\n      \"slideshow_collections_description\" : \"slideshow description\",\n      \"collections_hero_pin_id\" : \"123123\",\n      \"catalog_product_group_name\" : \"catalogProductGroupName\",\n      \"slideshow_collections_title\" : \"slideshow title\",\n      \"is_mdl\" : true,\n      \"parent_id\" : \"1231234\",\n      \"creative_type\" : \"REGULAR\",\n      \"grid_click_type\" : \"CLOSEUP\",\n      \"definition\" : \"*/product_type_0='kitchen'/product_type_1='beverage appliances'\",\n      \"id\" : \"2680059592705\",\n      \"ad_group_id\" : \"2680059592705\",\n      \"collections_hero_destination_url\" : \"http://www.pinterest.com\",\n      \"included\" : true,\n      \"tracking_url\" : \"https://www.pinterest.com\",\n      \"status\" : \"ACTIVE\"\n    },\n    \"exceptions\" : [ {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    }, {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    } ]\n  } ]\n}";
            exampleJson = "{\n  \"code\" : 0,\n  \"message\" : \"message\"\n}";
            
            var example = exampleJson != null
            ? JsonConvert.DeserializeObject<ProductGroupPromotionsList200Response>(exampleJson)
            : default(ProductGroupPromotionsList200Response);
            //TODO: Change the data returned
            return new ObjectResult(example);
        }

        /// <summary>
        /// Update product group promotions
        /// </summary>
        /// <remarks>Update multiple existing Product Group Promotions (by product_group_id)</remarks>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="productGroupPromotionUpdateRequest">Parameters to update Product group promotions</param>
        /// <response code="200">Success</response>
        /// <response code="0">Unexpected error</response>
        [HttpPatch]
        [Route("/v5/ad_accounts/{ad_account_id}/product_group_promotions")]
        [Consumes("application/json")]
        [ValidateModelState]
        [SwaggerOperation("ProductGroupPromotionsUpdate")]
        [SwaggerResponse(statusCode: 200, type: typeof(ProductGroupPromotionResponse), description: "Success")]
        [SwaggerResponse(statusCode: 0, type: typeof(Error), description: "Unexpected error")]
        public virtual IActionResult ProductGroupPromotionsUpdate([FromRoute (Name = "ad_account_id")][Required][RegularExpression("^\\d+$")] [MaxLength(18)]string adAccountId, [FromBody]ProductGroupPromotionUpdateRequest productGroupPromotionUpdateRequest)
        {

            //TODO: Uncomment the next line to return response 200 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(200, default(ProductGroupPromotionResponse));
            //TODO: Uncomment the next line to return response 0 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(0, default(Error));
            string exampleJson = null;
            exampleJson = "{\n  \"items\" : [ {\n    \"data\" : {\n      \"catalog_product_group_id\" : \"1231235\",\n      \"bid_in_micro_currency\" : 14000000,\n      \"relative_definition\" : \"product_type_1='beverage appliances'\",\n      \"slideshow_collections_description\" : \"slideshow description\",\n      \"collections_hero_pin_id\" : \"123123\",\n      \"catalog_product_group_name\" : \"catalogProductGroupName\",\n      \"slideshow_collections_title\" : \"slideshow title\",\n      \"is_mdl\" : true,\n      \"parent_id\" : \"1231234\",\n      \"creative_type\" : \"REGULAR\",\n      \"grid_click_type\" : \"CLOSEUP\",\n      \"definition\" : \"*/product_type_0='kitchen'/product_type_1='beverage appliances'\",\n      \"id\" : \"2680059592705\",\n      \"ad_group_id\" : \"2680059592705\",\n      \"collections_hero_destination_url\" : \"http://www.pinterest.com\",\n      \"included\" : true,\n      \"tracking_url\" : \"https://www.pinterest.com\",\n      \"status\" : \"ACTIVE\"\n    },\n    \"exceptions\" : [ {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    }, {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    } ]\n  }, {\n    \"data\" : {\n      \"catalog_product_group_id\" : \"1231235\",\n      \"bid_in_micro_currency\" : 14000000,\n      \"relative_definition\" : \"product_type_1='beverage appliances'\",\n      \"slideshow_collections_description\" : \"slideshow description\",\n      \"collections_hero_pin_id\" : \"123123\",\n      \"catalog_product_group_name\" : \"catalogProductGroupName\",\n      \"slideshow_collections_title\" : \"slideshow title\",\n      \"is_mdl\" : true,\n      \"parent_id\" : \"1231234\",\n      \"creative_type\" : \"REGULAR\",\n      \"grid_click_type\" : \"CLOSEUP\",\n      \"definition\" : \"*/product_type_0='kitchen'/product_type_1='beverage appliances'\",\n      \"id\" : \"2680059592705\",\n      \"ad_group_id\" : \"2680059592705\",\n      \"collections_hero_destination_url\" : \"http://www.pinterest.com\",\n      \"included\" : true,\n      \"tracking_url\" : \"https://www.pinterest.com\",\n      \"status\" : \"ACTIVE\"\n    },\n    \"exceptions\" : [ {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    }, {\n      \"code\" : 2,\n      \"message\" : \"Advertiser not found.\"\n    } ]\n  } ]\n}";
            exampleJson = "{\n  \"code\" : 0,\n  \"message\" : \"message\"\n}";
            
            var example = exampleJson != null
            ? JsonConvert.DeserializeObject<ProductGroupPromotionResponse>(exampleJson)
            : default(ProductGroupPromotionResponse);
            //TODO: Change the data returned
            return new ObjectResult(example);
        }

        /// <summary>
        /// Get product group analytics
        /// </summary>
        /// <remarks>Get analytics for the specified product groups in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.</remarks>
        /// <param name="adAccountId">Unique identifier of an ad account.</param>
        /// <param name="startDate">Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today.</param>
        /// <param name="endDate">Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date.</param>
        /// <param name="productGroupIds">List of Product group Ids to use to filter the results.</param>
        /// <param name="columns">Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned</param>
        /// <param name="granularity">TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly</param>
        /// <param name="clickWindowDays">Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.</param>
        /// <param name="engagementWindowDays">Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.</param>
        /// <param name="viewWindowDays">Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day.</param>
        /// <param name="conversionReportTime">The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.</param>
        /// <response code="200">Success</response>
        /// <response code="400">Invalid ad account ads analytics parameters.</response>
        /// <response code="0">Unexpected error</response>
        [HttpGet]
        [Route("/v5/ad_accounts/{ad_account_id}/product_groups/analytics")]
        [ValidateModelState]
        [SwaggerOperation("ProductGroupsAnalytics")]
        [SwaggerResponse(statusCode: 200, type: typeof(List<ProductGroupAnalyticsResponseInner>), description: "Success")]
        [SwaggerResponse(statusCode: 400, type: typeof(Error), description: "Invalid ad account ads analytics parameters.")]
        [SwaggerResponse(statusCode: 0, type: typeof(Error), description: "Unexpected error")]
        public virtual IActionResult ProductGroupsAnalytics([FromRoute (Name = "ad_account_id")][Required][RegularExpression("^\\d+$")] [MaxLength(18)]string adAccountId, [FromQuery (Name = "start_date")][Required()]DateTime startDate, [FromQuery (Name = "end_date")][Required()]DateTime endDate, [FromQuery (Name = "product_group_ids")][Required()]List<string> productGroupIds, [FromQuery (Name = "columns")][Required()]List<string> columns, [FromQuery (Name = "granularity")][Required()]Granularity granularity, [FromQuery (Name = "click_window_days")]int? clickWindowDays, [FromQuery (Name = "engagement_window_days")]int? engagementWindowDays, [FromQuery (Name = "view_window_days")]int? viewWindowDays, [FromQuery (Name = "conversion_report_time")]string conversionReportTime)
        {

            //TODO: Uncomment the next line to return response 200 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(200, default(List<ProductGroupAnalyticsResponseInner>));
            //TODO: Uncomment the next line to return response 400 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(400, default(Error));
            //TODO: Uncomment the next line to return response 0 or use other options such as return this.NotFound(), return this.BadRequest(..), ...
            // return StatusCode(0, default(Error));
            string exampleJson = null;
            exampleJson = "[ {\n  \"DATE\" : \"2021-04-01\",\n  \"PRODUCT_GROUP_ID\" : \"74629351736530\",\n  \"SPEND_IN_DOLLAR\" : 30,\n  \"TOTAL_CLICKTHROUGH\" : 216\n}, {\n  \"DATE\" : \"2021-04-01\",\n  \"PRODUCT_GROUP_ID\" : \"74629351736530\",\n  \"SPEND_IN_DOLLAR\" : 30,\n  \"TOTAL_CLICKTHROUGH\" : 216\n} ]";
            exampleJson = "{\n  \"code\" : 0,\n  \"message\" : \"message\"\n}";
            exampleJson = "{\n  \"code\" : 0,\n  \"message\" : \"message\"\n}";
            
            var example = exampleJson != null
            ? JsonConvert.DeserializeObject<List<ProductGroupAnalyticsResponseInner>>(exampleJson)
            : default(List<ProductGroupAnalyticsResponseInner>);
            //TODO: Change the data returned
            return new ObjectResult(example);
        }
    }
}