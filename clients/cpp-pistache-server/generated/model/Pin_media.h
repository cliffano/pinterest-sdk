/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * Pin_media.h
 *
 * 
 */

#ifndef Pin_media_H_
#define Pin_media_H_


#include "PinMedia.h"
#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  Pin_media
{
public:
    Pin_media();
    virtual ~Pin_media() = default;


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

    bool operator==(const Pin_media& rhs) const;
    bool operator!=(const Pin_media& rhs) const;

    /////////////////////////////////////////////
    /// Pin_media members

    /// <summary>
    /// 
    /// </summary>
    std::string getMediaType() const;
    void setMediaType(std::string const& value);
    bool mediaTypeIsSet() const;
    void unsetMedia_type();

    friend void to_json(nlohmann::json& j, const Pin_media& o);
    friend void from_json(const nlohmann::json& j, Pin_media& o);
protected:
    std::string m_Media_type;
    bool m_Media_typeIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* Pin_media_H_ */