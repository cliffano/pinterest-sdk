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

void PinsApiImpl::pins_analytics(const std::string &pinId, const std::optional<std::string> &startDate, const std::optional<std::string> &endDate, const std::optional<std::vector<std::string>> &metricTypes, const std::optional<std::string> &appTypes, const std::optional<std::string> &splitField, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void PinsApiImpl::pins_create(const Pin &pin, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void PinsApiImpl::pins_delete(const std::string &pinId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void PinsApiImpl::pins_get(const std::string &pinId, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

