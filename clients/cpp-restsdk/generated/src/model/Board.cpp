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



#include "CppRestOpenAPIClient/model/Board.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Board::Board()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_OwnerIsSet = false;
    m_Privacy = utility::conversions::to_string_t("");
    m_PrivacyIsSet = false;
}

Board::~Board()
{
}

void Board::validate()
{
    // TODO: implement validation
}

web::json::value Board::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_OwnerIsSet)
    {
        val[utility::conversions::to_string_t(U("owner"))] = ModelBase::toJson(m_Owner);
    }
    if(m_PrivacyIsSet)
    {
        val[utility::conversions::to_string_t(U("privacy"))] = ModelBase::toJson(m_Privacy);
    }

    return val;
}

bool Board::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDescription);
            setDescription(refVal_setDescription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("owner"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("owner")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Board_owner> refVal_setOwner;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOwner);
            setOwner(refVal_setOwner);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("privacy"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("privacy")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPrivacy;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPrivacy);
            setPrivacy(refVal_setPrivacy);
        }
    }
    return ok;
}

void Board::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_OwnerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("owner")), m_Owner));
    }
    if(m_PrivacyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("privacy")), m_Privacy));
    }
}

bool Board::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("owner"))))
    {
        std::shared_ptr<Board_owner> refVal_setOwner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("owner"))), refVal_setOwner );
        setOwner(refVal_setOwner);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("privacy"))))
    {
        utility::string_t refVal_setPrivacy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("privacy"))), refVal_setPrivacy );
        setPrivacy(refVal_setPrivacy);
    }
    return ok;
}

utility::string_t Board::getId() const
{
    return m_Id;
}

void Board::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Board::idIsSet() const
{
    return m_IdIsSet;
}

void Board::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Board::getName() const
{
    return m_Name;
}

void Board::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Board::nameIsSet() const
{
    return m_NameIsSet;
}

void Board::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Board::getDescription() const
{
    return m_Description;
}

void Board::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool Board::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Board::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::shared_ptr<Board_owner> Board::getOwner() const
{
    return m_Owner;
}

void Board::setOwner(const std::shared_ptr<Board_owner>& value)
{
    m_Owner = value;
    m_OwnerIsSet = true;
}

bool Board::ownerIsSet() const
{
    return m_OwnerIsSet;
}

void Board::unsetOwner()
{
    m_OwnerIsSet = false;
}
utility::string_t Board::getPrivacy() const
{
    return m_Privacy;
}

void Board::setPrivacy(const utility::string_t& value)
{
    m_Privacy = value;
    m_PrivacyIsSet = true;
}

bool Board::privacyIsSet() const
{
    return m_PrivacyIsSet;
}

void Board::unsetPrivacy()
{
    m_PrivacyIsSet = false;
}
}
}
}
}


