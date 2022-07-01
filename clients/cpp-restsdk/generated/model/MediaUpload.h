/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * MediaUpload.h
 *
 * Media upload that has been registered but not uploaded/processed yet.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_MediaUpload_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_MediaUpload_H_


#include "ModelBase.h"

#include "model/MediaUpload_allOf_upload_parameters.h"
#include "model/MediaUploadType.h"
#include <cpprest/details/basic_types.h>
#include "model/MediaUpload_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Media upload that has been registered but not uploaded/processed yet.
/// </summary>
class  MediaUpload
    : public ModelBase
{
public:
    MediaUpload();
    virtual ~MediaUpload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MediaUpload members

    /// <summary>
    /// Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
    /// </summary>
    utility::string_t getMediaId() const;
    bool mediaIdIsSet() const;
    void unsetMedia_id();

    void setMediaId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    MediaUploadType getMediaType() const;
    bool mediaTypeIsSet() const;
    void unsetMedia_type();

    void setMediaType(const MediaUploadType& value);

    /// <summary>
    /// The URL where you will POST your media file.
    /// </summary>
    utility::string_t getUploadUrl() const;
    bool uploadUrlIsSet() const;
    void unsetUpload_url();

    void setUploadUrl(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<MediaUpload_allOf_upload_parameters> getUploadParameters() const;
    bool uploadParametersIsSet() const;
    void unsetUpload_parameters();

    void setUploadParameters(const std::shared_ptr<MediaUpload_allOf_upload_parameters>& value);


protected:
    utility::string_t m_Media_id;
    bool m_Media_idIsSet;
    MediaUploadType m_Media_type;
    bool m_Media_typeIsSet;
    utility::string_t m_Upload_url;
    bool m_Upload_urlIsSet;
    std::shared_ptr<MediaUpload_allOf_upload_parameters> m_Upload_parameters;
    bool m_Upload_parametersIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_MediaUpload_H_ */
