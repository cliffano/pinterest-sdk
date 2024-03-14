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
 * PinMediaWithVideos.h
 *
 * Pin with multiple videos.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_PinMediaWithVideos_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_PinMediaWithVideos_H_


#include "CppRestOpenAPIClient/model/VideoMetadata.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/PinMedia.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class VideoMetadata;

/// <summary>
/// Pin with multiple videos.
/// </summary>
class  PinMediaWithVideos
    : public PinMedia
{
public:
    PinMediaWithVideos();
    virtual ~PinMediaWithVideos();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PinMediaWithVideos members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<VideoMetadata>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();

    void setItems(const std::vector<std::shared_ptr<VideoMetadata>>& value);


protected:
    std::vector<std::shared_ptr<VideoMetadata>> m_Items;
    bool m_ItemsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_PinMediaWithVideos_H_ */