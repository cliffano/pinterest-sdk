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
 * CatalogsProductGroupType.h
 *
 * Catalog product group type
 */

#ifndef CatalogsProductGroupType_H_
#define CatalogsProductGroupType_H_



#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Catalog product group type
/// </summary>
class  CatalogsProductGroupType 
{
public:
    CatalogsProductGroupType() = default;
    explicit CatalogsProductGroupType(boost::property_tree::ptree const& pt);
    virtual ~CatalogsProductGroupType() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// CatalogsProductGroupType members

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

std::vector<CatalogsProductGroupType> createCatalogsProductGroupTypeVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* CatalogsProductGroupType_H_ */
