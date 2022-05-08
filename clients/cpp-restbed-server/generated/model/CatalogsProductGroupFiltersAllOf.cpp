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



#include "CatalogsProductGroupFiltersAllOf.h"

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

CatalogsProductGroupFiltersAllOf::CatalogsProductGroupFiltersAllOf(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string CatalogsProductGroupFiltersAllOf::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void CatalogsProductGroupFiltersAllOf::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree CatalogsProductGroupFiltersAllOf::toPropertyTree()
{
    return toPropertyTree_internal();
}

void CatalogsProductGroupFiltersAllOf::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string CatalogsProductGroupFiltersAllOf::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void CatalogsProductGroupFiltersAllOf::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree CatalogsProductGroupFiltersAllOf::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	// generate tree for All_of
	if (!m_All_of.empty()) {
		for (const auto &childEntry : m_All_of) {
            ptree All_of_node;
            All_of_node.put("", childEntry);
            tmp_node.push_back(std::make_pair("", All_of_node));
		}
		pt.add_child("all_of", tmp_node);
		tmp_node.clear();
	}
	return pt;
}

void CatalogsProductGroupFiltersAllOf::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	// push all items of All_of into member vector
	if (pt.get_child_optional("all_of")) {
		for (const auto &childTree : pt.get_child("all_of")) {
            std::shared_ptr<CatalogsProductGroupFilterKeys> val =
            m_All_of.emplace_back(std::move(val));
		}
	}
}

std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>> CatalogsProductGroupFiltersAllOf::getAllOf() const
{
    return m_All_of;
}

void CatalogsProductGroupFiltersAllOf::setAllOf(std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>> value)
{
	m_All_of = value;
}

std::vector<CatalogsProductGroupFiltersAllOf> createCatalogsProductGroupFiltersAllOfVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<CatalogsProductGroupFiltersAllOf>();
    for (const auto& child: pt) {
        vec.emplace_back(CatalogsProductGroupFiltersAllOf(child.second));
    }

    return vec;
}

}
}
}
}

