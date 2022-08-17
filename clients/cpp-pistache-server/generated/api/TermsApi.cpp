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

#include "TermsApi.h"
#include "Helpers.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

const std::string TermsApi::base = "/v5";

TermsApi::TermsApi(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr)
{
}

void TermsApi::init() {
    setupRoutes();
}

void TermsApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Get(*router, base + "/terms/related", Routes::bind(&TermsApi::terms_related_list_handler, this));
    Routes::Get(*router, base + "/terms/suggested", Routes::bind(&TermsApi::terms_suggested_list_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&TermsApi::terms_api_default_handler, this));
}

std::pair<Pistache::Http::Code, std::string> TermsApi::handleParsingException(const std::exception& ex) const noexcept
{
    try {
        throw;
    } catch (nlohmann::detail::exception &e) {
        return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
    } catch (org::openapitools::server::helpers::ValidationException &e) {
        return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
    } catch (std::exception &e) {
        return std::make_pair(Pistache::Http::Code::Internal_Server_Error, e.what());
    }
}

std::pair<Pistache::Http::Code, std::string> TermsApi::handleOperationException(const std::exception& ex) const noexcept
{
    return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void TermsApi::terms_related_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the query params
    auto termsQuery = request.query().get("terms");
    std::optional<std::vector<std::string>> terms;
    if(termsQuery.has_value()){
        std::vector<std::string> valueQuery_instance;
        if(fromStringValue(termsQuery.value(), valueQuery_instance)){
            terms = valueQuery_instance;
        }
    }
    
    try {
        this->terms_related_list(terms, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void TermsApi::terms_suggested_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the query params
    auto termQuery = request.query().get("term");
    std::optional<std::string> term;
    if(termQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(termQuery.value(), valueQuery_instance)){
            term = valueQuery_instance;
        }
    }
    auto limitQuery = request.query().get("limit");
    std::optional<int32_t> limit;
    if(limitQuery.has_value()){
        int32_t valueQuery_instance;
        if(fromStringValue(limitQuery.value(), valueQuery_instance)){
            limit = valueQuery_instance;
        }
    }
    
    try {
        this->terms_suggested_list(term, limit, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}

void TermsApi::terms_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

} // namespace org::openapitools::server::api

