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
 * PinMediaSourceImageBase64.h
 *
 * Base64-encoded image media source
 */

#ifndef PinMediaSourceImageBase64_H_
#define PinMediaSourceImageBase64_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Base64-encoded image media source
/// </summary>
class  PinMediaSourceImageBase64
{
public:
    PinMediaSourceImageBase64();
    virtual ~PinMediaSourceImageBase64() = default;


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

    bool operator==(const PinMediaSourceImageBase64& rhs) const;
    bool operator!=(const PinMediaSourceImageBase64& rhs) const;

    /////////////////////////////////////////////
    /// PinMediaSourceImageBase64 members

    /// <summary>
    /// 
    /// </summary>
    std::string getSourceType() const;
    void setSourceType(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getContentType() const;
    void setContentType(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getData() const;
    void setData(std::string const& value);

    friend void to_json(nlohmann::json& j, const PinMediaSourceImageBase64& o);
    friend void from_json(const nlohmann::json& j, PinMediaSourceImageBase64& o);
protected:
    std::string m_Source_type;

    std::string m_Content_type;

    std::string m_Data;

    
};

} // namespace org::openapitools::server::model

#endif /* PinMediaSourceImageBase64_H_ */
