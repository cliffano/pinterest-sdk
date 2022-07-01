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



#include "OauthAccessTokenRequest.h"

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

OauthAccessTokenRequest::OauthAccessTokenRequest(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string OauthAccessTokenRequest::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void OauthAccessTokenRequest::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree OauthAccessTokenRequest::toPropertyTree()
{
    return toPropertyTree_internal();
}

void OauthAccessTokenRequest::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string OauthAccessTokenRequest::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void OauthAccessTokenRequest::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree OauthAccessTokenRequest::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	pt.put("grant_type", m_Grant_type);
	return pt;
}

void OauthAccessTokenRequest::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	setGrantType(pt.get("grant_type", ""));
}

std::string OauthAccessTokenRequest::getGrantType() const
{
    return m_Grant_type;
}

void OauthAccessTokenRequest::setGrantType(std::string value)
{
	if (std::find(m_Grant_typeEnum.begin(), m_Grant_typeEnum.end(), value) != m_Grant_typeEnum.end()) {
		m_Grant_type = value;
	} else {
		throw std::runtime_error("Value " + value + " not allowed");
	}
}

std::vector<OauthAccessTokenRequest> createOauthAccessTokenRequestVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<OauthAccessTokenRequest>();
    for (const auto& child: pt) {
        vec.emplace_back(OauthAccessTokenRequest(child.second));
    }

    return vec;
}

}
}
}
}

