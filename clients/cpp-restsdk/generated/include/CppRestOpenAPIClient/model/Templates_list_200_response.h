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
 * Templates_list_200_response.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Templates_list_200_response_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Templates_list_200_response_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/TemplateResponse.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class TemplateResponse;

/// <summary>
/// 
/// </summary>
class  Templates_list_200_response
    : public ModelBase
{
public:
    Templates_list_200_response();
    virtual ~Templates_list_200_response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Templates_list_200_response members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<TemplateResponse>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();

    void setItems(const std::vector<std::shared_ptr<TemplateResponse>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBookmark() const;
    bool bookmarkIsSet() const;
    void unsetBookmark();

    void setBookmark(const utility::string_t& value);


protected:
    std::vector<std::shared_ptr<TemplateResponse>> m_Items;
    bool m_ItemsIsSet;
    utility::string_t m_Bookmark;
    bool m_BookmarkIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Templates_list_200_response_H_ */
