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



#include "CppRestOpenAPIClient/model/GetAudiencesOrderBy.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

GetAudiencesOrderBy::eGetAudiencesOrderBy toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("NONE")))
        return GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_NONE;
    if (val == utility::conversions::to_string_t(U("ID")))
        return GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_ID;
    if (val == utility::conversions::to_string_t(U("SIZE")))
        return GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_SIZE;
    if (val == utility::conversions::to_string_t(U("CREATION_DATE")))
        return GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_CREATION_DATE;
    if (val == utility::conversions::to_string_t(U("UPDATED_TIME")))
        return GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_UPDATED_TIME;
    if (val == utility::conversions::to_string_t(U("NAME")))
        return GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_NAME;
    if (val == utility::conversions::to_string_t(U("STATUS")))
        return GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_STATUS;
    if (val == utility::conversions::to_string_t(U("TYPE")))
        return GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_TYPE;
    return {};
}

EnumUnderlyingType fromEnum(GetAudiencesOrderBy::eGetAudiencesOrderBy e)
{
    switch (e)
    {
    case GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_NONE:
        return U("NONE");
    case GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_ID:
        return U("ID");
    case GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_SIZE:
        return U("SIZE");
    case GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_CREATION_DATE:
        return U("CREATION_DATE");
    case GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_UPDATED_TIME:
        return U("UPDATED_TIME");
    case GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_NAME:
        return U("NAME");
    case GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_STATUS:
        return U("STATUS");
    case GetAudiencesOrderBy::eGetAudiencesOrderBy::GetAudiencesOrderBy_TYPE:
        return U("TYPE");
    default:
        break;
    }
    return {};
}
}

GetAudiencesOrderBy::GetAudiencesOrderBy()
{
}

GetAudiencesOrderBy::~GetAudiencesOrderBy()
{
}

void GetAudiencesOrderBy::validate()
{
    // TODO: implement validation
}

web::json::value GetAudiencesOrderBy::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool GetAudiencesOrderBy::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void GetAudiencesOrderBy::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool GetAudiencesOrderBy::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }
    {
        EnumUnderlyingType e;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), e);
        if (ok)
        {
            auto v = toEnum(e);
            setValue(v);
        }
    }
    return ok;
}

GetAudiencesOrderBy::eGetAudiencesOrderBy GetAudiencesOrderBy::getValue() const
{
   return m_value;
}

void GetAudiencesOrderBy::setValue(GetAudiencesOrderBy::eGetAudiencesOrderBy const value)
{
   m_value = value;
}


}
}
}
}


