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
 * PinMediaSourceImagesURL.h
 *
 * Multiple images urls-based media source
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_PinMediaSourceImagesURL_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_PinMediaSourceImagesURL_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/PinMediaSourceImagesURL_items_inner.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class PinMediaSourceImagesURL_items_inner;

/// <summary>
/// Multiple images urls-based media source
/// </summary>
class  PinMediaSourceImagesURL
    : public ModelBase
{
public:
    PinMediaSourceImagesURL();
    virtual ~PinMediaSourceImagesURL();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PinMediaSourceImagesURL members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSourceType() const;
    bool sourceTypeIsSet() const;
    void unsetSource_type();

    void setSourceType(const utility::string_t& value);

    /// <summary>
    /// Array with image objects.
    /// </summary>
    std::vector<std::shared_ptr<PinMediaSourceImagesURL_items_inner>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();

    void setItems(const std::vector<std::shared_ptr<PinMediaSourceImagesURL_items_inner>>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getIndex() const;
    bool indexIsSet() const;
    void unsetIndex();

    void setIndex(int32_t value);


protected:
    utility::string_t m_Source_type;
    bool m_Source_typeIsSet;
    std::vector<std::shared_ptr<PinMediaSourceImagesURL_items_inner>> m_Items;
    bool m_ItemsIsSet;
    int32_t m_Index;
    bool m_IndexIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_PinMediaSourceImagesURL_H_ */
