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
 * ItemProcessingRecord.h
 *
 * Object describing an item processing record
 */

#ifndef ItemProcessingRecord_H_
#define ItemProcessingRecord_H_


#include "ItemValidationEvent.h"
#include <string>
#include "ItemProcessingStatus.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Object describing an item processing record
/// </summary>
class  ItemProcessingRecord
{
public:
    ItemProcessingRecord();
    virtual ~ItemProcessingRecord() = default;


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

    bool operator==(const ItemProcessingRecord& rhs) const;
    bool operator!=(const ItemProcessingRecord& rhs) const;

    /////////////////////////////////////////////
    /// ItemProcessingRecord members

    /// <summary>
    /// The catalog item id in the merchant namespace
    /// </summary>
    std::string getItemId() const;
    void setItemId(std::string const& value);
    bool itemIdIsSet() const;
    void unsetItem_id();
    /// <summary>
    /// Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.
    /// </summary>
    std::vector<org::openapitools::server::model::ItemValidationEvent> getErrors() const;
    void setErrors(std::vector<org::openapitools::server::model::ItemValidationEvent> const& value);
    bool errorsIsSet() const;
    void unsetErrors();
    /// <summary>
    /// Array with the validation warnings for the item processing record
    /// </summary>
    std::vector<org::openapitools::server::model::ItemValidationEvent> getWarnings() const;
    void setWarnings(std::vector<org::openapitools::server::model::ItemValidationEvent> const& value);
    bool warningsIsSet() const;
    void unsetWarnings();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::ItemProcessingStatus getStatus() const;
    void setStatus(org::openapitools::server::model::ItemProcessingStatus const& value);
    bool statusIsSet() const;
    void unsetStatus();

    friend void to_json(nlohmann::json& j, const ItemProcessingRecord& o);
    friend void from_json(const nlohmann::json& j, ItemProcessingRecord& o);
protected:
    std::string m_Item_id;
    bool m_Item_idIsSet;
    std::vector<org::openapitools::server::model::ItemValidationEvent> m_Errors;
    bool m_ErrorsIsSet;
    std::vector<org::openapitools::server::model::ItemValidationEvent> m_Warnings;
    bool m_WarningsIsSet;
    org::openapitools::server::model::ItemProcessingStatus m_Status;
    bool m_StatusIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* ItemProcessingRecord_H_ */
