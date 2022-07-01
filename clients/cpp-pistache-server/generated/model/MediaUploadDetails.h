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
 * MediaUploadDetails.h
 *
 * Media upload details
 */

#ifndef MediaUploadDetails_H_
#define MediaUploadDetails_H_


#include "MediaUploadStatus.h"
#include <string>
#include "MediaUploadType.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Media upload details
/// </summary>
class  MediaUploadDetails
{
public:
    MediaUploadDetails();
    virtual ~MediaUploadDetails() = default;


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

    bool operator==(const MediaUploadDetails& rhs) const;
    bool operator!=(const MediaUploadDetails& rhs) const;

    /////////////////////////////////////////////
    /// MediaUploadDetails members

    /// <summary>
    /// 
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
    /// 
    /// </summary>
    MediaUploadStatus getStatus() const;
    void setStatus(MediaUploadStatus const& value);
    bool statusIsSet() const;
    void unsetStatus();

    friend void to_json(nlohmann::json& j, const MediaUploadDetails& o);
    friend void from_json(const nlohmann::json& j, MediaUploadDetails& o);
protected:
    std::string m_Media_id;
    bool m_Media_idIsSet;
    MediaUploadType m_Media_type;
    bool m_Media_typeIsSet;
    MediaUploadStatus m_Status;
    bool m_StatusIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* MediaUploadDetails_H_ */
