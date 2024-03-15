/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CatalogsHotelAttributes_allOf_main_image.h
 *
 * The main hotel image
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsHotelAttributes_allOf_main_image_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsHotelAttributes_allOf_main_image_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// The main hotel image
/// </summary>
class  CatalogsHotelAttributes_allOf_main_image
    : public ModelBase
{
public:
    CatalogsHotelAttributes_allOf_main_image();
    virtual ~CatalogsHotelAttributes_allOf_main_image();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsHotelAttributes_allOf_main_image members

    /// <summary>
    /// &lt;p&gt;&lt;&#x3D; 2000 characters&lt;/p&gt; &lt;p&gt;The link to the main hotel image. Image should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your hotel. The URL of your main_image.link must be accessible by the Pinterest user-agent, and send the accurate image. Please make sure there is no template or placeholder image at the link. Must start with http:// or https://.&lt;/p&gt;
    /// </summary>
    utility::string_t getLink() const;
    bool linkIsSet() const;
    void unsetLink();

    void setLink(const utility::string_t& value);

    /// <summary>
    /// Tag appended to the image that identifies image category or details. There can be multiple tags associated with an image
    /// </summary>
    std::vector<utility::string_t>& getTag();
    bool tagIsSet() const;
    void unsetTag();

    void setTag(const std::vector<utility::string_t>& value);


protected:
    utility::string_t m_Link;
    bool m_LinkIsSet;
    std::vector<utility::string_t> m_Tag;
    bool m_TagIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsHotelAttributes_allOf_main_image_H_ */
