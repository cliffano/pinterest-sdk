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



#include "MediaUploadDetails.h"

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

MediaUploadDetails::MediaUploadDetails(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string MediaUploadDetails::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void MediaUploadDetails::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree MediaUploadDetails::toPropertyTree()
{
    return toPropertyTree_internal();
}

void MediaUploadDetails::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string MediaUploadDetails::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void MediaUploadDetails::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree MediaUploadDetails::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	pt.put("media_id", m_Media_id);
	pt.put("media_type", m_Media_type);
	if (m_Media_type != nullptr) {
		pt.add_child("media_type", m_Media_type->toPropertyTree());
	}
	pt.put("status", m_Status);
	if (m_Status != nullptr) {
		pt.add_child("status", m_Status->toPropertyTree());
	}
	return pt;
}

void MediaUploadDetails::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	m_Media_id = pt.get("media_id", "");
	m_Media_type = pt.get("media_type", "");
	if (pt.get_child_optional("media_type")) {
		m_Media_type = "";
		m_Media_type->fromPropertyTree(pt.get_child("media_type"));
	}
	m_Status = pt.get("status", "");
	if (pt.get_child_optional("status")) {
		m_Status = "";
		m_Status->fromPropertyTree(pt.get_child("status"));
	}
}

std::string MediaUploadDetails::getMediaId() const
{
    return m_Media_id;
}

void MediaUploadDetails::setMediaId(std::string value)
{
	m_Media_id = value;
}
MediaUploadType MediaUploadDetails::getMediaType() const
{
    return m_Media_type;
}

void MediaUploadDetails::setMediaType(MediaUploadType value)
{
	m_Media_type = value;
}
MediaUploadStatus MediaUploadDetails::getStatus() const
{
    return m_Status;
}

void MediaUploadDetails::setStatus(MediaUploadStatus value)
{
	m_Status = value;
}

std::vector<MediaUploadDetails> createMediaUploadDetailsVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<MediaUploadDetails>();
    for (const auto& child: pt) {
        vec.emplace_back(MediaUploadDetails(child.second));
    }

    return vec;
}

}
}
}
}

