/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * CatalogsFeedIngestionInfo.h
 *
 * 
 */

#ifndef CatalogsFeedIngestionInfo_H_
#define CatalogsFeedIngestionInfo_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  CatalogsFeedIngestionInfo
{
public:
    CatalogsFeedIngestionInfo();
    virtual ~CatalogsFeedIngestionInfo() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const CatalogsFeedIngestionInfo& rhs) const;
    bool operator!=(const CatalogsFeedIngestionInfo& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsFeedIngestionInfo members

    /// <summary>
    /// 
    /// </summary>
    int32_t getInStock() const;
    void setInStock(int32_t const value);
    bool inStockIsSet() const;
    void unsetIn_stock();
    /// <summary>
    /// 
    /// </summary>
    int32_t getOutOfStock() const;
    void setOutOfStock(int32_t const value);
    bool outOfStockIsSet() const;
    void unsetOut_of_stock();
    /// <summary>
    /// 
    /// </summary>
    int32_t getPreorder() const;
    void setPreorder(int32_t const value);
    bool preorderIsSet() const;
    void unsetPreorder();

    friend void to_json(nlohmann::json& j, const CatalogsFeedIngestionInfo& o);
    friend void from_json(const nlohmann::json& j, CatalogsFeedIngestionInfo& o);
protected:
    int32_t m_In_stock;
    bool m_In_stockIsSet;
    int32_t m_Out_of_stock;
    bool m_Out_of_stockIsSet;
    int32_t m_Preorder;
    bool m_PreorderIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsFeedIngestionInfo_H_ */
