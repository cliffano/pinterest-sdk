package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import java.io.File
import java.net.URLEncoder
import java.util.UUID

import org.http4s._
import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.http4s.client._
import org.http4s.client.blaze.PooledHttp1Client
import org.http4s.headers._

import org.joda.time.DateTime

import scalaz.concurrent.Task

import HelperCodecs._

import org.openapitools.client.api.CatalogsFeed
import org.openapitools.client.api.CatalogsItemValidationIssue
import org.openapitools.client.api.CatalogsItems
import org.openapitools.client.api.CatalogsItemsBatch
import org.openapitools.client.api.CatalogsItemsFilters
import org.openapitools.client.api.CatalogsList200Response
import org.openapitools.client.api.CatalogsListProductsByFilterRequest
import org.openapitools.client.api.CatalogsProductGroupPinsList200Response
import org.openapitools.client.api.CatalogsProductGroupProductCounts
import org.openapitools.client.api.CatalogsProductGroupsCreate201Response
import org.openapitools.client.api.CatalogsProductGroupsCreateRequest
import org.openapitools.client.api.CatalogsProductGroupsList200Response
import org.openapitools.client.api.CatalogsProductGroupsUpdateRequest
import org.openapitools.client.api.Error
import org.openapitools.client.api.FeedProcessingResultsList200Response
import org.openapitools.client.api.FeedsCreateRequest
import org.openapitools.client.api.FeedsList200Response
import org.openapitools.client.api.FeedsUpdateRequest
import org.openapitools.client.api.ItemsBatchPostRequest
import org.openapitools.client.api.ItemsIssuesList200Response

object CatalogsApi {

  val client = PooledHttp1Client()

  def escape(value: String): String = URLEncoder.encode(value, "utf-8").replaceAll("\\+", "%20")

