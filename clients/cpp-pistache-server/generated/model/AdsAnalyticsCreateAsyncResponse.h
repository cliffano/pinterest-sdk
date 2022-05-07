/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * AdsAnalyticsCreateAsyncResponse.h
 *
 * 
 */

#ifndef AdsAnalyticsCreateAsyncResponse_H_
#define AdsAnalyticsCreateAsyncResponse_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  AdsAnalyticsCreateAsyncResponse
{
public:
    AdsAnalyticsCreateAsyncResponse();
    virtual ~AdsAnalyticsCreateAsyncResponse() = default;


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

    bool operator==(const AdsAnalyticsCreateAsyncResponse& rhs) const;
    bool operator!=(const AdsAnalyticsCreateAsyncResponse& rhs) const;

    /////////////////////////////////////////////
    /// AdsAnalyticsCreateAsyncResponse members

    /// <summary>
    /// 
    /// </summary>
    std::string getReportStatus() const;
    void setReportStatus(std::string const& value);
    bool reportStatusIsSet() const;
    void unsetReport_status();
    /// <summary>
    /// 
    /// </summary>
    std::string getToken() const;
    void setToken(std::string const& value);
    bool tokenIsSet() const;
    void unsetToken();
    /// <summary>
    /// 
    /// </summary>
    std::string getMessage() const;
    void setMessage(std::string const& value);
    bool messageIsSet() const;
    void unsetMessage();

    friend void to_json(nlohmann::json& j, const AdsAnalyticsCreateAsyncResponse& o);
    friend void from_json(const nlohmann::json& j, AdsAnalyticsCreateAsyncResponse& o);
protected:
    std::string m_Report_status;
    bool m_Report_statusIsSet;
    std::string m_Token;
    bool m_TokenIsSet;
    std::string m_Message;
    bool m_MessageIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* AdsAnalyticsCreateAsyncResponse_H_ */
