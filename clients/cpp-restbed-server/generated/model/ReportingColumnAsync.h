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

/*
 * ReportingColumnAsync.h
 *
 * Reporting columns
 */

#ifndef ReportingColumnAsync_H_
#define ReportingColumnAsync_H_



#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Reporting columns
/// </summary>
class  ReportingColumnAsync 
{
public:
    ReportingColumnAsync() = default;
    explicit ReportingColumnAsync(boost::property_tree::ptree const& pt);
    virtual ~ReportingColumnAsync() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// ReportingColumnAsync members

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
};

std::vector<ReportingColumnAsync> createReportingColumnAsyncVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* ReportingColumnAsync_H_ */
