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



#include "CppRestOpenAPIClient/model/ItemBatchRecord.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



ItemBatchRecord::ItemBatchRecord()
{
    m_Item_id = utility::conversions::to_string_t("");
    m_Item_idIsSet = false;
    m_AttributesIsSet = false;
    m_Update_maskIsSet = false;
}

ItemBatchRecord::~ItemBatchRecord()
{
}

void ItemBatchRecord::validate()
{
    // TODO: implement validation
}

web::json::value ItemBatchRecord::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Item_idIsSet)
    {
        val[utility::conversions::to_string_t(U("item_id"))] = ModelBase::toJson(m_Item_id);
    }
    if(m_AttributesIsSet)
    {
        val[utility::conversions::to_string_t(U("attributes"))] = ModelBase::toJson(m_Attributes);
    }
    if(m_Update_maskIsSet)
    {
        val[utility::conversions::to_string_t(U("update_mask"))] = ModelBase::toJson(m_Update_mask);
    }

    return val;
}

bool ItemBatchRecord::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("item_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("item_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setItemId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setItemId);
            setItemId(refVal_setItemId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("attributes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("attributes")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ItemAttributes> refVal_setAttributes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAttributes);
            setAttributes(refVal_setAttributes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("update_mask"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("update_mask")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<UpdateMaskFieldType>> refVal_setUpdateMask;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUpdateMask);
            setUpdateMask(refVal_setUpdateMask);
        }
    }
    return ok;
}

void ItemBatchRecord::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Item_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("item_id")), m_Item_id));
    }
    if(m_AttributesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("attributes")), m_Attributes));
    }
    if(m_Update_maskIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("update_mask")), m_Update_mask));
    }
}

bool ItemBatchRecord::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("item_id"))))
    {
        utility::string_t refVal_setItemId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("item_id"))), refVal_setItemId );
        setItemId(refVal_setItemId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("attributes"))))
    {
        std::shared_ptr<ItemAttributes> refVal_setAttributes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("attributes"))), refVal_setAttributes );
        setAttributes(refVal_setAttributes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("update_mask"))))
    {
        std::vector<std::shared_ptr<UpdateMaskFieldType>> refVal_setUpdateMask;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("update_mask"))), refVal_setUpdateMask );
        setUpdateMask(refVal_setUpdateMask);
    }
    return ok;
}

utility::string_t ItemBatchRecord::getItemId() const
{
    return m_Item_id;
}

void ItemBatchRecord::setItemId(const utility::string_t& value)
{
    m_Item_id = value;
    m_Item_idIsSet = true;
}

bool ItemBatchRecord::itemIdIsSet() const
{
    return m_Item_idIsSet;
}

void ItemBatchRecord::unsetItem_id()
{
    m_Item_idIsSet = false;
}
std::shared_ptr<ItemAttributes> ItemBatchRecord::getAttributes() const
{
    return m_Attributes;
}

void ItemBatchRecord::setAttributes(const std::shared_ptr<ItemAttributes>& value)
{
    m_Attributes = value;
    m_AttributesIsSet = true;
}

bool ItemBatchRecord::attributesIsSet() const
{
    return m_AttributesIsSet;
}

void ItemBatchRecord::unsetAttributes()
{
    m_AttributesIsSet = false;
}
std::vector<std::shared_ptr<UpdateMaskFieldType>>& ItemBatchRecord::getUpdateMask()
{
    return m_Update_mask;
}

void ItemBatchRecord::setUpdateMask(const std::vector<std::shared_ptr<UpdateMaskFieldType>>& value)
{
    m_Update_mask = value;
    m_Update_maskIsSet = true;
}

bool ItemBatchRecord::updateMaskIsSet() const
{
    return m_Update_maskIsSet;
}

void ItemBatchRecord::unsetUpdate_mask()
{
    m_Update_maskIsSet = false;
}
}
}
}
}


