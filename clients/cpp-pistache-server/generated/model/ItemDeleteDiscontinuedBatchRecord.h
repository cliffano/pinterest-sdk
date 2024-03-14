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
 * ItemDeleteDiscontinuedBatchRecord.h
 *
 * Object describing an item batch record to discontinue items
 */

#ifndef ItemDeleteDiscontinuedBatchRecord_H_
#define ItemDeleteDiscontinuedBatchRecord_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Object describing an item batch record to discontinue items
/// </summary>
class  ItemDeleteDiscontinuedBatchRecord
{
public:
    ItemDeleteDiscontinuedBatchRecord();
    virtual ~ItemDeleteDiscontinuedBatchRecord() = default;


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

    bool operator==(const ItemDeleteDiscontinuedBatchRecord& rhs) const;
    bool operator!=(const ItemDeleteDiscontinuedBatchRecord& rhs) const;

    /////////////////////////////////////////////
    /// ItemDeleteDiscontinuedBatchRecord members

    /// <summary>
    /// The catalog item id in the merchant namespace
    /// </summary>
    std::string getItemId() const;
    void setItemId(std::string const& value);
    bool itemIdIsSet() const;
    void unsetItem_id();

    friend  void to_json(nlohmann::json& j, const ItemDeleteDiscontinuedBatchRecord& o);
    friend  void from_json(const nlohmann::json& j, ItemDeleteDiscontinuedBatchRecord& o);
protected:
    std::string m_Item_id;
    bool m_Item_idIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* ItemDeleteDiscontinuedBatchRecord_H_ */
