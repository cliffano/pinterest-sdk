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



#include "CppRestOpenAPIClient/model/ItemResponse_anyOf_1.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



ItemResponse_anyOf_1::ItemResponse_anyOf_1()
{
    m_Item_id = utility::conversions::to_string_t("");
    m_Item_idIsSet = false;
    m_ErrorsIsSet = false;
}

ItemResponse_anyOf_1::~ItemResponse_anyOf_1()
{
}

void ItemResponse_anyOf_1::validate()
{
    // TODO: implement validation
}

web::json::value ItemResponse_anyOf_1::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Item_idIsSet)
    {
        val[utility::conversions::to_string_t(U("item_id"))] = ModelBase::toJson(m_Item_id);
    }
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }

    return val;
}

bool ItemResponse_anyOf_1::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("errors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errors")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ItemValidationEvent>> refVal_setErrors;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrors);
            setErrors(refVal_setErrors);
        }
    }
    return ok;
}

void ItemResponse_anyOf_1::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ErrorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errors")), m_Errors));
    }
}

bool ItemResponse_anyOf_1::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("errors"))))
    {
        std::vector<std::shared_ptr<ItemValidationEvent>> refVal_setErrors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errors"))), refVal_setErrors );
        setErrors(refVal_setErrors);
    }
    return ok;
}

utility::string_t ItemResponse_anyOf_1::getItemId() const
{
    return m_Item_id;
}

void ItemResponse_anyOf_1::setItemId(const utility::string_t& value)
{
    m_Item_id = value;
    m_Item_idIsSet = true;
}

bool ItemResponse_anyOf_1::itemIdIsSet() const
{
    return m_Item_idIsSet;
}

void ItemResponse_anyOf_1::unsetItem_id()
{
    m_Item_idIsSet = false;
}
std::vector<std::shared_ptr<ItemValidationEvent>>& ItemResponse_anyOf_1::getErrors()
{
    return m_Errors;
}

void ItemResponse_anyOf_1::setErrors(const std::vector<std::shared_ptr<ItemValidationEvent>>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool ItemResponse_anyOf_1::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void ItemResponse_anyOf_1::unsetErrors()
{
    m_ErrorsIsSet = false;
}
}
}
}
}


