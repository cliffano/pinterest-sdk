#
# Pinterest REST API
# 
# Pinterest's REST API
# The version of the OpenAPI document: 5.12.0
# Contact: blah+oapicf@cliffano.com
# Generated by: https://openapi-generator.tech
#

import httpclient
import json
import logging
import marshal
import options
import strformat
import strutils
import tables
import typetraits
import uri

import ../models/model_catalogs_feed
import ../models/model_catalogs_item_validation_issue
import ../models/model_catalogs_items
import ../models/model_catalogs_items_batch
import ../models/model_catalogs_items_filters
import ../models/model_catalogs_list_products_by_filter_request
import ../models/model_catalogs_product_group_product_counts
import ../models/model_error
import ../models/model_catalogs_list_200_response
import ../models/model_catalogs_product_group_pins_list_200_response
import ../models/model_catalogs_product_groups_create_201_response
import ../models/model_catalogs_product_groups_create_request
import ../models/model_catalogs_product_groups_list_200_response
import ../models/model_catalogs_product_groups_update_request
import ../models/model_feed_processing_results_list_200_response
import ../models/model_feeds_create_request
import ../models/model_feeds_list_200_response
import ../models/model_feeds_update_request
import ../models/model_items_batch_post_request
import ../models/model_items_issues_list_200_response

const basepath = "https://api.pinterest.com/v5"

template constructResult[T](response: Response): untyped =
  if response.code in {Http200, Http201, Http202, Http204, Http206}:
    try:
      when name(stripGenericParams(T.typedesc).typedesc) == name(Table):
        (some(json.to(parseJson(response.body), T.typedesc)), response)
      else:
        (some(marshal.to[T](response.body)), response)
    except JsonParsingError:
      # The server returned a malformed response though the response code is 2XX
      # TODO: need better error handling
      error("JsonParsingError")
      (none(T.typedesc), response)
  else:
    (none(T.typedesc), response)


