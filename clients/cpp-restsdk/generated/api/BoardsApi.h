/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * BoardsApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_BoardsApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_BoardsApi_H_



#include "ApiClient.h"

#include "model/Board.h"
#include "model/BoardSection.h"
#include "model/BoardUpdate.h"
#include "model/Error.h"
#include "Object.h"
#include "model/Paginated.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  BoardsApi 
{
public:

    explicit BoardsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~BoardsApi();

    /// <summary>
    /// Create board section
    /// </summary>
    /// <remarks>
    /// Create a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    /// <param name="boardSection">Create a board section.</param>
    pplx::task<std::shared_ptr<BoardSection>> boardSections_create(
        utility::string_t boardId,
        std::shared_ptr<BoardSection> boardSection
    ) const;
    /// <summary>
    /// Delete board section
    /// </summary>
    /// <remarks>
    /// Delete a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    /// <param name="sectionId">Unique identifier of a board section.</param>
    pplx::task<void> boardSections_delete(
        utility::string_t boardId,
        utility::string_t sectionId
    ) const;
    /// <summary>
    /// List board sections
    /// </summary>
    /// <remarks>
    /// Get a list of all board sections from a board owned by the \&quot;operation user_account\&quot; - or a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    /// <param name="bookmark">Cursor used to fetch the next page of items (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 0)</param>
    pplx::task<std::shared_ptr<Paginated>> boardSections_list(
        utility::string_t boardId,
        boost::optional<utility::string_t> bookmark,
        boost::optional<int32_t> pageSize
    ) const;
    /// <summary>
    /// List Pins on board section
    /// </summary>
    /// <remarks>
    /// Get a list of the Pins on a board section of a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    /// <param name="sectionId">Unique identifier of a board section.</param>
    /// <param name="bookmark">Cursor used to fetch the next page of items (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 0)</param>
    pplx::task<std::shared_ptr<Paginated>> boardSections_listPins(
        utility::string_t boardId,
        utility::string_t sectionId,
        boost::optional<utility::string_t> bookmark,
        boost::optional<int32_t> pageSize
    ) const;
    /// <summary>
    /// Update board section
    /// </summary>
    /// <remarks>
    /// Update a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    /// <param name="sectionId">Unique identifier of a board section.</param>
    /// <param name="boardSection">Update a board section.</param>
    pplx::task<std::shared_ptr<BoardSection>> boardSections_update(
        utility::string_t boardId,
        utility::string_t sectionId,
        std::shared_ptr<BoardSection> boardSection
    ) const;
    /// <summary>
    /// Create board
    /// </summary>
    /// <remarks>
    /// Create a board owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="board">Create a board using a single board json object.</param>
    pplx::task<std::shared_ptr<Board>> boards_create(
        std::shared_ptr<Board> board
    ) const;
    /// <summary>
    /// Delete board
    /// </summary>
    /// <remarks>
    /// Delete a board owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    pplx::task<void> boards_delete(
        utility::string_t boardId
    ) const;
    /// <summary>
    /// Get board
    /// </summary>
    /// <remarks>
    /// Get a board owned by the operation user_account - or a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    pplx::task<std::shared_ptr<Board>> boards_get(
        utility::string_t boardId
    ) const;
    /// <summary>
    /// List boards
    /// </summary>
    /// <remarks>
    /// Get a list of the boards owned by the \&quot;operation user_account\&quot; + group boards where this account is a collaborator  Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return. - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
    /// </remarks>
    /// <param name="bookmark">Cursor used to fetch the next page of items (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 0)</param>
    /// <param name="privacy">Privacy setting for a board. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<Paginated>> boards_list(
        boost::optional<utility::string_t> bookmark,
        boost::optional<int32_t> pageSize,
        boost::optional<utility::string_t> privacy
    ) const;
    /// <summary>
    /// List Pins on board
    /// </summary>
    /// <remarks>
    /// Get a list of the Pins on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    /// <param name="bookmark">Cursor used to fetch the next page of items (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 0)</param>
    pplx::task<std::shared_ptr<Paginated>> boards_listPins(
        utility::string_t boardId,
        boost::optional<utility::string_t> bookmark,
        boost::optional<int32_t> pageSize
    ) const;
    /// <summary>
    /// Update board
    /// </summary>
    /// <remarks>
    /// Update a board owned by the \&quot;operating user_account\&quot;.
    /// </remarks>
    /// <param name="boardId">Unique identifier of a board.</param>
    /// <param name="boardUpdate">Update a board.</param>
    pplx::task<std::shared_ptr<Board>> boards_update(
        utility::string_t boardId,
        std::shared_ptr<BoardUpdate> boardUpdate
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_BoardsApi_H_ */

