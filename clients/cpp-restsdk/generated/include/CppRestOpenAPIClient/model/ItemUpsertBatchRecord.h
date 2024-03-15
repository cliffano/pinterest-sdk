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
 * ItemUpsertBatchRecord.h
 *
 * Object describing an item batch record to upsert items
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ItemUpsertBatchRecord_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ItemUpsertBatchRecord_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/ItemAttributes.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class ItemAttributes;

/// <summary>
/// Object describing an item batch record to upsert items
/// </summary>
class  ItemUpsertBatchRecord
    : public ModelBase
{
public:
    ItemUpsertBatchRecord();
    virtual ~ItemUpsertBatchRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ItemUpsertBatchRecord members

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


protected:
    utility::string_t m_Item_id;
    bool m_Item_idIsSet;
    std::shared_ptr<ItemAttributes> m_Attributes;
    bool m_AttributesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ItemUpsertBatchRecord_H_ */
