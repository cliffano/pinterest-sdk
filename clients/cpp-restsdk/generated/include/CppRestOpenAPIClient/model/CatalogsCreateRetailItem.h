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
 * CatalogsCreateRetailItem.h
 *
 * An item to be created
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsCreateRetailItem_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsCreateRetailItem_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/ItemAttributes.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class ItemAttributes;

/// <summary>
/// An item to be created
/// </summary>
class  CatalogsCreateRetailItem
    : public ModelBase
{
public:
    CatalogsCreateRetailItem();
    virtual ~CatalogsCreateRetailItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsCreateRetailItem members

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
    utility::string_t getOperation() const;
    bool operationIsSet() const;
    void unsetOperation();

    void setOperation(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ItemAttributes> getAttributes() const;
    bool attributesIsSet() const;
    void unsetAttributes();

    void setAttributes(const std::shared_ptr<ItemAttributes>& value);


protected:
    utility::string_t m_Item_id;
    bool m_Item_idIsSet;
    utility::string_t m_Operation;
    bool m_OperationIsSet;
    std::shared_ptr<ItemAttributes> m_Attributes;
    bool m_AttributesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsCreateRetailItem_H_ */
