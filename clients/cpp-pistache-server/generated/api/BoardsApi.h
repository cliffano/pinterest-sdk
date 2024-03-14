/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * BoardsApi.h
 *
 * 
 */

#ifndef BoardsApi_H_
#define BoardsApi_H_


#include "ApiBase.h"

#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include <optional>
#include <utility>

#include "Board.h"
#include "BoardSection.h"
#include "BoardUpdate.h"
#include "Board_sections_list_200_response.h"
#include "Board_sections_list_pins_200_response.h"
#include "Boards_list_200_response.h"
#include "Error.h"
#include <string>

namespace org::openapitools::server::api
{

class  BoardsApi : public ApiBase {
public:
    explicit BoardsApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~BoardsApi() override = default;
    void init() override;

    static const std::string base;

private:
    void setupRoutes();

    void board_sections_create_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void board_sections_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void board_sections_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void board_sections_list_pins_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void board_sections_update_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void boards_create_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void boards_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void boards_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void boards_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void boards_list_pins_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void boards_update_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void boards_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    /// <summary>
    /// Helper function to handle unexpected Exceptions during Parameter parsing and validation.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleParsingException(const std::exception& ex) const noexcept;

    /// <summary>
    /// Helper function to handle unexpected Exceptions during processing of the request in handler functions.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleOperationException(const std::exception& ex) const noexcept;

    /// <summary>
    /// Create board section
    /// </summary>
    /// <remarks>
    /// Create a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    /// <param name="boardSection">Create a board section.</param>
    virtual void board_sections_create(const std::string &boardId, const org::openapitools::server::model::BoardSection &boardSection, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Delete board section
    /// </summary>
    /// <remarks>
    /// Delete a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    /// <param name="sectionId">Unique identifier of a board section.</param>
    virtual void board_sections_delete(const std::string &boardId, const std::string &sectionId, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// List board sections
    /// </summary>
    /// <remarks>
    /// Get a list of all board sections from a board owned by the \&quot;operation user_account\&quot; - or a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    /// <param name="bookmark">Cursor used to fetch the next page of items (optional, default to &quot;&quot;)</param>
    /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
    virtual void board_sections_list(const std::string &boardId, const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// List Pins on board section
    /// </summary>
    /// <remarks>
    /// Get a list of the Pins on a board section of a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    /// <param name="sectionId">Unique identifier of a board section.</param>
    /// <param name="bookmark">Cursor used to fetch the next page of items (optional, default to &quot;&quot;)</param>
    /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
    virtual void board_sections_list_pins(const std::string &boardId, const std::string &sectionId, const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Update board section
    /// </summary>
    /// <remarks>
    /// Update a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    /// <param name="sectionId">Unique identifier of a board section.</param>
    /// <param name="boardSection">Update a board section.</param>
    virtual void board_sections_update(const std::string &boardId, const std::string &sectionId, const org::openapitools::server::model::BoardSection &boardSection, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Create board
    /// </summary>
    /// <remarks>
    /// Create a board owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="board">Create a board using a single board json object.</param>
    virtual void boards_create(const org::openapitools::server::model::Board &board, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Delete board
    /// </summary>
    /// <remarks>
    /// Delete a board owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    virtual void boards_delete(const std::string &boardId, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Get board
    /// </summary>
    /// <remarks>
    /// Get a board owned by the operation user_account - or a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    virtual void boards_get(const std::string &boardId, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// List boards
    /// </summary>
    /// <remarks>
    /// Get a list of the boards owned by the \&quot;operation user_account\&quot; + group boards where this account is a collaborator  Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return. - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
    /// </remarks>
    /// <param name="bookmark">Cursor used to fetch the next page of items (optional, default to &quot;&quot;)</param>
    /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
    /// <param name="privacy">Privacy setting for a board. (optional, default to &quot;&quot;)</param>
    virtual void boards_list(const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, const std::optional<std::string> &privacy, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// List Pins on board
    /// </summary>
    /// <remarks>
    /// Get a list of the Pins on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    /// <param name="bookmark">Cursor used to fetch the next page of items (optional, default to &quot;&quot;)</param>
    /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
    virtual void boards_list_pins(const std::string &boardId, const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Update board
    /// </summary>
    /// <remarks>
    /// Update a board owned by the \&quot;operating user_account\&quot;.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    /// <param name="boardUpdate">Update a board.</param>
    virtual void boards_update(const std::string &boardId, const org::openapitools::server::model::BoardUpdate &boardUpdate, Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace org::openapitools::server::api

#endif /* BoardsApi_H_ */

