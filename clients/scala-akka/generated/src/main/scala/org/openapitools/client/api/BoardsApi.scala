/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.api

import org.openapitools.client.model.Board
import org.openapitools.client.model.BoardSection
import org.openapitools.client.model.BoardUpdate
import org.openapitools.client.model.Error
import org.openapitools.client.model.Paginated
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

object BoardsApi {

  def apply(baseUrl: String = "https://api.pinterest.com/v5") = new BoardsApi(baseUrl)
}

class BoardsApi(baseUrl: String) {

  /**
   * Create a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
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
   */
  def boardSectionsCreate(boardId: String, boardSection: BoardSection): ApiRequest[BoardSection] =
    ApiRequest[BoardSection](ApiMethods.POST, baseUrl, "/boards/{board_id}/sections", "application/json")
      .withBody(boardSection)
      .withPathParam("board_id", boardId)
      .withSuccessResponse[BoardSection](201)
      .withErrorResponse[Error](400)
      .withErrorResponse[Error](403)
      .withErrorResponse[Error](409)
      .withErrorResponse[Error](500)
      .withDefaultErrorResponse[Error]
      

  /**
   * Delete a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
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
   */
  def boardSectionsDelete(boardId: String, sectionId: String): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.DELETE, baseUrl, "/boards/{board_id}/sections/{section_id}", "application/json")
      .withPathParam("board_id", boardId)
      .withPathParam("section_id", sectionId)
      .withSuccessResponse[Unit](204)
      .withErrorResponse[Error](403)
      .withErrorResponse[Error](404)
      .withErrorResponse[Error](409)
      .withDefaultErrorResponse[Error]
      

  /**
   * Get a list of all board sections from a board owned by the \"operation user_account\" - or a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
   * 
   * Expected answers:
   *   code 200 : Paginated (response)
   *   code 0 : Error (Unexpected error)
   * 
   * @param boardId Unique identifier of a board.
   * @param bookmark Cursor used to fetch the next page of items
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/api/v5/#tag/Pagination'>Pagination</a> for more information.
   */
  def boardSectionsList(boardId: String, bookmark: Option[String] = None, pageSize: Option[Int] = None): ApiRequest[Paginated] =
    ApiRequest[Paginated](ApiMethods.GET, baseUrl, "/boards/{board_id}/sections", "application/json")
      .withQueryParam("bookmark", bookmark)
      .withQueryParam("page_size", pageSize)
      .withPathParam("board_id", boardId)
      .withSuccessResponse[Paginated](200)
      .withDefaultErrorResponse[Error]
      

  /**
   * Get a list of the Pins on a board section of a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
   * 
   * Expected answers:
   *   code 200 : Paginated (response)
   *   code 403 : Error (Not authorized to access Pins on board section.)
   *   code 404 : Error (Board or section not found.)
   *   code 409 : Error (Board section conflict.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param boardId Unique identifier of a board.
   * @param sectionId Unique identifier of a board section.
   * @param bookmark Cursor used to fetch the next page of items
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/api/v5/#tag/Pagination'>Pagination</a> for more information.
   */
  def boardSectionsListPins(boardId: String, sectionId: String, bookmark: Option[String] = None, pageSize: Option[Int] = None): ApiRequest[Paginated] =
    ApiRequest[Paginated](ApiMethods.GET, baseUrl, "/boards/{board_id}/sections/{section_id}/pins", "application/json")
      .withQueryParam("bookmark", bookmark)
      .withQueryParam("page_size", pageSize)
      .withPathParam("board_id", boardId)
      .withPathParam("section_id", sectionId)
      .withSuccessResponse[Paginated](200)
      .withErrorResponse[Error](403)
      .withErrorResponse[Error](404)
      .withErrorResponse[Error](409)
      .withDefaultErrorResponse[Error]
      

  /**
   * Update a board section on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
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
   */
  def boardSectionsUpdate(boardId: String, sectionId: String, boardSection: BoardSection): ApiRequest[BoardSection] =
    ApiRequest[BoardSection](ApiMethods.PATCH, baseUrl, "/boards/{board_id}/sections/{section_id}", "application/json")
      .withBody(boardSection)
      .withPathParam("board_id", boardId)
      .withPathParam("section_id", sectionId)
      .withSuccessResponse[BoardSection](200)
      .withErrorResponse[Error](400)
      .withErrorResponse[Error](403)
      .withErrorResponse[Error](409)
      .withDefaultErrorResponse[Error]
      

  /**
   * Create a board owned by the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
   * 
   * Expected answers:
   *   code 201 : Board (response)
   *   code 400 : Error (The board name is invalid or duplicated.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param board Create a board using a single board json object.
   */
  def boardsCreate(board: Board): ApiRequest[Board] =
    ApiRequest[Board](ApiMethods.POST, baseUrl, "/boards", "application/json")
      .withBody(board)
      .withSuccessResponse[Board](201)
      .withErrorResponse[Error](400)
      .withDefaultErrorResponse[Error]
      

  /**
   * Delete a board owned by the \"operation user_account\". - By default, the \"operation user_account\" is the token user_account.
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
   */
  def boardsDelete(boardId: String): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.DELETE, baseUrl, "/boards/{board_id}", "application/json")
      .withPathParam("board_id", boardId)
      .withSuccessResponse[Unit](204)
      .withErrorResponse[Error](403)
      .withErrorResponse[Error](404)
      .withErrorResponse[Error](409)
      .withErrorResponse[Error](429)
      .withDefaultErrorResponse[Error]
      

  /**
   * Get a board owned by the operation user_account - or a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
   * 
   * Expected answers:
   *   code 200 : Board (response)
   *   code 404 : Error (Board not found.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param boardId Unique identifier of a board.
   */
  def boardsGet(boardId: String): ApiRequest[Board] =
    ApiRequest[Board](ApiMethods.GET, baseUrl, "/boards/{board_id}", "application/json")
      .withPathParam("board_id", boardId)
      .withSuccessResponse[Board](200)
      .withErrorResponse[Error](404)
      .withDefaultErrorResponse[Error]
      

  /**
   * Get a list of the boards owned by the \"operation user_account\" + group boards where this account is a collaborator  Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return. - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
   * 
   * Expected answers:
   *   code 200 : Paginated (response)
   *   code 0 : Error (Unexpected error)
   * 
   * @param bookmark Cursor used to fetch the next page of items
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/api/v5/#tag/Pagination'>Pagination</a> for more information.
   * @param privacy Privacy setting for a board.
   */
  def boardsList(bookmark: Option[String] = None, pageSize: Option[Int] = None, privacy: Option[String] = None): ApiRequest[Paginated] =
    ApiRequest[Paginated](ApiMethods.GET, baseUrl, "/boards", "application/json")
      .withQueryParam("bookmark", bookmark)
      .withQueryParam("page_size", pageSize)
      .withQueryParam("privacy", privacy)
      .withSuccessResponse[Paginated](200)
      .withDefaultErrorResponse[Error]
      

  /**
   * Get a list of the Pins on a board owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
   * 
   * Expected answers:
   *   code 200 : Paginated (response)
   *   code 404 : Error (Board not found.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param boardId Unique identifier of a board.
   * @param bookmark Cursor used to fetch the next page of items
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/api/v5/#tag/Pagination'>Pagination</a> for more information.
   */
  def boardsListPins(boardId: String, bookmark: Option[String] = None, pageSize: Option[Int] = None): ApiRequest[Paginated] =
    ApiRequest[Paginated](ApiMethods.GET, baseUrl, "/boards/{board_id}/pins", "application/json")
      .withQueryParam("bookmark", bookmark)
      .withQueryParam("page_size", pageSize)
      .withPathParam("board_id", boardId)
      .withSuccessResponse[Paginated](200)
      .withErrorResponse[Error](404)
      .withDefaultErrorResponse[Error]
      

  /**
   * Update a board owned by the \"operating user_account\".
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
   */
  def boardsUpdate(boardId: String, boardUpdate: BoardUpdate): ApiRequest[Board] =
    ApiRequest[Board](ApiMethods.PATCH, baseUrl, "/boards/{board_id}", "application/json")
      .withBody(boardUpdate)
      .withPathParam("board_id", boardId)
      .withSuccessResponse[Board](200)
      .withErrorResponse[Error](400)
      .withErrorResponse[Error](403)
      .withErrorResponse[Error](429)
      .withDefaultErrorResponse[Error]
      



}

