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



#include "CppRestOpenAPIClient/model/CatalogsItemValidationIssues.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsItemValidationIssues::CatalogsItemValidationIssues()
{
    m_Item_number = 0;
    m_Item_numberIsSet = false;
    m_Item_id = utility::conversions::to_string_t("");
    m_Item_idIsSet = false;
    m_ErrorsIsSet = false;
    m_WarningsIsSet = false;
}

CatalogsItemValidationIssues::~CatalogsItemValidationIssues()
{
}

void CatalogsItemValidationIssues::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsItemValidationIssues::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Item_numberIsSet)
    {
        val[utility::conversions::to_string_t(U("item_number"))] = ModelBase::toJson(m_Item_number);
    }
    if(m_Item_idIsSet)
    {
        val[utility::conversions::to_string_t(U("item_id"))] = ModelBase::toJson(m_Item_id);
    }
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }
    if(m_WarningsIsSet)
    {
        val[utility::conversions::to_string_t(U("warnings"))] = ModelBase::toJson(m_Warnings);
    }

    return val;
}

bool CatalogsItemValidationIssues::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("item_number"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("item_number")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setItemNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setItemNumber);
            setItemNumber(refVal_setItemNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("item_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("item_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setItemId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setItemId);
            setItemId(refVal_setItemId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("errors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errors")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsItemValidationErrors> refVal_setErrors;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrors);
            setErrors(refVal_setErrors);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("warnings"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("warnings")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsItemValidationWarnings> refVal_setWarnings;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWarnings);
            setWarnings(refVal_setWarnings);
        }
    }
    return ok;
}

void CatalogsItemValidationIssues::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Item_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("item_number")), m_Item_number));
    }
    if(m_Item_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("item_id")), m_Item_id));
    }
    if(m_ErrorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errors")), m_Errors));
    }
    if(m_WarningsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("warnings")), m_Warnings));
    }
}

bool CatalogsItemValidationIssues::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("item_number"))))
    {
        int32_t refVal_setItemNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("item_number"))), refVal_setItemNumber );
        setItemNumber(refVal_setItemNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("item_id"))))
    {
        utility::string_t refVal_setItemId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("item_id"))), refVal_setItemId );
        setItemId(refVal_setItemId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("errors"))))
    {
        std::shared_ptr<CatalogsItemValidationErrors> refVal_setErrors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errors"))), refVal_setErrors );
        setErrors(refVal_setErrors);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("warnings"))))
    {
        std::shared_ptr<CatalogsItemValidationWarnings> refVal_setWarnings;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("warnings"))), refVal_setWarnings );
        setWarnings(refVal_setWarnings);
    }
    return ok;
}

int32_t CatalogsItemValidationIssues::getItemNumber() const
{
    return m_Item_number;
}

void CatalogsItemValidationIssues::setItemNumber(int32_t value)
{
    m_Item_number = value;
    m_Item_numberIsSet = true;
}

bool CatalogsItemValidationIssues::itemNumberIsSet() const
{
    return m_Item_numberIsSet;
}

void CatalogsItemValidationIssues::unsetItem_number()
{
    m_Item_numberIsSet = false;
}
utility::string_t CatalogsItemValidationIssues::getItemId() const
{
    return m_Item_id;
}

void CatalogsItemValidationIssues::setItemId(const utility::string_t& value)
{
    m_Item_id = value;
    m_Item_idIsSet = true;
}

bool CatalogsItemValidationIssues::itemIdIsSet() const
{
    return m_Item_idIsSet;
}

void CatalogsItemValidationIssues::unsetItem_id()
{
    m_Item_idIsSet = false;
}
std::shared_ptr<CatalogsItemValidationErrors> CatalogsItemValidationIssues::getErrors() const
{
    return m_Errors;
}

void CatalogsItemValidationIssues::setErrors(const std::shared_ptr<CatalogsItemValidationErrors>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool CatalogsItemValidationIssues::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void CatalogsItemValidationIssues::unsetErrors()
{
    m_ErrorsIsSet = false;
}
std::shared_ptr<CatalogsItemValidationWarnings> CatalogsItemValidationIssues::getWarnings() const
{
    return m_Warnings;
}

void CatalogsItemValidationIssues::setWarnings(const std::shared_ptr<CatalogsItemValidationWarnings>& value)
{
    m_Warnings = value;
    m_WarningsIsSet = true;
}

bool CatalogsItemValidationIssues::warningsIsSet() const
{
    return m_WarningsIsSet;
}

void CatalogsItemValidationIssues::unsetWarnings()
{
    m_WarningsIsSet = false;
}
}
}
}
}


