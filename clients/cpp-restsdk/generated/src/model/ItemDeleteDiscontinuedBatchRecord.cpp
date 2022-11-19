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



#include "CppRestOpenAPIClient/model/ItemDeleteDiscontinuedBatchRecord.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



ItemDeleteDiscontinuedBatchRecord::ItemDeleteDiscontinuedBatchRecord()
{
    m_Item_id = utility::conversions::to_string_t("");
    m_Item_idIsSet = false;
}

ItemDeleteDiscontinuedBatchRecord::~ItemDeleteDiscontinuedBatchRecord()
{
}

void ItemDeleteDiscontinuedBatchRecord::validate()
{
    // TODO: implement validation
}

web::json::value ItemDeleteDiscontinuedBatchRecord::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Item_idIsSet)
    {
        val[utility::conversions::to_string_t(U("item_id"))] = ModelBase::toJson(m_Item_id);
    }

    return val;
}

bool ItemDeleteDiscontinuedBatchRecord::fromJson(const web::json::value& val)
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
    return ok;
}

void ItemDeleteDiscontinuedBatchRecord::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool ItemDeleteDiscontinuedBatchRecord::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    return ok;
}

utility::string_t ItemDeleteDiscontinuedBatchRecord::getItemId() const
{
    return m_Item_id;
}

void ItemDeleteDiscontinuedBatchRecord::setItemId(const utility::string_t& value)
{
    m_Item_id = value;
    m_Item_idIsSet = true;
}

bool ItemDeleteDiscontinuedBatchRecord::itemIdIsSet() const
{
    return m_Item_idIsSet;
}

void ItemDeleteDiscontinuedBatchRecord::unsetItem_id()
{
    m_Item_idIsSet = false;
}
}
}
}
}


