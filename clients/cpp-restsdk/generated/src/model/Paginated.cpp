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



#include "CppRestOpenAPIClient/model/Paginated.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Paginated::Paginated()
{
    m_ItemsIsSet = false;
    m_Bookmark = utility::conversions::to_string_t("");
    m_BookmarkIsSet = false;
}

Paginated::~Paginated()
{
}

void Paginated::validate()
{
    // TODO: implement validation
}

web::json::value Paginated::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ItemsIsSet)
    {
        val[utility::conversions::to_string_t(U("items"))] = ModelBase::toJson(m_Items);
    }
    if(m_BookmarkIsSet)
    {
        val[utility::conversions::to_string_t(U("bookmark"))] = ModelBase::toJson(m_Bookmark);
    }

    return val;
}

bool Paginated::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("items"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("items")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Object>> refVal_setItems;
            ok &= ModelBase::fromJson(fieldValue, refVal_setItems);
            setItems(refVal_setItems);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bookmark"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bookmark")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBookmark;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBookmark);
            setBookmark(refVal_setBookmark);
        }
    }
    return ok;
}

void Paginated::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_BookmarkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bookmark")), m_Bookmark));
    }
}

bool Paginated::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("items"))))
    {
        std::vector<std::shared_ptr<Object>> refVal_setItems;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("items"))), refVal_setItems );
        setItems(refVal_setItems);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bookmark"))))
    {
        utility::string_t refVal_setBookmark;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bookmark"))), refVal_setBookmark );
        setBookmark(refVal_setBookmark);
    }
    return ok;
}

std::vector<std::shared_ptr<Object>>& Paginated::getItems()
{
    return m_Items;
}

void Paginated::setItems(const std::vector<std::shared_ptr<Object>>& value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}

bool Paginated::itemsIsSet() const
{
    return m_ItemsIsSet;
}

void Paginated::unsetItems()
{
    m_ItemsIsSet = false;
}
utility::string_t Paginated::getBookmark() const
{
    return m_Bookmark;
}

void Paginated::setBookmark(const utility::string_t& value)
{
    m_Bookmark = value;
    m_BookmarkIsSet = true;
}

bool Paginated::bookmarkIsSet() const
{
    return m_BookmarkIsSet;
}

void Paginated::unsetBookmark()
{
    m_BookmarkIsSet = false;
}
}
}
}
}


