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

/*
* BulkApiImpl.h
*
* 
*/

#ifndef BULK_API_IMPL_H_
#define BULK_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <BulkApi.h>


#include "BulkDownloadRequest.h"
#include "BulkDownloadResponse.h"
#include "BulkUpsertRequest.h"
#include "BulkUpsertResponse.h"
#include "BulkUpsertStatusResponse.h"
#include "Error.h"
#include <string>

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class  BulkApiImpl : public org::openapitools::server::api::BulkApi {
public:
    explicit BulkApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~BulkApiImpl() override = default;

    void bulk_download_create(const std::string &adAccountId, const BulkDownloadRequest &bulkDownloadRequest, Pistache::Http::ResponseWriter &response);
    void bulk_request_get(const std::string &adAccountId, const std::string &bulkRequestId, const std::optional<bool> &includeDetails, Pistache::Http::ResponseWriter &response);
    void bulk_upsert_create(const std::string &adAccountId, const BulkUpsertRequest &bulkUpsertRequest, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
