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



#include "MediaUpload.h"

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

MediaUpload::MediaUpload(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string MediaUpload::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void MediaUpload::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree MediaUpload::toPropertyTree()
{
    return toPropertyTree_internal();
}

void MediaUpload::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string MediaUpload::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void MediaUpload::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree MediaUpload::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	pt.put("media_id", m_Media_id);
	pt.put("media_type", m_Media_type);
	if (m_Media_type != nullptr) {
		pt.add_child("media_type", m_Media_type->toPropertyTree());
	}
	pt.put("upload_url", m_Upload_url);
	if (m_Upload_parameters != nullptr) {
		pt.add_child("upload_parameters", m_Upload_parameters->toPropertyTree());
	}
	return pt;
}

void MediaUpload::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	m_Media_id = pt.get("media_id", "");
	m_Media_type = pt.get("media_type", "");
	if (pt.get_child_optional("media_type")) {
		m_Media_type = "";
		m_Media_type->fromPropertyTree(pt.get_child("media_type"));
	}
	m_Upload_url = pt.get("upload_url", "");
	if (pt.get_child_optional("upload_parameters")) {
		m_Upload_parameters = std::make_shared<MediaUpload_allOf_upload_parameters>();
		m_Upload_parameters->fromPropertyTree(pt.get_child("upload_parameters"));
	}
}

std::string MediaUpload::getMediaId() const
{
    return m_Media_id;
}

void MediaUpload::setMediaId(std::string value)
{
	m_Media_id = value;
}
MediaUploadType MediaUpload::getMediaType() const
{
    return m_Media_type;
}

void MediaUpload::setMediaType(MediaUploadType value)
{
	m_Media_type = value;
}
std::string MediaUpload::getUploadUrl() const
{
    return m_Upload_url;
}

void MediaUpload::setUploadUrl(std::string value)
{
	m_Upload_url = value;
}
std::shared_ptr<MediaUpload_allOf_upload_parameters> MediaUpload::getUploadParameters() const
{
    return m_Upload_parameters;
}

void MediaUpload::setUploadParameters(std::shared_ptr<MediaUpload_allOf_upload_parameters> value)
{
	m_Upload_parameters = value;
}

std::vector<MediaUpload> createMediaUploadVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<MediaUpload>();
    for (const auto& child: pt) {
        vec.emplace_back(MediaUpload(child.second));
    }

    return vec;
}

}
}
}
}