  def catalogsList(host: String, bookmark: String, pageSize: Integer = 25, adAccountId: String)(implicit bookmarkQuery: QueryParam[String], pageSizeQuery: QueryParam[Integer], adAccountIdQuery: QueryParam[String]): Task[CatalogsList200Response] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsList200Response] = jsonOf[CatalogsList200Response]

    val path = "/catalogs"

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("bookmark", Some(bookmarkQuery.toParamString(bookmark))), ("pageSize", Some(page_sizeQuery.toParamString(page_size))), ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsList200Response](req)

    } yield resp
  }

  def catalogsProductGroupPinsList(host: String, productGroupId: String, bookmark: String, pageSize: Integer = 25, adAccountId: String)(implicit bookmarkQuery: QueryParam[String], pageSizeQuery: QueryParam[Integer], adAccountIdQuery: QueryParam[String]): Task[CatalogsProductGroupPinsList200Response] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsProductGroupPinsList200Response] = jsonOf[CatalogsProductGroupPinsList200Response]

    val path = "/catalogs/product_groups/{product_group_id}/products".replaceAll("\\{" + "product_group_id" + "\\}",escape(productGroupId.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("bookmark", Some(bookmarkQuery.toParamString(bookmark))), ("pageSize", Some(page_sizeQuery.toParamString(page_size))), ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsProductGroupPinsList200Response](req)

    } yield resp
  }

  def catalogsProductGroupsCreate(host: String, catalogsProductGroupsCreateRequest: CatalogsProductGroupsCreateRequest, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsProductGroupsCreate201Response] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsProductGroupsCreate201Response] = jsonOf[CatalogsProductGroupsCreate201Response]

    val path = "/catalogs/product_groups"

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(catalogsProductGroupsCreateRequest)
      resp          <- client.expect[CatalogsProductGroupsCreate201Response](req)

    } yield resp
  }

  def catalogsProductGroupsDelete(host: String, productGroupId: String, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[Unit] = {
    val path = "/catalogs/product_groups/{product_group_id}".replaceAll("\\{" + "product_group_id" + "\\}",escape(productGroupId.toString))

    val httpMethod = Method.DELETE
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.fetch[Unit](req)(_ => Task.now(()))

    } yield resp
  }

  def catalogsProductGroupsGet(host: String, productGroupId: String, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsProductGroupsCreate201Response] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsProductGroupsCreate201Response] = jsonOf[CatalogsProductGroupsCreate201Response]

    val path = "/catalogs/product_groups/{product_group_id}".replaceAll("\\{" + "product_group_id" + "\\}",escape(productGroupId.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsProductGroupsCreate201Response](req)

    } yield resp
  }

  def catalogsProductGroupsList(host: String, feedId: String, catalogId: String, bookmark: String, pageSize: Integer = 25, adAccountId: String)(implicit feedIdQuery: QueryParam[String], catalogIdQuery: QueryParam[String], bookmarkQuery: QueryParam[String], pageSizeQuery: QueryParam[Integer], adAccountIdQuery: QueryParam[String]): Task[CatalogsProductGroupsList200Response] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsProductGroupsList200Response] = jsonOf[CatalogsProductGroupsList200Response]

    val path = "/catalogs/product_groups"

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("feedId", Some(feed_idQuery.toParamString(feed_id))), ("catalogId", Some(catalog_idQuery.toParamString(catalog_id))), ("bookmark", Some(bookmarkQuery.toParamString(bookmark))), ("pageSize", Some(page_sizeQuery.toParamString(page_size))), ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsProductGroupsList200Response](req)

    } yield resp
  }

  def catalogsProductGroupsProductCountsGet(host: String, productGroupId: String, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsProductGroupProductCounts] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsProductGroupProductCounts] = jsonOf[CatalogsProductGroupProductCounts]

    val path = "/catalogs/product_groups/{product_group_id}/product_counts".replaceAll("\\{" + "product_group_id" + "\\}",escape(productGroupId.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsProductGroupProductCounts](req)

    } yield resp
  }

  def catalogsProductGroupsUpdate(host: String, productGroupId: String, catalogsProductGroupsUpdateRequest: CatalogsProductGroupsUpdateRequest, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsProductGroupsCreate201Response] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsProductGroupsCreate201Response] = jsonOf[CatalogsProductGroupsCreate201Response]

    val path = "/catalogs/product_groups/{product_group_id}".replaceAll("\\{" + "product_group_id" + "\\}",escape(productGroupId.toString))

    val httpMethod = Method.PATCH
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(catalogsProductGroupsUpdateRequest)
      resp          <- client.expect[CatalogsProductGroupsCreate201Response](req)

    } yield resp
  }

  def feedProcessingResultsList(host: String, feedId: String, bookmark: String, pageSize: Integer = 25, adAccountId: String)(implicit bookmarkQuery: QueryParam[String], pageSizeQuery: QueryParam[Integer], adAccountIdQuery: QueryParam[String]): Task[FeedProcessingResultsList200Response] = {
    implicit val returnTypeDecoder: EntityDecoder[FeedProcessingResultsList200Response] = jsonOf[FeedProcessingResultsList200Response]

    val path = "/catalogs/feeds/{feed_id}/processing_results".replaceAll("\\{" + "feed_id" + "\\}",escape(feedId.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("bookmark", Some(bookmarkQuery.toParamString(bookmark))), ("pageSize", Some(page_sizeQuery.toParamString(page_size))), ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[FeedProcessingResultsList200Response](req)

    } yield resp
  }

  def feedsCreate(host: String, feedsCreateRequest: FeedsCreateRequest, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsFeed] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsFeed] = jsonOf[CatalogsFeed]

    val path = "/catalogs/feeds"

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(feedsCreateRequest)
      resp          <- client.expect[CatalogsFeed](req)

    } yield resp
  }

  def feedsDelete(host: String, feedId: String, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[Unit] = {
    val path = "/catalogs/feeds/{feed_id}".replaceAll("\\{" + "feed_id" + "\\}",escape(feedId.toString))

    val httpMethod = Method.DELETE
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.fetch[Unit](req)(_ => Task.now(()))

    } yield resp
  }

  def feedsGet(host: String, feedId: String, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsFeed] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsFeed] = jsonOf[CatalogsFeed]

    val path = "/catalogs/feeds/{feed_id}".replaceAll("\\{" + "feed_id" + "\\}",escape(feedId.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsFeed](req)

    } yield resp
  }

  def feedsList(host: String, bookmark: String, pageSize: Integer = 25, catalogId: String, adAccountId: String)(implicit bookmarkQuery: QueryParam[String], pageSizeQuery: QueryParam[Integer], catalogIdQuery: QueryParam[String], adAccountIdQuery: QueryParam[String]): Task[FeedsList200Response] = {
    implicit val returnTypeDecoder: EntityDecoder[FeedsList200Response] = jsonOf[FeedsList200Response]

    val path = "/catalogs/feeds"

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("bookmark", Some(bookmarkQuery.toParamString(bookmark))), ("pageSize", Some(page_sizeQuery.toParamString(page_size))), ("catalogId", Some(catalog_idQuery.toParamString(catalog_id))), ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[FeedsList200Response](req)

    } yield resp
  }

  def feedsUpdate(host: String, feedId: String, feedsUpdateRequest: FeedsUpdateRequest, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsFeed] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsFeed] = jsonOf[CatalogsFeed]

    val path = "/catalogs/feeds/{feed_id}".replaceAll("\\{" + "feed_id" + "\\}",escape(feedId.toString))

    val httpMethod = Method.PATCH
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(feedsUpdateRequest)
      resp          <- client.expect[CatalogsFeed](req)

    } yield resp
  }

  def itemsBatchGet(host: String, batchId: String, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsItemsBatch] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsItemsBatch] = jsonOf[CatalogsItemsBatch]

    val path = "/catalogs/items/batch/{batch_id}".replaceAll("\\{" + "batch_id" + "\\}",escape(batchId.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsItemsBatch](req)

    } yield resp
  }

  def itemsBatchPost(host: String, itemsBatchPostRequest: ItemsBatchPostRequest, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsItemsBatch] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsItemsBatch] = jsonOf[CatalogsItemsBatch]

    val path = "/catalogs/items/batch"

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(itemsBatchPostRequest)
      resp          <- client.expect[CatalogsItemsBatch](req)

    } yield resp
  }

  def itemsGet(host: String, country: String, language: String, adAccountId: String, itemIds: List[String] = List.empty[String] , filters: CatalogsItemsFilters)(implicit adAccountIdQuery: QueryParam[String], countryQuery: QueryParam[String], languageQuery: QueryParam[String], itemIdsQuery: QueryParam[List[String]], filtersQuery: QueryParam[CatalogsItemsFilters]): Task[CatalogsItems] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsItems] = jsonOf[CatalogsItems]

    val path = "/catalogs/items"

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))), ("country", Some(countryQuery.toParamString(country))), ("language", Some(languageQuery.toParamString(language))), ("itemIds", Some(item_idsQuery.toParamString(item_ids))), ("filters", Some(filtersQuery.toParamString(filters))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsItems](req)

    } yield resp
  }

  def itemsIssuesList(host: String, processingResultId: String, bookmark: String, pageSize: Integer = 25, itemNumbers: List[Integer] = List.empty[Integer] , itemValidationIssue: CatalogsItemValidationIssue, adAccountId: String)(implicit bookmarkQuery: QueryParam[String], pageSizeQuery: QueryParam[Integer], itemNumbersQuery: QueryParam[List[Integer]], itemValidationIssueQuery: QueryParam[CatalogsItemValidationIssue], adAccountIdQuery: QueryParam[String]): Task[ItemsIssuesList200Response] = {
    implicit val returnTypeDecoder: EntityDecoder[ItemsIssuesList200Response] = jsonOf[ItemsIssuesList200Response]

    val path = "/catalogs/processing_results/{processing_result_id}/item_issues".replaceAll("\\{" + "processing_result_id" + "\\}",escape(processingResultId.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("bookmark", Some(bookmarkQuery.toParamString(bookmark))), ("pageSize", Some(page_sizeQuery.toParamString(page_size))), ("itemNumbers", Some(item_numbersQuery.toParamString(item_numbers))), ("itemValidationIssue", Some(item_validation_issueQuery.toParamString(item_validation_issue))), ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[ItemsIssuesList200Response](req)

    } yield resp
  }

  def productsByProductGroupFilterList(host: String, catalogsListProductsByFilterRequest: CatalogsListProductsByFilterRequest, bookmark: String, pageSize: Integer = 25, adAccountId: String)(implicit bookmarkQuery: QueryParam[String], pageSizeQuery: QueryParam[Integer], adAccountIdQuery: QueryParam[String]): Task[CatalogsProductGroupPinsList200Response] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsProductGroupPinsList200Response] = jsonOf[CatalogsProductGroupPinsList200Response]

    val path = "/catalogs/products/get_by_product_group_filters"

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("bookmark", Some(bookmarkQuery.toParamString(bookmark))), ("pageSize", Some(page_sizeQuery.toParamString(page_size))), ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(catalogsListProductsByFilterRequest)
      resp          <- client.expect[CatalogsProductGroupPinsList200Response](req)

    } yield resp
  }

}

