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



#include "GoogleProductCategory2Filter.h"

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

GoogleProductCategory2Filter::GoogleProductCategory2Filter(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string GoogleProductCategory2Filter::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void GoogleProductCategory2Filter::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree GoogleProductCategory2Filter::toPropertyTree()
{
    return toPropertyTree_internal();
}

void GoogleProductCategory2Filter::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string GoogleProductCategory2Filter::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void GoogleProductCategory2Filter::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree GoogleProductCategory2Filter::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	return pt;
}

void GoogleProductCategory2Filter::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
}

std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> GoogleProductCategory2Filter::getGOOGLEPRODUCTCATEGORY2() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_2;
}

void GoogleProductCategory2Filter::setGOOGLEPRODUCTCATEGORY2(std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> value)
{
	m_GOOGLE_PRODUCT_CATEGORY_2 = value;
}

std::vector<GoogleProductCategory2Filter> createGoogleProductCategory2FilterVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<GoogleProductCategory2Filter>();
    for (const auto& child: pt) {
        vec.emplace_back(GoogleProductCategory2Filter(child.second));
    }

    return vec;
}

}
}
}
}

