/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "GoogleProductCategory0Filter.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




GoogleProductCategory0Filter::GoogleProductCategory0Filter()
{
    m_GOOGLE_PRODUCT_CATEGORY_0IsSet = false;
}

GoogleProductCategory0Filter::~GoogleProductCategory0Filter()
{
}

void GoogleProductCategory0Filter::validate()
{
    // TODO: implement validation
}

web::json::value GoogleProductCategory0Filter::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_GOOGLE_PRODUCT_CATEGORY_0IsSet)
    {
        val[utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_0"))] = ModelBase::toJson(m_GOOGLE_PRODUCT_CATEGORY_0);
    }

    return val;
}

bool GoogleProductCategory0Filter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_0"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_0")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> refVal_GOOGLE_PRODUCT_CATEGORY_0;
            ok &= ModelBase::fromJson(fieldValue, refVal_GOOGLE_PRODUCT_CATEGORY_0);
            setGOOGLEPRODUCTCATEGORY0(refVal_GOOGLE_PRODUCT_CATEGORY_0);
        }
    }
    return ok;
}

void GoogleProductCategory0Filter::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_GOOGLE_PRODUCT_CATEGORY_0IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_0")), m_GOOGLE_PRODUCT_CATEGORY_0));
    }
}

bool GoogleProductCategory0Filter::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_0"))))
    {
        std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> refVal_GOOGLE_PRODUCT_CATEGORY_0;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_0"))), refVal_GOOGLE_PRODUCT_CATEGORY_0 );
        setGOOGLEPRODUCTCATEGORY0(refVal_GOOGLE_PRODUCT_CATEGORY_0);
    }
    return ok;
}

std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> GoogleProductCategory0Filter::getGOOGLEPRODUCTCATEGORY0() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_0;
}

void GoogleProductCategory0Filter::setGOOGLEPRODUCTCATEGORY0(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value)
{
    m_GOOGLE_PRODUCT_CATEGORY_0 = value;
    m_GOOGLE_PRODUCT_CATEGORY_0IsSet = true;
}

bool GoogleProductCategory0Filter::gOOGLEPRODUCTCATEGORY0IsSet() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_0IsSet;
}

void GoogleProductCategory0Filter::unsetGOOGLE_PRODUCT_CATEGORY_0()
{
    m_GOOGLE_PRODUCT_CATEGORY_0IsSet = false;
}
}
}
}
}


