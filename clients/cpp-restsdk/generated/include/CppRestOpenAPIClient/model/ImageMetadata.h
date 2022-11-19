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
 * ImageMetadata.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ImageMetadata_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ImageMetadata_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/ImageDetails.h"
#include <cpprest/details/basic_types.h>
#include <map>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class ImageDetails;

/// <summary>
/// 
/// </summary>
class  ImageMetadata
    : public ModelBase
{
public:
    ImageMetadata();
    virtual ~ImageMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ImageMetadata members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getItemType() const;
    bool itemTypeIsSet() const;
    void unsetItem_type();

    void setItemType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<ImageDetails>>& getImages();
    bool imagesIsSet() const;
    void unsetImages();

    void setImages(const std::map<utility::string_t, std::shared_ptr<ImageDetails>>& value);


protected:
    utility::string_t m_Item_type;
    bool m_Item_typeIsSet;
    std::map<utility::string_t, std::shared_ptr<ImageDetails>> m_Images;
    bool m_ImagesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ImageMetadata_H_ */
