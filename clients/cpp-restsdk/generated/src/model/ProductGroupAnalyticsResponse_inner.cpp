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



#include "CppRestOpenAPIClient/model/ProductGroupAnalyticsResponse_inner.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



ProductGroupAnalyticsResponse_inner::ProductGroupAnalyticsResponse_inner()
{
    m_PRODUCT_GROUP_ID = utility::conversions::to_string_t("");
    m_PRODUCT_GROUP_IDIsSet = false;
    m_DATEIsSet = false;
}

ProductGroupAnalyticsResponse_inner::~ProductGroupAnalyticsResponse_inner()
{
}

void ProductGroupAnalyticsResponse_inner::validate()
{
    // TODO: implement validation
}

web::json::value ProductGroupAnalyticsResponse_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PRODUCT_GROUP_IDIsSet)
    {
        val[utility::conversions::to_string_t(U("PRODUCT_GROUP_ID"))] = ModelBase::toJson(m_PRODUCT_GROUP_ID);
    }
    if(m_DATEIsSet)
    {
        val[utility::conversions::to_string_t(U("DATE"))] = ModelBase::toJson(m_DATE);
    }

    return val;
}

bool ProductGroupAnalyticsResponse_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("PRODUCT_GROUP_ID"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("PRODUCT_GROUP_ID")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPRODUCTGROUPID;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPRODUCTGROUPID);
            setPRODUCTGROUPID(refVal_setPRODUCTGROUPID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("DATE"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("DATE")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setDATE;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDATE);
            setDATE(refVal_setDATE);
        }
    }
    return ok;
}

void ProductGroupAnalyticsResponse_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PRODUCT_GROUP_IDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("PRODUCT_GROUP_ID")), m_PRODUCT_GROUP_ID));
    }
    if(m_DATEIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("DATE")), m_DATE));
    }
}

bool ProductGroupAnalyticsResponse_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("PRODUCT_GROUP_ID"))))
    {
        utility::string_t refVal_setPRODUCTGROUPID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("PRODUCT_GROUP_ID"))), refVal_setPRODUCTGROUPID );
        setPRODUCTGROUPID(refVal_setPRODUCTGROUPID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("DATE"))))
    {
        utility::datetime refVal_setDATE;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("DATE"))), refVal_setDATE );
        setDATE(refVal_setDATE);
    }
    return ok;
}

utility::string_t ProductGroupAnalyticsResponse_inner::getPRODUCTGROUPID() const
{
    return m_PRODUCT_GROUP_ID;
}

void ProductGroupAnalyticsResponse_inner::setPRODUCTGROUPID(const utility::string_t& value)
{
    m_PRODUCT_GROUP_ID = value;
    m_PRODUCT_GROUP_IDIsSet = true;
}

bool ProductGroupAnalyticsResponse_inner::pRODUCTGROUPIDIsSet() const
{
    return m_PRODUCT_GROUP_IDIsSet;
}

void ProductGroupAnalyticsResponse_inner::unsetPRODUCT_GROUP_ID()
{
    m_PRODUCT_GROUP_IDIsSet = false;
}
utility::datetime ProductGroupAnalyticsResponse_inner::getDATE() const
{
    return m_DATE;
}

void ProductGroupAnalyticsResponse_inner::setDATE(const utility::datetime& value)
{
    m_DATE = value;
    m_DATEIsSet = true;
}

bool ProductGroupAnalyticsResponse_inner::dATEIsSet() const
{
    return m_DATEIsSet;
}

void ProductGroupAnalyticsResponse_inner::unsetDATE()
{
    m_DATEIsSet = false;
}
}
}
}
}


