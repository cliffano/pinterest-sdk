/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "UserAccountApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

UserAccountApiImpl::UserAccountApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : UserAccountApi(rtr)
{
}

void UserAccountApiImpl::user_account_analytics(const std::optional<std::string> &startDate, const std::optional<std::string> &endDate, const std::optional<std::string> &fromClaimedContent, const std::optional<std::string> &pinFormat, const std::optional<std::string> &appTypes, const std::optional<std::vector<std::string>> &metricTypes, const std::optional<std::string> &splitField, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void UserAccountApiImpl::user_account_get(const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

