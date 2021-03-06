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
 * CatalogsFeedValidationDetails.h
 *
 * 
 */

#ifndef CatalogsFeedValidationDetails_H_
#define CatalogsFeedValidationDetails_H_



#include "CatalogsFeedValidationWarnings.h"
#include "CatalogsFeedValidationErrors.h"
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
class  CatalogsFeedValidationDetails 
{
public:
    CatalogsFeedValidationDetails() = default;
    explicit CatalogsFeedValidationDetails(boost::property_tree::ptree const& pt);
    virtual ~CatalogsFeedValidationDetails() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// CatalogsFeedValidationDetails members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFeedValidationErrors> getErrors() const;
    void setErrors(std::shared_ptr<CatalogsFeedValidationErrors> value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFeedValidationWarnings> getWarnings() const;
    void setWarnings(std::shared_ptr<CatalogsFeedValidationWarnings> value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::shared_ptr<CatalogsFeedValidationErrors> m_Errors;
    std::shared_ptr<CatalogsFeedValidationWarnings> m_Warnings;
};

std::vector<CatalogsFeedValidationDetails> createCatalogsFeedValidationDetailsVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* CatalogsFeedValidationDetails_H_ */
