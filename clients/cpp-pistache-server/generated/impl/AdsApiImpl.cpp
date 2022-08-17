/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "AdsApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

AdsApiImpl::AdsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : AdsApi(rtr)
{
}

void AdsApiImpl::ad_previews_create(const std::string &adAccountId, const AdPreviewRequest &adPreviewRequest, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AdsApiImpl::ads_create(const std::string &adAccountId, const std::vector<org::openapitools::server::model::AdCreateRequest_inner> &adCreateRequestInner, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AdsApiImpl::ads_get(const std::string &adAccountId, const std::string &adId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AdsApiImpl::ads_list(const std::string &adAccountId, const std::optional<std::vector<std::string>> &campaignIds, const std::optional<std::vector<std::string>> &adGroupIds, const std::optional<std::vector<std::string>> &adIds, const std::optional<std::vector<std::string>> &entityStatuses, const std::optional<int32_t> &pageSize, const std::optional<std::string> &order, const std::optional<std::string> &bookmark, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AdsApiImpl::ads_update(const std::string &adAccountId, const std::vector<org::openapitools::server::model::AdUpdateRequest_inner> &adUpdateRequestInner, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}
