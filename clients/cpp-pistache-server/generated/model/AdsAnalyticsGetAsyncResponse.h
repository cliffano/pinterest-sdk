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
 * AdsAnalyticsGetAsyncResponse.h
 *
 * 
 */

#ifndef AdsAnalyticsGetAsyncResponse_H_
#define AdsAnalyticsGetAsyncResponse_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  AdsAnalyticsGetAsyncResponse
{
public:
    AdsAnalyticsGetAsyncResponse();
    virtual ~AdsAnalyticsGetAsyncResponse() = default;


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

    bool operator==(const AdsAnalyticsGetAsyncResponse& rhs) const;
    bool operator!=(const AdsAnalyticsGetAsyncResponse& rhs) const;

    /////////////////////////////////////////////
    /// AdsAnalyticsGetAsyncResponse members

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
    std::string getUrl() const;
    void setUrl(std::string const& value);
    bool urlIsSet() const;
    void unsetUrl();
    /// <summary>
    /// 
    /// </summary>
    double getSize() const;
    void setSize(double const value);
    bool sizeIsSet() const;
    void unsetSize();

    friend void to_json(nlohmann::json& j, const AdsAnalyticsGetAsyncResponse& o);
    friend void from_json(const nlohmann::json& j, AdsAnalyticsGetAsyncResponse& o);
protected:
    std::string m_Report_status;
    bool m_Report_statusIsSet;
    std::string m_Url;
    bool m_UrlIsSet;
    double m_Size;
    bool m_SizeIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* AdsAnalyticsGetAsyncResponse_H_ */
