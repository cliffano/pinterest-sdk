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
 * MediaUploadRequest.h
 *
 * Media upload request
 */

#ifndef MediaUploadRequest_H_
#define MediaUploadRequest_H_


#include "MediaUploadType.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Media upload request
/// </summary>
class  MediaUploadRequest
{
public:
    MediaUploadRequest();
    virtual ~MediaUploadRequest() = default;


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

    bool operator==(const MediaUploadRequest& rhs) const;
    bool operator!=(const MediaUploadRequest& rhs) const;

    /////////////////////////////////////////////
    /// MediaUploadRequest members

    /// <summary>
    /// 
    /// </summary>
    MediaUploadType getMediaType() const;
    void setMediaType(MediaUploadType const& value);

    friend void to_json(nlohmann::json& j, const MediaUploadRequest& o);
    friend void from_json(const nlohmann::json& j, MediaUploadRequest& o);
protected:
    MediaUploadType m_Media_type;

    
};

} // namespace org::openapitools::server::model

#endif /* MediaUploadRequest_H_ */
