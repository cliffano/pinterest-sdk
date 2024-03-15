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



#include "CppRestOpenAPIClient/model/GoogleProductCategory5Filter.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



GoogleProductCategory5Filter::GoogleProductCategory5Filter()
{
    m_GOOGLE_PRODUCT_CATEGORY_5IsSet = false;
}

GoogleProductCategory5Filter::~GoogleProductCategory5Filter()
{
}

void GoogleProductCategory5Filter::validate()
{
    // TODO: implement validation
}

web::json::value GoogleProductCategory5Filter::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_GOOGLE_PRODUCT_CATEGORY_5IsSet)
    {
        val[utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_5"))] = ModelBase::toJson(m_GOOGLE_PRODUCT_CATEGORY_5);
    }

    return val;
}

bool GoogleProductCategory5Filter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_5"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_5")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> refVal_setGOOGLEPRODUCTCATEGORY5;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGOOGLEPRODUCTCATEGORY5);
            setGOOGLEPRODUCTCATEGORY5(refVal_setGOOGLEPRODUCTCATEGORY5);
        }
    }
    return ok;
}

void GoogleProductCategory5Filter::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_GOOGLE_PRODUCT_CATEGORY_5IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_5")), m_GOOGLE_PRODUCT_CATEGORY_5));
    }
}

bool GoogleProductCategory5Filter::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_5"))))
    {
        std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> refVal_setGOOGLEPRODUCTCATEGORY5;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_5"))), refVal_setGOOGLEPRODUCTCATEGORY5 );
        setGOOGLEPRODUCTCATEGORY5(refVal_setGOOGLEPRODUCTCATEGORY5);
    }
    return ok;
}

std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> GoogleProductCategory5Filter::getGOOGLEPRODUCTCATEGORY5() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_5;
}

void GoogleProductCategory5Filter::setGOOGLEPRODUCTCATEGORY5(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value)
{
    m_GOOGLE_PRODUCT_CATEGORY_5 = value;
    m_GOOGLE_PRODUCT_CATEGORY_5IsSet = true;
}

bool GoogleProductCategory5Filter::gOOGLEPRODUCTCATEGORY5IsSet() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_5IsSet;
}

void GoogleProductCategory5Filter::unsetGOOGLE_PRODUCT_CATEGORY_5()
{
    m_GOOGLE_PRODUCT_CATEGORY_5IsSet = false;
}
}
}
}
}


