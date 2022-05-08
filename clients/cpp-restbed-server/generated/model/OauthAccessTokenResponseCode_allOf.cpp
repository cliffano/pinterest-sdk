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



#include "OauthAccessTokenResponseCode_allOf.h"

#include <string>
#include <vector>
#include <sstream>
#include <stdexcept>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

OauthAccessTokenResponseCode_allOf::OauthAccessTokenResponseCode_allOf(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string OauthAccessTokenResponseCode_allOf::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void OauthAccessTokenResponseCode_allOf::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree OauthAccessTokenResponseCode_allOf::toPropertyTree()
{
    return toPropertyTree_internal();
}

void OauthAccessTokenResponseCode_allOf::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string OauthAccessTokenResponseCode_allOf::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void OauthAccessTokenResponseCode_allOf::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree OauthAccessTokenResponseCode_allOf::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	pt.put("refresh_token", m_Refresh_token);
	pt.put("refresh_token_expires_in", m_Refresh_token_expires_in);
	return pt;
}

void OauthAccessTokenResponseCode_allOf::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	m_Refresh_token = pt.get("refresh_token", "");
	m_Refresh_token_expires_in = pt.get("refresh_token_expires_in", 0);
}

std::string OauthAccessTokenResponseCode_allOf::getRefreshToken() const
{
    return m_Refresh_token;
}

void OauthAccessTokenResponseCode_allOf::setRefreshToken(std::string value)
{
	m_Refresh_token = value;
}
int32_t OauthAccessTokenResponseCode_allOf::getRefreshTokenExpiresIn() const
{
    return m_Refresh_token_expires_in;
}

void OauthAccessTokenResponseCode_allOf::setRefreshTokenExpiresIn(int32_t value)
{
	m_Refresh_token_expires_in = value;
}

std::vector<OauthAccessTokenResponseCode_allOf> createOauthAccessTokenResponseCode_allOfVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<OauthAccessTokenResponseCode_allOf>();
    for (const auto& child: pt) {
        vec.emplace_back(OauthAccessTokenResponseCode_allOf(child.second));
    }

    return vec;
}

}
}
}
}

