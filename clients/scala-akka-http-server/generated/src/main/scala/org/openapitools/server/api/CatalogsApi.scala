package org.openapitools.server.api

import akka.http.scaladsl.server.Directives._
import akka.http.scaladsl.server.Route
import akka.http.scaladsl.model.StatusCodes
import akka.http.scaladsl.server.{PathMatcher, PathMatcher1}
import akka.http.scaladsl.marshalling.ToEntityMarshaller
import akka.http.scaladsl.unmarshalling.FromEntityUnmarshaller
import akka.http.scaladsl.unmarshalling.FromStringUnmarshaller
import org.openapitools.server.AkkaHttpHelper._
import org.openapitools.server.model.CatalogsFeed
import org.openapitools.server.model.CatalogsItemValidationIssue
import org.openapitools.server.model.CatalogsItems
import org.openapitools.server.model.CatalogsItemsBatch
import org.openapitools.server.model.CatalogsItemsFilters
import org.openapitools.server.model.CatalogsList200Response
import org.openapitools.server.model.CatalogsListProductsByFilterRequest
import org.openapitools.server.model.CatalogsProductGroupPinsList200Response
import org.openapitools.server.model.CatalogsProductGroupProductCounts
import org.openapitools.server.model.CatalogsProductGroupsCreate201Response
import org.openapitools.server.model.CatalogsProductGroupsCreateRequest
import org.openapitools.server.model.CatalogsProductGroupsList200Response
import org.openapitools.server.model.CatalogsProductGroupsUpdateRequest
import org.openapitools.server.model.Error
import org.openapitools.server.model.FeedProcessingResultsList200Response
import org.openapitools.server.model.FeedsCreateRequest
import org.openapitools.server.model.FeedsList200Response
import org.openapitools.server.model.FeedsUpdateRequest
import org.openapitools.server.model.ItemsBatchPostRequest
import org.openapitools.server.model.ItemsIssuesList200Response


