/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * BulkApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_BulkApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_BulkApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/BulkDownloadRequest.h"
#include "CppRestOpenAPIClient/model/BulkDownloadResponse.h"
#include "CppRestOpenAPIClient/model/BulkUpsertRequest.h"
#include "CppRestOpenAPIClient/model/BulkUpsertResponse.h"
#include "CppRestOpenAPIClient/model/BulkUpsertStatusResponse.h"
#include "CppRestOpenAPIClient/model/Error.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  BulkApi 
{
public:

    explicit BulkApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~BulkApi();

    /// <summary>
    /// Get advertiser entities in bulk
    /// </summary>
    /// <remarks>
    /// Create an asynchronous report that may include information on campaigns, ad groups, product groups, ads, and/or keywords; can filter by campaigns. Though the entities may be active, archived, or paused, only active entities will return data.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="bulkDownloadRequest">Parameters to get ad entities in bulk</param>
    pplx::task<std::shared_ptr<BulkDownloadResponse>> bulkDownload_create(
        utility::string_t adAccountId,
        std::shared_ptr<BulkDownloadRequest> bulkDownloadRequest
    ) const;
    /// <summary>
    /// Download advertiser entities in bulk
    /// </summary>
    /// <remarks>
    /// Get the status of a bulk request by &lt;code&gt;request_id&lt;/code&gt;, along with a download URL that will allow you to download the new or updated entity data (campaigns, ad groups, product groups, ads, or keywords).
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="bulkRequestId">Unique identifier of a bulk upsert request.</param>
    pplx::task<std::shared_ptr<BulkUpsertStatusResponse>> bulkRequest_get(
        utility::string_t adAccountId,
        utility::string_t bulkRequestId
    ) const;
    /// <summary>
    /// Create/update ad entities in bulk
    /// </summary>
    /// <remarks>
    /// Either create or update any combination of campaigns, ad groups, product groups, ads, or keywords. Note that this request will be processed asynchronously; the response will include a &lt;code&gt;request_id&lt;/code&gt; that can be used to obtain the status of the request.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="bulkUpsertRequest">Parameters to get create/update ad entities in bulk</param>
    pplx::task<std::shared_ptr<BulkUpsertResponse>> bulkUpsert_create(
        utility::string_t adAccountId,
        std::shared_ptr<BulkUpsertRequest> bulkUpsertRequest
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_BulkApi_H_ */

