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
 * PinMediaSourceImageURL.h
 *
 * Image URL-based media source
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_PinMediaSourceImageURL_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_PinMediaSourceImageURL_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Image URL-based media source
/// </summary>
class  PinMediaSourceImageURL
    : public ModelBase
{
public:
    PinMediaSourceImageURL();
    virtual ~PinMediaSourceImageURL();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PinMediaSourceImageURL members

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
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unsetUrl();

    void setUrl(const utility::string_t& value);


protected:
    utility::string_t m_Source_type;
    bool m_Source_typeIsSet;
    utility::string_t m_Url;
    bool m_UrlIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_PinMediaSourceImageURL_H_ */
