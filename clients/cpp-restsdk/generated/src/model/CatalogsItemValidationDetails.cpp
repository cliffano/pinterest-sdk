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



#include "CppRestOpenAPIClient/model/CatalogsItemValidationDetails.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsItemValidationDetails::CatalogsItemValidationDetails()
{
    m_Attribute_nameIsSet = false;
    m_Provided_value = utility::conversions::to_string_t("");
    m_Provided_valueIsSet = false;
}

CatalogsItemValidationDetails::~CatalogsItemValidationDetails()
{
}

void CatalogsItemValidationDetails::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsItemValidationDetails::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Attribute_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("attribute_name"))] = ModelBase::toJson(m_Attribute_name);
    }
    if(m_Provided_valueIsSet)
    {
        val[utility::conversions::to_string_t(U("provided_value"))] = ModelBase::toJson(m_Provided_value);
    }

    return val;
}

bool CatalogsItemValidationDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("attribute_name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("attribute_name")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<NullableCatalogsItemFieldType> refVal_setAttributeName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAttributeName);
            setAttributeName(refVal_setAttributeName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("provided_value"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("provided_value")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setProvidedValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProvidedValue);
            setProvidedValue(refVal_setProvidedValue);
        }
    }
    return ok;
}

void CatalogsItemValidationDetails::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Attribute_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("attribute_name")), m_Attribute_name));
    }
    if(m_Provided_valueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("provided_value")), m_Provided_value));
    }
}

bool CatalogsItemValidationDetails::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("attribute_name"))))
    {
        std::shared_ptr<NullableCatalogsItemFieldType> refVal_setAttributeName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("attribute_name"))), refVal_setAttributeName );
        setAttributeName(refVal_setAttributeName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("provided_value"))))
    {
        utility::string_t refVal_setProvidedValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("provided_value"))), refVal_setProvidedValue );
        setProvidedValue(refVal_setProvidedValue);
    }
    return ok;
}

std::shared_ptr<NullableCatalogsItemFieldType> CatalogsItemValidationDetails::getAttributeName() const
{
    return m_Attribute_name;
}

void CatalogsItemValidationDetails::setAttributeName(const std::shared_ptr<NullableCatalogsItemFieldType>& value)
{
    m_Attribute_name = value;
    m_Attribute_nameIsSet = true;
}

bool CatalogsItemValidationDetails::attributeNameIsSet() const
{
    return m_Attribute_nameIsSet;
}

void CatalogsItemValidationDetails::unsetAttribute_name()
{
    m_Attribute_nameIsSet = false;
}
utility::string_t CatalogsItemValidationDetails::getProvidedValue() const
{
    return m_Provided_value;
}

void CatalogsItemValidationDetails::setProvidedValue(const utility::string_t& value)
{
    m_Provided_value = value;
    m_Provided_valueIsSet = true;
}

bool CatalogsItemValidationDetails::providedValueIsSet() const
{
    return m_Provided_valueIsSet;
}

void CatalogsItemValidationDetails::unsetProvided_value()
{
    m_Provided_valueIsSet = false;
}
}
}
}
}


