/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "OauthAccessTokenResponseCode.h"

#include <string>
#include <vector>
#include <sstream>
#include <stdexcept>
#include <algorithm>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

OauthAccessTokenResponseCode::OauthAccessTokenResponseCode(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string OauthAccessTokenResponseCode::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void OauthAccessTokenResponseCode::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree OauthAccessTokenResponseCode::toPropertyTree()
{
    return toPropertyTree_internal();
}

void OauthAccessTokenResponseCode::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string OauthAccessTokenResponseCode::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void OauthAccessTokenResponseCode::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree OauthAccessTokenResponseCode::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	pt.put("response_type", m_Response_type);
	pt.put("access_token", m_Access_token);
	pt.put("token_type", m_Token_type);
	pt.put("expires_in", m_Expires_in);
	pt.put("scope", m_Scope);
	pt.put("refresh_token", m_Refresh_token);
	pt.put("refresh_token_expires_in", m_Refresh_token_expires_in);
	return pt;
}

void OauthAccessTokenResponseCode::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	setResponseType(pt.get("response_type", ""));
	m_Access_token = pt.get("access_token", "");
	m_Token_type = pt.get("token_type", "bearer");
	m_Expires_in = pt.get("expires_in", 0);
	m_Scope = pt.get("scope", "");
	m_Refresh_token = pt.get("refresh_token", "");
	m_Refresh_token_expires_in = pt.get("refresh_token_expires_in", 0);
}

std::string OauthAccessTokenResponseCode::getResponseType() const
{
    return m_Response_type;
}

void OauthAccessTokenResponseCode::setResponseType(std::string value)
{
	if (std::find(m_Response_typeEnum.begin(), m_Response_typeEnum.end(), value) != m_Response_typeEnum.end()) {
		m_Response_type = value;
	} else {
		throw std::runtime_error("Value " + value + " not allowed");
	}
}
std::string OauthAccessTokenResponseCode::getAccessToken() const
{
    return m_Access_token;
}

void OauthAccessTokenResponseCode::setAccessToken(std::string value)
{
	m_Access_token = value;
}
std::string OauthAccessTokenResponseCode::getTokenType() const
{
    return m_Token_type;
}

void OauthAccessTokenResponseCode::setTokenType(std::string value)
{
	m_Token_type = value;
}
int32_t OauthAccessTokenResponseCode::getExpiresIn() const
{
    return m_Expires_in;
}

void OauthAccessTokenResponseCode::setExpiresIn(int32_t value)
{
	m_Expires_in = value;
}
std::string OauthAccessTokenResponseCode::getScope() const
{
    return m_Scope;
}

void OauthAccessTokenResponseCode::setScope(std::string value)
{
	m_Scope = value;
}
std::string OauthAccessTokenResponseCode::getRefreshToken() const
{
    return m_Refresh_token;
}

void OauthAccessTokenResponseCode::setRefreshToken(std::string value)
{
	m_Refresh_token = value;
}
int32_t OauthAccessTokenResponseCode::getRefreshTokenExpiresIn() const
{
    return m_Refresh_token_expires_in;
}

void OauthAccessTokenResponseCode::setRefreshTokenExpiresIn(int32_t value)
{
	m_Refresh_token_expires_in = value;
}

std::vector<OauthAccessTokenResponseCode> createOauthAccessTokenResponseCodeVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<OauthAccessTokenResponseCode>();
    for (const auto& child: pt) {
        vec.emplace_back(OauthAccessTokenResponseCode(child.second));
    }

    return vec;
}

}
}
}
}

