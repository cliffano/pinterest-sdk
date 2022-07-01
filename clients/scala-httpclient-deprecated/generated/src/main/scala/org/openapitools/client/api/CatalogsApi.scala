/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.api

import java.text.SimpleDateFormat

import org.openapitools.client.model.CatalogsFeed
import org.openapitools.client.model.CatalogsFeedsCreateRequest
import org.openapitools.client.model.CatalogsFeedsUpdateRequest
import org.openapitools.client.model.CatalogsItems
import org.openapitools.client.model.CatalogsItemsBatch
import org.openapitools.client.model.CatalogsItemsBatchRequest
import org.openapitools.client.model.CatalogsProductGroup
import org.openapitools.client.model.CatalogsProductGroupCreateRequest
import org.openapitools.client.model.CatalogsProductGroupUpdateRequest
import org.openapitools.client.model.Error
import org.openapitools.client.model.Paginated
import org.openapitools.client.{ApiInvoker, ApiException}

import collection.mutable
import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart
import com.wordnik.swagger.client._
import com.wordnik.swagger.client.ClientResponseReaders.Json4sFormatsReader._
import com.wordnik.swagger.client.RequestWriters.Json4sFormatsWriter._
import javax.ws.rs.core.Response.Status.Family

import java.net.URI
import java.io.File
import java.util.Date
import java.util.TimeZone
import javax.ws.rs.core.{MediaType, Response}

import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent._
import scala.concurrent.duration._
import scala.collection.mutable.HashMap
import scala.util.{Failure, Success, Try}

import org.json4s._

