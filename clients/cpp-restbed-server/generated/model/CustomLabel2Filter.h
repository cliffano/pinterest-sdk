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
 * CustomLabel2Filter.h
 *
 * 
 */

#ifndef CustomLabel2Filter_H_
#define CustomLabel2Filter_H_



#include "CatalogsProductGroupMultipleStringCriteria.h"
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
class  CustomLabel2Filter 
{
public:
    CustomLabel2Filter() = default;
    explicit CustomLabel2Filter(boost::property_tree::ptree const& pt);
    virtual ~CustomLabel2Filter() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// CustomLabel2Filter members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> getCUSTOMLABEL2() const;
    void setCUSTOMLABEL2(std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> m_CUSTOM_LABEL_2 = std::make_shared<CatalogsProductGroupMultipleStringCriteria>();
};

std::vector<CustomLabel2Filter> createCustomLabel2FilterVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* CustomLabel2Filter_H_ */
