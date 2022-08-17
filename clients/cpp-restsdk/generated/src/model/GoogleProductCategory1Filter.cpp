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



#include "CppRestOpenAPIClient/model/GoogleProductCategory1Filter.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



GoogleProductCategory1Filter::GoogleProductCategory1Filter()
{
    m_GOOGLE_PRODUCT_CATEGORY_1IsSet = false;
}

GoogleProductCategory1Filter::~GoogleProductCategory1Filter()
{
}

void GoogleProductCategory1Filter::validate()
{
    // TODO: implement validation
}

web::json::value GoogleProductCategory1Filter::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_GOOGLE_PRODUCT_CATEGORY_1IsSet)
    {
        val[utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_1"))] = ModelBase::toJson(m_GOOGLE_PRODUCT_CATEGORY_1);
    }

    return val;
}

bool GoogleProductCategory1Filter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_1"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_1")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> refVal_setGOOGLEPRODUCTCATEGORY1;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGOOGLEPRODUCTCATEGORY1);
            setGOOGLEPRODUCTCATEGORY1(refVal_setGOOGLEPRODUCTCATEGORY1);
        }
    }
    return ok;
}

void GoogleProductCategory1Filter::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_GOOGLE_PRODUCT_CATEGORY_1IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_1")), m_GOOGLE_PRODUCT_CATEGORY_1));
    }
}

bool GoogleProductCategory1Filter::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_1"))))
    {
        std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> refVal_setGOOGLEPRODUCTCATEGORY1;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY_1"))), refVal_setGOOGLEPRODUCTCATEGORY1 );
        setGOOGLEPRODUCTCATEGORY1(refVal_setGOOGLEPRODUCTCATEGORY1);
    }
    return ok;
}

std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> GoogleProductCategory1Filter::getGOOGLEPRODUCTCATEGORY1() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_1;
}

void GoogleProductCategory1Filter::setGOOGLEPRODUCTCATEGORY1(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value)
{
    m_GOOGLE_PRODUCT_CATEGORY_1 = value;
    m_GOOGLE_PRODUCT_CATEGORY_1IsSet = true;
}

bool GoogleProductCategory1Filter::gOOGLEPRODUCTCATEGORY1IsSet() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_1IsSet;
}

void GoogleProductCategory1Filter::unsetGOOGLE_PRODUCT_CATEGORY_1()
{
    m_GOOGLE_PRODUCT_CATEGORY_1IsSet = false;
}
}
}
}
}


