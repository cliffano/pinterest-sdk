/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.api

import org.openapitools.client.model.Board
import org.openapitools.client.model.BoardSection
import org.openapitools.client.model.BoardSectionsList200Response
import org.openapitools.client.model.BoardUpdate
import org.openapitools.client.model.BoardsList200Response
import org.openapitools.client.model.BoardsListPins200Response
import org.openapitools.client.model.Error
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

object BoardsApi {

  def apply(baseUrl: String = "https://api.pinterest.com/v5") = new BoardsApi(baseUrl)
}

class BoardsApi(baseUrl: String) {

  /**
   * Create a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
   * 
   * Expected answers:
   *   code 201 : BoardSection (response)
   *   code 400 : Error (Invalid board section parameters.)
   *   code 403 : Error (Not authorized to create board sections.)
   *   code 409 : Error (Could not get exclusive access to the board to create a new section.)
   *   code 500 : Error (Could not create a new board section.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param boardId Unique identifier of a board.
   * @param boardSection Create a board section.
   * @param adAccountId Unique identifier of an ad account.
   */
  def boardSectionsCreate(boardId: String, boardSection: BoardSection, adAccountId: Option[String] = None): ApiRequest[BoardSection] =
    ApiRequest[BoardSection](ApiMethods.POST, baseUrl, "/boards/{board_id}/sections", "application/json")
      .withBody(boardSection)
      .withQueryParam("ad_account_id", adAccountId)
      .withPathParam("board_id", boardId)
      .withSuccessResponse[BoardSection](201)
      .withErrorResponse[Error](400)
      .withErrorResponse[Error](403)
      .withErrorResponse[Error](409)
      .withErrorResponse[Error](500)
      .withDefaultErrorResponse[Error]
      

