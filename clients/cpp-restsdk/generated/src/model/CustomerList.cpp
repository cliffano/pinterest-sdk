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



#include "CppRestOpenAPIClient/model/CustomerList.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CustomerList::CustomerList()
{
    m_Ad_account_id = utility::conversions::to_string_t("");
    m_Ad_account_idIsSet = false;
    m_Created_time = 0.0;
    m_Created_timeIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Num_batches = 0.0;
    m_Num_batchesIsSet = false;
    m_Num_removed_user_records = 0.0;
    m_Num_removed_user_recordsIsSet = false;
    m_Num_uploaded_user_records = 0.0;
    m_Num_uploaded_user_recordsIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Updated_time = 0.0;
    m_Updated_timeIsSet = false;
    m_ExceptionsIsSet = false;
}

CustomerList::~CustomerList()
{
}

void CustomerList::validate()
{
    // TODO: implement validation
}

web::json::value CustomerList::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Ad_account_idIsSet)
    {
        val[utility::conversions::to_string_t(U("ad_account_id"))] = ModelBase::toJson(m_Ad_account_id);
    }
    if(m_Created_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("created_time"))] = ModelBase::toJson(m_Created_time);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_Num_batchesIsSet)
    {
        val[utility::conversions::to_string_t(U("num_batches"))] = ModelBase::toJson(m_Num_batches);
    }
    if(m_Num_removed_user_recordsIsSet)
    {
        val[utility::conversions::to_string_t(U("num_removed_user_records"))] = ModelBase::toJson(m_Num_removed_user_records);
    }
    if(m_Num_uploaded_user_recordsIsSet)
    {
        val[utility::conversions::to_string_t(U("num_uploaded_user_records"))] = ModelBase::toJson(m_Num_uploaded_user_records);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }
    if(m_Updated_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("updated_time"))] = ModelBase::toJson(m_Updated_time);
    }
    if(m_ExceptionsIsSet)
    {
        val[utility::conversions::to_string_t(U("exceptions"))] = ModelBase::toJson(m_Exceptions);
    }

    return val;
}

bool CustomerList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("ad_account_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ad_account_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAdAccountId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAdAccountId);
            setAdAccountId(refVal_setAdAccountId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("created_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("created_time")));
        if(!fieldValue.is_null())
        {
            double refVal_setCreatedTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedTime);
            setCreatedTime(refVal_setCreatedTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("num_batches"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("num_batches")));
        if(!fieldValue.is_null())
        {
            double refVal_setNumBatches;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNumBatches);
            setNumBatches(refVal_setNumBatches);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("num_removed_user_records"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("num_removed_user_records")));
        if(!fieldValue.is_null())
        {
            double refVal_setNumRemovedUserRecords;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNumRemovedUserRecords);
            setNumRemovedUserRecords(refVal_setNumRemovedUserRecords);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("num_uploaded_user_records"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("num_uploaded_user_records")));
        if(!fieldValue.is_null())
        {
            double refVal_setNumUploadedUserRecords;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNumUploadedUserRecords);
            setNumUploadedUserRecords(refVal_setNumUploadedUserRecords);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("updated_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("updated_time")));
        if(!fieldValue.is_null())
        {
            double refVal_setUpdatedTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUpdatedTime);
            setUpdatedTime(refVal_setUpdatedTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("exceptions"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("exceptions")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setExceptions;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExceptions);
            setExceptions(refVal_setExceptions);
        }
    }
    return ok;
}

void CustomerList::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Ad_account_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ad_account_id")), m_Ad_account_id));
    }
    if(m_Created_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("created_time")), m_Created_time));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_Num_batchesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("num_batches")), m_Num_batches));
    }
    if(m_Num_removed_user_recordsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("num_removed_user_records")), m_Num_removed_user_records));
    }
    if(m_Num_uploaded_user_recordsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("num_uploaded_user_records")), m_Num_uploaded_user_records));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
    if(m_Updated_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updated_time")), m_Updated_time));
    }
    if(m_ExceptionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("exceptions")), m_Exceptions));
    }
}

bool CustomerList::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("ad_account_id"))))
    {
        utility::string_t refVal_setAdAccountId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ad_account_id"))), refVal_setAdAccountId );
        setAdAccountId(refVal_setAdAccountId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("created_time"))))
    {
        double refVal_setCreatedTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("created_time"))), refVal_setCreatedTime );
        setCreatedTime(refVal_setCreatedTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("num_batches"))))
    {
        double refVal_setNumBatches;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("num_batches"))), refVal_setNumBatches );
        setNumBatches(refVal_setNumBatches);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("num_removed_user_records"))))
    {
        double refVal_setNumRemovedUserRecords;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("num_removed_user_records"))), refVal_setNumRemovedUserRecords );
        setNumRemovedUserRecords(refVal_setNumRemovedUserRecords);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("num_uploaded_user_records"))))
    {
        double refVal_setNumUploadedUserRecords;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("num_uploaded_user_records"))), refVal_setNumUploadedUserRecords );
        setNumUploadedUserRecords(refVal_setNumUploadedUserRecords);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        utility::string_t refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("updated_time"))))
    {
        double refVal_setUpdatedTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("updated_time"))), refVal_setUpdatedTime );
        setUpdatedTime(refVal_setUpdatedTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("exceptions"))))
    {
        std::shared_ptr<Object> refVal_setExceptions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("exceptions"))), refVal_setExceptions );
        setExceptions(refVal_setExceptions);
    }
    return ok;
}

