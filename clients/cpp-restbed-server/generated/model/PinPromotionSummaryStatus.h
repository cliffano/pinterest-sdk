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

/*
 * PinPromotionSummaryStatus.h
 *
 * Summary status for pin promotions
 */

#ifndef PinPromotionSummaryStatus_H_
#define PinPromotionSummaryStatus_H_



#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Summary status for pin promotions
/// </summary>
class  PinPromotionSummaryStatus 
{
public:
    PinPromotionSummaryStatus() = default;
    explicit PinPromotionSummaryStatus(boost::property_tree::ptree const& pt);
    virtual ~PinPromotionSummaryStatus() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// PinPromotionSummaryStatus members

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

std::vector<PinPromotionSummaryStatus> createPinPromotionSummaryStatusVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* PinPromotionSummaryStatus_H_ */
