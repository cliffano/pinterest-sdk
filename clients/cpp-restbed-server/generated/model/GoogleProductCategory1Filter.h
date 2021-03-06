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
 * GoogleProductCategory1Filter.h
 *
 * 
 */

#ifndef GoogleProductCategory1Filter_H_
#define GoogleProductCategory1Filter_H_



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
class  GoogleProductCategory1Filter 
{
public:
    GoogleProductCategory1Filter() = default;
    explicit GoogleProductCategory1Filter(boost::property_tree::ptree const& pt);
    virtual ~GoogleProductCategory1Filter() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// GoogleProductCategory1Filter members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getGOOGLEPRODUCTCATEGORY1() const;
    void setGOOGLEPRODUCTCATEGORY1(std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_GOOGLE_PRODUCT_CATEGORY_1 = std::make_shared<CatalogsProductGroupMultipleStringListCriteria>();
};

std::vector<GoogleProductCategory1Filter> createGoogleProductCategory1FilterVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* GoogleProductCategory1Filter_H_ */
