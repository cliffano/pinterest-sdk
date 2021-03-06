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
 * CatalogsProductGroupCurrencyCriteria.h
 *
 * 
 */

#ifndef CatalogsProductGroupCurrencyCriteria_H_
#define CatalogsProductGroupCurrencyCriteria_H_



#include "NonNullableCatalogsCurrency.h"
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
class  CatalogsProductGroupCurrencyCriteria 
{
public:
    CatalogsProductGroupCurrencyCriteria() = default;
    explicit CatalogsProductGroupCurrencyCriteria(boost::property_tree::ptree const& pt);
    virtual ~CatalogsProductGroupCurrencyCriteria() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// CatalogsProductGroupCurrencyCriteria members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<NonNullableCatalogsCurrency> getValues() const;
    void setValues(std::shared_ptr<NonNullableCatalogsCurrency> value);

    /// <summary>
    /// 
    /// </summary>
    bool isNegated() const;
    void setNegated(bool value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::shared_ptr<NonNullableCatalogsCurrency> m_Values = std::make_shared<NonNullableCatalogsCurrency>();
    bool m_Negated = false;
};

std::vector<CatalogsProductGroupCurrencyCriteria> createCatalogsProductGroupCurrencyCriteriaVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* CatalogsProductGroupCurrencyCriteria_H_ */
