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



#include "CppRestOpenAPIClient/model/AdGroupUpdateRequest_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



AdGroupUpdateRequest_allOf::AdGroupUpdateRequest_allOf()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
}

AdGroupUpdateRequest_allOf::~AdGroupUpdateRequest_allOf()
{
}

void AdGroupUpdateRequest_allOf::validate()
{
    // TODO: implement validation
}

web::json::value AdGroupUpdateRequest_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }

    return val;
}

bool AdGroupUpdateRequest_allOf::fromJson(const web::json::value& val)
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
    return ok;
}

void AdGroupUpdateRequest_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool AdGroupUpdateRequest_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    return ok;
}

utility::string_t AdGroupUpdateRequest_allOf::getId() const
{
    return m_Id;
}

void AdGroupUpdateRequest_allOf::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool AdGroupUpdateRequest_allOf::idIsSet() const
{
    return m_IdIsSet;
}

void AdGroupUpdateRequest_allOf::unsetId()
{
    m_IdIsSet = false;
}
}
}
}
}


