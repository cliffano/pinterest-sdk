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



#include "CppRestOpenAPIClient/model/Keyword.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Keyword::Keyword()
{
    m_Archived = false;
    m_ArchivedIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Parent_id = utility::conversions::to_string_t("");
    m_Parent_idIsSet = false;
    m_Parent_type = utility::conversions::to_string_t("");
    m_Parent_typeIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Bid = 0;
    m_BidIsSet = false;
    m_Match_typeIsSet = false;
    m_Value = utility::conversions::to_string_t("");
    m_ValueIsSet = false;
}

Keyword::~Keyword()
{
}

void Keyword::validate()
{
    // TODO: implement validation
}

web::json::value Keyword::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ArchivedIsSet)
    {
        val[utility::conversions::to_string_t(U("archived"))] = ModelBase::toJson(m_Archived);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_Parent_idIsSet)
    {
        val[utility::conversions::to_string_t(U("parent_id"))] = ModelBase::toJson(m_Parent_id);
    }
    if(m_Parent_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("parent_type"))] = ModelBase::toJson(m_Parent_type);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }
    if(m_BidIsSet)
    {
        val[utility::conversions::to_string_t(U("bid"))] = ModelBase::toJson(m_Bid);
    }
    if(m_Match_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("match_type"))] = ModelBase::toJson(m_Match_type);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t(U("value"))] = ModelBase::toJson(m_Value);
    }

    return val;
}

bool Keyword::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("archived"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("archived")));
        if(!fieldValue.is_null())
        {
            bool refVal_setArchived;
            ok &= ModelBase::fromJson(fieldValue, refVal_setArchived);
            setArchived(refVal_setArchived);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("parent_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("parent_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setParentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setParentId);
            setParentId(refVal_setParentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("parent_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("parent_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setParentType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setParentType);
            setParentType(refVal_setParentType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bid"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bid")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setBid;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBid);
            setBid(refVal_setBid);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("match_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("match_type")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<MatchTypeResponse> refVal_setMatchType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMatchType);
            setMatchType(refVal_setMatchType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("value"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("value")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_setValue);
            setValue(refVal_setValue);
        }
    }
    return ok;
}

void Keyword::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ArchivedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("archived")), m_Archived));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_Parent_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("parent_id")), m_Parent_id));
    }
    if(m_Parent_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("parent_type")), m_Parent_type));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
    if(m_BidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bid")), m_Bid));
    }
    if(m_Match_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("match_type")), m_Match_type));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("value")), m_Value));
    }
}

bool Keyword::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("archived"))))
    {
        bool refVal_setArchived;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("archived"))), refVal_setArchived );
        setArchived(refVal_setArchived);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("parent_id"))))
    {
        utility::string_t refVal_setParentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("parent_id"))), refVal_setParentId );
        setParentId(refVal_setParentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("parent_type"))))
    {
        utility::string_t refVal_setParentType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("parent_type"))), refVal_setParentType );
        setParentType(refVal_setParentType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bid"))))
    {
        int32_t refVal_setBid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bid"))), refVal_setBid );
        setBid(refVal_setBid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("match_type"))))
    {
        std::shared_ptr<MatchTypeResponse> refVal_setMatchType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("match_type"))), refVal_setMatchType );
        setMatchType(refVal_setMatchType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("value"))))
    {
        utility::string_t refVal_setValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("value"))), refVal_setValue );
        setValue(refVal_setValue);
    }
    return ok;
}

bool Keyword::isArchived() const
{
    return m_Archived;
}

void Keyword::setArchived(bool value)
{
    m_Archived = value;
    m_ArchivedIsSet = true;
}

bool Keyword::archivedIsSet() const
{
    return m_ArchivedIsSet;
}

void Keyword::unsetArchived()
{
    m_ArchivedIsSet = false;
}
utility::string_t Keyword::getId() const
{
    return m_Id;
}

void Keyword::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Keyword::idIsSet() const
{
    return m_IdIsSet;
}

void Keyword::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Keyword::getParentId() const
{
    return m_Parent_id;
}

void Keyword::setParentId(const utility::string_t& value)
{
    m_Parent_id = value;
    m_Parent_idIsSet = true;
}

bool Keyword::parentIdIsSet() const
{
    return m_Parent_idIsSet;
}

void Keyword::unsetParent_id()
{
    m_Parent_idIsSet = false;
}
utility::string_t Keyword::getParentType() const
{
    return m_Parent_type;
}

void Keyword::setParentType(const utility::string_t& value)
{
    m_Parent_type = value;
    m_Parent_typeIsSet = true;
}

bool Keyword::parentTypeIsSet() const
{
    return m_Parent_typeIsSet;
}

void Keyword::unsetParent_type()
{
    m_Parent_typeIsSet = false;
}
utility::string_t Keyword::getType() const
{
    return m_Type;
}

void Keyword::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool Keyword::typeIsSet() const
{
    return m_TypeIsSet;
}

void Keyword::unsetType()
{
    m_TypeIsSet = false;
}
int32_t Keyword::getBid() const
{
    return m_Bid;
}

void Keyword::setBid(int32_t value)
{
    m_Bid = value;
    m_BidIsSet = true;
}

bool Keyword::bidIsSet() const
{
    return m_BidIsSet;
}

void Keyword::unsetBid()
{
    m_BidIsSet = false;
}
std::shared_ptr<MatchTypeResponse> Keyword::getMatchType() const
{
    return m_Match_type;
}

void Keyword::setMatchType(const std::shared_ptr<MatchTypeResponse>& value)
{
    m_Match_type = value;
    m_Match_typeIsSet = true;
}

bool Keyword::matchTypeIsSet() const
{
    return m_Match_typeIsSet;
}

void Keyword::unsetMatch_type()
{
    m_Match_typeIsSet = false;
}
utility::string_t Keyword::getValue() const
{
    return m_Value;
}

void Keyword::setValue(const utility::string_t& value)
{
    m_Value = value;
    m_ValueIsSet = true;
}

bool Keyword::valueIsSet() const
{
    return m_ValueIsSet;
}

void Keyword::unsetValue()
{
    m_ValueIsSet = false;
}
}
}
}
}


