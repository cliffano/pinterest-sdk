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
 * MediaUpload.h
 *
 * Media upload that has been registered but not uploaded/processed yet.
 */

#ifndef MediaUpload_H_
#define MediaUpload_H_


#include "MediaUpload_allOf_upload_parameters.h"
#include <string>
#include "MediaUpload_allOf.h"
#include "MediaUploadType.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Media upload that has been registered but not uploaded/processed yet.
/// </summary>
class  MediaUpload
{
public:
    MediaUpload();
    virtual ~MediaUpload() = default;


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

    bool operator==(const MediaUpload& rhs) const;
    bool operator!=(const MediaUpload& rhs) const;

    /////////////////////////////////////////////
    /// MediaUpload members

    /// <summary>
    /// Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
    /// </summary>
    std::string getMediaId() const;
    void setMediaId(std::string const& value);
    bool mediaIdIsSet() const;
    void unsetMedia_id();
    /// <summary>
    /// 
    /// </summary>
    MediaUploadType getMediaType() const;
    void setMediaType(MediaUploadType const& value);
    bool mediaTypeIsSet() const;
    void unsetMedia_type();
    /// <summary>
    /// The URL where you will POST your media file.
    /// </summary>
    std::string getUploadUrl() const;
    void setUploadUrl(std::string const& value);
    bool uploadUrlIsSet() const;
    void unsetUpload_url();
    /// <summary>
    /// 
    /// </summary>
    MediaUpload_allOf_upload_parameters getUploadParameters() const;
    void setUploadParameters(MediaUpload_allOf_upload_parameters const& value);
    bool uploadParametersIsSet() const;
    void unsetUpload_parameters();

    friend void to_json(nlohmann::json& j, const MediaUpload& o);
    friend void from_json(const nlohmann::json& j, MediaUpload& o);
protected:
    std::string m_Media_id;
    bool m_Media_idIsSet;
    MediaUploadType m_Media_type;
    bool m_Media_typeIsSet;
    std::string m_Upload_url;
    bool m_Upload_urlIsSet;
    MediaUpload_allOf_upload_parameters m_Upload_parameters;
    bool m_Upload_parametersIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* MediaUpload_H_ */
