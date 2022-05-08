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



#include "PlacementGroupType.h"

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

PlacementGroupType::PlacementGroupType(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string PlacementGroupType::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void PlacementGroupType::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree PlacementGroupType::toPropertyTree()
{
    return toPropertyTree_internal();
}

void PlacementGroupType::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string PlacementGroupType::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void PlacementGroupType::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree PlacementGroupType::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	return pt;
}

void PlacementGroupType::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
}


std::vector<PlacementGroupType> createPlacementGroupTypeVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<PlacementGroupType>();
    for (const auto& child: pt) {
        vec.emplace_back(PlacementGroupType(child.second));
    }

    return vec;
}

}
}
}
}

