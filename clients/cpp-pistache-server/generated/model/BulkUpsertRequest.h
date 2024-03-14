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
 * BulkUpsertRequest.h
 *
 * Two set of objects to be managed asyncronusly by bulk. One for creations, one for modifications.
 */

#ifndef BulkUpsertRequest_H_
#define BulkUpsertRequest_H_


#include "BulkUpsertRequestCreate.h"
#include "BulkUpsertRequestUpdate.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Two set of objects to be managed asyncronusly by bulk. One for creations, one for modifications.
/// </summary>
class  BulkUpsertRequest
{
public:
    BulkUpsertRequest();
    virtual ~BulkUpsertRequest() = default;


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

    bool operator==(const BulkUpsertRequest& rhs) const;
    bool operator!=(const BulkUpsertRequest& rhs) const;

    /////////////////////////////////////////////
    /// BulkUpsertRequest members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::BulkUpsertRequestCreate getCreate() const;
    void setCreate(org::openapitools::server::model::BulkUpsertRequestCreate const& value);
    bool createIsSet() const;
    void unsetCreate();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::BulkUpsertRequestUpdate getUpdate() const;
    void setUpdate(org::openapitools::server::model::BulkUpsertRequestUpdate const& value);
    bool updateIsSet() const;
    void unsetUpdate();

    friend  void to_json(nlohmann::json& j, const BulkUpsertRequest& o);
    friend  void from_json(const nlohmann::json& j, BulkUpsertRequest& o);
protected:
    org::openapitools::server::model::BulkUpsertRequestCreate m_Create;
    bool m_CreateIsSet;
    org::openapitools::server::model::BulkUpsertRequestUpdate m_Update;
    bool m_UpdateIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* BulkUpsertRequest_H_ */
