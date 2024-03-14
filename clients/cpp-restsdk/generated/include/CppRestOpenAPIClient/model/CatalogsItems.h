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
 * CatalogsItems.h
 *
 * Response object of catalogs items
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsItems_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsItems_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/ItemResponse.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class ItemResponse;

/// <summary>
/// Response object of catalogs items
/// </summary>
class  CatalogsItems
    : public ModelBase
{
public:
    CatalogsItems();
    virtual ~CatalogsItems();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsItems members

    /// <summary>
    /// Array with catalogs items
    /// </summary>
    std::vector<std::shared_ptr<ItemResponse>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();

    void setItems(const std::vector<std::shared_ptr<ItemResponse>>& value);


protected:
    std::vector<std::shared_ptr<ItemResponse>> m_Items;
    bool m_ItemsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsItems_H_ */
