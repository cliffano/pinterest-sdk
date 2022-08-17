/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Board_sections_list_200_response_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Board_sections_list_200_response_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Board_sections_list_200_response_allOf_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/BoardSection.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class BoardSection;

/// <summary>
/// 
/// </summary>
class  Board_sections_list_200_response_allOf
    : public ModelBase
{
public:
    Board_sections_list_200_response_allOf();
    virtual ~Board_sections_list_200_response_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Board_sections_list_200_response_allOf members

    /// <summary>
    /// Board sections
    /// </summary>
    std::vector<std::shared_ptr<BoardSection>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();

    void setItems(const std::vector<std::shared_ptr<BoardSection>>& value);


protected:
    std::vector<std::shared_ptr<BoardSection>> m_Items;
    bool m_ItemsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Board_sections_list_200_response_allOf_H_ */