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

#include "OrderLinesApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

OrderLinesApiImpl::OrderLinesApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : OrderLinesApi(rtr)
{
}

void OrderLinesApiImpl::order_lines_get(const std::string &adAccountId, const std::string &orderLineId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void OrderLinesApiImpl::order_lines_list(const std::string &adAccountId, const std::optional<int32_t> &pageSize, const std::optional<std::string> &order, const std::optional<std::string> &bookmark, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}
