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



#include "CppRestOpenAPIClient/model/AdGroupArrayResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



AdGroupArrayResponse::AdGroupArrayResponse()
{
    m_ItemsIsSet = false;
}

AdGroupArrayResponse::~AdGroupArrayResponse()
{
}

void AdGroupArrayResponse::validate()
{
    // TODO: implement validation
}

web::json::value AdGroupArrayResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ItemsIsSet)
    {
        val[utility::conversions::to_string_t(U("items"))] = ModelBase::toJson(m_Items);
    }

    return val;
}

bool AdGroupArrayResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("items"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("items")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<AdGroupArrayResponseElement>> refVal_setItems;
            ok &= ModelBase::fromJson(fieldValue, refVal_setItems);
            setItems(refVal_setItems);
        }
    }
    return ok;
}

void AdGroupArrayResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ItemsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("items")), m_Items));
    }
}

bool AdGroupArrayResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("items"))))
    {
        std::vector<std::shared_ptr<AdGroupArrayResponseElement>> refVal_setItems;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("items"))), refVal_setItems );
        setItems(refVal_setItems);
    }
    return ok;
}

std::vector<std::shared_ptr<AdGroupArrayResponseElement>>& AdGroupArrayResponse::getItems()
{
    return m_Items;
}

void AdGroupArrayResponse::setItems(const std::vector<std::shared_ptr<AdGroupArrayResponseElement>>& value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}

bool AdGroupArrayResponse::itemsIsSet() const
{
    return m_ItemsIsSet;
}

void AdGroupArrayResponse::unsetItems()
{
    m_ItemsIsSet = false;
}
}
}
}
}


