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



#include "CampaignCommon.h"

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

CampaignCommon::CampaignCommon(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string CampaignCommon::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void CampaignCommon::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree CampaignCommon::toPropertyTree()
{
    return toPropertyTree_internal();
}

void CampaignCommon::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string CampaignCommon::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void CampaignCommon::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree CampaignCommon::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	pt.put("ad_account_id", m_Ad_account_id);
	pt.put("name", m_Name);
	pt.put("status", m_Status);
	if (m_Status != nullptr) {
		pt.add_child("status", m_Status->toPropertyTree());
	}
	pt.put("lifetime_spend_cap", m_Lifetime_spend_cap);
	pt.put("daily_spend_cap", m_Daily_spend_cap);
	pt.put("order_line_id", m_Order_line_id);
	if (m_Tracking_urls != nullptr) {
		pt.add_child("tracking_urls", m_Tracking_urls->toPropertyTree());
	}
	pt.put("start_time", m_Start_time);
	pt.put("end_time", m_End_time);
	return pt;
}

void CampaignCommon::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	m_Ad_account_id = pt.get("ad_account_id", "");
	m_Name = pt.get("name", "");
	m_Status = pt.get("status", "ACTIVE");
	if (pt.get_child_optional("status")) {
		m_Status = "ACTIVE";
		m_Status->fromPropertyTree(pt.get_child("status"));
	}
	m_Lifetime_spend_cap = pt.get("lifetime_spend_cap", 0);
	m_Daily_spend_cap = pt.get("daily_spend_cap", 0);
	m_Order_line_id = pt.get("order_line_id", "");
	if (pt.get_child_optional("tracking_urls")) {
		m_Tracking_urls = nullptr;
		m_Tracking_urls->fromPropertyTree(pt.get_child("tracking_urls"));
	}
	m_Start_time = pt.get("start_time", 0);
	m_End_time = pt.get("end_time", 0);
}

std::string CampaignCommon::getAdAccountId() const
{
    return m_Ad_account_id;
}

void CampaignCommon::setAdAccountId(std::string value)
{
	m_Ad_account_id = value;
}
std::string CampaignCommon::getName() const
{
    return m_Name;
}

void CampaignCommon::setName(std::string value)
{
	m_Name = value;
}
EntityStatus CampaignCommon::getStatus() const
{
    return m_Status;
}

void CampaignCommon::setStatus(EntityStatus value)
{
	m_Status = value;
}
int32_t CampaignCommon::getLifetimeSpendCap() const
{
    return m_Lifetime_spend_cap;
}

void CampaignCommon::setLifetimeSpendCap(int32_t value)
{
	m_Lifetime_spend_cap = value;
}
int32_t CampaignCommon::getDailySpendCap() const
{
    return m_Daily_spend_cap;
}

void CampaignCommon::setDailySpendCap(int32_t value)
{
	m_Daily_spend_cap = value;
}
std::string CampaignCommon::getOrderLineId() const
{
    return m_Order_line_id;
}

void CampaignCommon::setOrderLineId(std::string value)
{
	m_Order_line_id = value;
}
std::shared_ptr<TrackingUrls> CampaignCommon::getTrackingUrls() const
{
    return m_Tracking_urls;
}

void CampaignCommon::setTrackingUrls(std::shared_ptr<TrackingUrls> value)
{
	m_Tracking_urls = value;
}
int32_t CampaignCommon::getStartTime() const
{
    return m_Start_time;
}

void CampaignCommon::setStartTime(int32_t value)
{
	m_Start_time = value;
}
int32_t CampaignCommon::getEndTime() const
{
    return m_End_time;
}

void CampaignCommon::setEndTime(int32_t value)
{
	m_End_time = value;
}

std::vector<CampaignCommon> createCampaignCommonVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<CampaignCommon>();
    for (const auto& child: pt) {
        vec.emplace_back(CampaignCommon(child.second));
    }

    return vec;
}

}
}
}
}

