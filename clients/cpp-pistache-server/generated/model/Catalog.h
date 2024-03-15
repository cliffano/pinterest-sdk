/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * Catalog.h
 *
 * Catalog entity
 */

#ifndef Catalog_H_
#define Catalog_H_


#include <string>
#include "CatalogsType.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Catalog entity
/// </summary>
class  Catalog
{
public:
    Catalog();
    virtual ~Catalog() = default;


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

    bool operator==(const Catalog& rhs) const;
    bool operator!=(const Catalog& rhs) const;

    /////////////////////////////////////////////
    /// Catalog members

    /// <summary>
    /// 
    /// </summary>
    std::string getCreatedAt() const;
    void setCreatedAt(std::string const& value);
    bool createdAtIsSet() const;
    void unsetCreated_at();
    /// <summary>
    /// ID of the catalog entity.
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getUpdatedAt() const;
    void setUpdatedAt(std::string const& value);
    bool updatedAtIsSet() const;
    void unsetUpdated_at();
    /// <summary>
    /// A human-friendly name associated to a catalog entity.
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsType getCatalogType() const;
    void setCatalogType(org::openapitools::server::model::CatalogsType const& value);

    friend  void to_json(nlohmann::json& j, const Catalog& o);
    friend  void from_json(const nlohmann::json& j, Catalog& o);
protected:
    std::string m_Created_at;
    bool m_Created_atIsSet;
    std::string m_Id;

    std::string m_Updated_at;
    bool m_Updated_atIsSet;
    std::string m_Name;

    org::openapitools::server::model::CatalogsType m_Catalog_type;

    
};

} // namespace org::openapitools::server::model

#endif /* Catalog_H_ */
