/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/ItemIdFilter.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



ItemIdFilter::ItemIdFilter()
{
    m_ITEM_IDIsSet = false;
}

ItemIdFilter::~ItemIdFilter()
{
}

void ItemIdFilter::validate()
{
    // TODO: implement validation
}

web::json::value ItemIdFilter::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ITEM_IDIsSet)
    {
        val[utility::conversions::to_string_t(U("ITEM_ID"))] = ModelBase::toJson(m_ITEM_ID);
    }

    return val;
}

bool ItemIdFilter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("ITEM_ID"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ITEM_ID")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> refVal_setITEMID;
            ok &= ModelBase::fromJson(fieldValue, refVal_setITEMID);
            setITEMID(refVal_setITEMID);
        }
    }
    return ok;
}

void ItemIdFilter::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ITEM_IDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ITEM_ID")), m_ITEM_ID));
    }
}

bool ItemIdFilter::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("ITEM_ID"))))
    {
        std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> refVal_setITEMID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ITEM_ID"))), refVal_setITEMID );
        setITEMID(refVal_setITEMID);
    }
    return ok;
}

std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> ItemIdFilter::getITEMID() const
{
    return m_ITEM_ID;
}

void ItemIdFilter::setITEMID(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value)
{
    m_ITEM_ID = value;
    m_ITEM_IDIsSet = true;
}

bool ItemIdFilter::iTEMIDIsSet() const
{
    return m_ITEM_IDIsSet;
}

void ItemIdFilter::unsetITEM_ID()
{
    m_ITEM_IDIsSet = false;
}
}
}
}
}

