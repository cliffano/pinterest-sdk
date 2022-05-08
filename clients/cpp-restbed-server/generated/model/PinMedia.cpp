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



#include "PinMedia.h"

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

PinMedia::PinMedia(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string PinMedia::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void PinMedia::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree PinMedia::toPropertyTree()
{
    return toPropertyTree_internal();
}

void PinMedia::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string PinMedia::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void PinMedia::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree PinMedia::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	pt.put("media_type", m_Media_type);
	return pt;
}

void PinMedia::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	m_Media_type = pt.get("media_type", "");
}

std::string PinMedia::getMediaType() const
{
    return m_Media_type;
}

void PinMedia::setMediaType(std::string value)
{
	m_Media_type = value;
}

std::vector<PinMedia> createPinMediaVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<PinMedia>();
    for (const auto& child: pt) {
        vec.emplace_back(PinMedia(child.second));
    }

    return vec;
}

}
}
}
}
