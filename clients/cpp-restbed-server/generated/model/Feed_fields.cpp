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



#include "Feed_fields.h"

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

Feed_fields::Feed_fields(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string Feed_fields::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void Feed_fields::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree Feed_fields::toPropertyTree()
{
    return toPropertyTree_internal();
}

void Feed_fields::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string Feed_fields::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void Feed_fields::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree Feed_fields::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	pt.put("name", m_Name);
	pt.put("default_locale", m_Default_locale);
	if (m_Credentials != nullptr) {
		pt.add_child("credentials", m_Credentials->toPropertyTree());
	}
	pt.put("location", m_Location);
	if (m_Preferred_processing_schedule != nullptr) {
		pt.add_child("preferred_processing_schedule", m_Preferred_processing_schedule->toPropertyTree());
	}
	return pt;
}

void Feed_fields::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	m_Name = pt.get("name", "");
	m_Default_locale = pt.get("default_locale", "");
	if (pt.get_child_optional("credentials")) {
		m_Credentials = std::make_shared<CatalogsFeedCredentials>();
		m_Credentials->fromPropertyTree(pt.get_child("credentials"));
	}
	m_Location = pt.get("location", "");
	if (pt.get_child_optional("preferred_processing_schedule")) {
		m_Preferred_processing_schedule = std::make_shared<CatalogsFeedProcessingSchedule>();
		m_Preferred_processing_schedule->fromPropertyTree(pt.get_child("preferred_processing_schedule"));
	}
}

std::shared_ptr<Country> Feed_fields::getDefaultCountry() const
{
    return m_Default_country;
}

void Feed_fields::setDefaultCountry(std::shared_ptr<Country> value)
{
	m_Default_country = value;
}
std::shared_ptr<ProductAvailabilityType> Feed_fields::getDefaultAvailability() const
{
    return m_Default_availability;
}

void Feed_fields::setDefaultAvailability(std::shared_ptr<ProductAvailabilityType> value)
{
	m_Default_availability = value;
}
std::shared_ptr<NullableCurrency> Feed_fields::getDefaultCurrency() const
{
    return m_Default_currency;
}

void Feed_fields::setDefaultCurrency(std::shared_ptr<NullableCurrency> value)
{
	m_Default_currency = value;
}
std::string Feed_fields::getName() const
{
    return m_Name;
}

void Feed_fields::setName(std::string value)
{
	m_Name = value;
}
std::shared_ptr<CatalogsFormat> Feed_fields::getFormat() const
{
    return m_Format;
}

void Feed_fields::setFormat(std::shared_ptr<CatalogsFormat> value)
{
	m_Format = value;
}
std::string Feed_fields::getDefaultLocale() const
{
    return m_Default_locale;
}

void Feed_fields::setDefaultLocale(std::string value)
{
	m_Default_locale = value;
}
std::shared_ptr<CatalogsFeedCredentials> Feed_fields::getCredentials() const
{
    return m_Credentials;
}

void Feed_fields::setCredentials(std::shared_ptr<CatalogsFeedCredentials> value)
{
	m_Credentials = value;
}
std::string Feed_fields::getLocation() const
{
    return m_Location;
}

void Feed_fields::setLocation(std::string value)
{
	m_Location = value;
}
std::shared_ptr<CatalogsFeedProcessingSchedule> Feed_fields::getPreferredProcessingSchedule() const
{
    return m_Preferred_processing_schedule;
}

void Feed_fields::setPreferredProcessingSchedule(std::shared_ptr<CatalogsFeedProcessingSchedule> value)
{
	m_Preferred_processing_schedule = value;
}
std::shared_ptr<CatalogsStatus> Feed_fields::getStatus() const
{
    return m_Status;
}

void Feed_fields::setStatus(std::shared_ptr<CatalogsStatus> value)
{
	m_Status = value;
}

std::vector<Feed_fields> createFeed_fieldsVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<Feed_fields>();
    for (const auto& child: pt) {
        vec.emplace_back(Feed_fields(child.second));
    }

    return vec;
}

}
}
}
}

