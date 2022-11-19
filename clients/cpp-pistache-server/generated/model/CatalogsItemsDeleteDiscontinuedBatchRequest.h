/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * CatalogsItemsDeleteDiscontinuedBatchRequest.h
 *
 * Request object to discontinue catalogs items
 */

#ifndef CatalogsItemsDeleteDiscontinuedBatchRequest_H_
#define CatalogsItemsDeleteDiscontinuedBatchRequest_H_


#include "BatchOperation.h"
#include "Country.h"
#include "Language.h"
#include "ItemDeleteDiscontinuedBatchRecord.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Request object to discontinue catalogs items
/// </summary>
class  CatalogsItemsDeleteDiscontinuedBatchRequest
{
public:
    CatalogsItemsDeleteDiscontinuedBatchRequest();
    virtual ~CatalogsItemsDeleteDiscontinuedBatchRequest() = default;


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

    bool operator==(const CatalogsItemsDeleteDiscontinuedBatchRequest& rhs) const;
    bool operator!=(const CatalogsItemsDeleteDiscontinuedBatchRequest& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsItemsDeleteDiscontinuedBatchRequest members

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
    std::vector<org::openapitools::server::model::ItemDeleteDiscontinuedBatchRecord> getItems() const;
    void setItems(std::vector<org::openapitools::server::model::ItemDeleteDiscontinuedBatchRecord> const& value);

    friend void to_json(nlohmann::json& j, const CatalogsItemsDeleteDiscontinuedBatchRequest& o);
    friend void from_json(const nlohmann::json& j, CatalogsItemsDeleteDiscontinuedBatchRequest& o);
protected:
    org::openapitools::server::model::Country m_Country;

    org::openapitools::server::model::Language m_Language;

    org::openapitools::server::model::BatchOperation m_Operation;

    std::vector<org::openapitools::server::model::ItemDeleteDiscontinuedBatchRecord> m_Items;

    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsItemsDeleteDiscontinuedBatchRequest_H_ */
