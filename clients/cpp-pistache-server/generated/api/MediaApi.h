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
/*
 * MediaApi.h
 *
 * 
 */

#ifndef MediaApi_H_
#define MediaApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include <optional>
#include <utility>

#include "Error.h"
#include "MediaUpload.h"
#include "MediaUploadDetails.h"
#include "MediaUploadRequest.h"
#include "Object.h"
#include "Paginated.h"
#include <string>

namespace org::openapitools::server::api
{

class  MediaApi {
public:
    explicit MediaApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    virtual ~MediaApi() = default;
    void init();

    static const std::string base;

private:
    void setupRoutes();

    void media_create_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void media_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void media_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void media_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    const std::shared_ptr<Pistache::Rest::Router> router;

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
    /// Register media upload
    /// </summary>
    /// <remarks>
    /// Register your intent to upload media  The response includes all of the information needed to upload the media to Pinterest.  To upload the media, make an HTTP POST request (using &lt;tt&gt;curl&lt;/tt&gt;, for example) to &lt;tt&gt;upload_url&lt;/tt&gt; using the &lt;tt&gt;Content-Type&lt;/tt&gt; header value. Send the media file&#39;s contents as the request&#39;s &lt;tt&gt;file&lt;/tt&gt; parameter and also include all of the parameters from &lt;tt&gt;upload_parameters&lt;/tt&gt;.  &lt;strong&gt;&lt;a href&#x3D;&#39;/docs/solutions/content-apps/#creatingvideopins&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
    /// </remarks>
    /// <param name="mediaUploadRequest">Create a media upload request</param>
    virtual void media_create(const org::openapitools::server::model::MediaUploadRequest &mediaUploadRequest, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Get media upload details
    /// </summary>
    /// <remarks>
    /// Get details for a registered media upload, including its current status.  &lt;strong&gt;&lt;a href&#x3D;&#39;/docs/solutions/content-apps/#creatingvideopins&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
    /// </remarks>
    /// <param name="mediaId">Media identifier</param>
    virtual void media_get(const std::string &mediaId, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// List media uploads
    /// </summary>
    /// <remarks>
    /// List media uploads filtered by given parameters.  &lt;strong&gt;&lt;a href&#x3D;&#39;/docs/solutions/content-apps/#creatingvideopins&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
    /// </remarks>
    /// <param name="bookmark">Cursor used to fetch the next page of items (optional, default to &quot;&quot;)</param>
    /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
    virtual void media_list(const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace org::openapitools::server::api

#endif /* MediaApi_H_ */

