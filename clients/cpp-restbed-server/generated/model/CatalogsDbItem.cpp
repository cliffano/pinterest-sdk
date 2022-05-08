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



#include "CatalogsDbItem.h"

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

CatalogsDbItem::CatalogsDbItem(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string CatalogsDbItem::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void CatalogsDbItem::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree CatalogsDbItem::toPropertyTree()
{
    return toPropertyTree_internal();
}

void CatalogsDbItem::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string CatalogsDbItem::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void CatalogsDbItem::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree CatalogsDbItem::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	pt.put("created_at", m_Created_at);
	pt.put("id", m_Id);
	pt.put("updated_at", m_Updated_at);
	return pt;
}

void CatalogsDbItem::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	m_Created_at = pt.get("created_at", "");
	m_Id = pt.get("id", "");
	m_Updated_at = pt.get("updated_at", "");
}

std::string CatalogsDbItem::getCreatedAt() const
{
    return m_Created_at;
}

void CatalogsDbItem::setCreatedAt(std::string value)
{
	m_Created_at = value;
}
std::string CatalogsDbItem::getId() const
{
    return m_Id;
}

void CatalogsDbItem::setId(std::string value)
{
	m_Id = value;
}
std::string CatalogsDbItem::getUpdatedAt() const
{
    return m_Updated_at;
}

void CatalogsDbItem::setUpdatedAt(std::string value)
{
	m_Updated_at = value;
}

std::vector<CatalogsDbItem> createCatalogsDbItemVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<CatalogsDbItem>();
    for (const auto& child: pt) {
        vec.emplace_back(CatalogsDbItem(child.second));
    }

    return vec;
}

}
}
}
}