class CatalogsApi(
    catalogsService: CatalogsApiService,
    catalogsMarshaller: CatalogsApiMarshaller
) {

  import CatalogsApiPatterns.productGroupIdPattern
import CatalogsApiPatterns.processingResultIdPattern
import CatalogsApiPatterns.feedIdPattern

  import catalogsMarshaller._

  lazy val route: Route =
    path("catalogs") { 
      get { 
        parameters("bookmark".as[String].?, "page_size".as[Int].?(25), "ad_account_id".as[String].?) { (bookmark, pageSize, adAccountId) => 
            catalogsService.catalogsList(bookmark = bookmark, pageSize = pageSize, adAccountId = adAccountId)
        }
      }
    } ~
    path("catalogs" / "product_groups" / productGroupIdPattern / "products") { (productGroupId) => 
      get { 
        parameters("bookmark".as[String].?, "page_size".as[Int].?(25), "ad_account_id".as[String].?) { (bookmark, pageSize, adAccountId) => 
            catalogsService.catalogsProductGroupPinsList(productGroupId = productGroupId, bookmark = bookmark, pageSize = pageSize, adAccountId = adAccountId)
        }
      }
    } ~
    path("catalogs" / "product_groups") { 
      post { 
        parameters("ad_account_id".as[String].?) { (adAccountId) => 
            entity(as[CatalogsProductGroupsCreateRequest]){ catalogsProductGroupsCreateRequest =>
              catalogsService.catalogsProductGroupsCreate(catalogsProductGroupsCreateRequest = catalogsProductGroupsCreateRequest, adAccountId = adAccountId)
            }
        }
      }
    } ~
    path("catalogs" / "product_groups" / productGroupIdPattern) { (productGroupId) => 
      delete { 
        parameters("ad_account_id".as[String].?) { (adAccountId) => 
            catalogsService.catalogsProductGroupsDelete(productGroupId = productGroupId, adAccountId = adAccountId)
        }
      }
    } ~
    path("catalogs" / "product_groups" / productGroupIdPattern) { (productGroupId) => 
      get { 
        parameters("ad_account_id".as[String].?) { (adAccountId) => 
            catalogsService.catalogsProductGroupsGet(productGroupId = productGroupId, adAccountId = adAccountId)
        }
      }
    } ~
    path("catalogs" / "product_groups") { 
      get { 
        parameters("feed_id".as[String].?, "catalog_id".as[String].?, "bookmark".as[String].?, "page_size".as[Int].?(25), "ad_account_id".as[String].?) { (feedId, catalogId, bookmark, pageSize, adAccountId) => 
            catalogsService.catalogsProductGroupsList(feedId = feedId, catalogId = catalogId, bookmark = bookmark, pageSize = pageSize, adAccountId = adAccountId)
        }
      }
    } ~
    path("catalogs" / "product_groups" / productGroupIdPattern / "product_counts") { (productGroupId) => 
      get { 
        parameters("ad_account_id".as[String].?) { (adAccountId) => 
            catalogsService.catalogsProductGroupsProductCountsGet(productGroupId = productGroupId, adAccountId = adAccountId)
        }
      }
    } ~
    path("catalogs" / "product_groups" / productGroupIdPattern) { (productGroupId) => 
      patch { 
        parameters("ad_account_id".as[String].?) { (adAccountId) => 
            entity(as[CatalogsProductGroupsUpdateRequest]){ catalogsProductGroupsUpdateRequest =>
              catalogsService.catalogsProductGroupsUpdate(productGroupId = productGroupId, catalogsProductGroupsUpdateRequest = catalogsProductGroupsUpdateRequest, adAccountId = adAccountId)
            }
        }
      }
    } ~
    path("catalogs" / "feeds" / feedIdPattern / "processing_results") { (feedId) => 
      get { 
        parameters("bookmark".as[String].?, "page_size".as[Int].?(25), "ad_account_id".as[String].?) { (bookmark, pageSize, adAccountId) => 
            catalogsService.feedProcessingResultsList(feedId = feedId, bookmark = bookmark, pageSize = pageSize, adAccountId = adAccountId)
        }
      }
    } ~
    path("catalogs" / "feeds") { 
      post { 
        parameters("ad_account_id".as[String].?) { (adAccountId) => 
            entity(as[FeedsCreateRequest]){ feedsCreateRequest =>
              catalogsService.feedsCreate(feedsCreateRequest = feedsCreateRequest, adAccountId = adAccountId)
            }
        }
      }
    } ~
    path("catalogs" / "feeds" / feedIdPattern) { (feedId) => 
      delete { 
        parameters("ad_account_id".as[String].?) { (adAccountId) => 
            catalogsService.feedsDelete(feedId = feedId, adAccountId = adAccountId)
        }
      }
    } ~
    path("catalogs" / "feeds" / feedIdPattern) { (feedId) => 
      get { 
        parameters("ad_account_id".as[String].?) { (adAccountId) => 
            catalogsService.feedsGet(feedId = feedId, adAccountId = adAccountId)
        }
      }
    } ~
    path("catalogs" / "feeds") { 
      get { 
        parameters("bookmark".as[String].?, "page_size".as[Int].?(25), "catalog_id".as[String].?, "ad_account_id".as[String].?) { (bookmark, pageSize, catalogId, adAccountId) => 
            catalogsService.feedsList(bookmark = bookmark, pageSize = pageSize, catalogId = catalogId, adAccountId = adAccountId)
        }
      }
    } ~
    path("catalogs" / "feeds" / feedIdPattern) { (feedId) => 
      patch { 
        parameters("ad_account_id".as[String].?) { (adAccountId) => 
            entity(as[FeedsUpdateRequest]){ feedsUpdateRequest =>
              catalogsService.feedsUpdate(feedId = feedId, feedsUpdateRequest = feedsUpdateRequest, adAccountId = adAccountId)
            }
        }
      }
    } ~
    path("catalogs" / "items" / "batch" / Segment) { (batchId) => 
      get { 
        parameters("ad_account_id".as[String].?) { (adAccountId) => 
            catalogsService.itemsBatchGet(batchId = batchId, adAccountId = adAccountId)
        }
      }
    } ~
    path("catalogs" / "items" / "batch") { 
      post { 
        parameters("ad_account_id".as[String].?) { (adAccountId) => 
            entity(as[ItemsBatchPostRequest]){ itemsBatchPostRequest =>
              catalogsService.itemsBatchPost(itemsBatchPostRequest = itemsBatchPostRequest, adAccountId = adAccountId)
            }
        }
      }
    } ~
    path("catalogs" / "items") { 
      get { 
        parameters("ad_account_id".as[String].?, "country".as[String], "language".as[String], "item_ids".as[String].?, "filters".as[String].?) { (adAccountId, country, language, itemIds, filters) => 
            catalogsService.itemsGet(country = country, language = language, adAccountId = adAccountId, itemIds = itemIds, filters = filters)
        }
      }
    } ~
    path("catalogs" / "processing_results" / processingResultIdPattern / "item_issues") { (processingResultId) => 
      get { 
        parameters("bookmark".as[String].?, "page_size".as[Int].?(25), "item_numbers".as[String].?, "item_validation_issue".as[String].?, "ad_account_id".as[String].?) { (bookmark, pageSize, itemNumbers, itemValidationIssue, adAccountId) => 
            catalogsService.itemsIssuesList(processingResultId = processingResultId, bookmark = bookmark, pageSize = pageSize, itemNumbers = itemNumbers, itemValidationIssue = itemValidationIssue, adAccountId = adAccountId)
        }
      }
    } ~
    path("catalogs" / "products" / "get_by_product_group_filters") { 
      post { 
        parameters("bookmark".as[String].?, "page_size".as[Int].?(25), "ad_account_id".as[String].?) { (bookmark, pageSize, adAccountId) => 
            entity(as[CatalogsListProductsByFilterRequest]){ catalogsListProductsByFilterRequest =>
              catalogsService.productsByProductGroupFilterList(catalogsListProductsByFilterRequest = catalogsListProductsByFilterRequest, bookmark = bookmark, pageSize = pageSize, adAccountId = adAccountId)
            }
        }
      }
    }
}

