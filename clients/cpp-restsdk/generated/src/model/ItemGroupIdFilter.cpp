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



#include "CppRestOpenAPIClient/model/ItemGroupIdFilter.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



ItemGroupIdFilter::ItemGroupIdFilter()
{
    m_ITEM_GROUP_IDIsSet = false;
}

ItemGroupIdFilter::~ItemGroupIdFilter()
{
}

void ItemGroupIdFilter::validate()
{
    // TODO: implement validation
}

web::json::value ItemGroupIdFilter::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ITEM_GROUP_IDIsSet)
    {
        val[utility::conversions::to_string_t(U("ITEM_GROUP_ID"))] = ModelBase::toJson(m_ITEM_GROUP_ID);
    }

    return val;
}

bool ItemGroupIdFilter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("ITEM_GROUP_ID"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ITEM_GROUP_ID")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> refVal_setITEMGROUPID;
            ok &= ModelBase::fromJson(fieldValue, refVal_setITEMGROUPID);
            setITEMGROUPID(refVal_setITEMGROUPID);
        }
    }
    return ok;
}

void ItemGroupIdFilter::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ITEM_GROUP_IDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ITEM_GROUP_ID")), m_ITEM_GROUP_ID));
    }
}

bool ItemGroupIdFilter::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("ITEM_GROUP_ID"))))
    {
        std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> refVal_setITEMGROUPID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ITEM_GROUP_ID"))), refVal_setITEMGROUPID );
        setITEMGROUPID(refVal_setITEMGROUPID);
    }
    return ok;
}

std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> ItemGroupIdFilter::getITEMGROUPID() const
{
    return m_ITEM_GROUP_ID;
}

void ItemGroupIdFilter::setITEMGROUPID(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value)
{
    m_ITEM_GROUP_ID = value;
    m_ITEM_GROUP_IDIsSet = true;
}

bool ItemGroupIdFilter::iTEMGROUPIDIsSet() const
{
    return m_ITEM_GROUP_IDIsSet;
}

void ItemGroupIdFilter::unsetITEM_GROUP_ID()
{
    m_ITEM_GROUP_IDIsSet = false;
}
}
}
}
}

