/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIMediaApi.h"

#include "OpenAPIError.h"
#include "OpenAPIMediaList200Response.h"
#include "OpenAPIMediaUpload.h"
#include "OpenAPIMediaUploadDetails.h"
#include "OpenAPIMediaUploadRequest.h"

namespace OpenAPI
{

/* Register media upload
 *
 * Register your intent to upload media  The response includes all of the information needed to upload the media to Pinterest.  To upload the media, make an HTTP POST request (using &lt;tt&gt;curl&lt;/tt&gt;, for example) to &lt;tt&gt;upload_url&lt;/tt&gt; using the &lt;tt&gt;Content-Type&lt;/tt&gt; header value. Send the media file&#39;s contents as the request&#39;s &lt;tt&gt;file&lt;/tt&gt; parameter and also include all of the parameters from &lt;tt&gt;upload_parameters&lt;/tt&gt;.  &lt;strong&gt;&lt;a href&#x3D;&#39;/docs/solutions/content-apps/#creatingvideopins&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
*/
class OPENAPI_API OpenAPIMediaApi::MediaCreateRequest : public Request
{
public:
    virtual ~MediaCreateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Create a media upload request */
	OpenAPIMediaUploadRequest OpenAPIMediaUploadRequest;
};

class OPENAPI_API OpenAPIMediaApi::MediaCreateResponse : public Response
{
public:
    virtual ~MediaCreateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIMediaUpload Content;
};

/* Get media upload details
 *
 * Get details for a registered media upload, including its current status.  &lt;strong&gt;&lt;a href&#x3D;&#39;/docs/solutions/content-apps/#creatingvideopins&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
*/
class OPENAPI_API OpenAPIMediaApi::MediaGetRequest : public Request
{
public:
    virtual ~MediaGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Media identifier */
	FString MediaId;
};

class OPENAPI_API OpenAPIMediaApi::MediaGetResponse : public Response
{
public:
    virtual ~MediaGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIMediaUploadDetails Content;
};

/* List media uploads
 *
 * List media uploads filtered by given parameters.  &lt;strong&gt;&lt;a href&#x3D;&#39;/docs/solutions/content-apps/#creatingvideopins&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
*/
class OPENAPI_API OpenAPIMediaApi::MediaListRequest : public Request
{
public:
    virtual ~MediaListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/api/v5/#tag/Pagination'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
};

class OPENAPI_API OpenAPIMediaApi::MediaListResponse : public Response
{
public:
    virtual ~MediaListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIMediaList200Response Content;
};

}
