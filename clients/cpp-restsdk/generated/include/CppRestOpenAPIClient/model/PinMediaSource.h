/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * PinMediaSource.h
 *
 * Pin media source.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_PinMediaSource_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_PinMediaSource_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/PinMediaSourceImageURL.h"
#include "CppRestOpenAPIClient/model/PinMediaSourceImageBase64.h"
#include "CppRestOpenAPIClient/model/PinMediaSourceVideoID.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Pin media source.
/// </summary>
class  PinMediaSource
    : public ModelBase
{
public:
    PinMediaSource();
    virtual ~PinMediaSource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PinMediaSource members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSourceType() const;
    bool sourceTypeIsSet() const;
    void unsetSource_type();

    void setSourceType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getContentType() const;
    bool contentTypeIsSet() const;
    void unsetContent_type();

    void setContentType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getData() const;
    bool dataIsSet() const;
    void unsetData();

    void setData(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unsetUrl();

    void setUrl(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCoverImageUrl() const;
    bool coverImageUrlIsSet() const;
    void unsetCover_image_url();

    void setCoverImageUrl(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMediaId() const;
    bool mediaIdIsSet() const;
    void unsetMedia_id();

    void setMediaId(const utility::string_t& value);


protected:
    utility::string_t m_Source_type;
    bool m_Source_typeIsSet;
    utility::string_t m_Content_type;
    bool m_Content_typeIsSet;
    utility::string_t m_Data;
    bool m_DataIsSet;
    utility::string_t m_Url;
    bool m_UrlIsSet;
    utility::string_t m_Cover_image_url;
    bool m_Cover_image_urlIsSet;
    utility::string_t m_Media_id;
    bool m_Media_idIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_PinMediaSource_H_ */
