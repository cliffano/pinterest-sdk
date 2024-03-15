/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "CustomerList.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CustomerList::CustomerList()
{
    m_Ad_account_id = "";
    m_Ad_account_idIsSet = false;
    m_Created_time = 0.0;
    m_Created_timeIsSet = false;
    m_Id = "";
    m_IdIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
    m_Num_batches = 0.0;
    m_Num_batchesIsSet = false;
    m_Num_removed_user_records = 0.0;
    m_Num_removed_user_recordsIsSet = false;
    m_Num_uploaded_user_records = 0.0;
    m_Num_uploaded_user_recordsIsSet = false;
    m_Status = "";
    m_StatusIsSet = false;
    m_Type = "";
    m_TypeIsSet = false;
    m_Updated_time = 0.0;
    m_Updated_timeIsSet = false;
    m_ExceptionsIsSet = false;
    
}

void CustomerList::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CustomerList::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CustomerList::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CustomerList" : pathPrefix;

                                                
    return success;
}

bool CustomerList::operator==(const CustomerList& rhs) const
{
    return
    
    
    
    ((!adAccountIdIsSet() && !rhs.adAccountIdIsSet()) || (adAccountIdIsSet() && rhs.adAccountIdIsSet() && getAdAccountId() == rhs.getAdAccountId())) &&
    
    
    ((!createdTimeIsSet() && !rhs.createdTimeIsSet()) || (createdTimeIsSet() && rhs.createdTimeIsSet() && getCreatedTime() == rhs.getCreatedTime())) &&
    
    
    ((!idIsSet() && !rhs.idIsSet()) || (idIsSet() && rhs.idIsSet() && getId() == rhs.getId())) &&
    
    
    ((!nameIsSet() && !rhs.nameIsSet()) || (nameIsSet() && rhs.nameIsSet() && getName() == rhs.getName())) &&
    
    
    ((!numBatchesIsSet() && !rhs.numBatchesIsSet()) || (numBatchesIsSet() && rhs.numBatchesIsSet() && getNumBatches() == rhs.getNumBatches())) &&
    
    
    ((!numRemovedUserRecordsIsSet() && !rhs.numRemovedUserRecordsIsSet()) || (numRemovedUserRecordsIsSet() && rhs.numRemovedUserRecordsIsSet() && getNumRemovedUserRecords() == rhs.getNumRemovedUserRecords())) &&
    
    
    ((!numUploadedUserRecordsIsSet() && !rhs.numUploadedUserRecordsIsSet()) || (numUploadedUserRecordsIsSet() && rhs.numUploadedUserRecordsIsSet() && getNumUploadedUserRecords() == rhs.getNumUploadedUserRecords())) &&
    
    
    ((!statusIsSet() && !rhs.statusIsSet()) || (statusIsSet() && rhs.statusIsSet() && getStatus() == rhs.getStatus())) &&
    
    
    ((!typeIsSet() && !rhs.typeIsSet()) || (typeIsSet() && rhs.typeIsSet() && getType() == rhs.getType())) &&
    
    
    ((!updatedTimeIsSet() && !rhs.updatedTimeIsSet()) || (updatedTimeIsSet() && rhs.updatedTimeIsSet() && getUpdatedTime() == rhs.getUpdatedTime())) &&
    
    
    ((!exceptionsIsSet() && !rhs.exceptionsIsSet()) || (exceptionsIsSet() && rhs.exceptionsIsSet() && getExceptions() == rhs.getExceptions()))
    
    ;
}

