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



#include "TrackingUrls.h"

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

TrackingUrls::TrackingUrls(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string TrackingUrls::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void TrackingUrls::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree TrackingUrls::toPropertyTree()
{
    return toPropertyTree_internal();
}

void TrackingUrls::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string TrackingUrls::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void TrackingUrls::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree TrackingUrls::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	// generate tree for Impression
	if (!m_Impression.empty()) {
		for (const auto &childEntry : m_Impression) {
            ptree Impression_node;
            Impression_node.put("", childEntry);
            tmp_node.push_back(std::make_pair("", Impression_node));
		}
		pt.add_child("impression", tmp_node);
		tmp_node.clear();
	}
	// generate tree for Click
	if (!m_Click.empty()) {
		for (const auto &childEntry : m_Click) {
            ptree Click_node;
            Click_node.put("", childEntry);
            tmp_node.push_back(std::make_pair("", Click_node));
		}
		pt.add_child("click", tmp_node);
		tmp_node.clear();
	}
	// generate tree for Engagement
	if (!m_Engagement.empty()) {
		for (const auto &childEntry : m_Engagement) {
            ptree Engagement_node;
            Engagement_node.put("", childEntry);
            tmp_node.push_back(std::make_pair("", Engagement_node));
		}
		pt.add_child("engagement", tmp_node);
		tmp_node.clear();
	}
	// generate tree for Buyable_button
	if (!m_Buyable_button.empty()) {
		for (const auto &childEntry : m_Buyable_button) {
            ptree Buyable_button_node;
            Buyable_button_node.put("", childEntry);
            tmp_node.push_back(std::make_pair("", Buyable_button_node));
		}
		pt.add_child("buyable_button", tmp_node);
		tmp_node.clear();
	}
	// generate tree for Audience_verification
	if (!m_Audience_verification.empty()) {
		for (const auto &childEntry : m_Audience_verification) {
            ptree Audience_verification_node;
            Audience_verification_node.put("", childEntry);
            tmp_node.push_back(std::make_pair("", Audience_verification_node));
		}
		pt.add_child("audience_verification", tmp_node);
		tmp_node.clear();
	}
	return pt;
}

void TrackingUrls::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	// push all items of Impression into member vector
	if (pt.get_child_optional("impression")) {
		for (const auto &childTree : pt.get_child("impression")) {
            std::string val =
                childTree.second.data();
            m_Impression.emplace_back(std::move(val));
		}
	}
	// push all items of Click into member vector
	if (pt.get_child_optional("click")) {
		for (const auto &childTree : pt.get_child("click")) {
            std::string val =
                childTree.second.data();
            m_Click.emplace_back(std::move(val));
		}
	}
	// push all items of Engagement into member vector
	if (pt.get_child_optional("engagement")) {
		for (const auto &childTree : pt.get_child("engagement")) {
            std::string val =
                childTree.second.data();
            m_Engagement.emplace_back(std::move(val));
		}
	}
	// push all items of Buyable_button into member vector
	if (pt.get_child_optional("buyable_button")) {
		for (const auto &childTree : pt.get_child("buyable_button")) {
            std::string val =
                childTree.second.data();
            m_Buyable_button.emplace_back(std::move(val));
		}
	}
	// push all items of Audience_verification into member vector
	if (pt.get_child_optional("audience_verification")) {
		for (const auto &childTree : pt.get_child("audience_verification")) {
            std::string val =
                childTree.second.data();
            m_Audience_verification.emplace_back(std::move(val));
		}
	}
}

std::vector<std::string> TrackingUrls::getImpression() const
{
    return m_Impression;
}

void TrackingUrls::setImpression(std::vector<std::string> value)
{
	m_Impression = value;
}
std::vector<std::string> TrackingUrls::getClick() const
{
    return m_Click;
}

void TrackingUrls::setClick(std::vector<std::string> value)
{
	m_Click = value;
}
std::vector<std::string> TrackingUrls::getEngagement() const
{
    return m_Engagement;
}

void TrackingUrls::setEngagement(std::vector<std::string> value)
{
	m_Engagement = value;
}
std::vector<std::string> TrackingUrls::getBuyableButton() const
{
    return m_Buyable_button;
}

void TrackingUrls::setBuyableButton(std::vector<std::string> value)
{
	m_Buyable_button = value;
}
std::vector<std::string> TrackingUrls::getAudienceVerification() const
{
    return m_Audience_verification;
}

void TrackingUrls::setAudienceVerification(std::vector<std::string> value)
{
	m_Audience_verification = value;
}

std::vector<TrackingUrls> createTrackingUrlsVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<TrackingUrls>();
    for (const auto& child: pt) {
        vec.emplace_back(TrackingUrls(child.second));
    }

    return vec;
}

}
}
}
}

