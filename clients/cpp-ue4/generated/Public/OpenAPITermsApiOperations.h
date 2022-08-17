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
#include "OpenAPITermsApi.h"

#include "OpenAPIError.h"
#include "OpenAPIRelatedTerms.h"

namespace OpenAPI
{

/* List related terms
 *
 * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/features/ads-management/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt; &lt;p/&gt; Get a list of terms logically related to each input term. &lt;p/&gt; Example: the term &#39;workout&#39; would list related terms like &#39;one song workout&#39;, &#39;yoga workout&#39;, &#39;workout motivation&#39;, etc.
*/
class OPENAPI_API OpenAPITermsApi::TermsRelatedListRequest : public Request
{
public:
    virtual ~TermsRelatedListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* List of input terms. */
	TArray<FString> Terms;
};

class OPENAPI_API OpenAPITermsApi::TermsRelatedListResponse : public Response
{
public:
    virtual ~TermsRelatedListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIRelatedTerms Content;
};

/* List suggested terms
 *
 * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/features/ads-management/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt; &lt;p/&gt; Get popular search terms that begin with your input term. &lt;p/&gt; Example: &#39;sport&#39; would return popular terms like &#39;sports bar&#39; and &#39;sportswear&#39;, but not &#39;motor sports&#39; since the phrase does not begin with the given term.
*/
class OPENAPI_API OpenAPITermsApi::TermsSuggestedListRequest : public Request
{
public:
    virtual ~TermsSuggestedListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Input term. */
	FString Term;
	/* Max suggested terms to return. */
	TOptional<int32> Limit;
};

class OPENAPI_API OpenAPITermsApi::TermsSuggestedListResponse : public Response
{
public:
    virtual ~TermsSuggestedListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<FString> Content;
};

}
