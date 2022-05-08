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
 * GoogleProductCategory3Filter.h
 *
 * 
 */

#ifndef GoogleProductCategory3Filter_H_
#define GoogleProductCategory3Filter_H_



#include "CatalogsProductGroupMultipleStringListCriteria.h"
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
class  GoogleProductCategory3Filter 
{
public:
    GoogleProductCategory3Filter() = default;
    explicit GoogleProductCategory3Filter(boost::property_tree::ptree const& pt);
    virtual ~GoogleProductCategory3Filter() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// GoogleProductCategory3Filter members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getGOOGLEPRODUCTCATEGORY3() const;
    void setGOOGLEPRODUCTCATEGORY3(std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_GOOGLE_PRODUCT_CATEGORY_3 = std::make_shared<CatalogsProductGroupMultipleStringListCriteria>();
};

std::vector<GoogleProductCategory3Filter> createGoogleProductCategory3FilterVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* GoogleProductCategory3Filter_H_ */
