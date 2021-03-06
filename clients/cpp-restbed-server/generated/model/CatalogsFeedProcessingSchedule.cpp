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



#include "CatalogsFeedProcessingSchedule.h"

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

CatalogsFeedProcessingSchedule::CatalogsFeedProcessingSchedule(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string CatalogsFeedProcessingSchedule::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void CatalogsFeedProcessingSchedule::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree CatalogsFeedProcessingSchedule::toPropertyTree()
{
    return toPropertyTree_internal();
}

void CatalogsFeedProcessingSchedule::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string CatalogsFeedProcessingSchedule::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void CatalogsFeedProcessingSchedule::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree CatalogsFeedProcessingSchedule::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	pt.put("time", m_Time);
	pt.put("timezone", m_Timezone);
	return pt;
}

void CatalogsFeedProcessingSchedule::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	m_Time = pt.get("time", "");
	setTimezone(pt.get("timezone", ""));
}

std::string CatalogsFeedProcessingSchedule::getTime() const
{
    return m_Time;
}

void CatalogsFeedProcessingSchedule::setTime(std::string value)
{
	m_Time = value;
}
std::string CatalogsFeedProcessingSchedule::getTimezone() const
{
    return m_Timezone;
}

void CatalogsFeedProcessingSchedule::setTimezone(std::string value)
{
	if (std::find(m_TimezoneEnum.begin(), m_TimezoneEnum.end(), value) != m_TimezoneEnum.end()) {
		m_Timezone = value;
	} else {
		throw std::runtime_error("Value " + value + " not allowed");
	}
}

std::vector<CatalogsFeedProcessingSchedule> createCatalogsFeedProcessingScheduleVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<CatalogsFeedProcessingSchedule>();
    for (const auto& child: pt) {
        vec.emplace_back(CatalogsFeedProcessingSchedule(child.second));
    }

    return vec;
}

}
}
}
}

