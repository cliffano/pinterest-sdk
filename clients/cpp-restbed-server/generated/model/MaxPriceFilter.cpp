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



#include "MaxPriceFilter.h"

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

MaxPriceFilter::MaxPriceFilter(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string MaxPriceFilter::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void MaxPriceFilter::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree MaxPriceFilter::toPropertyTree()
{
    return toPropertyTree_internal();
}

void MaxPriceFilter::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string MaxPriceFilter::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void MaxPriceFilter::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree MaxPriceFilter::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	return pt;
}

void MaxPriceFilter::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
}

std::shared_ptr<CatalogsProductGroupPricingCriteria> MaxPriceFilter::getMAXPRICE() const
{
    return m_MAX_PRICE;
}

void MaxPriceFilter::setMAXPRICE(std::shared_ptr<CatalogsProductGroupPricingCriteria> value)
{
	m_MAX_PRICE = value;
}

std::vector<MaxPriceFilter> createMaxPriceFilterVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<MaxPriceFilter>();
    for (const auto& child: pt) {
        vec.emplace_back(MaxPriceFilter(child.second));
    }

    return vec;
}

}
}
}
}

