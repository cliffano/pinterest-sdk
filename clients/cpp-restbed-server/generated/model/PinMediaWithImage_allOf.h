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
 * PinMediaWithImage_allOf.h
 *
 * 
 */

#ifndef PinMediaWithImage_allOf_H_
#define PinMediaWithImage_allOf_H_



#include "ImageDetails.h"
#include <map>
#include <vector>
#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PinMediaWithImage_allOf 
{
public:
    PinMediaWithImage_allOf() = default;
    explicit PinMediaWithImage_allOf(boost::property_tree::ptree const& pt);
    virtual ~PinMediaWithImage_allOf() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// PinMediaWithImage_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::map<std::string, std::shared_ptr<ImageDetails>> getImages() const;
    void setImages(std::map<std::string, std::shared_ptr<ImageDetails>> value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::map<std::string, std::shared_ptr<ImageDetails>> m_Images;
};

std::vector<PinMediaWithImage_allOf> createPinMediaWithImage_allOfVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* PinMediaWithImage_allOf_H_ */
