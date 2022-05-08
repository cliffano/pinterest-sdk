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



#include "CatalogsProductGroupMultipleStringCriteria.h"

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

CatalogsProductGroupMultipleStringCriteria::CatalogsProductGroupMultipleStringCriteria(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string CatalogsProductGroupMultipleStringCriteria::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void CatalogsProductGroupMultipleStringCriteria::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree CatalogsProductGroupMultipleStringCriteria::toPropertyTree()
{
    return toPropertyTree_internal();
}

void CatalogsProductGroupMultipleStringCriteria::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string CatalogsProductGroupMultipleStringCriteria::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void CatalogsProductGroupMultipleStringCriteria::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree CatalogsProductGroupMultipleStringCriteria::toPropertyTree_internal()
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

void CatalogsProductGroupMultipleStringCriteria::fromPropertyTree_internal(ptree const &pt)
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

std::vector<std::string> CatalogsProductGroupMultipleStringCriteria::getValues() const
{
    return m_Values;
}

void CatalogsProductGroupMultipleStringCriteria::setValues(std::vector<std::string> value)
{
	m_Values = value;
}
bool CatalogsProductGroupMultipleStringCriteria::isNegated() const
{
    return m_Negated;
}

void CatalogsProductGroupMultipleStringCriteria::setNegated(bool value)
{
	m_Negated = value;
}

std::vector<CatalogsProductGroupMultipleStringCriteria> createCatalogsProductGroupMultipleStringCriteriaVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<CatalogsProductGroupMultipleStringCriteria>();
    for (const auto& child: pt) {
        vec.emplace_back(CatalogsProductGroupMultipleStringCriteria(child.second));
    }

    return vec;
}

}
}
}
}
