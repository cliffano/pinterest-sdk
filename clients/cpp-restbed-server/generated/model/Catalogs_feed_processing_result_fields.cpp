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



#include "Catalogs_feed_processing_result_fields.h"

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

Catalogs_feed_processing_result_fields::Catalogs_feed_processing_result_fields(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string Catalogs_feed_processing_result_fields::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void Catalogs_feed_processing_result_fields::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree Catalogs_feed_processing_result_fields::toPropertyTree()
{
    return toPropertyTree_internal();
}

void Catalogs_feed_processing_result_fields::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string Catalogs_feed_processing_result_fields::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void Catalogs_feed_processing_result_fields::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree Catalogs_feed_processing_result_fields::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	if (m_Ingestion_details != nullptr) {
		pt.add_child("ingestion_details", m_Ingestion_details->toPropertyTree());
	}
	if (m_Product_counts != nullptr) {
		pt.add_child("product_counts", m_Product_counts->toPropertyTree());
	}
	if (m_Validation_details != nullptr) {
		pt.add_child("validation_details", m_Validation_details->toPropertyTree());
	}
	return pt;
}

void Catalogs_feed_processing_result_fields::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	if (pt.get_child_optional("ingestion_details")) {
		m_Ingestion_details = std::make_shared<CatalogsFeedIngestionDetails>();
		m_Ingestion_details->fromPropertyTree(pt.get_child("ingestion_details"));
	}
	if (pt.get_child_optional("product_counts")) {
		m_Product_counts = std::make_shared<CatalogsFeedProductCounts>();
		m_Product_counts->fromPropertyTree(pt.get_child("product_counts"));
	}
	if (pt.get_child_optional("validation_details")) {
		m_Validation_details = std::make_shared<CatalogsFeedValidationDetails>();
		m_Validation_details->fromPropertyTree(pt.get_child("validation_details"));
	}
}

std::shared_ptr<CatalogsFeedIngestionDetails> Catalogs_feed_processing_result_fields::getIngestionDetails() const
{
    return m_Ingestion_details;
}

void Catalogs_feed_processing_result_fields::setIngestionDetails(std::shared_ptr<CatalogsFeedIngestionDetails> value)
{
	m_Ingestion_details = value;
}
std::shared_ptr<CatalogsFeedProcessingStatus> Catalogs_feed_processing_result_fields::getStatus() const
{
    return m_Status;
}

void Catalogs_feed_processing_result_fields::setStatus(std::shared_ptr<CatalogsFeedProcessingStatus> value)
{
	m_Status = value;
}
std::shared_ptr<CatalogsFeedProductCounts> Catalogs_feed_processing_result_fields::getProductCounts() const
{
    return m_Product_counts;
}

void Catalogs_feed_processing_result_fields::setProductCounts(std::shared_ptr<CatalogsFeedProductCounts> value)
{
	m_Product_counts = value;
}
std::shared_ptr<CatalogsFeedValidationDetails> Catalogs_feed_processing_result_fields::getValidationDetails() const
{
    return m_Validation_details;
}

void Catalogs_feed_processing_result_fields::setValidationDetails(std::shared_ptr<CatalogsFeedValidationDetails> value)
{
	m_Validation_details = value;
}

std::vector<Catalogs_feed_processing_result_fields> createCatalogs_feed_processing_result_fieldsVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<Catalogs_feed_processing_result_fields>();
    for (const auto& child: pt) {
        vec.emplace_back(Catalogs_feed_processing_result_fields(child.second));
    }

    return vec;
}

}
}
}
}

