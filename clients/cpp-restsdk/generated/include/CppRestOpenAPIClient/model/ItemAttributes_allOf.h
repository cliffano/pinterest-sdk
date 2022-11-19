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
 * ItemAttributes_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ItemAttributes_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ItemAttributes_allOf_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ItemAttributes_allOf
    : public ModelBase
{
public:
    ItemAttributes_allOf();
    virtual ~ItemAttributes_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ItemAttributes_allOf members

    /// <summary>
    /// &lt;p&gt;&lt;&#x3D; 2000 characters&lt;/p&gt; &lt;p&gt;The links to additional images for your product. Up to ten additional images can be used to show a product from different angles or to show different stages. Must begin with http:// or https://.&lt;/p&gt;
    /// </summary>
    std::vector<utility::string_t>& getAdditionalImageLink();
    bool additionalImageLinkIsSet() const;
    void unsetAdditional_image_link();

    void setAdditionalImageLink(const std::vector<utility::string_t>& value);

    /// <summary>
    /// &lt;p&gt;&lt;&#x3D; 2000 characters&lt;/p&gt; &lt;p&gt;The link to the main product images. Images should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your product. The URL of your image_link must be accessible by the Pinterest user-agent, and send the accurate images. Please make sure there are no template or placeholder images at the link. Must start with http:// or https://.&lt;/p&gt;
    /// </summary>
    std::vector<utility::string_t>& getImageLink();
    bool imageLinkIsSet() const;
    void unsetImage_link();

    void setImageLink(const std::vector<utility::string_t>& value);


protected:
    std::vector<utility::string_t> m_Additional_image_link;
    bool m_Additional_image_linkIsSet;
    std::vector<utility::string_t> m_Image_link;
    bool m_Image_linkIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ItemAttributes_allOf_H_ */
