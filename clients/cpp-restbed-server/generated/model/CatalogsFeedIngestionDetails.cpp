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



#include "CatalogsFeedIngestionDetails.h"

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

CatalogsFeedIngestionDetails::CatalogsFeedIngestionDetails(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string CatalogsFeedIngestionDetails::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void CatalogsFeedIngestionDetails::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree CatalogsFeedIngestionDetails::toPropertyTree()
{
    return toPropertyTree_internal();
}

void CatalogsFeedIngestionDetails::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string CatalogsFeedIngestionDetails::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void CatalogsFeedIngestionDetails::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree CatalogsFeedIngestionDetails::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	if (m_Errors != nullptr) {
		pt.add_child("errors", m_Errors->toPropertyTree());
	}
	if (m_Info != nullptr) {
		pt.add_child("info", m_Info->toPropertyTree());
	}
	return pt;
}

void CatalogsFeedIngestionDetails::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	if (pt.get_child_optional("errors")) {
		m_Errors = std::make_shared<CatalogsFeedIngestionErrors>();
		m_Errors->fromPropertyTree(pt.get_child("errors"));
	}
	if (pt.get_child_optional("info")) {
		m_Info = std::make_shared<CatalogsFeedIngestionInfo>();
		m_Info->fromPropertyTree(pt.get_child("info"));
	}
}

std::shared_ptr<CatalogsFeedIngestionErrors> CatalogsFeedIngestionDetails::getErrors() const
{
    return m_Errors;
}

void CatalogsFeedIngestionDetails::setErrors(std::shared_ptr<CatalogsFeedIngestionErrors> value)
{
	m_Errors = value;
}
std::shared_ptr<CatalogsFeedIngestionInfo> CatalogsFeedIngestionDetails::getInfo() const
{
    return m_Info;
}

void CatalogsFeedIngestionDetails::setInfo(std::shared_ptr<CatalogsFeedIngestionInfo> value)
{
	m_Info = value;
}

std::vector<CatalogsFeedIngestionDetails> createCatalogsFeedIngestionDetailsVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<CatalogsFeedIngestionDetails>();
    for (const auto& child: pt) {
        vec.emplace_back(CatalogsFeedIngestionDetails(child.second));
    }

    return vec;
}

}
}
}
}

