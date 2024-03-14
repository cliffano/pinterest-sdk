/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * CatalogsItemsCreateBatchRequest.h
 *
 * Request object to create catalogs items
 */

#ifndef CatalogsItemsCreateBatchRequest_H_
#define CatalogsItemsCreateBatchRequest_H_


#include "BatchOperation.h"
#include "Country.h"
#include "Language.h"
#include "ItemCreateBatchRecord.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Request object to create catalogs items
/// </summary>
class  CatalogsItemsCreateBatchRequest
{
public:
    CatalogsItemsCreateBatchRequest();
    virtual ~CatalogsItemsCreateBatchRequest() = default;


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

    bool operator==(const CatalogsItemsCreateBatchRequest& rhs) const;
    bool operator!=(const CatalogsItemsCreateBatchRequest& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsItemsCreateBatchRequest members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::Country getCountry() const;
    void setCountry(org::openapitools::server::model::Country const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::Language getLanguage() const;
    void setLanguage(org::openapitools::server::model::Language const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::BatchOperation getOperation() const;
    void setOperation(org::openapitools::server::model::BatchOperation const& value);
    /// <summary>
    /// Array with catalogs items
    /// </summary>
    std::vector<org::openapitools::server::model::ItemCreateBatchRecord> getItems() const;
    void setItems(std::vector<org::openapitools::server::model::ItemCreateBatchRecord> const& value);

    friend  void to_json(nlohmann::json& j, const CatalogsItemsCreateBatchRequest& o);
    friend  void from_json(const nlohmann::json& j, CatalogsItemsCreateBatchRequest& o);
protected:
    org::openapitools::server::model::Country m_Country;

    org::openapitools::server::model::Language m_Language;

    org::openapitools::server::model::BatchOperation m_Operation;

    std::vector<org::openapitools::server::model::ItemCreateBatchRecord> m_Items;

    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsItemsCreateBatchRequest_H_ */