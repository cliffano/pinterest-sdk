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



#include "CatalogsProductGroupFiltersAnyOf.h"

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

CatalogsProductGroupFiltersAnyOf::CatalogsProductGroupFiltersAnyOf(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string CatalogsProductGroupFiltersAnyOf::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void CatalogsProductGroupFiltersAnyOf::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree CatalogsProductGroupFiltersAnyOf::toPropertyTree()
{
    return toPropertyTree_internal();
}

void CatalogsProductGroupFiltersAnyOf::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string CatalogsProductGroupFiltersAnyOf::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void CatalogsProductGroupFiltersAnyOf::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree CatalogsProductGroupFiltersAnyOf::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	// generate tree for Any_of
	if (!m_Any_of.empty()) {
		for (const auto &childEntry : m_Any_of) {
            ptree Any_of_node;
            Any_of_node.put("", childEntry);
            tmp_node.push_back(std::make_pair("", Any_of_node));
		}
		pt.add_child("any_of", tmp_node);
		tmp_node.clear();
	}
	return pt;
}

void CatalogsProductGroupFiltersAnyOf::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	// push all items of Any_of into member vector
	if (pt.get_child_optional("any_of")) {
		for (const auto &childTree : pt.get_child("any_of")) {
            std::shared_ptr<CatalogsProductGroupFilterKeys> val =
            m_Any_of.emplace_back(std::move(val));
		}
	}
}

std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>> CatalogsProductGroupFiltersAnyOf::getAnyOf() const
{
    return m_Any_of;
}

void CatalogsProductGroupFiltersAnyOf::setAnyOf(std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>> value)
{
	m_Any_of = value;
}

std::vector<CatalogsProductGroupFiltersAnyOf> createCatalogsProductGroupFiltersAnyOfVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<CatalogsProductGroupFiltersAnyOf>();
    for (const auto& child: pt) {
        vec.emplace_back(CatalogsProductGroupFiltersAnyOf(child.second));
    }

    return vec;
}

}
}
}
}