bool CustomerList::operator!=(const CustomerList& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CustomerList& o)
{
    j = nlohmann::json::object();
    if(o.adAccountIdIsSet())
        j["ad_account_id"] = o.m_Ad_account_id;
    if(o.createdTimeIsSet())
        j["created_time"] = o.m_Created_time;
    if(o.idIsSet())
        j["id"] = o.m_Id;
    if(o.nameIsSet())
        j["name"] = o.m_Name;
    if(o.numBatchesIsSet())
        j["num_batches"] = o.m_Num_batches;
    if(o.numRemovedUserRecordsIsSet())
        j["num_removed_user_records"] = o.m_Num_removed_user_records;
    if(o.numUploadedUserRecordsIsSet())
        j["num_uploaded_user_records"] = o.m_Num_uploaded_user_records;
    if(o.statusIsSet())
        j["status"] = o.m_Status;
    if(o.typeIsSet())
        j["type"] = o.m_Type;
    if(o.updatedTimeIsSet())
        j["updated_time"] = o.m_Updated_time;
    if(o.exceptionsIsSet())
        j["exceptions"] = o.m_Exceptions;
    
}

void from_json(const nlohmann::json& j, CustomerList& o)
{
    if(j.find("ad_account_id") != j.end())
    {
        j.at("ad_account_id").get_to(o.m_Ad_account_id);
        o.m_Ad_account_idIsSet = true;
    } 
    if(j.find("created_time") != j.end())
    {
        j.at("created_time").get_to(o.m_Created_time);
        o.m_Created_timeIsSet = true;
    } 
    if(j.find("id") != j.end())
    {
        j.at("id").get_to(o.m_Id);
        o.m_IdIsSet = true;
    } 
    if(j.find("name") != j.end())
    {
        j.at("name").get_to(o.m_Name);
        o.m_NameIsSet = true;
    } 
    if(j.find("num_batches") != j.end())
    {
        j.at("num_batches").get_to(o.m_Num_batches);
        o.m_Num_batchesIsSet = true;
    } 
    if(j.find("num_removed_user_records") != j.end())
    {
        j.at("num_removed_user_records").get_to(o.m_Num_removed_user_records);
        o.m_Num_removed_user_recordsIsSet = true;
    } 
    if(j.find("num_uploaded_user_records") != j.end())
    {
        j.at("num_uploaded_user_records").get_to(o.m_Num_uploaded_user_records);
        o.m_Num_uploaded_user_recordsIsSet = true;
    } 
    if(j.find("status") != j.end())
    {
        j.at("status").get_to(o.m_Status);
        o.m_StatusIsSet = true;
    } 
    if(j.find("type") != j.end())
    {
        j.at("type").get_to(o.m_Type);
        o.m_TypeIsSet = true;
    } 
    if(j.find("updated_time") != j.end())
    {
        j.at("updated_time").get_to(o.m_Updated_time);
        o.m_Updated_timeIsSet = true;
    } 
    if(j.find("exceptions") != j.end())
    {
        j.at("exceptions").get_to(o.m_Exceptions);
        o.m_ExceptionsIsSet = true;
    } 
    
}

std::string CustomerList::getAdAccountId() const
{
    return m_Ad_account_id;
}
void CustomerList::setAdAccountId(std::string const& value)
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
void CustomerList::setCreatedTime(double const value)
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
std::string CustomerList::getId() const
{
    return m_Id;
}
void CustomerList::setId(std::string const& value)
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
std::string CustomerList::getName() const
{
    return m_Name;
}
void CustomerList::setName(std::string const& value)
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
void CustomerList::setNumBatches(double const value)
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
void CustomerList::setNumRemovedUserRecords(double const value)
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
void CustomerList::setNumUploadedUserRecords(double const value)
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
std::string CustomerList::getStatus() const
{
    return m_Status;
}
void CustomerList::setStatus(std::string const& value)
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
std::string CustomerList::getType() const
{
    return m_Type;
}
void CustomerList::setType(std::string const& value)
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
void CustomerList::setUpdatedTime(double const value)
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
org::openapitools::server::model::Object CustomerList::getExceptions() const
{
    return m_Exceptions;
}
void CustomerList::setExceptions(org::openapitools::server::model::Object const& value)
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


} // namespace org::openapitools::server::model

