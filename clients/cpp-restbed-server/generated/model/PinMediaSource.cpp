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



#include "PinMediaSource.h"

#include <string>
#include <vector>
#include <sstream>
#include <stdexcept>
#include <algorithm>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

PinMediaSource::PinMediaSource(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string PinMediaSource::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void PinMediaSource::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree PinMediaSource::toPropertyTree()
{
    return toPropertyTree_internal();
}

void PinMediaSource::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string PinMediaSource::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void PinMediaSource::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree PinMediaSource::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	pt.put("source_type", m_Source_type);
	pt.put("content_type", m_Content_type);
	pt.put("data", m_Data);
	pt.put("url", m_Url);
	pt.put("cover_image_url", m_Cover_image_url);
	pt.put("media_id", m_Media_id);
	return pt;
}

void PinMediaSource::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	setSourceType(pt.get("source_type", ""));
	setContentType(pt.get("content_type", ""));
	m_Data = pt.get("data", "");
	m_Url = pt.get("url", "");
	m_Cover_image_url = pt.get("cover_image_url", "");
	m_Media_id = pt.get("media_id", "");
}

std::string PinMediaSource::getSourceType() const
{
    return m_Source_type;
}

void PinMediaSource::setSourceType(std::string value)
{
	if (std::find(m_Source_typeEnum.begin(), m_Source_typeEnum.end(), value) != m_Source_typeEnum.end()) {
		m_Source_type = value;
	} else {
		throw std::runtime_error("Value " + value + " not allowed");
	}
}
std::string PinMediaSource::getContentType() const
{
    return m_Content_type;
}

void PinMediaSource::setContentType(std::string value)
{
	if (std::find(m_Content_typeEnum.begin(), m_Content_typeEnum.end(), value) != m_Content_typeEnum.end()) {
		m_Content_type = value;
	} else {
		throw std::runtime_error("Value " + value + " not allowed");
	}
}
std::string PinMediaSource::getData() const
{
    return m_Data;
}

void PinMediaSource::setData(std::string value)
{
	m_Data = value;
}
std::string PinMediaSource::getUrl() const
{
    return m_Url;
}

void PinMediaSource::setUrl(std::string value)
{
	m_Url = value;
}
std::string PinMediaSource::getCoverImageUrl() const
{
    return m_Cover_image_url;
}

void PinMediaSource::setCoverImageUrl(std::string value)
{
	m_Cover_image_url = value;
}
std::string PinMediaSource::getMediaId() const
{
    return m_Media_id;
}

void PinMediaSource::setMediaId(std::string value)
{
	m_Media_id = value;
}

std::vector<PinMediaSource> createPinMediaSourceVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<PinMediaSource>();
    for (const auto& child: pt) {
        vec.emplace_back(PinMediaSource(child.second));
    }

    return vec;
}

}
}
}
}