class HttpServiceCatalogsApi(service: HttpService) {
  val client = Client.fromHttpService(service)

  def escape(value: String): String = URLEncoder.encode(value, "utf-8").replaceAll("\\+", "%20")

  def catalogsList(bookmark: String, pageSize: Integer = 25, adAccountId: String)(implicit bookmarkQuery: QueryParam[String], pageSizeQuery: QueryParam[Integer], adAccountIdQuery: QueryParam[String]): Task[CatalogsList200Response] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsList200Response] = jsonOf[CatalogsList200Response]

    val path = "/catalogs"

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("bookmark", Some(bookmarkQuery.toParamString(bookmark))), ("pageSize", Some(page_sizeQuery.toParamString(page_size))), ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsList200Response](req)

    } yield resp
  }

  def catalogsProductGroupPinsList(productGroupId: String, bookmark: String, pageSize: Integer = 25, adAccountId: String)(implicit bookmarkQuery: QueryParam[String], pageSizeQuery: QueryParam[Integer], adAccountIdQuery: QueryParam[String]): Task[CatalogsProductGroupPinsList200Response] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsProductGroupPinsList200Response] = jsonOf[CatalogsProductGroupPinsList200Response]

    val path = "/catalogs/product_groups/{product_group_id}/products".replaceAll("\\{" + "product_group_id" + "\\}",escape(productGroupId.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("bookmark", Some(bookmarkQuery.toParamString(bookmark))), ("pageSize", Some(page_sizeQuery.toParamString(page_size))), ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsProductGroupPinsList200Response](req)

    } yield resp
  }

  def catalogsProductGroupsCreate(catalogsProductGroupsCreateRequest: CatalogsProductGroupsCreateRequest, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsProductGroupsCreate201Response] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsProductGroupsCreate201Response] = jsonOf[CatalogsProductGroupsCreate201Response]

    val path = "/catalogs/product_groups"

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(catalogsProductGroupsCreateRequest)
      resp          <- client.expect[CatalogsProductGroupsCreate201Response](req)

    } yield resp
  }

  def catalogsProductGroupsDelete(productGroupId: String, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[Unit] = {
    val path = "/catalogs/product_groups/{product_group_id}".replaceAll("\\{" + "product_group_id" + "\\}",escape(productGroupId.toString))

    val httpMethod = Method.DELETE
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.fetch[Unit](req)(_ => Task.now(()))

    } yield resp
  }

  def catalogsProductGroupsGet(productGroupId: String, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsProductGroupsCreate201Response] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsProductGroupsCreate201Response] = jsonOf[CatalogsProductGroupsCreate201Response]

    val path = "/catalogs/product_groups/{product_group_id}".replaceAll("\\{" + "product_group_id" + "\\}",escape(productGroupId.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsProductGroupsCreate201Response](req)

    } yield resp
  }

  def catalogsProductGroupsList(feedId: String, catalogId: String, bookmark: String, pageSize: Integer = 25, adAccountId: String)(implicit feedIdQuery: QueryParam[String], catalogIdQuery: QueryParam[String], bookmarkQuery: QueryParam[String], pageSizeQuery: QueryParam[Integer], adAccountIdQuery: QueryParam[String]): Task[CatalogsProductGroupsList200Response] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsProductGroupsList200Response] = jsonOf[CatalogsProductGroupsList200Response]

    val path = "/catalogs/product_groups"

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("feedId", Some(feed_idQuery.toParamString(feed_id))), ("catalogId", Some(catalog_idQuery.toParamString(catalog_id))), ("bookmark", Some(bookmarkQuery.toParamString(bookmark))), ("pageSize", Some(page_sizeQuery.toParamString(page_size))), ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsProductGroupsList200Response](req)

    } yield resp
  }

  def catalogsProductGroupsProductCountsGet(productGroupId: String, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsProductGroupProductCounts] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsProductGroupProductCounts] = jsonOf[CatalogsProductGroupProductCounts]

    val path = "/catalogs/product_groups/{product_group_id}/product_counts".replaceAll("\\{" + "product_group_id" + "\\}",escape(productGroupId.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsProductGroupProductCounts](req)

    } yield resp
  }

  def catalogsProductGroupsUpdate(productGroupId: String, catalogsProductGroupsUpdateRequest: CatalogsProductGroupsUpdateRequest, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsProductGroupsCreate201Response] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsProductGroupsCreate201Response] = jsonOf[CatalogsProductGroupsCreate201Response]

    val path = "/catalogs/product_groups/{product_group_id}".replaceAll("\\{" + "product_group_id" + "\\}",escape(productGroupId.toString))

    val httpMethod = Method.PATCH
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(catalogsProductGroupsUpdateRequest)
      resp          <- client.expect[CatalogsProductGroupsCreate201Response](req)

    } yield resp
  }

  def feedProcessingResultsList(feedId: String, bookmark: String, pageSize: Integer = 25, adAccountId: String)(implicit bookmarkQuery: QueryParam[String], pageSizeQuery: QueryParam[Integer], adAccountIdQuery: QueryParam[String]): Task[FeedProcessingResultsList200Response] = {
    implicit val returnTypeDecoder: EntityDecoder[FeedProcessingResultsList200Response] = jsonOf[FeedProcessingResultsList200Response]

    val path = "/catalogs/feeds/{feed_id}/processing_results".replaceAll("\\{" + "feed_id" + "\\}",escape(feedId.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("bookmark", Some(bookmarkQuery.toParamString(bookmark))), ("pageSize", Some(page_sizeQuery.toParamString(page_size))), ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[FeedProcessingResultsList200Response](req)

    } yield resp
  }

  def feedsCreate(feedsCreateRequest: FeedsCreateRequest, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsFeed] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsFeed] = jsonOf[CatalogsFeed]

    val path = "/catalogs/feeds"

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(feedsCreateRequest)
      resp          <- client.expect[CatalogsFeed](req)

    } yield resp
  }

  def feedsDelete(feedId: String, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[Unit] = {
    val path = "/catalogs/feeds/{feed_id}".replaceAll("\\{" + "feed_id" + "\\}",escape(feedId.toString))

    val httpMethod = Method.DELETE
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.fetch[Unit](req)(_ => Task.now(()))

    } yield resp
  }

  def feedsGet(feedId: String, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsFeed] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsFeed] = jsonOf[CatalogsFeed]

    val path = "/catalogs/feeds/{feed_id}".replaceAll("\\{" + "feed_id" + "\\}",escape(feedId.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsFeed](req)

    } yield resp
  }

  def feedsList(bookmark: String, pageSize: Integer = 25, catalogId: String, adAccountId: String)(implicit bookmarkQuery: QueryParam[String], pageSizeQuery: QueryParam[Integer], catalogIdQuery: QueryParam[String], adAccountIdQuery: QueryParam[String]): Task[FeedsList200Response] = {
    implicit val returnTypeDecoder: EntityDecoder[FeedsList200Response] = jsonOf[FeedsList200Response]

    val path = "/catalogs/feeds"

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("bookmark", Some(bookmarkQuery.toParamString(bookmark))), ("pageSize", Some(page_sizeQuery.toParamString(page_size))), ("catalogId", Some(catalog_idQuery.toParamString(catalog_id))), ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[FeedsList200Response](req)

    } yield resp
  }

  def feedsUpdate(feedId: String, feedsUpdateRequest: FeedsUpdateRequest, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsFeed] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsFeed] = jsonOf[CatalogsFeed]

    val path = "/catalogs/feeds/{feed_id}".replaceAll("\\{" + "feed_id" + "\\}",escape(feedId.toString))

    val httpMethod = Method.PATCH
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(feedsUpdateRequest)
      resp          <- client.expect[CatalogsFeed](req)

    } yield resp
  }

  def itemsBatchGet(batchId: String, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsItemsBatch] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsItemsBatch] = jsonOf[CatalogsItemsBatch]

    val path = "/catalogs/items/batch/{batch_id}".replaceAll("\\{" + "batch_id" + "\\}",escape(batchId.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsItemsBatch](req)

    } yield resp
  }

  def itemsBatchPost(itemsBatchPostRequest: ItemsBatchPostRequest, adAccountId: String)(implicit adAccountIdQuery: QueryParam[String]): Task[CatalogsItemsBatch] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsItemsBatch] = jsonOf[CatalogsItemsBatch]

    val path = "/catalogs/items/batch"

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(itemsBatchPostRequest)
      resp          <- client.expect[CatalogsItemsBatch](req)

    } yield resp
  }

  def itemsGet(country: String, language: String, adAccountId: String, itemIds: List[String] = List.empty[String] , filters: CatalogsItemsFilters)(implicit adAccountIdQuery: QueryParam[String], countryQuery: QueryParam[String], languageQuery: QueryParam[String], itemIdsQuery: QueryParam[List[String]], filtersQuery: QueryParam[CatalogsItemsFilters]): Task[CatalogsItems] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsItems] = jsonOf[CatalogsItems]

    val path = "/catalogs/items"

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))), ("country", Some(countryQuery.toParamString(country))), ("language", Some(languageQuery.toParamString(language))), ("itemIds", Some(item_idsQuery.toParamString(item_ids))), ("filters", Some(filtersQuery.toParamString(filters))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CatalogsItems](req)

    } yield resp
  }

  def itemsIssuesList(processingResultId: String, bookmark: String, pageSize: Integer = 25, itemNumbers: List[Integer] = List.empty[Integer] , itemValidationIssue: CatalogsItemValidationIssue, adAccountId: String)(implicit bookmarkQuery: QueryParam[String], pageSizeQuery: QueryParam[Integer], itemNumbersQuery: QueryParam[List[Integer]], itemValidationIssueQuery: QueryParam[CatalogsItemValidationIssue], adAccountIdQuery: QueryParam[String]): Task[ItemsIssuesList200Response] = {
    implicit val returnTypeDecoder: EntityDecoder[ItemsIssuesList200Response] = jsonOf[ItemsIssuesList200Response]

    val path = "/catalogs/processing_results/{processing_result_id}/item_issues".replaceAll("\\{" + "processing_result_id" + "\\}",escape(processingResultId.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("bookmark", Some(bookmarkQuery.toParamString(bookmark))), ("pageSize", Some(page_sizeQuery.toParamString(page_size))), ("itemNumbers", Some(item_numbersQuery.toParamString(item_numbers))), ("itemValidationIssue", Some(item_validation_issueQuery.toParamString(item_validation_issue))), ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[ItemsIssuesList200Response](req)

    } yield resp
  }

  def productsByProductGroupFilterList(catalogsListProductsByFilterRequest: CatalogsListProductsByFilterRequest, bookmark: String, pageSize: Integer = 25, adAccountId: String)(implicit bookmarkQuery: QueryParam[String], pageSizeQuery: QueryParam[Integer], adAccountIdQuery: QueryParam[String]): Task[CatalogsProductGroupPinsList200Response] = {
    implicit val returnTypeDecoder: EntityDecoder[CatalogsProductGroupPinsList200Response] = jsonOf[CatalogsProductGroupPinsList200Response]

    val path = "/catalogs/products/get_by_product_group_filters"

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("bookmark", Some(bookmarkQuery.toParamString(bookmark))), ("pageSize", Some(page_sizeQuery.toParamString(page_size))), ("adAccountId", Some(ad_account_idQuery.toParamString(ad_account_id))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(catalogsListProductsByFilterRequest)
      resp          <- client.expect[CatalogsProductGroupPinsList200Response](req)

    } yield resp
  }

}
