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



#include "CppRestOpenAPIClient/model/CatalogsItemsBatch.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsItemsBatch::CatalogsItemsBatch()
{
    m_ItemsIsSet = false;
    m_Batch_id = utility::conversions::to_string_t("");
    m_Batch_idIsSet = false;
    m_Created_time = utility::datetime();
    m_Created_timeIsSet = false;
    m_Completed_time = utility::datetime();
    m_Completed_timeIsSet = false;
    m_StatusIsSet = false;
}

CatalogsItemsBatch::~CatalogsItemsBatch()
{
}

void CatalogsItemsBatch::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsItemsBatch::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ItemsIsSet)
    {
        val[utility::conversions::to_string_t(U("items"))] = ModelBase::toJson(m_Items);
    }
    if(m_Batch_idIsSet)
    {
        val[utility::conversions::to_string_t(U("batch_id"))] = ModelBase::toJson(m_Batch_id);
    }
    if(m_Created_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("created_time"))] = ModelBase::toJson(m_Created_time);
    }
    if(m_Completed_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("completed_time"))] = ModelBase::toJson(m_Completed_time);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }

    return val;
}

bool CatalogsItemsBatch::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("items"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("items")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ItemProcessingRecord>> refVal_setItems;
            ok &= ModelBase::fromJson(fieldValue, refVal_setItems);
            setItems(refVal_setItems);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("batch_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("batch_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBatchId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBatchId);
            setBatchId(refVal_setBatchId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("created_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("created_time")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedTime);
            setCreatedTime(refVal_setCreatedTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("completed_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("completed_time")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCompletedTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCompletedTime);
            setCompletedTime(refVal_setCompletedTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BatchOperationStatus> refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    return ok;
}

void CatalogsItemsBatch::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ItemsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("items")), m_Items));
    }
    if(m_Batch_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("batch_id")), m_Batch_id));
    }
    if(m_Created_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("created_time")), m_Created_time));
    }
    if(m_Completed_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("completed_time")), m_Completed_time));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
}

bool CatalogsItemsBatch::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("items"))))
    {
        std::vector<std::shared_ptr<ItemProcessingRecord>> refVal_setItems;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("items"))), refVal_setItems );
        setItems(refVal_setItems);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("batch_id"))))
    {
        utility::string_t refVal_setBatchId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("batch_id"))), refVal_setBatchId );
        setBatchId(refVal_setBatchId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("created_time"))))
    {
        utility::datetime refVal_setCreatedTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("created_time"))), refVal_setCreatedTime );
        setCreatedTime(refVal_setCreatedTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("completed_time"))))
    {
        utility::datetime refVal_setCompletedTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("completed_time"))), refVal_setCompletedTime );
        setCompletedTime(refVal_setCompletedTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        std::shared_ptr<BatchOperationStatus> refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    return ok;
}

std::vector<std::shared_ptr<ItemProcessingRecord>>& CatalogsItemsBatch::getItems()
{
    return m_Items;
}

void CatalogsItemsBatch::setItems(const std::vector<std::shared_ptr<ItemProcessingRecord>>& value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}

bool CatalogsItemsBatch::itemsIsSet() const
{
    return m_ItemsIsSet;
}

void CatalogsItemsBatch::unsetItems()
{
    m_ItemsIsSet = false;
}
utility::string_t CatalogsItemsBatch::getBatchId() const
{
    return m_Batch_id;
}

void CatalogsItemsBatch::setBatchId(const utility::string_t& value)
{
    m_Batch_id = value;
    m_Batch_idIsSet = true;
}

bool CatalogsItemsBatch::batchIdIsSet() const
{
    return m_Batch_idIsSet;
}

void CatalogsItemsBatch::unsetBatch_id()
{
    m_Batch_idIsSet = false;
}
utility::datetime CatalogsItemsBatch::getCreatedTime() const
{
    return m_Created_time;
}

void CatalogsItemsBatch::setCreatedTime(const utility::datetime& value)
{
    m_Created_time = value;
    m_Created_timeIsSet = true;
}

bool CatalogsItemsBatch::createdTimeIsSet() const
{
    return m_Created_timeIsSet;
}

void CatalogsItemsBatch::unsetCreated_time()
{
    m_Created_timeIsSet = false;
}
utility::datetime CatalogsItemsBatch::getCompletedTime() const
{
    return m_Completed_time;
}

void CatalogsItemsBatch::setCompletedTime(const utility::datetime& value)
{
    m_Completed_time = value;
    m_Completed_timeIsSet = true;
}

bool CatalogsItemsBatch::completedTimeIsSet() const
{
    return m_Completed_timeIsSet;
}

void CatalogsItemsBatch::unsetCompleted_time()
{
    m_Completed_timeIsSet = false;
}
std::shared_ptr<BatchOperationStatus> CatalogsItemsBatch::getStatus() const
{
    return m_Status;
}

void CatalogsItemsBatch::setStatus(const std::shared_ptr<BatchOperationStatus>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool CatalogsItemsBatch::statusIsSet() const
{
    return m_StatusIsSet;
}

void CatalogsItemsBatch::unsetStatus()
{
    m_StatusIsSet = false;
}
}
}
}
}