utility::string_t CustomerList::getAdAccountId() const
{
    return m_Ad_account_id;
}

void CustomerList::setAdAccountId(const utility::string_t& value)
{
    m_Ad_account_id = value;
    m_Ad_account_idIsSet = true;
}

bool CustomerList::adAccountIdIsSet() const
{
    return m_Ad_account_idIsSet;
}

void CustomerList::unsetAd_account_id()
{
    m_Ad_account_idIsSet = false;
}
double CustomerList::getCreatedTime() const
{
    return m_Created_time;
}

void CustomerList::setCreatedTime(double value)
{
    m_Created_time = value;
    m_Created_timeIsSet = true;
}

bool CustomerList::createdTimeIsSet() const
{
    return m_Created_timeIsSet;
}

void CustomerList::unsetCreated_time()
{
    m_Created_timeIsSet = false;
}
utility::string_t CustomerList::getId() const
{
    return m_Id;
}

void CustomerList::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool CustomerList::idIsSet() const
{
    return m_IdIsSet;
}

void CustomerList::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t CustomerList::getName() const
{
    return m_Name;
}

void CustomerList::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool CustomerList::nameIsSet() const
{
    return m_NameIsSet;
}

void CustomerList::unsetName()
{
    m_NameIsSet = false;
}
double CustomerList::getNumBatches() const
{
    return m_Num_batches;
}

void CustomerList::setNumBatches(double value)
{
    m_Num_batches = value;
    m_Num_batchesIsSet = true;
}

bool CustomerList::numBatchesIsSet() const
{
    return m_Num_batchesIsSet;
}

void CustomerList::unsetNum_batches()
{
    m_Num_batchesIsSet = false;
}
double CustomerList::getNumRemovedUserRecords() const
{
    return m_Num_removed_user_records;
}

void CustomerList::setNumRemovedUserRecords(double value)
{
    m_Num_removed_user_records = value;
    m_Num_removed_user_recordsIsSet = true;
}

bool CustomerList::numRemovedUserRecordsIsSet() const
{
    return m_Num_removed_user_recordsIsSet;
}

void CustomerList::unsetNum_removed_user_records()
{
    m_Num_removed_user_recordsIsSet = false;
}
double CustomerList::getNumUploadedUserRecords() const
{
    return m_Num_uploaded_user_records;
}

void CustomerList::setNumUploadedUserRecords(double value)
{
    m_Num_uploaded_user_records = value;
    m_Num_uploaded_user_recordsIsSet = true;
}

bool CustomerList::numUploadedUserRecordsIsSet() const
{
    return m_Num_uploaded_user_recordsIsSet;
}

void CustomerList::unsetNum_uploaded_user_records()
{
    m_Num_uploaded_user_recordsIsSet = false;
}
utility::string_t CustomerList::getStatus() const
{
    return m_Status;
}

void CustomerList::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool CustomerList::statusIsSet() const
{
    return m_StatusIsSet;
}

void CustomerList::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t CustomerList::getType() const
{
    return m_Type;
}

void CustomerList::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool CustomerList::typeIsSet() const
{
    return m_TypeIsSet;
}

void CustomerList::unsetType()
{
    m_TypeIsSet = false;
}
double CustomerList::getUpdatedTime() const
{
    return m_Updated_time;
}

void CustomerList::setUpdatedTime(double value)
{
    m_Updated_time = value;
    m_Updated_timeIsSet = true;
}

bool CustomerList::updatedTimeIsSet() const
{
    return m_Updated_timeIsSet;
}

void CustomerList::unsetUpdated_time()
{
    m_Updated_timeIsSet = false;
}
std::shared_ptr<Object> CustomerList::getExceptions() const
{
    return m_Exceptions;
}

void CustomerList::setExceptions(const std::shared_ptr<Object>& value)
{
    m_Exceptions = value;
    m_ExceptionsIsSet = true;
}

bool CustomerList::exceptionsIsSet() const
{
    return m_ExceptionsIsSet;
}

void CustomerList::unsetExceptions()
{
    m_ExceptionsIsSet = false;
}
}
}
}
}


