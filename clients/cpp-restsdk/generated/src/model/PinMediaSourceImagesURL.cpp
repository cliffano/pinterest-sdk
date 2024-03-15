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



#include "CppRestOpenAPIClient/model/PinMediaSourceImagesURL.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



PinMediaSourceImagesURL::PinMediaSourceImagesURL()
{
    m_Source_type = utility::conversions::to_string_t("");
    m_Source_typeIsSet = false;
    m_ItemsIsSet = false;
    m_Index = 0;
    m_IndexIsSet = false;
}

PinMediaSourceImagesURL::~PinMediaSourceImagesURL()
{
}

void PinMediaSourceImagesURL::validate()
{
    // TODO: implement validation
}

web::json::value PinMediaSourceImagesURL::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Source_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("source_type"))] = ModelBase::toJson(m_Source_type);
    }
    if(m_ItemsIsSet)
    {
        val[utility::conversions::to_string_t(U("items"))] = ModelBase::toJson(m_Items);
    }
    if(m_IndexIsSet)
    {
        val[utility::conversions::to_string_t(U("index"))] = ModelBase::toJson(m_Index);
    }

    return val;
}

bool PinMediaSourceImagesURL::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("source_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("source_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSourceType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSourceType);
            setSourceType(refVal_setSourceType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("items"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("items")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<PinMediaSourceImagesURL_items_inner>> refVal_setItems;
            ok &= ModelBase::fromJson(fieldValue, refVal_setItems);
            setItems(refVal_setItems);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("index"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("index")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setIndex;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIndex);
            setIndex(refVal_setIndex);
        }
    }
    return ok;
}

void PinMediaSourceImagesURL::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Source_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("source_type")), m_Source_type));
    }
    if(m_ItemsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("items")), m_Items));
    }
    if(m_IndexIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("index")), m_Index));
    }
}

bool PinMediaSourceImagesURL::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("source_type"))))
    {
        utility::string_t refVal_setSourceType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("source_type"))), refVal_setSourceType );
        setSourceType(refVal_setSourceType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("items"))))
    {
        std::vector<std::shared_ptr<PinMediaSourceImagesURL_items_inner>> refVal_setItems;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("items"))), refVal_setItems );
        setItems(refVal_setItems);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("index"))))
    {
        int32_t refVal_setIndex;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("index"))), refVal_setIndex );
        setIndex(refVal_setIndex);
    }
    return ok;
}

utility::string_t PinMediaSourceImagesURL::getSourceType() const
{
    return m_Source_type;
}

void PinMediaSourceImagesURL::setSourceType(const utility::string_t& value)
{
    m_Source_type = value;
    m_Source_typeIsSet = true;
}

bool PinMediaSourceImagesURL::sourceTypeIsSet() const
{
    return m_Source_typeIsSet;
}

void PinMediaSourceImagesURL::unsetSource_type()
{
    m_Source_typeIsSet = false;
}
std::vector<std::shared_ptr<PinMediaSourceImagesURL_items_inner>>& PinMediaSourceImagesURL::getItems()
{
    return m_Items;
}

void PinMediaSourceImagesURL::setItems(const std::vector<std::shared_ptr<PinMediaSourceImagesURL_items_inner>>& value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}

bool PinMediaSourceImagesURL::itemsIsSet() const
{
    return m_ItemsIsSet;
}

void PinMediaSourceImagesURL::unsetItems()
{
    m_ItemsIsSet = false;
}
int32_t PinMediaSourceImagesURL::getIndex() const
{
    return m_Index;
}

void PinMediaSourceImagesURL::setIndex(int32_t value)
{
    m_Index = value;
    m_IndexIsSet = true;
}

bool PinMediaSourceImagesURL::indexIsSet() const
{
    return m_IndexIsSet;
}

void PinMediaSourceImagesURL::unsetIndex()
{
    m_IndexIsSet = false;
}
}
}
}
}


