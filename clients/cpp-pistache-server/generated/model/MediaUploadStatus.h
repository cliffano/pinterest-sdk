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
 * MediaUploadStatus.h
 *
 * Media upload status
 */

#ifndef MediaUploadStatus_H_
#define MediaUploadStatus_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Media upload status
/// </summary>
class  MediaUploadStatus
{
public:
    MediaUploadStatus();
    virtual ~MediaUploadStatus() = default;

    enum class eMediaUploadStatus {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    REGISTERED, 
    PROCESSING, 
    SUCCEEDED, 
    FAILED
    };

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

    bool operator==(const MediaUploadStatus& rhs) const;
    bool operator!=(const MediaUploadStatus& rhs) const;

    /////////////////////////////////////////////
    /// MediaUploadStatus members

    MediaUploadStatus::eMediaUploadStatus getValue() const;
    void setValue(MediaUploadStatus::eMediaUploadStatus value);
    
    friend void to_json(nlohmann::json& j, const MediaUploadStatus& o);
    friend void from_json(const nlohmann::json& j, MediaUploadStatus& o);
protected:
    MediaUploadStatus::eMediaUploadStatus m_value = MediaUploadStatus::eMediaUploadStatus::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* MediaUploadStatus_H_ */
