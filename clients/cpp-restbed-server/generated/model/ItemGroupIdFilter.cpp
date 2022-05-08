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



#include "ItemGroupIdFilter.h"

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

ItemGroupIdFilter::ItemGroupIdFilter(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string ItemGroupIdFilter::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void ItemGroupIdFilter::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree ItemGroupIdFilter::toPropertyTree()
{
    return toPropertyTree_internal();
}

void ItemGroupIdFilter::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string ItemGroupIdFilter::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ItemGroupIdFilter::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ItemGroupIdFilter::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	return pt;
}

void ItemGroupIdFilter::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
}

std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> ItemGroupIdFilter::getITEMGROUPID() const
{
    return m_ITEM_GROUP_ID;
}

void ItemGroupIdFilter::setITEMGROUPID(std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> value)
{
	m_ITEM_GROUP_ID = value;
}

std::vector<ItemGroupIdFilter> createItemGroupIdFilterVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<ItemGroupIdFilter>();
    for (const auto& child: pt) {
        vec.emplace_back(ItemGroupIdFilter(child.second));
    }

    return vec;
}

}
}
}
}

