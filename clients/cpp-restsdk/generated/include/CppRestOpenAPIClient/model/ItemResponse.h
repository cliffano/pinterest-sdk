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
 * ItemResponse.h
 *
 * Object describing an item record
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ItemResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ItemResponse_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/ItemResponse_anyOf.h"
#include "CppRestOpenAPIClient/model/ItemAttributes.h"
#include "CppRestOpenAPIClient/model/ItemValidationEvent.h"
#include "CppRestOpenAPIClient/model/ItemResponse_anyOf_1.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class ItemAttributes;
class ItemValidationEvent;

/// <summary>
/// Object describing an item record
/// </summary>
class  ItemResponse
    : public ModelBase
{
public:
    ItemResponse();
    virtual ~ItemResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ItemResponse members

    /// <summary>
    /// The catalog item id in the merchant namespace
    /// </summary>
    utility::string_t getItemId() const;
    bool itemIdIsSet() const;
    void unsetItem_id();

    void setItemId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ItemAttributes> getAttributes() const;
    bool attributesIsSet() const;
    void unsetAttributes();

    void setAttributes(const std::shared_ptr<ItemAttributes>& value);

    /// <summary>
    /// Array with the errors for the item id requested
    /// </summary>
    std::vector<std::shared_ptr<ItemValidationEvent>>& getErrors();
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::vector<std::shared_ptr<ItemValidationEvent>>& value);


protected:
    utility::string_t m_Item_id;
    bool m_Item_idIsSet;
    std::shared_ptr<ItemAttributes> m_Attributes;
    bool m_AttributesIsSet;
    std::vector<std::shared_ptr<ItemValidationEvent>> m_Errors;
    bool m_ErrorsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ItemResponse_H_ */