proc catalogsList*(httpClient: HttpClient, bookmark: string, pageSize: int, adAccountId: string): (Option[catalogs_list_200_response], Response) =
  ## List catalogs
  let query_for_api_call = encodeQuery([
    ("bookmark", $bookmark), # Cursor used to fetch the next page of items
    ("page_size", $pageSize), # Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.get(basepath & "/catalogs" & "?" & query_for_api_call)
  constructResult[catalogs_list_200_response](response)


proc catalogsProductGroupPinsList*(httpClient: HttpClient, productGroupId: string, bookmark: string, pageSize: int, adAccountId: string): (Option[catalogs_product_group_pins_list_200_response], Response) =
  ## List products for a Product Group
  let query_for_api_call = encodeQuery([
    ("bookmark", $bookmark), # Cursor used to fetch the next page of items
    ("page_size", $pageSize), # Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.get(basepath & fmt"/catalogs/product_groups/{product_group_id}/products" & "?" & query_for_api_call)
  constructResult[catalogs_product_group_pins_list_200_response](response)


proc catalogsProductGroupsCreate*(httpClient: HttpClient, catalogsProductGroupsCreateRequest: CatalogsProductGroupsCreateRequest, adAccountId: string): (Option[catalogs_product_groups_create_201_response], Response) =
  ## Create product group
  httpClient.headers["Content-Type"] = "application/json"
  let query_for_api_call = encodeQuery([
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.post(basepath & "/catalogs/product_groups" & "?" & query_for_api_call, $(%catalogsProductGroupsCreateRequest))
  constructResult[catalogs_product_groups_create_201_response](response)


proc catalogsProductGroupsDelete*(httpClient: HttpClient, productGroupId: string, adAccountId: string): Response =
  ## Delete product group
  let query_for_api_call = encodeQuery([
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])
  httpClient.delete(basepath & fmt"/catalogs/product_groups/{product_group_id}" & "?" & query_for_api_call)


proc catalogsProductGroupsGet*(httpClient: HttpClient, productGroupId: string, adAccountId: string): (Option[catalogs_product_groups_create_201_response], Response) =
  ## Get product group
  let query_for_api_call = encodeQuery([
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.get(basepath & fmt"/catalogs/product_groups/{product_group_id}" & "?" & query_for_api_call)
  constructResult[catalogs_product_groups_create_201_response](response)


proc catalogsProductGroupsList*(httpClient: HttpClient, feedId: string, catalogId: string, bookmark: string, pageSize: int, adAccountId: string): (Option[catalogs_product_groups_list_200_response], Response) =
  ## List product groups
  let query_for_api_call = encodeQuery([
    ("feed_id", $feedId), # Filter entities for a given feed_id. If not given, all feeds are considered.
    ("catalog_id", $catalogId), # Filter entities for a given catalog_id. If not given, all catalogs are considered.
    ("bookmark", $bookmark), # Cursor used to fetch the next page of items
    ("page_size", $pageSize), # Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.get(basepath & "/catalogs/product_groups" & "?" & query_for_api_call)
  constructResult[catalogs_product_groups_list_200_response](response)


proc catalogsProductGroupsProductCountsGet*(httpClient: HttpClient, productGroupId: string, adAccountId: string): (Option[CatalogsProductGroupProductCounts], Response) =
  ## Get product counts for a Product Group
  let query_for_api_call = encodeQuery([
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.get(basepath & fmt"/catalogs/product_groups/{product_group_id}/product_counts" & "?" & query_for_api_call)
  constructResult[CatalogsProductGroupProductCounts](response)


proc catalogsProductGroupsUpdate*(httpClient: HttpClient, productGroupId: string, catalogsProductGroupsUpdateRequest: CatalogsProductGroupsUpdateRequest, adAccountId: string): (Option[catalogs_product_groups_create_201_response], Response) =
  ## Update product group
  httpClient.headers["Content-Type"] = "application/json"
  let query_for_api_call = encodeQuery([
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.patch(basepath & fmt"/catalogs/product_groups/{product_group_id}" & "?" & query_for_api_call, $(%catalogsProductGroupsUpdateRequest))
  constructResult[catalogs_product_groups_create_201_response](response)


proc feedProcessingResultsList*(httpClient: HttpClient, feedId: string, bookmark: string, pageSize: int, adAccountId: string): (Option[feed_processing_results_list_200_response], Response) =
  ## List processing results for a given feed
  let query_for_api_call = encodeQuery([
    ("bookmark", $bookmark), # Cursor used to fetch the next page of items
    ("page_size", $pageSize), # Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.get(basepath & fmt"/catalogs/feeds/{feed_id}/processing_results" & "?" & query_for_api_call)
  constructResult[feed_processing_results_list_200_response](response)


proc feedsCreate*(httpClient: HttpClient, feedsCreateRequest: FeedsCreateRequest, adAccountId: string): (Option[CatalogsFeed], Response) =
  ## Create feed
  httpClient.headers["Content-Type"] = "application/json"
  let query_for_api_call = encodeQuery([
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.post(basepath & "/catalogs/feeds" & "?" & query_for_api_call, $(%feedsCreateRequest))
  constructResult[CatalogsFeed](response)


proc feedsDelete*(httpClient: HttpClient, feedId: string, adAccountId: string): Response =
  ## Delete feed
  let query_for_api_call = encodeQuery([
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])
  httpClient.delete(basepath & fmt"/catalogs/feeds/{feed_id}" & "?" & query_for_api_call)


proc feedsGet*(httpClient: HttpClient, feedId: string, adAccountId: string): (Option[CatalogsFeed], Response) =
  ## Get feed
  let query_for_api_call = encodeQuery([
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.get(basepath & fmt"/catalogs/feeds/{feed_id}" & "?" & query_for_api_call)
  constructResult[CatalogsFeed](response)


proc feedsList*(httpClient: HttpClient, bookmark: string, pageSize: int, catalogId: string, adAccountId: string): (Option[feeds_list_200_response], Response) =
  ## List feeds
  let query_for_api_call = encodeQuery([
    ("bookmark", $bookmark), # Cursor used to fetch the next page of items
    ("page_size", $pageSize), # Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.
    ("catalog_id", $catalogId), # Filter entities for a given catalog_id. If not given, all catalogs are considered.
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.get(basepath & "/catalogs/feeds" & "?" & query_for_api_call)
  constructResult[feeds_list_200_response](response)


proc feedsUpdate*(httpClient: HttpClient, feedId: string, feedsUpdateRequest: FeedsUpdateRequest, adAccountId: string): (Option[CatalogsFeed], Response) =
  ## Update feed
  httpClient.headers["Content-Type"] = "application/json"
  let query_for_api_call = encodeQuery([
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.patch(basepath & fmt"/catalogs/feeds/{feed_id}" & "?" & query_for_api_call, $(%feedsUpdateRequest))
  constructResult[CatalogsFeed](response)


proc itemsBatchGet*(httpClient: HttpClient, batchId: string, adAccountId: string): (Option[CatalogsItemsBatch], Response) =
  ## Get catalogs item batch status
  let query_for_api_call = encodeQuery([
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.get(basepath & fmt"/catalogs/items/batch/{batch_id}" & "?" & query_for_api_call)
  constructResult[CatalogsItemsBatch](response)


proc itemsBatchPost*(httpClient: HttpClient, itemsBatchPostRequest: ItemsBatchPostRequest, adAccountId: string): (Option[CatalogsItemsBatch], Response) =
  ## Operate on item batch
  httpClient.headers["Content-Type"] = "application/json"
  let query_for_api_call = encodeQuery([
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.post(basepath & "/catalogs/items/batch" & "?" & query_for_api_call, $(%itemsBatchPostRequest))
  constructResult[CatalogsItemsBatch](response)


proc itemsGet*(httpClient: HttpClient, country: string, language: string, adAccountId: string, itemIds: seq[string], filters: CatalogsItemsFilters): (Option[CatalogsItems], Response) =
  ## Get catalogs items
  let query_for_api_call = encodeQuery([
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
    ("country", $country), # Country for the Catalogs Items
    ("language", $language), # Language for the Catalogs Items
    ("item_ids", $itemIds.join(",")), # This parameter is deprecated. Use filters instead.
    ("filters", $filters), # Identifies items to be retrieved. This is a required parameter.
  ])

  let response = httpClient.get(basepath & "/catalogs/items" & "?" & query_for_api_call)
  constructResult[CatalogsItems](response)


proc itemsIssuesList*(httpClient: HttpClient, processingResultId: string, bookmark: string, pageSize: int, itemNumbers: seq[int], itemValidationIssue: CatalogsItemValidationIssue, adAccountId: string): (Option[items_issues_list_200_response], Response) =
  ## List item issues for a given processing result
  let query_for_api_call = encodeQuery([
    ("bookmark", $bookmark), # Cursor used to fetch the next page of items
    ("page_size", $pageSize), # Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.
    ("item_numbers", $itemNumbers.join(",")), # Item number based on order of appearance in the Catalogs Feed. For example, '0' refers to first item found in a feed that was downloaded from a 'location' specified during feed creation.
    ("item_validation_issue", $itemValidationIssue), # Filter item validation issues that have a given type of item validation issue.
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.get(basepath & fmt"/catalogs/processing_results/{processing_result_id}/item_issues" & "?" & query_for_api_call)
  constructResult[items_issues_list_200_response](response)


proc productsByProductGroupFilterList*(httpClient: HttpClient, catalogsListProductsByFilterRequest: CatalogsListProductsByFilterRequest, bookmark: string, pageSize: int, adAccountId: string): (Option[catalogs_product_group_pins_list_200_response], Response) =
  ## List filtered products
  httpClient.headers["Content-Type"] = "application/json"
  let query_for_api_call = encodeQuery([
    ("bookmark", $bookmark), # Cursor used to fetch the next page of items
    ("page_size", $pageSize), # Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.
    ("ad_account_id", $adAccountId), # Unique identifier of an ad account.
  ])

  let response = httpClient.post(basepath & "/catalogs/products/get_by_product_group_filters" & "?" & query_for_api_call, $(%catalogsListProductsByFilterRequest))
  constructResult[catalogs_product_group_pins_list_200_response](response)

