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



#include "GoogleProductCategory1Filter.h"

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

GoogleProductCategory1Filter::GoogleProductCategory1Filter(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string GoogleProductCategory1Filter::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void GoogleProductCategory1Filter::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree GoogleProductCategory1Filter::toPropertyTree()
{
    return toPropertyTree_internal();
}

void GoogleProductCategory1Filter::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string GoogleProductCategory1Filter::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void GoogleProductCategory1Filter::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree GoogleProductCategory1Filter::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	return pt;
}

void GoogleProductCategory1Filter::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
}

std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> GoogleProductCategory1Filter::getGOOGLEPRODUCTCATEGORY1() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_1;
}

void GoogleProductCategory1Filter::setGOOGLEPRODUCTCATEGORY1(std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> value)
{
	m_GOOGLE_PRODUCT_CATEGORY_1 = value;
}

std::vector<GoogleProductCategory1Filter> createGoogleProductCategory1FilterVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<GoogleProductCategory1Filter>();
    for (const auto& child: pt) {
        vec.emplace_back(GoogleProductCategory1Filter(child.second));
    }

    return vec;
}

}
}
}
}
