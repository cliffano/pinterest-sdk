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
 * AdPreviewRequest.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AdPreviewRequest_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AdPreviewRequest_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/AdPreviewCreateFromImage.h"
#include "CppRestOpenAPIClient/model/AdPreviewCreateFromPin.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  AdPreviewRequest
    : public ModelBase
{
public:
    AdPreviewRequest();
    virtual ~AdPreviewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AdPreviewRequest members

    /// <summary>
    /// Image URL.
    /// </summary>
    utility::string_t getImageUrl() const;
    bool imageUrlIsSet() const;
    void unsetImage_url();

    void setImageUrl(const utility::string_t& value);

    /// <summary>
    /// Title displayed below ad.
    /// </summary>
    utility::string_t getTitle() const;
    bool titleIsSet() const;
    void unsetTitle();

    void setTitle(const utility::string_t& value);

    /// <summary>
    /// Pin ID.
    /// </summary>
    utility::string_t getPinId() const;
    bool pinIdIsSet() const;
    void unsetPin_id();

    void setPinId(const utility::string_t& value);


protected:
    utility::string_t m_Image_url;
    bool m_Image_urlIsSet;
    utility::string_t m_Title;
    bool m_TitleIsSet;
    utility::string_t m_Pin_id;
    bool m_Pin_idIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AdPreviewRequest_H_ */
