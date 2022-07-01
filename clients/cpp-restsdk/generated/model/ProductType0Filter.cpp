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



#include "ProductType0Filter.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ProductType0Filter::ProductType0Filter()
{
    m_PRODUCT_TYPE_0IsSet = false;
}

ProductType0Filter::~ProductType0Filter()
{
}

void ProductType0Filter::validate()
{
    // TODO: implement validation
}

web::json::value ProductType0Filter::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PRODUCT_TYPE_0IsSet)
    {
        val[utility::conversions::to_string_t(U("PRODUCT_TYPE_0"))] = ModelBase::toJson(m_PRODUCT_TYPE_0);
    }

    return val;
}

bool ProductType0Filter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("PRODUCT_TYPE_0"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("PRODUCT_TYPE_0")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> refVal_PRODUCT_TYPE_0;
            ok &= ModelBase::fromJson(fieldValue, refVal_PRODUCT_TYPE_0);
            setPRODUCTTYPE0(refVal_PRODUCT_TYPE_0);
        }
    }
    return ok;
}

void ProductType0Filter::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PRODUCT_TYPE_0IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("PRODUCT_TYPE_0")), m_PRODUCT_TYPE_0));
    }
}

bool ProductType0Filter::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("PRODUCT_TYPE_0"))))
    {
        std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> refVal_PRODUCT_TYPE_0;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("PRODUCT_TYPE_0"))), refVal_PRODUCT_TYPE_0 );
        setPRODUCTTYPE0(refVal_PRODUCT_TYPE_0);
    }
    return ok;
}

std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> ProductType0Filter::getPRODUCTTYPE0() const
{
    return m_PRODUCT_TYPE_0;
}

void ProductType0Filter::setPRODUCTTYPE0(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value)
{
    m_PRODUCT_TYPE_0 = value;
    m_PRODUCT_TYPE_0IsSet = true;
}

bool ProductType0Filter::pRODUCTTYPE0IsSet() const
{
    return m_PRODUCT_TYPE_0IsSet;
}

void ProductType0Filter::unsetPRODUCT_TYPE_0()
{
    m_PRODUCT_TYPE_0IsSet = false;
}
}
}
}
}


