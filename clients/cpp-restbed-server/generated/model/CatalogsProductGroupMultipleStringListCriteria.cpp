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



#include "CatalogsProductGroupMultipleStringListCriteria.h"

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

CatalogsProductGroupMultipleStringListCriteria::CatalogsProductGroupMultipleStringListCriteria(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string CatalogsProductGroupMultipleStringListCriteria::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void CatalogsProductGroupMultipleStringListCriteria::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree CatalogsProductGroupMultipleStringListCriteria::toPropertyTree()
{
    return toPropertyTree_internal();
}

void CatalogsProductGroupMultipleStringListCriteria::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string CatalogsProductGroupMultipleStringListCriteria::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void CatalogsProductGroupMultipleStringListCriteria::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree CatalogsProductGroupMultipleStringListCriteria::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	// generate tree for Values
	if (!m_Values.empty()) {
		for (const auto &childEntry : m_Values) {
            ptree Values_node;
            Values_node.put("", childEntry);
            tmp_node.push_back(std::make_pair("", Values_node));
		}
		pt.add_child("values", tmp_node);
		tmp_node.clear();
	}
	pt.put("negated", m_Negated);
	return pt;
}

void CatalogsProductGroupMultipleStringListCriteria::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	// push all items of Values into member vector
	if (pt.get_child_optional("values")) {
		for (const auto &childTree : pt.get_child("values")) {
            std::string val =
                childTree.second.data();
            m_Values.emplace_back(std::move(val));
		}
	}
	m_Negated = pt.get("negated", false);
}

std::vector<std::vector<std::string>> CatalogsProductGroupMultipleStringListCriteria::getValues() const
{
    return m_Values;
}

void CatalogsProductGroupMultipleStringListCriteria::setValues(std::vector<std::vector<std::string>> value)
{
	m_Values = value;
}
bool CatalogsProductGroupMultipleStringListCriteria::isNegated() const
{
    return m_Negated;
}

void CatalogsProductGroupMultipleStringListCriteria::setNegated(bool value)
{
	m_Negated = value;
}

std::vector<CatalogsProductGroupMultipleStringListCriteria> createCatalogsProductGroupMultipleStringListCriteriaVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<CatalogsProductGroupMultipleStringListCriteria>();
    for (const auto& child: pt) {
        vec.emplace_back(CatalogsProductGroupMultipleStringListCriteria(child.second));
    }

    return vec;
}

}
}
}
}

