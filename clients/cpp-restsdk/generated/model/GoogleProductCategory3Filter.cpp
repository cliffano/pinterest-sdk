/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "GoogleProductCategory3Filter.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




GoogleProductCategory3Filter::GoogleProductCategory3Filter()
{
    m_GOOGLE_PRODUCT_CATEGORY_3IsSet = false;
}

GoogleProductCategory3Filter::~GoogleProductCategory3Filter()
{
}

void GoogleProductCategory3Filter::validate()
{
    // TODO: implement validation
}

web::json::value GoogleProductCategory3Filter::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_GOOGLE_PRODUCT_CATEGORY_3IsSet)
    {
        val[utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_3"))] = ModelBase::toJson(m_GOOGLE_PRODUCT_CATEGORY_3);
    }

    return val;
}

bool GoogleProductCategory3Filter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_3"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_3")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> refVal_GOOGLE_PRODUCT_CATEGORY_3;
            ok &= ModelBase::fromJson(fieldValue, refVal_GOOGLE_PRODUCT_CATEGORY_3);
            setGOOGLEPRODUCTCATEGORY3(refVal_GOOGLE_PRODUCT_CATEGORY_3);
        }
    }
    return ok;
}

void GoogleProductCategory3Filter::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_GOOGLE_PRODUCT_CATEGORY_3IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_3")), m_GOOGLE_PRODUCT_CATEGORY_3));
    }
}

bool GoogleProductCategory3Filter::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_3"))))
    {
        std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> refVal_GOOGLE_PRODUCT_CATEGORY_3;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_3"))), refVal_GOOGLE_PRODUCT_CATEGORY_3 );
        setGOOGLEPRODUCTCATEGORY3(refVal_GOOGLE_PRODUCT_CATEGORY_3);
    }
    return ok;
}

std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> GoogleProductCategory3Filter::getGOOGLEPRODUCTCATEGORY3() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_3;
}

void GoogleProductCategory3Filter::setGOOGLEPRODUCTCATEGORY3(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value)
{
    m_GOOGLE_PRODUCT_CATEGORY_3 = value;
    m_GOOGLE_PRODUCT_CATEGORY_3IsSet = true;
}

bool GoogleProductCategory3Filter::gOOGLEPRODUCTCATEGORY3IsSet() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_3IsSet;
}

void GoogleProductCategory3Filter::unsetGOOGLE_PRODUCT_CATEGORY_3()
{
    m_GOOGLE_PRODUCT_CATEGORY_3IsSet = false;
}
}
}
}
}


