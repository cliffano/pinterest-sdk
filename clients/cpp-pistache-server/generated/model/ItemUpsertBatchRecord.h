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
 * ItemUpsertBatchRecord.h
 *
 * Object describing an item batch record to upsert items
 */

#ifndef ItemUpsertBatchRecord_H_
#define ItemUpsertBatchRecord_H_


#include <string>
#include "ItemAttributes.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Object describing an item batch record to upsert items
/// </summary>
class  ItemUpsertBatchRecord
{
public:
    ItemUpsertBatchRecord();
    virtual ~ItemUpsertBatchRecord() = default;


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

    bool operator==(const ItemUpsertBatchRecord& rhs) const;
    bool operator!=(const ItemUpsertBatchRecord& rhs) const;

    /////////////////////////////////////////////
    /// ItemUpsertBatchRecord members

    /// <summary>
    /// The catalog item id in the merchant namespace
    /// </summary>
    std::string getItemId() const;
    void setItemId(std::string const& value);
    bool itemIdIsSet() const;
    void unsetItem_id();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::ItemAttributes getAttributes() const;
    void setAttributes(org::openapitools::server::model::ItemAttributes const& value);
    bool attributesIsSet() const;
    void unsetAttributes();

    friend  void to_json(nlohmann::json& j, const ItemUpsertBatchRecord& o);
    friend  void from_json(const nlohmann::json& j, ItemUpsertBatchRecord& o);
protected:
    std::string m_Item_id;
    bool m_Item_idIsSet;
    org::openapitools::server::model::ItemAttributes m_Attributes;
    bool m_AttributesIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* ItemUpsertBatchRecord_H_ */
