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
 * CatalogsItemsUpdateBatchRequest.h
 *
 * Request object to update catalogs items
 */

#ifndef CatalogsItemsUpdateBatchRequest_H_
#define CatalogsItemsUpdateBatchRequest_H_


#include "BatchOperation.h"
#include "Country.h"
#include "ItemUpdateBatchRecord.h"
#include "Language.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Request object to update catalogs items
/// </summary>
class  CatalogsItemsUpdateBatchRequest
{
public:
    CatalogsItemsUpdateBatchRequest();
    virtual ~CatalogsItemsUpdateBatchRequest() = default;


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

    bool operator==(const CatalogsItemsUpdateBatchRequest& rhs) const;
    bool operator!=(const CatalogsItemsUpdateBatchRequest& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsItemsUpdateBatchRequest members

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
    std::vector<org::openapitools::server::model::ItemUpdateBatchRecord> getItems() const;
    void setItems(std::vector<org::openapitools::server::model::ItemUpdateBatchRecord> const& value);

    friend  void to_json(nlohmann::json& j, const CatalogsItemsUpdateBatchRequest& o);
    friend  void from_json(const nlohmann::json& j, CatalogsItemsUpdateBatchRequest& o);
protected:
    org::openapitools::server::model::Country m_Country;

    org::openapitools::server::model::Language m_Language;

    org::openapitools::server::model::BatchOperation m_Operation;

    std::vector<org::openapitools::server::model::ItemUpdateBatchRecord> m_Items;

    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsItemsUpdateBatchRequest_H_ */
