/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include <corvusoft/restbed/byte.hpp>
#include <corvusoft/restbed/string.hpp>
#include <corvusoft/restbed/settings.hpp>
#include <corvusoft/restbed/request.hpp>
#include <corvusoft/restbed/uri.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>

#include "UserAccountApi.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

UserAccountApiException::UserAccountApiException(int status_code, std::string what)
  : m_status(status_code),
    m_what(what)
{

}
int UserAccountApiException::getStatus() const
{
    return m_status;
}
const char* UserAccountApiException::what() const noexcept
{
    return m_what.c_str();
}


template<class MODEL_T>
std::shared_ptr<MODEL_T> extractJsonModelBodyParam(const std::string& bodyContent)
{
    std::stringstream sstream(bodyContent);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream, pt);

    auto model = std::make_shared<MODEL_T>(pt);
    return model;
}

template<class MODEL_T>
std::vector<std::shared_ptr<MODEL_T>> extractJsonArrayBodyParam(const std::string& bodyContent)
{
    std::stringstream sstream(bodyContent);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream, pt);

    auto arrayRet = std::vector<std::shared_ptr<MODEL_T>>();
    for (const auto& child: pt) {
        arrayRet.emplace_back(std::make_shared<MODEL_T>(child.second));
    }
    return arrayRet;
}

template <class KEY_T, class VAL_T>
std::string convertMapResponse(const std::map<KEY_T, VAL_T>& map)
{
    boost::property_tree::ptree pt;
    for(const auto &kv: map) {
    pt.push_back(boost::property_tree::ptree::value_type(
        boost::lexical_cast<std::string>(kv.first),
        boost::property_tree::ptree(
        boost::lexical_cast<std::string>(kv.second))));
    }
    std::stringstream sstream;
    write_json(sstream, pt);
    std::string result = sstream.str();
    return result;
}

UserAccountApiUser_accountAnalyticsResource::UserAccountApiUser_accountAnalyticsResource(const std::string& context /* = "/v5" */)
{
	this->set_path(context + "/user_account/analytics/");
	this->set_method_handler("GET",
		std::bind(&UserAccountApiUser_accountAnalyticsResource::handler_GET_internal, this,
			std::placeholders::_1));
}

UserAccountApiUser_accountAnalyticsResource::~UserAccountApiUser_accountAnalyticsResource()
{
}

std::pair<int, std::string> UserAccountApiUser_accountAnalyticsResource::handleUserAccountApiException(const UserAccountApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> UserAccountApiUser_accountAnalyticsResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> UserAccountApiUser_accountAnalyticsResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void UserAccountApiUser_accountAnalyticsResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void UserAccountApiUser_accountAnalyticsResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void UserAccountApiUser_accountAnalyticsResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void UserAccountApiUser_accountAnalyticsResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
{
    const auto request = session->get_request();


    // Getting the query params
    const std::string startDate = getQueryParam_startDate(request);
    const std::string endDate = getQueryParam_endDate(request);
    const std::string fromClaimedContent = getQueryParam_fromClaimedContent(request);
    const std::string pinFormat = getQueryParam_pinFormat(request);
    const std::string appTypes = getQueryParam_appTypes(request);
    const std::string splitField = getQueryParam_splitField(request);
    const std::string adAccountId = getQueryParam_adAccountId(request);


    int status_code = 500;
    std::map<std::string, std::shared_ptr<AnalyticsMetricsResponse>> resultObject = std::map<std::string, AnalyticsMetricsResponse>();
    std::string result = "";

    try {
        std::tie(status_code, resultObject) =
             handler_GET(startDate, endDate, fromClaimedContent, pinFormat, appTypes, metricTypes, splitField, adAccountId);
    }
    catch(const UserAccountApiException& e) {
        std::tie(status_code, result) = handleUserAccountApiException(e);
    }
    catch(const std::exception& e) {
        std::tie(status_code, result) = handleStdException(e);
    }
    catch(...) {
        std::tie(status_code, result) = handleUnspecifiedException();
    }

    if (status_code == 200) {
        result = resultObject->toJsonString();
        result = convertMapResponse(resultObject);

        const constexpr auto contentType = "application/json";
        returnResponse(session, 200, result.empty() ? "Success" : result, contentType);
        return;
    }
    if (status_code == 403) {
        result = resultObject->toJsonString();

        const constexpr auto contentType = "application/json";
        returnResponse(session, 403, result.empty() ? "Not authorized to access the user account analytics." : result, contentType);
        return;
    }
    if (status_code == 0) {
        result = resultObject->toJsonString();

        const constexpr auto contentType = "application/json";
        returnResponse(session, 0, result.empty() ? "Unexpected error" : result, contentType);
        return;
    }
    defaultSessionClose(session, status_code, result);
}


std::pair<int, std::map<std::string, std::shared_ptr<AnalyticsMetricsResponse>>> UserAccountApiUser_accountAnalyticsResource::handler_GET(
        std::string const & startDate, std::string const & endDate, std::string const & fromClaimedContent, std::string const & pinFormat, std::string const & appTypes, std::vector<std::string> const & metricTypes, std::string const & splitField, std::string const & adAccountId)
{
    throw UserAccountApiException(501, "Not implemented");
}


std::string UserAccountApiUser_accountAnalyticsResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
  const auto request = session->get_request();
  int content_length = request->get_header("Content-Length", 0);
  std::string bodyContent;
  session->fetch(content_length,
                 [&bodyContent](const std::shared_ptr<restbed::Session> session,
                                const restbed::Bytes &body) {
                   bodyContent = restbed::String::format(
                       "%.*s\n", (int)body.size(), body.data());
                 });
  return bodyContent;
}
UserAccountApiUser_accountResource::UserAccountApiUser_accountResource(const std::string& context /* = "/v5" */)
{
	this->set_path(context + "/user_account/");
	this->set_method_handler("GET",
		std::bind(&UserAccountApiUser_accountResource::handler_GET_internal, this,
			std::placeholders::_1));
}

UserAccountApiUser_accountResource::~UserAccountApiUser_accountResource()
{
}

std::pair<int, std::string> UserAccountApiUser_accountResource::handleUserAccountApiException(const UserAccountApiException& e)
{
    return std::make_pair<int, std::string>(e.getStatus(), e.what());
}

std::pair<int, std::string> UserAccountApiUser_accountResource::handleStdException(const std::exception& e)
{
    return std::make_pair<int, std::string>(500, e.what());
}

std::pair<int, std::string> UserAccountApiUser_accountResource::handleUnspecifiedException()
{
    return std::make_pair<int, std::string>(500, "Unknown exception occurred");
}

void UserAccountApiUser_accountResource::setResponseHeader(const std::shared_ptr<restbed::Session>& session, const std::string& header)
{
    session->set_header(header, "");
}

void UserAccountApiUser_accountResource::returnResponse(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result, const std::string& contentType)
{
    session->close(status, result, { {"Connection", "close"}, {"Content-Type", contentType} });
}

void UserAccountApiUser_accountResource::defaultSessionClose(const std::shared_ptr<restbed::Session>& session, const int status, const std::string& result)
{
    session->close(status, result, { {"Connection", "close"} });
}

void UserAccountApiUser_accountResource::handler_GET_internal(const std::shared_ptr<restbed::Session> session)
{
    const auto request = session->get_request();


    // Getting the query params
    const std::string adAccountId = getQueryParam_adAccountId(request);


    int status_code = 500;
    std::shared_ptr<Account> resultObject = std::make_shared<Account>();
    std::string result = "";

    try {
        std::tie(status_code, resultObject) =
             handler_GET(adAccountId);
    }
    catch(const UserAccountApiException& e) {
        std::tie(status_code, result) = handleUserAccountApiException(e);
    }
    catch(const std::exception& e) {
        std::tie(status_code, result) = handleStdException(e);
    }
    catch(...) {
        std::tie(status_code, result) = handleUnspecifiedException();
    }

    if (status_code == 200) {
        result = resultObject->toJsonString();

        const constexpr auto contentType = "application/json";
        returnResponse(session, 200, result.empty() ? "response" : result, contentType);
        return;
    }
    if (status_code == 403) {
        result = resultObject->toJsonString();

        const constexpr auto contentType = "application/json";
        returnResponse(session, 403, result.empty() ? "Not authorized to access the user account." : result, contentType);
        return;
    }
    if (status_code == 0) {
        result = resultObject->toJsonString();

        const constexpr auto contentType = "application/json";
        returnResponse(session, 0, result.empty() ? "Unexpected error" : result, contentType);
        return;
    }
    defaultSessionClose(session, status_code, result);
}


std::pair<int, std::shared_ptr<Account>> UserAccountApiUser_accountResource::handler_GET(
        std::string const & adAccountId)
{
    throw UserAccountApiException(501, "Not implemented");
}


std::string UserAccountApiUser_accountResource::extractBodyContent(const std::shared_ptr<restbed::Session>& session) {
  const auto request = session->get_request();
  int content_length = request->get_header("Content-Length", 0);
  std::string bodyContent;
  session->fetch(content_length,
                 [&bodyContent](const std::shared_ptr<restbed::Session> session,
                                const restbed::Bytes &body) {
                   bodyContent = restbed::String::format(
                       "%.*s\n", (int)body.size(), body.data());
                 });
  return bodyContent;
}

UserAccountApi::UserAccountApi(std::shared_ptr<restbed::Service> const& restbedService)
: m_service(restbedService)
{
}

UserAccountApi::~UserAccountApi() {}

void UserAccountApi::setUserAccountApiUser_accountAnalyticsResource(std::shared_ptr<UserAccountApiUser_accountAnalyticsResource> spUserAccountApiUser_accountAnalyticsResource) {
    m_spUserAccountApiUser_accountAnalyticsResource = spUserAccountApiUser_accountAnalyticsResource;
    m_service->publish(m_spUserAccountApiUser_accountAnalyticsResource);
}
void UserAccountApi::setUserAccountApiUser_accountResource(std::shared_ptr<UserAccountApiUser_accountResource> spUserAccountApiUser_accountResource) {
    m_spUserAccountApiUser_accountResource = spUserAccountApiUser_accountResource;
    m_service->publish(m_spUserAccountApiUser_accountResource);
}


void UserAccountApi::publishDefaultResources() {
    if (!m_spUserAccountApiUser_accountAnalyticsResource) {
        setUserAccountApiUser_accountAnalyticsResource(std::make_shared<UserAccountApiUser_accountAnalyticsResource>());
    }
    if (!m_spUserAccountApiUser_accountResource) {
        setUserAccountApiUser_accountResource(std::make_shared<UserAccountApiUser_accountResource>());
    }
}

std::shared_ptr<restbed::Service> UserAccountApi::service() {
    return m_service;
}


}
}
}
}

