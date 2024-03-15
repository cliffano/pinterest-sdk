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
* TermsApiImpl.h
*
* 
*/

#ifndef TERMS_API_IMPL_H_
#define TERMS_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <TermsApi.h>


#include "Error.h"
#include "RelatedTerms.h"
#include <string>
#include <vector>

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class  TermsApiImpl : public org::openapitools::server::api::TermsApi {
public:
    explicit TermsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~TermsApiImpl() override = default;

    void terms_related_list(const std::optional<std::vector<std::string>> &terms, Pistache::Http::ResponseWriter &response);
    void terms_suggested_list(const std::optional<std::string> &term, const std::optional<int32_t> &limit, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
