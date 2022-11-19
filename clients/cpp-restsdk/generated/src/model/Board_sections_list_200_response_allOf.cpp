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



#include "CppRestOpenAPIClient/model/Board_sections_list_200_response_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Board_sections_list_200_response_allOf::Board_sections_list_200_response_allOf()
{
    m_ItemsIsSet = false;
}

Board_sections_list_200_response_allOf::~Board_sections_list_200_response_allOf()
{
}

void Board_sections_list_200_response_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Board_sections_list_200_response_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ItemsIsSet)
    {
        val[utility::conversions::to_string_t(U("items"))] = ModelBase::toJson(m_Items);
    }

    return val;
}

bool Board_sections_list_200_response_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("items"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("items")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BoardSection>> refVal_setItems;
            ok &= ModelBase::fromJson(fieldValue, refVal_setItems);
            setItems(refVal_setItems);
        }
    }
    return ok;
}

void Board_sections_list_200_response_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

bool Board_sections_list_200_response_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("items"))))
    {
        std::vector<std::shared_ptr<BoardSection>> refVal_setItems;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("items"))), refVal_setItems );
        setItems(refVal_setItems);
    }
    return ok;
}

std::vector<std::shared_ptr<BoardSection>>& Board_sections_list_200_response_allOf::getItems()
{
    return m_Items;
}

void Board_sections_list_200_response_allOf::setItems(const std::vector<std::shared_ptr<BoardSection>>& value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}

bool Board_sections_list_200_response_allOf::itemsIsSet() const
{
    return m_ItemsIsSet;
}

void Board_sections_list_200_response_allOf::unsetItems()
{
    m_ItemsIsSet = false;
}
}
}
}
}


