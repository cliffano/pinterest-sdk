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
 * AdPreviewURLResponse.h
 *
 * 
 */

#ifndef AdPreviewURLResponse_H_
#define AdPreviewURLResponse_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  AdPreviewURLResponse
{
public:
    AdPreviewURLResponse();
    virtual ~AdPreviewURLResponse() = default;


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

    bool operator==(const AdPreviewURLResponse& rhs) const;
    bool operator!=(const AdPreviewURLResponse& rhs) const;

    /////////////////////////////////////////////
    /// AdPreviewURLResponse members

    /// <summary>
    /// &#39;Preview URL, expires in 24 hours. Can be used in an iframe. For example: https://ads.pinterest.com/ad-preview/74667c814dd2b19/ The preview object ID/key is the last param - 74667c814dd2b19&#39;
    /// </summary>
    std::string getUrl() const;
    void setUrl(std::string const& value);
    bool urlIsSet() const;
    void unsetUrl();

    friend  void to_json(nlohmann::json& j, const AdPreviewURLResponse& o);
    friend  void from_json(const nlohmann::json& j, AdPreviewURLResponse& o);
protected:
    std::string m_Url;
    bool m_UrlIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* AdPreviewURLResponse_H_ */