object CatalogsApiPatterns {

    val productGroupIdPattern: PathMatcher1[String] = PathMatcher("^\\d+$".r)
val processingResultIdPattern: PathMatcher1[String] = PathMatcher("^\\d+$".r)
val feedIdPattern: PathMatcher1[String] = PathMatcher("^\\d+$".r)
}

trait CatalogsApiService {

  def catalogsList200(responseCatalogsList200Response: CatalogsList200Response)(implicit toEntityMarshallerCatalogsList200Response: ToEntityMarshaller[CatalogsList200Response]): Route =
    complete((200, responseCatalogsList200Response))
  def catalogsList400(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((400, responseError))
  def catalogsList401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def catalogsListDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 200, Message: Success, DataType: CatalogsList200Response
   * Code: 400, Message: Invalid parameters., DataType: Error
   * Code: 401, Message: Unauthorized access., DataType: Error
   * Code: 0, Message: Unexpected error., DataType: Error
   */
  def catalogsList(bookmark: Option[String], pageSize: Int, adAccountId: Option[String])
      (implicit toEntityMarshallerCatalogsList200Response: ToEntityMarshaller[CatalogsList200Response], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def catalogsProductGroupPinsList200(responseCatalogsProductGroupPinsList200Response: CatalogsProductGroupPinsList200Response)(implicit toEntityMarshallerCatalogsProductGroupPinsList200Response: ToEntityMarshaller[CatalogsProductGroupPinsList200Response]): Route =
    complete((200, responseCatalogsProductGroupPinsList200Response))
  def catalogsProductGroupPinsList400(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((400, responseError))
  def catalogsProductGroupPinsList401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def catalogsProductGroupPinsList404(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((404, responseError))
  def catalogsProductGroupPinsListDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 200, Message: Success, DataType: CatalogsProductGroupPinsList200Response
   * Code: 400, Message: Invalid parameters., DataType: Error
   * Code: 401, Message: Unauthorized access., DataType: Error
   * Code: 404, Message: Catalogs product group not found., DataType: Error
   * Code: 0, Message: Unexpected error., DataType: Error
   */
  def catalogsProductGroupPinsList(productGroupId: String, bookmark: Option[String], pageSize: Int, adAccountId: Option[String])
      (implicit toEntityMarshallerCatalogsProductGroupPinsList200Response: ToEntityMarshaller[CatalogsProductGroupPinsList200Response], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def catalogsProductGroupsCreate201(responseCatalogsProductGroupsCreate201Response: CatalogsProductGroupsCreate201Response)(implicit toEntityMarshallerCatalogsProductGroupsCreate201Response: ToEntityMarshaller[CatalogsProductGroupsCreate201Response]): Route =
    complete((201, responseCatalogsProductGroupsCreate201Response))
  def catalogsProductGroupsCreate400(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((400, responseError))
  def catalogsProductGroupsCreate401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def catalogsProductGroupsCreate403(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((403, responseError))
  def catalogsProductGroupsCreate409(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((409, responseError))
  def catalogsProductGroupsCreateDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 201, Message: Success, DataType: CatalogsProductGroupsCreate201Response
   * Code: 400, Message: Invalid body., DataType: Error
   * Code: 401, Message: Unauthorized access., DataType: Error
   * Code: 403, Message: Forbidden. Account not approved for catalog product group mutations yet., DataType: Error
   * Code: 409, Message: Conflict. Can&#39;t create this catalogs product group with this value., DataType: Error
   * Code: 0, Message: Unexpected error., DataType: Error
   */
  def catalogsProductGroupsCreate(catalogsProductGroupsCreateRequest: CatalogsProductGroupsCreateRequest, adAccountId: Option[String])
      (implicit toEntityMarshallerCatalogsProductGroupsCreate201Response: ToEntityMarshaller[CatalogsProductGroupsCreate201Response], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def catalogsProductGroupsDelete204: Route =
    complete((204, "Catalogs Product Group deleted successfully."))
  def catalogsProductGroupsDelete400(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((400, responseError))
  def catalogsProductGroupsDelete401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def catalogsProductGroupsDelete403(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((403, responseError))
  def catalogsProductGroupsDelete404(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((404, responseError))
  def catalogsProductGroupsDelete409(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((409, responseError))
  def catalogsProductGroupsDeleteDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 204, Message: Catalogs Product Group deleted successfully.
   * Code: 400, Message: Invalid catalogs product group id parameters., DataType: Error
   * Code: 401, Message: Unauthorized access., DataType: Error
   * Code: 403, Message: Forbidden. Account not approved for catalog product group mutations yet., DataType: Error
   * Code: 404, Message: Catalogs product group not found., DataType: Error
   * Code: 409, Message: Conflict. Can&#39;t delete this catalogs product group., DataType: Error
   * Code: 0, Message: Unexpected error., DataType: Error
   */
  def catalogsProductGroupsDelete(productGroupId: String, adAccountId: Option[String])
      (implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def catalogsProductGroupsGet200(responseCatalogsProductGroupsCreate201Response: CatalogsProductGroupsCreate201Response)(implicit toEntityMarshallerCatalogsProductGroupsCreate201Response: ToEntityMarshaller[CatalogsProductGroupsCreate201Response]): Route =
    complete((200, responseCatalogsProductGroupsCreate201Response))
  def catalogsProductGroupsGet400(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((400, responseError))
  def catalogsProductGroupsGet401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def catalogsProductGroupsGet403(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((403, responseError))
  def catalogsProductGroupsGet404(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((404, responseError))
  def catalogsProductGroupsGet409(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((409, responseError))
  def catalogsProductGroupsGetDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 200, Message: Success, DataType: CatalogsProductGroupsCreate201Response
   * Code: 400, Message: Invalid catalogs product group id parameters., DataType: Error
   * Code: 401, Message: Unauthorized access., DataType: Error
   * Code: 403, Message: Forbidden. Account not approved for catalog product group mutations yet., DataType: Error
   * Code: 404, Message: Catalogs product group not found., DataType: Error
   * Code: 409, Message: Conflict. Can&#39;t get a catalogs product group without an existing catalog., DataType: Error
   * Code: 0, Message: Unexpected error., DataType: Error
   */
  def catalogsProductGroupsGet(productGroupId: String, adAccountId: Option[String])
      (implicit toEntityMarshallerCatalogsProductGroupsCreate201Response: ToEntityMarshaller[CatalogsProductGroupsCreate201Response], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def catalogsProductGroupsList200(responseCatalogsProductGroupsList200Response: CatalogsProductGroupsList200Response)(implicit toEntityMarshallerCatalogsProductGroupsList200Response: ToEntityMarshaller[CatalogsProductGroupsList200Response]): Route =
    complete((200, responseCatalogsProductGroupsList200Response))
  def catalogsProductGroupsList400(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((400, responseError))
  def catalogsProductGroupsList401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def catalogsProductGroupsList403(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((403, responseError))
  def catalogsProductGroupsList404(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((404, responseError))
  def catalogsProductGroupsList409(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((409, responseError))
  def catalogsProductGroupsListDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 200, Message: Success, DataType: CatalogsProductGroupsList200Response
   * Code: 400, Message: Invalid feed parameters., DataType: Error
   * Code: 401, Message: Unauthorized access., DataType: Error
   * Code: 403, Message: Forbidden. Account not approved for catalog product group mutations yet., DataType: Error
   * Code: 404, Message: Data feed not found., DataType: Error
   * Code: 409, Message: Conflict. Can&#39;t create this catalogs product group with this value., DataType: Error
   * Code: 0, Message: Unexpected error., DataType: Error
   */
  def catalogsProductGroupsList(feedId: Option[String], catalogId: Option[String], bookmark: Option[String], pageSize: Int, adAccountId: Option[String])
      (implicit toEntityMarshallerCatalogsProductGroupsList200Response: ToEntityMarshaller[CatalogsProductGroupsList200Response], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def catalogsProductGroupsProductCountsGet200(responseCatalogsProductGroupProductCounts: CatalogsProductGroupProductCounts)(implicit toEntityMarshallerCatalogsProductGroupProductCounts: ToEntityMarshaller[CatalogsProductGroupProductCounts]): Route =
    complete((200, responseCatalogsProductGroupProductCounts))
  def catalogsProductGroupsProductCountsGet404(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((404, responseError))
  def catalogsProductGroupsProductCountsGet409(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((409, responseError))
  def catalogsProductGroupsProductCountsGetDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 200, Message: Success, DataType: CatalogsProductGroupProductCounts
   * Code: 404, Message: Product Group Not Found., DataType: Error
   * Code: 409, Message: Can&#39;t access this feature without an existing catalog., DataType: Error
   * Code: 0, Message: Unexpected error., DataType: Error
   */
  def catalogsProductGroupsProductCountsGet(productGroupId: String, adAccountId: Option[String])
      (implicit toEntityMarshallerCatalogsProductGroupProductCounts: ToEntityMarshaller[CatalogsProductGroupProductCounts], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def catalogsProductGroupsUpdate200(responseCatalogsProductGroupsCreate201Response: CatalogsProductGroupsCreate201Response)(implicit toEntityMarshallerCatalogsProductGroupsCreate201Response: ToEntityMarshaller[CatalogsProductGroupsCreate201Response]): Route =
    complete((200, responseCatalogsProductGroupsCreate201Response))
  def catalogsProductGroupsUpdate400(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((400, responseError))
  def catalogsProductGroupsUpdate401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def catalogsProductGroupsUpdate403(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((403, responseError))
  def catalogsProductGroupsUpdate404(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((404, responseError))
  def catalogsProductGroupsUpdate409(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((409, responseError))
  def catalogsProductGroupsUpdateDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 200, Message: Success, DataType: CatalogsProductGroupsCreate201Response
   * Code: 400, Message: Invalid parameters., DataType: Error
   * Code: 401, Message: Unauthorized access., DataType: Error
   * Code: 403, Message: Forbidden. Account not approved for catalog product group mutations yet., DataType: Error
   * Code: 404, Message: Catalogs product group not found., DataType: Error
   * Code: 409, Message: Conflict. Can&#39;t update this catalogs product group to this value., DataType: Error
   * Code: 0, Message: Unexpected error., DataType: Error
   */
  def catalogsProductGroupsUpdate(productGroupId: String, catalogsProductGroupsUpdateRequest: CatalogsProductGroupsUpdateRequest, adAccountId: Option[String])
      (implicit toEntityMarshallerCatalogsProductGroupsCreate201Response: ToEntityMarshaller[CatalogsProductGroupsCreate201Response], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def feedProcessingResultsList200(responseFeedProcessingResultsList200Response: FeedProcessingResultsList200Response)(implicit toEntityMarshallerFeedProcessingResultsList200Response: ToEntityMarshaller[FeedProcessingResultsList200Response]): Route =
    complete((200, responseFeedProcessingResultsList200Response))
  def feedProcessingResultsList400(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((400, responseError))
  def feedProcessingResultsList401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def feedProcessingResultsList404(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((404, responseError))
  def feedProcessingResultsListDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 200, Message: Success, DataType: FeedProcessingResultsList200Response
   * Code: 400, Message: Invalid parameters., DataType: Error
   * Code: 401, Message: Unauthorized access., DataType: Error
   * Code: 404, Message: Feed not found., DataType: Error
   * Code: 0, Message: Unexpected error., DataType: Error
   */
  def feedProcessingResultsList(feedId: String, bookmark: Option[String], pageSize: Int, adAccountId: Option[String])
      (implicit toEntityMarshallerError: ToEntityMarshaller[Error], toEntityMarshallerFeedProcessingResultsList200Response: ToEntityMarshaller[FeedProcessingResultsList200Response]): Route

  def feedsCreate201(responseCatalogsFeed: CatalogsFeed)(implicit toEntityMarshallerCatalogsFeed: ToEntityMarshaller[CatalogsFeed]): Route =
    complete((201, responseCatalogsFeed))
  def feedsCreate400(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((400, responseError))
  def feedsCreate401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def feedsCreate403(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((403, responseError))
  def feedsCreate409(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((409, responseError))
  def feedsCreate422(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((422, responseError))
  def feedsCreate501(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((501, responseError))
  def feedsCreateDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 201, Message: Success, DataType: CatalogsFeed
   * Code: 400, Message: Invalid feed parameters., DataType: Error
   * Code: 401, Message: Unauthorized access., DataType: Error
   * Code: 403, Message: Business account required., DataType: Error
   * Code: 409, Message: User website required., DataType: Error
   * Code: 422, Message: Unique feed name is required., DataType: Error
   * Code: 501, Message: Not implemented (absent \&quot;default_country\&quot; or \&quot;default_locale\&quot;)., DataType: Error
   * Code: 0, Message: Unexpected error, DataType: Error
   */
  def feedsCreate(feedsCreateRequest: FeedsCreateRequest, adAccountId: Option[String])
      (implicit toEntityMarshallerCatalogsFeed: ToEntityMarshaller[CatalogsFeed], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def feedsDelete204: Route =
    complete((204, "Feed deleted successfully."))
  def feedsDelete400(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((400, responseError))
  def feedsDelete403(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((403, responseError))
  def feedsDelete404(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((404, responseError))
  def feedsDelete409(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((409, responseError))
  def feedsDeleteDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 204, Message: Feed deleted successfully.
   * Code: 400, Message: Invalid feed parameters., DataType: Error
   * Code: 403, Message: Forbidden. Account not approved for feed mutations yet., DataType: Error
   * Code: 404, Message: Data feed not found., DataType: Error
   * Code: 409, Message: Conflict. Can&#39;t delete a feed with active promotions., DataType: Error
   * Code: 0, Message: Unexpected error, DataType: Error
   */
  def feedsDelete(feedId: String, adAccountId: Option[String])
      (implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def feedsGet200(responseCatalogsFeed: CatalogsFeed)(implicit toEntityMarshallerCatalogsFeed: ToEntityMarshaller[CatalogsFeed]): Route =
    complete((200, responseCatalogsFeed))
  def feedsGet400(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((400, responseError))
  def feedsGet401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def feedsGet404(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((404, responseError))
  def feedsGetDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 200, Message: Success, DataType: CatalogsFeed
   * Code: 400, Message: Invalid feed parameters., DataType: Error
   * Code: 401, Message: Unauthorized access., DataType: Error
   * Code: 404, Message: Data feed not found., DataType: Error
   * Code: 0, Message: Unexpected error., DataType: Error
   */
  def feedsGet(feedId: String, adAccountId: Option[String])
      (implicit toEntityMarshallerCatalogsFeed: ToEntityMarshaller[CatalogsFeed], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def feedsList200(responseFeedsList200Response: FeedsList200Response)(implicit toEntityMarshallerFeedsList200Response: ToEntityMarshaller[FeedsList200Response]): Route =
    complete((200, responseFeedsList200Response))
  def feedsList400(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((400, responseError))
  def feedsList401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def feedsListDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 200, Message: Success, DataType: FeedsList200Response
   * Code: 400, Message: Invalid parameters., DataType: Error
   * Code: 401, Message: Unauthorized access., DataType: Error
   * Code: 0, Message: Unexpected error., DataType: Error
   */
  def feedsList(bookmark: Option[String], pageSize: Int, catalogId: Option[String], adAccountId: Option[String])
      (implicit toEntityMarshallerFeedsList200Response: ToEntityMarshaller[FeedsList200Response], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def feedsUpdate200(responseCatalogsFeed: CatalogsFeed)(implicit toEntityMarshallerCatalogsFeed: ToEntityMarshaller[CatalogsFeed]): Route =
    complete((200, responseCatalogsFeed))
  def feedsUpdate400(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((400, responseError))
  def feedsUpdate403(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((403, responseError))
  def feedsUpdate404(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((404, responseError))
  def feedsUpdateDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 200, Message: Success, DataType: CatalogsFeed
   * Code: 400, Message: Invalid feed parameters., DataType: Error
   * Code: 403, Message: Forbidden. Account not approved for feed mutations yet., DataType: Error
   * Code: 404, Message: Data feed not found., DataType: Error
   * Code: 0, Message: Unexpected error, DataType: Error
   */
  def feedsUpdate(feedId: String, feedsUpdateRequest: FeedsUpdateRequest, adAccountId: Option[String])
      (implicit toEntityMarshallerCatalogsFeed: ToEntityMarshaller[CatalogsFeed], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def itemsBatchGet200(responseCatalogsItemsBatch: CatalogsItemsBatch)(implicit toEntityMarshallerCatalogsItemsBatch: ToEntityMarshaller[CatalogsItemsBatch]): Route =
    complete((200, responseCatalogsItemsBatch))
  def itemsBatchGet401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def itemsBatchGet403(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((403, responseError))
  def itemsBatchGet404(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((404, responseError))
  def itemsBatchGet405(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((405, responseError))
  def itemsBatchGetDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 200, Message: Response containing the requested catalogs items batch, DataType: CatalogsItemsBatch
   * Code: 401, Message: Not authenticated to access catalogs items batch, DataType: Error
   * Code: 403, Message: Not authorized to access catalogs items batch, DataType: Error
   * Code: 404, Message: Catalogs items batch not found, DataType: Error
   * Code: 405, Message: Method Not Allowed., DataType: Error
   * Code: 0, Message: Unexpected error, DataType: Error
   */
  def itemsBatchGet(batchId: String, adAccountId: Option[String])
      (implicit toEntityMarshallerCatalogsItemsBatch: ToEntityMarshaller[CatalogsItemsBatch], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def itemsBatchPost200(responseCatalogsItemsBatch: CatalogsItemsBatch)(implicit toEntityMarshallerCatalogsItemsBatch: ToEntityMarshaller[CatalogsItemsBatch]): Route =
    complete((200, responseCatalogsItemsBatch))
  def itemsBatchPost400(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((400, responseError))
  def itemsBatchPost401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def itemsBatchPost403(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((403, responseError))
  def itemsBatchPostDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 200, Message: Response containing the requested catalogs items batch, DataType: CatalogsItemsBatch
   * Code: 400, Message: Invalid request parameters., DataType: Error
   * Code: 401, Message: Not authenticated to post catalogs items, DataType: Error
   * Code: 403, Message: Not authorized to post catalogs items, DataType: Error
   * Code: 0, Message: Unexpected error, DataType: Error
   */
  def itemsBatchPost(itemsBatchPostRequest: ItemsBatchPostRequest, adAccountId: Option[String])
      (implicit toEntityMarshallerCatalogsItemsBatch: ToEntityMarshaller[CatalogsItemsBatch], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def itemsGet200(responseCatalogsItems: CatalogsItems)(implicit toEntityMarshallerCatalogsItems: ToEntityMarshaller[CatalogsItems]): Route =
    complete((200, responseCatalogsItems))
  def itemsGet400(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((400, responseError))
  def itemsGet401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def itemsGet403(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((403, responseError))
  def itemsGetDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 200, Message: Response containing the requested catalogs items, DataType: CatalogsItems
   * Code: 400, Message: Invalid request parameters., DataType: Error
   * Code: 401, Message: Not authorized to access catalogs items, DataType: Error
   * Code: 403, Message: Not authorized to access catalogs items, DataType: Error
   * Code: 0, Message: Unexpected error, DataType: Error
   */
  def itemsGet(country: String, language: String, adAccountId: Option[String], itemIds: Option[String], filters: Option[String])
      (implicit toEntityMarshallerCatalogsItems: ToEntityMarshaller[CatalogsItems], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def itemsIssuesList200(responseItemsIssuesList200Response: ItemsIssuesList200Response)(implicit toEntityMarshallerItemsIssuesList200Response: ToEntityMarshaller[ItemsIssuesList200Response]): Route =
    complete((200, responseItemsIssuesList200Response))
  def itemsIssuesList401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def itemsIssuesList404(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((404, responseError))
  def itemsIssuesList501(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((501, responseError))
  def itemsIssuesListDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 200, Message: Success, DataType: ItemsIssuesList200Response
   * Code: 401, Message: Unauthorized access., DataType: Error
   * Code: 404, Message: Processing Result not found., DataType: Error
   * Code: 501, Message: Not implemented., DataType: Error
   * Code: 0, Message: Unexpected error., DataType: Error
   */
  def itemsIssuesList(processingResultId: String, bookmark: Option[String], pageSize: Int, itemNumbers: Option[String], itemValidationIssue: Option[String], adAccountId: Option[String])
      (implicit toEntityMarshallerItemsIssuesList200Response: ToEntityMarshaller[ItemsIssuesList200Response], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

  def productsByProductGroupFilterList200(responseCatalogsProductGroupPinsList200Response: CatalogsProductGroupPinsList200Response)(implicit toEntityMarshallerCatalogsProductGroupPinsList200Response: ToEntityMarshaller[CatalogsProductGroupPinsList200Response]): Route =
    complete((200, responseCatalogsProductGroupPinsList200Response))
  def productsByProductGroupFilterList401(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((401, responseError))
  def productsByProductGroupFilterList409(responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((409, responseError))
  def productsByProductGroupFilterListDefault(statusCode: Int, responseError: Error)(implicit toEntityMarshallerError: ToEntityMarshaller[Error]): Route =
    complete((statusCode, responseError))
  /**
   * Code: 200, Message: Success, DataType: CatalogsProductGroupPinsList200Response
   * Code: 401, Message: Unauthorized access., DataType: Error
   * Code: 409, Message: Conflict. Can&#39;t get products., DataType: Error
   * Code: 0, Message: Unexpected error., DataType: Error
   */
  def productsByProductGroupFilterList(catalogsListProductsByFilterRequest: CatalogsListProductsByFilterRequest, bookmark: Option[String], pageSize: Int, adAccountId: Option[String])
      (implicit toEntityMarshallerCatalogsProductGroupPinsList200Response: ToEntityMarshaller[CatalogsProductGroupPinsList200Response], toEntityMarshallerError: ToEntityMarshaller[Error]): Route

}

trait CatalogsApiMarshaller {
  implicit def fromEntityUnmarshallerCatalogsProductGroupsCreateRequest: FromEntityUnmarshaller[CatalogsProductGroupsCreateRequest]

  implicit def fromEntityUnmarshallerCatalogsProductGroupsUpdateRequest: FromEntityUnmarshaller[CatalogsProductGroupsUpdateRequest]

  implicit def fromEntityUnmarshallerFeedsCreateRequest: FromEntityUnmarshaller[FeedsCreateRequest]

  implicit def fromEntityUnmarshallerCatalogsListProductsByFilterRequest: FromEntityUnmarshaller[CatalogsListProductsByFilterRequest]

  implicit def fromEntityUnmarshallerFeedsUpdateRequest: FromEntityUnmarshaller[FeedsUpdateRequest]

  implicit def fromEntityUnmarshallerItemsBatchPostRequest: FromEntityUnmarshaller[ItemsBatchPostRequest]



  implicit def toEntityMarshallerCatalogsProductGroupsCreate201Response: ToEntityMarshaller[CatalogsProductGroupsCreate201Response]

  implicit def toEntityMarshallerCatalogsFeed: ToEntityMarshaller[CatalogsFeed]

  implicit def toEntityMarshallerCatalogsItemsBatch: ToEntityMarshaller[CatalogsItemsBatch]

  implicit def toEntityMarshallerCatalogsList200Response: ToEntityMarshaller[CatalogsList200Response]

  implicit def toEntityMarshallerCatalogsProductGroupsList200Response: ToEntityMarshaller[CatalogsProductGroupsList200Response]

  implicit def toEntityMarshallerCatalogsItems: ToEntityMarshaller[CatalogsItems]

  implicit def toEntityMarshallerCatalogsProductGroupPinsList200Response: ToEntityMarshaller[CatalogsProductGroupPinsList200Response]

  implicit def toEntityMarshallerFeedsList200Response: ToEntityMarshaller[FeedsList200Response]

  implicit def toEntityMarshallerCatalogsProductGroupProductCounts: ToEntityMarshaller[CatalogsProductGroupProductCounts]

  implicit def toEntityMarshallerItemsIssuesList200Response: ToEntityMarshaller[ItemsIssuesList200Response]

  implicit def toEntityMarshallerError: ToEntityMarshaller[Error]

  implicit def toEntityMarshallerFeedProcessingResultsList200Response: ToEntityMarshaller[FeedProcessingResultsList200Response]

}
