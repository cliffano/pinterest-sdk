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



#include "AnalyticsMetricsResponse_daily_metrics.h"

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

AnalyticsMetricsResponse_daily_metrics::AnalyticsMetricsResponse_daily_metrics(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string AnalyticsMetricsResponse_daily_metrics::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void AnalyticsMetricsResponse_daily_metrics::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree AnalyticsMetricsResponse_daily_metrics::toPropertyTree()
{
    return toPropertyTree_internal();
}

void AnalyticsMetricsResponse_daily_metrics::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string AnalyticsMetricsResponse_daily_metrics::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void AnalyticsMetricsResponse_daily_metrics::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree AnalyticsMetricsResponse_daily_metrics::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	pt.put("data_status", m_Data_status);
	pt.put("date", m_date);
	// generate tree for Metrics
	if (!m_Metrics.empty()) {
		for (const auto &childEntry : m_Metrics) {
            ptree Inner_node;
            Inner_node.put("", childEntry);
            tmp_node.push_back(std::make_pair("", Inner_node));
		}
		pt.add_child("metrics", tmp_node);
		tmp_node.clear();
	}
	return pt;
}

void AnalyticsMetricsResponse_daily_metrics::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	setDataStatus(pt.get("data_status", ""));
	m_date = pt.get("date", "");
	// push all items of Metrics into member vector
	if (pt.get_child_optional("metrics")) {
		for (const auto &childTree : pt.get_child("metrics")) {
            double val =
                std::stod(childTree.second.data());
            m_Inner.emplace_back(std::move(val));
		}
	}
}

std::string AnalyticsMetricsResponse_daily_metrics::getDataStatus() const
{
    return m_Data_status;
}

void AnalyticsMetricsResponse_daily_metrics::setDataStatus(std::string value)
{
	if (std::find(m_Data_statusEnum.begin(), m_Data_statusEnum.end(), value) != m_Data_statusEnum.end()) {
		m_Data_status = value;
	} else {
		throw std::runtime_error("Value " + value + " not allowed");
	}
}
std::string AnalyticsMetricsResponse_daily_metrics::getDate() const
{
    return m_date;
}

void AnalyticsMetricsResponse_daily_metrics::setDate(std::string value)
{
	m_date = value;
}
std::map<std::string, double> AnalyticsMetricsResponse_daily_metrics::getMetrics() const
{
    return m_Metrics;
}

void AnalyticsMetricsResponse_daily_metrics::setMetrics(std::map<std::string, double> value)
{
	m_Metrics = value;
}

std::vector<AnalyticsMetricsResponse_daily_metrics> createAnalyticsMetricsResponse_daily_metricsVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<AnalyticsMetricsResponse_daily_metrics>();
    for (const auto& child: pt) {
        vec.emplace_back(AnalyticsMetricsResponse_daily_metrics(child.second));
    }

    return vec;
}

}
}
}
}

