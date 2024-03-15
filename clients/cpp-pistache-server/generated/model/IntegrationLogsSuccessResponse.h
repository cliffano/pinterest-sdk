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
 * IntegrationLogsSuccessResponse.h
 *
 * Response when logs are successfully processed.
 */

#ifndef IntegrationLogsSuccessResponse_H_
#define IntegrationLogsSuccessResponse_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Response when logs are successfully processed.
/// </summary>
class  IntegrationLogsSuccessResponse
{
public:
    IntegrationLogsSuccessResponse();
    virtual ~IntegrationLogsSuccessResponse() = default;


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

    bool operator==(const IntegrationLogsSuccessResponse& rhs) const;
    bool operator!=(const IntegrationLogsSuccessResponse& rhs) const;

    /////////////////////////////////////////////
    /// IntegrationLogsSuccessResponse members

    /// <summary>
    /// 
    /// </summary>
    std::string getMessage() const;
    void setMessage(std::string const& value);
    bool messageIsSet() const;
    void unsetMessage();

    friend  void to_json(nlohmann::json& j, const IntegrationLogsSuccessResponse& o);
    friend  void from_json(const nlohmann::json& j, IntegrationLogsSuccessResponse& o);
protected:
    std::string m_Message;
    bool m_MessageIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* IntegrationLogsSuccessResponse_H_ */
