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



#include "CppRestOpenAPIClient/model/SingleInterestTargetingOptionResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



SingleInterestTargetingOptionResponse::SingleInterestTargetingOptionResponse()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Child_interestsIsSet = false;
    m_Level = 0;
    m_LevelIsSet = false;
}

SingleInterestTargetingOptionResponse::~SingleInterestTargetingOptionResponse()
{
}

void SingleInterestTargetingOptionResponse::validate()
{
    // TODO: implement validation
}

web::json::value SingleInterestTargetingOptionResponse::toJson() const
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
    if(m_Child_interestsIsSet)
    {
        val[utility::conversions::to_string_t(U("child_interests"))] = ModelBase::toJson(m_Child_interests);
    }
    if(m_LevelIsSet)
    {
        val[utility::conversions::to_string_t(U("level"))] = ModelBase::toJson(m_Level);
    }

    return val;
}

bool SingleInterestTargetingOptionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("child_interests"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("child_interests")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setChildInterests;
            ok &= ModelBase::fromJson(fieldValue, refVal_setChildInterests);
            setChildInterests(refVal_setChildInterests);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("level"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("level")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setLevel;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLevel);
            setLevel(refVal_setLevel);
        }
    }
    return ok;
}

void SingleInterestTargetingOptionResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Child_interestsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("child_interests")), m_Child_interests));
    }
    if(m_LevelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("level")), m_Level));
    }
}

bool SingleInterestTargetingOptionResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("child_interests"))))
    {
        std::vector<utility::string_t> refVal_setChildInterests;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("child_interests"))), refVal_setChildInterests );
        setChildInterests(refVal_setChildInterests);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("level"))))
    {
        int32_t refVal_setLevel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("level"))), refVal_setLevel );
        setLevel(refVal_setLevel);
    }
    return ok;
}

utility::string_t SingleInterestTargetingOptionResponse::getId() const
{
    return m_Id;
}

void SingleInterestTargetingOptionResponse::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool SingleInterestTargetingOptionResponse::idIsSet() const
{
    return m_IdIsSet;
}

void SingleInterestTargetingOptionResponse::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t SingleInterestTargetingOptionResponse::getName() const
{
    return m_Name;
}

void SingleInterestTargetingOptionResponse::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool SingleInterestTargetingOptionResponse::nameIsSet() const
{
    return m_NameIsSet;
}

void SingleInterestTargetingOptionResponse::unsetName()
{
    m_NameIsSet = false;
}
std::vector<utility::string_t>& SingleInterestTargetingOptionResponse::getChildInterests()
{
    return m_Child_interests;
}

void SingleInterestTargetingOptionResponse::setChildInterests(const std::vector<utility::string_t>& value)
{
    m_Child_interests = value;
    m_Child_interestsIsSet = true;
}

bool SingleInterestTargetingOptionResponse::childInterestsIsSet() const
{
    return m_Child_interestsIsSet;
}

void SingleInterestTargetingOptionResponse::unsetChild_interests()
{
    m_Child_interestsIsSet = false;
}
int32_t SingleInterestTargetingOptionResponse::getLevel() const
{
    return m_Level;
}

void SingleInterestTargetingOptionResponse::setLevel(int32_t value)
{
    m_Level = value;
    m_LevelIsSet = true;
}

bool SingleInterestTargetingOptionResponse::levelIsSet() const
{
    return m_LevelIsSet;
}

void SingleInterestTargetingOptionResponse::unsetLevel()
{
    m_LevelIsSet = false;
}
}
}
}
}


