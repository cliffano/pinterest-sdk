/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * MediaUploadDetails.h
 *
 * Media upload details
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_MediaUploadDetails_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_MediaUploadDetails_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/MediaUploadType.h"
#include "CppRestOpenAPIClient/model/MediaUploadStatus.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Media upload details
/// </summary>
class  MediaUploadDetails
    : public ModelBase
{
public:
    MediaUploadDetails();
    virtual ~MediaUploadDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MediaUploadDetails members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMediaId() const;
    bool mediaIdIsSet() const;
    void unsetMedia_id();

    void setMediaId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<MediaUploadType> getMediaType() const;
    bool mediaTypeIsSet() const;
    void unsetMedia_type();

    void setMediaType(const std::shared_ptr<MediaUploadType>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<MediaUploadStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<MediaUploadStatus>& value);


protected:
    utility::string_t m_Media_id;
    bool m_Media_idIsSet;
    std::shared_ptr<MediaUploadType> m_Media_type;
    bool m_Media_typeIsSet;
    std::shared_ptr<MediaUploadStatus> m_Status;
    bool m_StatusIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_MediaUploadDetails_H_ */
