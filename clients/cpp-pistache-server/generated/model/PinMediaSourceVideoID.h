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
 * PinMediaSourceVideoID.h
 *
 * Video ID-based media source
 */

#ifndef PinMediaSourceVideoID_H_
#define PinMediaSourceVideoID_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Video ID-based media source
/// </summary>
class  PinMediaSourceVideoID
{
public:
    PinMediaSourceVideoID();
    virtual ~PinMediaSourceVideoID() = default;


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

    bool operator==(const PinMediaSourceVideoID& rhs) const;
    bool operator!=(const PinMediaSourceVideoID& rhs) const;

    /////////////////////////////////////////////
    /// PinMediaSourceVideoID members

    /// <summary>
    /// 
    /// </summary>
    std::string getSourceType() const;
    void setSourceType(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getCoverImageUrl() const;
    void setCoverImageUrl(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getMediaId() const;
    void setMediaId(std::string const& value);

    friend void to_json(nlohmann::json& j, const PinMediaSourceVideoID& o);
    friend void from_json(const nlohmann::json& j, PinMediaSourceVideoID& o);
protected:
    std::string m_Source_type;

    std::string m_Cover_image_url;

    std::string m_Media_id;

    
};

} // namespace org::openapitools::server::model

#endif /* PinMediaSourceVideoID_H_ */
