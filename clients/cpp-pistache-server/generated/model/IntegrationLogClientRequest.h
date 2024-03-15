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
 * IntegrationLogClientRequest.h
 *
 * HTTP request details included in the log sent by the client.
 */

#ifndef IntegrationLogClientRequest_H_
#define IntegrationLogClientRequest_H_


#include <string>
#include <map>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// HTTP request details included in the log sent by the client.
/// </summary>
class  IntegrationLogClientRequest
{
public:
    IntegrationLogClientRequest();
    virtual ~IntegrationLogClientRequest() = default;


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

    bool operator==(const IntegrationLogClientRequest& rhs) const;
    bool operator!=(const IntegrationLogClientRequest& rhs) const;

    /////////////////////////////////////////////
    /// IntegrationLogClientRequest members

    /// <summary>
    /// 
    /// </summary>
    std::string getMethod() const;
    void setMethod(std::string const& value);
    /// <summary>
    /// HTTP request host from host header.
    /// </summary>
    std::string getHost() const;
    void setHost(std::string const& value);
    /// <summary>
    /// HTTP request path.
    /// </summary>
    std::string getPath() const;
    void setPath(std::string const& value);
    /// <summary>
    /// HTTP request headers as key-value pairs.
    /// </summary>
    std::map<std::string, std::string> getRequestHeaders() const;
    void setRequestHeaders(std::map<std::string, std::string> const& value);
    bool requestHeadersIsSet() const;
    void unsetRequest_headers();
    /// <summary>
    /// HTTP response headers as key-value pairs.
    /// </summary>
    std::map<std::string, std::string> getResponseHeaders() const;
    void setResponseHeaders(std::map<std::string, std::string> const& value);
    bool responseHeadersIsSet() const;
    void unsetResponse_headers();
    /// <summary>
    /// 
    /// </summary>
    int32_t getResponseStatusCode() const;
    void setResponseStatusCode(int32_t const value);
    bool responseStatusCodeIsSet() const;
    void unsetResponse_status_code();

    friend  void to_json(nlohmann::json& j, const IntegrationLogClientRequest& o);
    friend  void from_json(const nlohmann::json& j, IntegrationLogClientRequest& o);
protected:
    std::string m_Method;

    std::string m_Host;

    std::string m_Path;

    std::map<std::string, std::string> m_Request_headers;
    bool m_Request_headersIsSet;
    std::map<std::string, std::string> m_Response_headers;
    bool m_Response_headersIsSet;
    int32_t m_Response_status_code;
    bool m_Response_status_codeIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* IntegrationLogClientRequest_H_ */
