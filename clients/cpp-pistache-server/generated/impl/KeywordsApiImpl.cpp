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

#include "KeywordsApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

KeywordsApiImpl::KeywordsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : KeywordsApi(rtr)
{
}

void KeywordsApiImpl::country_keywords_metrics_get(const std::string &adAccountId, const std::optional<std::string> &countryCode, const std::optional<std::vector<std::string>> &keywords, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void KeywordsApiImpl::keywords_create(const std::string &adAccountId, const KeywordsRequest &keywordsRequest, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void KeywordsApiImpl::keywords_get(const std::string &adAccountId, const std::optional<std::string> &campaignId, const std::optional<std::string> &adGroupId, const std::optional<std::vector<org::openapitools::server::model::MatchType>> &matchTypes, const std::optional<int32_t> &pageSize, const std::optional<std::string> &bookmark, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void KeywordsApiImpl::keywords_update(const std::string &adAccountId, const KeywordUpdateBody &keywordUpdateBody, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

