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
 * BulkUpsertStatusResponse.h
 *
 * ID of the bulk request.
 */

#ifndef BulkUpsertStatusResponse_H_
#define BulkUpsertStatusResponse_H_


#include "BulkUpsertStatus.h"
#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// ID of the bulk request.
/// </summary>
class  BulkUpsertStatusResponse
{
public:
    BulkUpsertStatusResponse();
    virtual ~BulkUpsertStatusResponse() = default;


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

    bool operator==(const BulkUpsertStatusResponse& rhs) const;
    bool operator!=(const BulkUpsertStatusResponse& rhs) const;

    /////////////////////////////////////////////
    /// BulkUpsertStatusResponse members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::BulkUpsertStatus getStatus() const;
    void setStatus(org::openapitools::server::model::BulkUpsertStatus const& value);
    bool statusIsSet() const;
    void unsetStatus();
    /// <summary>
    /// 
    /// </summary>
    std::string getResultUrl() const;
    void setResultUrl(std::string const& value);
    bool resultUrlIsSet() const;
    void unsetResult_url();

    friend  void to_json(nlohmann::json& j, const BulkUpsertStatusResponse& o);
    friend  void from_json(const nlohmann::json& j, BulkUpsertStatusResponse& o);
protected:
    org::openapitools::server::model::BulkUpsertStatus m_Status;
    bool m_StatusIsSet;
    std::string m_Result_url;
    bool m_Result_urlIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* BulkUpsertStatusResponse_H_ */