class CatalogsApi(
  val defBasePath: String = "https://api.pinterest.com/v5",
  defApiInvoker: ApiInvoker = ApiInvoker
) {
  private lazy val dateTimeFormatter = {
    val formatter = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZ")
    formatter.setTimeZone(TimeZone.getTimeZone("UTC"))
    formatter
  }
  private val dateFormatter = {
    val formatter = new SimpleDateFormat("yyyy-MM-dd")
    formatter.setTimeZone(TimeZone.getTimeZone("UTC"))
    formatter
  }
  implicit val formats = new org.json4s.DefaultFormats {
    override def dateFormatter = dateTimeFormatter
  }
  implicit val stringReader: ClientResponseReader[String] = ClientResponseReaders.StringReader
  implicit val unitReader: ClientResponseReader[Unit] = ClientResponseReaders.UnitReader
  implicit val jvalueReader: ClientResponseReader[JValue] = ClientResponseReaders.JValueReader
  implicit val jsonReader: ClientResponseReader[Nothing] = JsonFormatsReader
  implicit val stringWriter: RequestWriter[String] = RequestWriters.StringWriter
  implicit val jsonWriter: RequestWriter[Nothing] = JsonFormatsWriter

  var basePath: String = defBasePath
  var apiInvoker: ApiInvoker = defApiInvoker

  def addHeader(key: String, value: String): mutable.HashMap[String, String] = {
    apiInvoker.defaultHeaders += key -> value
  }

  val config: SwaggerConfig = SwaggerConfig.forUrl(new URI(defBasePath))
  val client = new RestClient(config)
  val helper = new CatalogsApiAsyncHelper(client, config)

  /**
   * Create product group
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Create product group to use in Catalogs.
   *
   * @param catalogsProductGroupCreateRequest Request object used to created a catalogs product group. 
   * @return Any
   */
  def catalogsProductGroupsCreate(catalogsProductGroupCreateRequest: CatalogsProductGroupCreateRequest): Option[Any] = {
    val await = Try(Await.result(catalogsProductGroupsCreateAsync(catalogsProductGroupCreateRequest), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Create product group asynchronously
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Create product group to use in Catalogs.
   *
   * @param catalogsProductGroupCreateRequest Request object used to created a catalogs product group. 
   * @return Future(Any)
   */
  def catalogsProductGroupsCreateAsync(catalogsProductGroupCreateRequest: CatalogsProductGroupCreateRequest): Future[Any] = {
      helper.catalogsProductGroupsCreate(catalogsProductGroupCreateRequest)
  }

  /**
   * Delete product group
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Delete a product group from being in use in Catalogs.
   *
   * @param productGroupId Unique identifier of a product group 
   * @return void
   */
  def catalogsProductGroupsDelete(productGroupId: String) = {
    val await = Try(Await.result(catalogsProductGroupsDeleteAsync(productGroupId), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Delete product group asynchronously
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Delete a product group from being in use in Catalogs.
   *
   * @param productGroupId Unique identifier of a product group 
   * @return Future(void)
   */
  def catalogsProductGroupsDeleteAsync(productGroupId: String) = {
      helper.catalogsProductGroupsDelete(productGroupId)
  }

  /**
   * Get product groups list
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get a list of product groups for a given Catalogs Feed Id.
   *
   * @param feedId Unique identifier of a feed 
   * @param bookmark Cursor used to fetch the next page of items (optional)
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
   * @return Paginated
   */
  def catalogsProductGroupsList(feedId: String, bookmark: Option[String] = None, pageSize: Option[Integer] = None): Option[Paginated] = {
    val await = Try(Await.result(catalogsProductGroupsListAsync(feedId, bookmark, pageSize), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Get product groups list asynchronously
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get a list of product groups for a given Catalogs Feed Id.
   *
   * @param feedId Unique identifier of a feed 
   * @param bookmark Cursor used to fetch the next page of items (optional)
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
   * @return Future(Paginated)
   */
  def catalogsProductGroupsListAsync(feedId: String, bookmark: Option[String] = None, pageSize: Option[Integer] = None): Future[Paginated] = {
      helper.catalogsProductGroupsList(feedId, bookmark, pageSize)
  }

  /**
   * Update product group
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Update product group to use in Catalogs.
   *
   * @param productGroupId Unique identifier of a product group 
   * @param catalogsProductGroupUpdateRequest Request object used to Update a catalogs product group. 
   * @return CatalogsProductGroup
   */
  def catalogsProductGroupsUpdate(productGroupId: String, catalogsProductGroupUpdateRequest: CatalogsProductGroupUpdateRequest): Option[CatalogsProductGroup] = {
    val await = Try(Await.result(catalogsProductGroupsUpdateAsync(productGroupId, catalogsProductGroupUpdateRequest), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Update product group asynchronously
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Update product group to use in Catalogs.
   *
   * @param productGroupId Unique identifier of a product group 
   * @param catalogsProductGroupUpdateRequest Request object used to Update a catalogs product group. 
   * @return Future(CatalogsProductGroup)
   */
  def catalogsProductGroupsUpdateAsync(productGroupId: String, catalogsProductGroupUpdateRequest: CatalogsProductGroupUpdateRequest): Future[CatalogsProductGroup] = {
      helper.catalogsProductGroupsUpdate(productGroupId, catalogsProductGroupUpdateRequest)
  }

  /**
   * List processing results for a given feed
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Fetch a feed processing results owned by the owner user account.
   *
   * @param feedId Unique identifier of a feed 
   * @param bookmark Cursor used to fetch the next page of items (optional)
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
   * @return Paginated
   */
  def feedProcessingResultsList(feedId: String, bookmark: Option[String] = None, pageSize: Option[Integer] = None): Option[Paginated] = {
    val await = Try(Await.result(feedProcessingResultsListAsync(feedId, bookmark, pageSize), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * List processing results for a given feed asynchronously
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Fetch a feed processing results owned by the owner user account.
   *
   * @param feedId Unique identifier of a feed 
   * @param bookmark Cursor used to fetch the next page of items (optional)
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
   * @return Future(Paginated)
   */
  def feedProcessingResultsListAsync(feedId: String, bookmark: Option[String] = None, pageSize: Option[Integer] = None): Future[Paginated] = {
      helper.feedProcessingResultsList(feedId, bookmark, pageSize)
  }

  /**
   * Create feed
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Create a new feed owned by the \&quot;operating user_account\&quot;.
   *
   * @param catalogsFeedsCreateRequest Request object used to created a feed. 
   * @return CatalogsFeed
   */
  def feedsCreate(catalogsFeedsCreateRequest: CatalogsFeedsCreateRequest): Option[CatalogsFeed] = {
    val await = Try(Await.result(feedsCreateAsync(catalogsFeedsCreateRequest), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Create feed asynchronously
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Create a new feed owned by the \&quot;operating user_account\&quot;.
   *
   * @param catalogsFeedsCreateRequest Request object used to created a feed. 
   * @return Future(CatalogsFeed)
   */
  def feedsCreateAsync(catalogsFeedsCreateRequest: CatalogsFeedsCreateRequest): Future[CatalogsFeed] = {
      helper.feedsCreate(catalogsFeedsCreateRequest)
  }

  /**
   * Delete feed
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Delete a feed owned by the \&quot;operating user_account\&quot;.
   *
   * @param feedId Unique identifier of a feed 
   * @return void
   */
  def feedsDelete(feedId: String) = {
    val await = Try(Await.result(feedsDeleteAsync(feedId), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Delete feed asynchronously
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Delete a feed owned by the \&quot;operating user_account\&quot;.
   *
   * @param feedId Unique identifier of a feed 
   * @return Future(void)
   */
  def feedsDeleteAsync(feedId: String) = {
      helper.feedsDelete(feedId)
  }

  /**
   * Get feed
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get a single feed owned by the \&quot;operating user_account\&quot;.
   *
   * @param feedId Unique identifier of a feed 
   * @return CatalogsFeed
   */
  def feedsGet(feedId: String): Option[CatalogsFeed] = {
    val await = Try(Await.result(feedsGetAsync(feedId), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Get feed asynchronously
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get a single feed owned by the \&quot;operating user_account\&quot;.
   *
   * @param feedId Unique identifier of a feed 
   * @return Future(CatalogsFeed)
   */
  def feedsGetAsync(feedId: String): Future[CatalogsFeed] = {
      helper.feedsGet(feedId)
  }

  /**
   * List feeds
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Fetch feeds owned by the \&quot;operating user_account\&quot;.
   *
   * @param bookmark Cursor used to fetch the next page of items (optional)
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
   * @return Paginated
   */
  def feedsList(bookmark: Option[String] = None, pageSize: Option[Integer] = None): Option[Paginated] = {
    val await = Try(Await.result(feedsListAsync(bookmark, pageSize), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * List feeds asynchronously
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Fetch feeds owned by the \&quot;operating user_account\&quot;.
   *
   * @param bookmark Cursor used to fetch the next page of items (optional)
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
   * @return Future(Paginated)
   */
  def feedsListAsync(bookmark: Option[String] = None, pageSize: Option[Integer] = None): Future[Paginated] = {
      helper.feedsList(bookmark, pageSize)
  }

  /**
   * Update feed
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Update a feed owned by the \&quot;operating user_account\&quot;.
   *
   * @param feedId Unique identifier of a feed 
   * @param catalogsFeedsUpdateRequest Request object used to update a feed. 
   * @return CatalogsFeed
   */
  def feedsUpdate(feedId: String, catalogsFeedsUpdateRequest: CatalogsFeedsUpdateRequest): Option[CatalogsFeed] = {
    val await = Try(Await.result(feedsUpdateAsync(feedId, catalogsFeedsUpdateRequest), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Update feed asynchronously
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Update a feed owned by the \&quot;operating user_account\&quot;.
   *
   * @param feedId Unique identifier of a feed 
   * @param catalogsFeedsUpdateRequest Request object used to update a feed. 
   * @return Future(CatalogsFeed)
   */
  def feedsUpdateAsync(feedId: String, catalogsFeedsUpdateRequest: CatalogsFeedsUpdateRequest): Future[CatalogsFeed] = {
      helper.feedsUpdate(feedId, catalogsFeedsUpdateRequest)
  }

  /**
   * Get catalogs items batch
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get a single catalogs items batch created by the \&quot;operating user_account\&quot;.
   *
   * @param batchId Id of a catalogs items batch to fetch 
   * @return CatalogsItemsBatch
   */
  def itemsBatchGet(batchId: String): Option[CatalogsItemsBatch] = {
    val await = Try(Await.result(itemsBatchGetAsync(batchId), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Get catalogs items batch asynchronously
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get a single catalogs items batch created by the \&quot;operating user_account\&quot;.
   *
   * @param batchId Id of a catalogs items batch to fetch 
   * @return Future(CatalogsItemsBatch)
   */
  def itemsBatchGetAsync(batchId: String): Future[CatalogsItemsBatch] = {
      helper.itemsBatchGet(batchId)
  }

  /**
   * Perform an operation on an item batch
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  This endpoint supports multiple operations on a set of one or more catalog items.
   *
   * @param catalogsItemsBatchRequest Request object used to create catalogs items in a batch 
   * @return CatalogsItemsBatch
   */
  def itemsBatchPost(catalogsItemsBatchRequest: CatalogsItemsBatchRequest): Option[CatalogsItemsBatch] = {
    val await = Try(Await.result(itemsBatchPostAsync(catalogsItemsBatchRequest), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Perform an operation on an item batch asynchronously
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  This endpoint supports multiple operations on a set of one or more catalog items.
   *
   * @param catalogsItemsBatchRequest Request object used to create catalogs items in a batch 
   * @return Future(CatalogsItemsBatch)
   */
  def itemsBatchPostAsync(catalogsItemsBatchRequest: CatalogsItemsBatchRequest): Future[CatalogsItemsBatch] = {
      helper.itemsBatchPost(catalogsItemsBatchRequest)
  }

  /**
   * Get catalogs items
   * Get the items of the catalog created by the \&quot;operating user_account\&quot;
   *
   * @param country Country for the Catalogs Items 
   * @param itemIds Catalos Item ids 
   * @param language Language for the Catalogs Items 
   * @return CatalogsItems
   */
  def itemsGet(country: String, itemIds: List[String], language: String): Option[CatalogsItems] = {
    val await = Try(Await.result(itemsGetAsync(country, itemIds, language), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   * Get catalogs items asynchronously
   * Get the items of the catalog created by the \&quot;operating user_account\&quot;
   *
   * @param country Country for the Catalogs Items 
   * @param itemIds Catalos Item ids 
   * @param language Language for the Catalogs Items 
   * @return Future(CatalogsItems)
   */
  def itemsGetAsync(country: String, itemIds: List[String], language: String): Future[CatalogsItems] = {
      helper.itemsGet(country, itemIds, language)
  }

}

class CatalogsApiAsyncHelper(client: TransportClient, config: SwaggerConfig) extends ApiClient(client, config) {

  def catalogsProductGroupsCreate(catalogsProductGroupCreateRequest: CatalogsProductGroupCreateRequest)(implicit reader: ClientResponseReader[Any], writer: RequestWriter[CatalogsProductGroupCreateRequest]): Future[Any] = {
    // create path and map variables
    val path = (addFmt("/catalogs/product_groups"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (catalogsProductGroupCreateRequest == null) throw new Exception("Missing required parameter 'catalogsProductGroupCreateRequest' when calling CatalogsApi->catalogsProductGroupsCreate")

    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, writer.write(catalogsProductGroupCreateRequest))
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }

  def catalogsProductGroupsDelete(productGroupId: String)(implicit reader: ClientResponseReader[Unit]): Future[Unit] = {
    // create path and map variables
    val path = (addFmt("/catalogs/product_groups/{product_group_id}")
      replaceAll("\\{" + "product_group_id" + "\\}", productGroupId.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (productGroupId == null) throw new Exception("Missing required parameter 'productGroupId' when calling CatalogsApi->catalogsProductGroupsDelete")


    val resFuture = client.submit("DELETE", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }

  def catalogsProductGroupsList(feedId: String,
    bookmark: Option[String] = None,
    pageSize: Option[Integer] = None
    )(implicit reader: ClientResponseReader[Paginated]): Future[Paginated] = {
    // create path and map variables
    val path = (addFmt("/catalogs/product_groups"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (feedId == null) throw new Exception("Missing required parameter 'feedId' when calling CatalogsApi->catalogsProductGroupsList")

    queryParams += "feed_id" -> feedId.toString
    bookmark match {
      case Some(param) => queryParams += "bookmark" -> param.toString
      case _ => queryParams
    }
    pageSize match {
      case Some(param) => queryParams += "page_size" -> param.toString
      case _ => queryParams
    }

    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }

  def catalogsProductGroupsUpdate(productGroupId: String,
    catalogsProductGroupUpdateRequest: CatalogsProductGroupUpdateRequest)(implicit reader: ClientResponseReader[CatalogsProductGroup], writer: RequestWriter[CatalogsProductGroupUpdateRequest]): Future[CatalogsProductGroup] = {
    // create path and map variables
    val path = (addFmt("/catalogs/product_groups/{product_group_id}")
      replaceAll("\\{" + "product_group_id" + "\\}", productGroupId.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (productGroupId == null) throw new Exception("Missing required parameter 'productGroupId' when calling CatalogsApi->catalogsProductGroupsUpdate")

    if (catalogsProductGroupUpdateRequest == null) throw new Exception("Missing required parameter 'catalogsProductGroupUpdateRequest' when calling CatalogsApi->catalogsProductGroupsUpdate")

    val resFuture = client.submit("PATCH", path, queryParams.toMap, headerParams.toMap, writer.write(catalogsProductGroupUpdateRequest))
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }

  def feedProcessingResultsList(feedId: String,
    bookmark: Option[String] = None,
    pageSize: Option[Integer] = None
    )(implicit reader: ClientResponseReader[Paginated]): Future[Paginated] = {
    // create path and map variables
    val path = (addFmt("/catalogs/feeds/{feed_id}/processing_results")
      replaceAll("\\{" + "feed_id" + "\\}", feedId.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (feedId == null) throw new Exception("Missing required parameter 'feedId' when calling CatalogsApi->feedProcessingResultsList")

    bookmark match {
      case Some(param) => queryParams += "bookmark" -> param.toString
      case _ => queryParams
    }
    pageSize match {
      case Some(param) => queryParams += "page_size" -> param.toString
      case _ => queryParams
    }

    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }

  def feedsCreate(catalogsFeedsCreateRequest: CatalogsFeedsCreateRequest)(implicit reader: ClientResponseReader[CatalogsFeed], writer: RequestWriter[CatalogsFeedsCreateRequest]): Future[CatalogsFeed] = {
    // create path and map variables
    val path = (addFmt("/catalogs/feeds"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (catalogsFeedsCreateRequest == null) throw new Exception("Missing required parameter 'catalogsFeedsCreateRequest' when calling CatalogsApi->feedsCreate")

    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, writer.write(catalogsFeedsCreateRequest))
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }

  def feedsDelete(feedId: String)(implicit reader: ClientResponseReader[Unit]): Future[Unit] = {
    // create path and map variables
    val path = (addFmt("/catalogs/feeds/{feed_id}")
      replaceAll("\\{" + "feed_id" + "\\}", feedId.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (feedId == null) throw new Exception("Missing required parameter 'feedId' when calling CatalogsApi->feedsDelete")


    val resFuture = client.submit("DELETE", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }

  def feedsGet(feedId: String)(implicit reader: ClientResponseReader[CatalogsFeed]): Future[CatalogsFeed] = {
    // create path and map variables
    val path = (addFmt("/catalogs/feeds/{feed_id}")
      replaceAll("\\{" + "feed_id" + "\\}", feedId.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (feedId == null) throw new Exception("Missing required parameter 'feedId' when calling CatalogsApi->feedsGet")


    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }

  def feedsList(bookmark: Option[String] = None,
    pageSize: Option[Integer] = None
    )(implicit reader: ClientResponseReader[Paginated]): Future[Paginated] = {
    // create path and map variables
    val path = (addFmt("/catalogs/feeds"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    bookmark match {
      case Some(param) => queryParams += "bookmark" -> param.toString
      case _ => queryParams
    }
    pageSize match {
      case Some(param) => queryParams += "page_size" -> param.toString
      case _ => queryParams
    }

    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }

  def feedsUpdate(feedId: String,
    catalogsFeedsUpdateRequest: CatalogsFeedsUpdateRequest)(implicit reader: ClientResponseReader[CatalogsFeed], writer: RequestWriter[CatalogsFeedsUpdateRequest]): Future[CatalogsFeed] = {
    // create path and map variables
    val path = (addFmt("/catalogs/feeds/{feed_id}")
      replaceAll("\\{" + "feed_id" + "\\}", feedId.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (feedId == null) throw new Exception("Missing required parameter 'feedId' when calling CatalogsApi->feedsUpdate")

    if (catalogsFeedsUpdateRequest == null) throw new Exception("Missing required parameter 'catalogsFeedsUpdateRequest' when calling CatalogsApi->feedsUpdate")

    val resFuture = client.submit("PATCH", path, queryParams.toMap, headerParams.toMap, writer.write(catalogsFeedsUpdateRequest))
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }

  def itemsBatchGet(batchId: String)(implicit reader: ClientResponseReader[CatalogsItemsBatch]): Future[CatalogsItemsBatch] = {
    // create path and map variables
    val path = (addFmt("/catalogs/items/batch/{batch_id}")
      replaceAll("\\{" + "batch_id" + "\\}", batchId.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (batchId == null) throw new Exception("Missing required parameter 'batchId' when calling CatalogsApi->itemsBatchGet")


    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }

  def itemsBatchPost(catalogsItemsBatchRequest: CatalogsItemsBatchRequest)(implicit reader: ClientResponseReader[CatalogsItemsBatch], writer: RequestWriter[CatalogsItemsBatchRequest]): Future[CatalogsItemsBatch] = {
    // create path and map variables
    val path = (addFmt("/catalogs/items/batch"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (catalogsItemsBatchRequest == null) throw new Exception("Missing required parameter 'catalogsItemsBatchRequest' when calling CatalogsApi->itemsBatchPost")

    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, writer.write(catalogsItemsBatchRequest))
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }

  def itemsGet(country: String,
    itemIds: List[String],
    language: String)(implicit reader: ClientResponseReader[CatalogsItems]): Future[CatalogsItems] = {
    // create path and map variables
    val path = (addFmt("/catalogs/items"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (country == null) throw new Exception("Missing required parameter 'country' when calling CatalogsApi->itemsGet")

    if (itemIds == null) throw new Exception("Missing required parameter 'itemIds' when calling CatalogsApi->itemsGet")
    if (language == null) throw new Exception("Missing required parameter 'language' when calling CatalogsApi->itemsGet")

    queryParams += "country" -> country.toString
    queryParams += "item_ids" -> itemIds.toString
    queryParams += "language" -> language.toString

    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      val status = Response.Status.fromStatusCode(resp.statusCode)
      status.getFamily match {
        case Family.SUCCESSFUL | Family.REDIRECTION | Family.INFORMATIONAL => process(reader.read(resp))
        case _ => throw new ApiException(resp.statusCode, resp.statusText)
      }
    }
  }


}
