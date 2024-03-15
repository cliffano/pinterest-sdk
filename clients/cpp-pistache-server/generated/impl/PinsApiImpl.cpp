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

#include "PinsApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

PinsApiImpl::PinsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : PinsApi(rtr)
{
}

void PinsApiImpl::pins_analytics(const std::string &pinId, const std::optional<std::string> &startDate, const std::optional<std::string> &endDate, const std::optional<std::vector<org::openapitools::server::model::Pins_analytics_metric_types_parameter_inner>> &metricTypes, const std::optional<std::string> &appTypes, const std::optional<std::string> &splitField, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void PinsApiImpl::pins_create(const PinCreate &pinCreate, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void PinsApiImpl::pins_delete(const std::string &pinId, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void PinsApiImpl::pins_get(const std::string &pinId, const std::optional<bool> &pinMetrics, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void PinsApiImpl::pins_list(const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, const std::optional<std::string> &pinFilter, const std::optional<bool> &includeProtectedPins, const std::optional<std::string> &pinType, const std::optional<std::vector<std::string>> &creativeTypes, const std::optional<std::string> &adAccountId, const std::optional<bool> &pinMetrics, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void PinsApiImpl::pins_save(const std::string &pinId, const Pins_save_request &pinsSaveRequest, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void PinsApiImpl::pins_update(const std::string &pinId, const PinUpdate &pinUpdate, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

