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

#include "ProductGroupsApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

ProductGroupsApiImpl::ProductGroupsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : ProductGroupsApi(rtr)
{
}

void ProductGroupsApiImpl::ad_accounts_catalogs_product_groups_list(const std::string &adAccountId, const std::optional<std::string> &feedProfileId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

