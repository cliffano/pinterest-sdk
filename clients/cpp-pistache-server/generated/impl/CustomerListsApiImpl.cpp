/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "CustomerListsApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

CustomerListsApiImpl::CustomerListsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : CustomerListsApi(rtr)
{
}

void CustomerListsApiImpl::customer_lists_create(const std::string &adAccountId, const CustomerListRequest &customerListRequest, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CustomerListsApiImpl::customer_lists_get(const std::string &adAccountId, const std::string &customerListId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CustomerListsApiImpl::customer_lists_list(const std::string &adAccountId, const std::optional<int32_t> &pageSize, const std::optional<std::string> &order, const std::optional<std::string> &bookmark, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CustomerListsApiImpl::customer_lists_update(const std::string &adAccountId, const std::string &customerListId, const CustomerListUpdateRequest &customerListUpdateRequest, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

