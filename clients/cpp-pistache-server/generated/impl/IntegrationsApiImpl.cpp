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

#include "IntegrationsApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

IntegrationsApiImpl::IntegrationsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : IntegrationsApi(rtr)
{
}

void IntegrationsApiImpl::integrations_commerce_del(const std::string &externalBusinessId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void IntegrationsApiImpl::integrations_commerce_get(const std::string &externalBusinessId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void IntegrationsApiImpl::integrations_commerce_patch(const std::string &externalBusinessId, const IntegrationRequestPatch &integrationRequestPatch, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void IntegrationsApiImpl::integrations_commerce_post(const IntegrationRequest &integrationRequest, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void IntegrationsApiImpl::integrations_logs_post(const IntegrationLogsRequest &integrationLogsRequest, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void IntegrationsApiImpl::integrations_get_by_id(const std::string &id, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void IntegrationsApiImpl::integrations_get_list(const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}
