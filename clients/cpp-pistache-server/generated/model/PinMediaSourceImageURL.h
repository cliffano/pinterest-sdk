/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * PinMediaSourceImageURL.h
 *
 * Image URL-based media source
 */

#ifndef PinMediaSourceImageURL_H_
#define PinMediaSourceImageURL_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Image URL-based media source
/// </summary>
class  PinMediaSourceImageURL
{
public:
    PinMediaSourceImageURL();
    virtual ~PinMediaSourceImageURL() = default;


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

    bool operator==(const PinMediaSourceImageURL& rhs) const;
    bool operator!=(const PinMediaSourceImageURL& rhs) const;

    /////////////////////////////////////////////
    /// PinMediaSourceImageURL members

    /// <summary>
    /// 
    /// </summary>
    std::string getSourceType() const;
    void setSourceType(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getUrl() const;
    void setUrl(std::string const& value);

    friend void to_json(nlohmann::json& j, const PinMediaSourceImageURL& o);
    friend void from_json(const nlohmann::json& j, PinMediaSourceImageURL& o);
protected:
    std::string m_Source_type;

    std::string m_Url;

    
};

} // namespace org::openapitools::server::model

#endif /* PinMediaSourceImageURL_H_ */