  /**
   * Delete a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
   * 
   * Expected answers:
   *   code 204 :  (Board section deleted successfully)
   *   code 403 : Error (Not authorized to delete board section.)
   *   code 404 : Error (Board section not found.)
   *   code 409 : Error (Board section conflict.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param boardId Unique identifier of a board.
   * @param sectionId Unique identifier of a board section.
   * @param adAccountId Unique identifier of an ad account.
   */
  def boardSectionsDelete(boardId: String, sectionId: String, adAccountId: Option[String] = None): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.DELETE, baseUrl, "/boards/{board_id}/sections/{section_id}", "application/json")
      .withQueryParam("ad_account_id", adAccountId)
      .withPathParam("board_id", boardId)
      .withPathParam("section_id", sectionId)
      .withSuccessResponse[Unit](204)
      .withErrorResponse[Error](403)
      .withErrorResponse[Error](404)
      .withErrorResponse[Error](409)
      .withDefaultErrorResponse[Error]
      

  /**
   * Get a list of all board sections from a board owned by the \"operation user_account\" - or a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
   * 
   * Expected answers:
   *   code 200 : BoardSectionsList200Response (response)
   *   code 0 : Error (Unexpected error)
   * 
   * @param boardId Unique identifier of a board.
   * @param adAccountId Unique identifier of an ad account.
   * @param bookmark Cursor used to fetch the next page of items
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.
   */
  def boardSectionsList(boardId: String, adAccountId: Option[String] = None, bookmark: Option[String] = None, pageSize: Option[Int] = None): ApiRequest[BoardSectionsList200Response] =
    ApiRequest[BoardSectionsList200Response](ApiMethods.GET, baseUrl, "/boards/{board_id}/sections", "application/json")
      .withQueryParam("ad_account_id", adAccountId)
      .withQueryParam("bookmark", bookmark)
      .withQueryParam("page_size", pageSize)
      .withPathParam("board_id", boardId)
      .withSuccessResponse[BoardSectionsList200Response](200)
      .withDefaultErrorResponse[Error]
      

  /**
   * Get a list of the Pins on a board section of a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
   * 
   * Expected answers:
   *   code 200 : BoardsListPins200Response (response)
   *   code 403 : Error (Not authorized to access Pins on board section.)
   *   code 404 : Error (Board or section not found.)
   *   code 409 : Error (Board section conflict.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param boardId Unique identifier of a board.
   * @param sectionId Unique identifier of a board section.
   * @param adAccountId Unique identifier of an ad account.
   * @param bookmark Cursor used to fetch the next page of items
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.
   */
  def boardSectionsListPins(boardId: String, sectionId: String, adAccountId: Option[String] = None, bookmark: Option[String] = None, pageSize: Option[Int] = None): ApiRequest[BoardsListPins200Response] =
    ApiRequest[BoardsListPins200Response](ApiMethods.GET, baseUrl, "/boards/{board_id}/sections/{section_id}/pins", "application/json")
      .withQueryParam("ad_account_id", adAccountId)
      .withQueryParam("bookmark", bookmark)
      .withQueryParam("page_size", pageSize)
      .withPathParam("board_id", boardId)
      .withPathParam("section_id", sectionId)
      .withSuccessResponse[BoardsListPins200Response](200)
      .withErrorResponse[Error](403)
      .withErrorResponse[Error](404)
      .withErrorResponse[Error](409)
      .withDefaultErrorResponse[Error]
      

  /**
   * Update a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
   * 
   * Expected answers:
   *   code 200 : BoardSection (response)
   *   code 400 : Error (Invalid board section parameters.)
   *   code 403 : Error (Not authorized to update board section.)
   *   code 409 : Error (Board section conflict.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param boardId Unique identifier of a board.
   * @param sectionId Unique identifier of a board section.
   * @param boardSection Update a board section.
   * @param adAccountId Unique identifier of an ad account.
   */
  def boardSectionsUpdate(boardId: String, sectionId: String, boardSection: BoardSection, adAccountId: Option[String] = None): ApiRequest[BoardSection] =
    ApiRequest[BoardSection](ApiMethods.PATCH, baseUrl, "/boards/{board_id}/sections/{section_id}", "application/json")
      .withBody(boardSection)
      .withQueryParam("ad_account_id", adAccountId)
      .withPathParam("board_id", boardId)
      .withPathParam("section_id", sectionId)
      .withSuccessResponse[BoardSection](200)
      .withErrorResponse[Error](400)
      .withErrorResponse[Error](403)
      .withErrorResponse[Error](409)
      .withDefaultErrorResponse[Error]
      

  /**
   * Create a board owned by the \"operation user_account\". Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
   * 
   * Expected answers:
   *   code 201 : Board (response)
   *   code 400 : Error (The board name is invalid or duplicated.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param board Create a board using a single board json object.
   * @param adAccountId Unique identifier of an ad account.
   */
  def boardsCreate(board: Board, adAccountId: Option[String] = None): ApiRequest[Board] =
    ApiRequest[Board](ApiMethods.POST, baseUrl, "/boards", "application/json")
      .withBody(board)
      .withQueryParam("ad_account_id", adAccountId)
      .withSuccessResponse[Board](201)
      .withErrorResponse[Error](400)
      .withDefaultErrorResponse[Error]
      

  /**
   * Delete a board owned by the \"operation user_account\". - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
   * 
   * Expected answers:
   *   code 204 :  (Board deleted successfully)
   *   code 403 : Error (Not authorized to delete the board.)
   *   code 404 : Error (Board not found.)
   *   code 409 : Error (Could not get exclusive access to delete the board.)
   *   code 429 : Error (This request exceeded a rate limit. This can happen if the client exceeds one of the published rate limits or if multiple write operations are applied to an object within a short time window.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param boardId Unique identifier of a board.
   * @param adAccountId Unique identifier of an ad account.
   */
  def boardsDelete(boardId: String, adAccountId: Option[String] = None): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.DELETE, baseUrl, "/boards/{board_id}", "application/json")
      .withQueryParam("ad_account_id", adAccountId)
      .withPathParam("board_id", boardId)
      .withSuccessResponse[Unit](204)
      .withErrorResponse[Error](403)
      .withErrorResponse[Error](404)
      .withErrorResponse[Error](409)
      .withErrorResponse[Error](429)
      .withDefaultErrorResponse[Error]
      

  /**
   * Get a board owned by the operation user_account - or a group board that has been shared with this account. - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
   * 
   * Expected answers:
   *   code 200 : Board (response)
   *   code 404 : Error (Board not found.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param boardId Unique identifier of a board.
   * @param adAccountId Unique identifier of an ad account.
   */
  def boardsGet(boardId: String, adAccountId: Option[String] = None): ApiRequest[Board] =
    ApiRequest[Board](ApiMethods.GET, baseUrl, "/boards/{board_id}", "application/json")
      .withQueryParam("ad_account_id", adAccountId)
      .withPathParam("board_id", boardId)
      .withSuccessResponse[Board](200)
      .withErrorResponse[Error](404)
      .withDefaultErrorResponse[Error]
      

  /**
   * Get a list of the boards owned by the \"operation user_account\" + group boards where this account is a collaborator Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return. - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
   * 
   * Expected answers:
   *   code 200 : BoardsList200Response (response)
   *   code 0 : Error (Unexpected error)
   * 
   * @param adAccountId Unique identifier of an ad account.
   * @param bookmark Cursor used to fetch the next page of items
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.
   * @param privacy Privacy setting for a board.
   */
  def boardsList(adAccountId: Option[String] = None, bookmark: Option[String] = None, pageSize: Option[Int] = None, privacy: Option[String] = None): ApiRequest[BoardsList200Response] =
    ApiRequest[BoardsList200Response](ApiMethods.GET, baseUrl, "/boards", "application/json")
      .withQueryParam("ad_account_id", adAccountId)
      .withQueryParam("bookmark", bookmark)
      .withQueryParam("page_size", pageSize)
      .withQueryParam("privacy", privacy)
      .withSuccessResponse[BoardsList200Response](200)
      .withDefaultErrorResponse[Error]
      

  /**
   * Get a list of the Pins on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
   * 
   * Expected answers:
   *   code 200 : BoardsListPins200Response (response)
   *   code 404 : Error (Board not found.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param boardId Unique identifier of a board.
   * @param bookmark Cursor used to fetch the next page of items
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.
   * @param creativeTypes Pin creative types filter. </p><strong>Note:</strong> SHOP_THE_PIN has been deprecated. Please use COLLECTION instead.
   * @param adAccountId Unique identifier of an ad account.
   * @param pinMetrics Specify whether to return 90d and lifetime Pin metrics. Total comments and total reactions are only available with lifetime Pin metrics. If Pin was created before <code>2023-03-20</code> lifetime metrics will only be available for Video and Idea Pin formats. Lifetime metrics are available for all Pin formats since then.
   */
  def boardsListPins(boardId: String, bookmark: Option[String] = None, pageSize: Option[Int] = None, creativeTypes: Seq[String], adAccountId: Option[String] = None, pinMetrics: Option[Boolean] = None): ApiRequest[BoardsListPins200Response] =
    ApiRequest[BoardsListPins200Response](ApiMethods.GET, baseUrl, "/boards/{board_id}/pins", "application/json")
      .withQueryParam("bookmark", bookmark)
      .withQueryParam("page_size", pageSize)
      .withQueryParam("creative_types", ArrayValues(creativeTypes, MULTI))
      .withQueryParam("ad_account_id", adAccountId)
      .withQueryParam("pin_metrics", pinMetrics)
      .withPathParam("board_id", boardId)
      .withSuccessResponse[BoardsListPins200Response](200)
      .withErrorResponse[Error](404)
      .withDefaultErrorResponse[Error]
      

  /**
   * Update a board owned by the \"operating user_account\". - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
   * 
   * Expected answers:
   *   code 200 : Board (response)
   *   code 400 : Error (Invalid board parameters.)
   *   code 403 : Error (Not authorized to update the board.)
   *   code 429 : Error (This request exceeded a rate limit. This can happen if the client exceeds one of the published rate limits or if multiple write operations are applied to an object within a short time window.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param boardId Unique identifier of a board.
   * @param boardUpdate Update a board.
   * @param adAccountId Unique identifier of an ad account.
   */
  def boardsUpdate(boardId: String, boardUpdate: BoardUpdate, adAccountId: Option[String] = None): ApiRequest[Board] =
    ApiRequest[Board](ApiMethods.PATCH, baseUrl, "/boards/{board_id}", "application/json")
      .withBody(boardUpdate)
      .withQueryParam("ad_account_id", adAccountId)
      .withPathParam("board_id", boardId)
      .withSuccessResponse[Board](200)
      .withErrorResponse[Error](400)
      .withErrorResponse[Error](403)
      .withErrorResponse[Error](429)
      .withDefaultErrorResponse[Error]
      



}

