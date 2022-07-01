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



#include "BoardUpdate.h"

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

BoardUpdate::BoardUpdate(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string BoardUpdate::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void BoardUpdate::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree BoardUpdate::toPropertyTree()
{
    return toPropertyTree_internal();
}

void BoardUpdate::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string BoardUpdate::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void BoardUpdate::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree BoardUpdate::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	pt.put("name", m_Name);
	pt.put("description", m_Description);
	pt.put("privacy", m_Privacy);
	return pt;
}

void BoardUpdate::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	m_Name = pt.get("name", "");
	m_Description = pt.get("description", "");
	setPrivacy(pt.get("privacy", ""));
}

std::string BoardUpdate::getName() const
{
    return m_Name;
}

void BoardUpdate::setName(std::string value)
{
	m_Name = value;
}
std::string BoardUpdate::getDescription() const
{
    return m_Description;
}

void BoardUpdate::setDescription(std::string value)
{
	m_Description = value;
}
std::string BoardUpdate::getPrivacy() const
{
    return m_Privacy;
}

void BoardUpdate::setPrivacy(std::string value)
{
	if (std::find(m_PrivacyEnum.begin(), m_PrivacyEnum.end(), value) != m_PrivacyEnum.end()) {
		m_Privacy = value;
	} else {
		throw std::runtime_error("Value " + value + " not allowed");
	}
}

std::vector<BoardUpdate> createBoardUpdateVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<BoardUpdate>();
    for (const auto& child: pt) {
        vec.emplace_back(BoardUpdate(child.second));
    }

    return vec;
}

}
}
}
}

