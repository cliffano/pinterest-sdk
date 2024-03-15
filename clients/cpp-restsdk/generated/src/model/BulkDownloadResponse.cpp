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



#include "CppRestOpenAPIClient/model/BulkDownloadResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



BulkDownloadResponse::BulkDownloadResponse()
{
    m_Request_id = utility::conversions::to_string_t("");
    m_Request_idIsSet = false;
}

BulkDownloadResponse::~BulkDownloadResponse()
{
}

void BulkDownloadResponse::validate()
{
    // TODO: implement validation
}

web::json::value BulkDownloadResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Request_idIsSet)
    {
        val[utility::conversions::to_string_t(U("request_id"))] = ModelBase::toJson(m_Request_id);
    }

    return val;
}

bool BulkDownloadResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("request_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("request_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRequestId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRequestId);
            setRequestId(refVal_setRequestId);
        }
    }
    return ok;
}

void BulkDownloadResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Request_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("request_id")), m_Request_id));
    }
}

bool BulkDownloadResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("request_id"))))
    {
        utility::string_t refVal_setRequestId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("request_id"))), refVal_setRequestId );
        setRequestId(refVal_setRequestId);
    }
    return ok;
}

utility::string_t BulkDownloadResponse::getRequestId() const
{
    return m_Request_id;
}

void BulkDownloadResponse::setRequestId(const utility::string_t& value)
{
    m_Request_id = value;
    m_Request_idIsSet = true;
}

bool BulkDownloadResponse::requestIdIsSet() const
{
    return m_Request_idIsSet;
}

void BulkDownloadResponse::unsetRequest_id()
{
    m_Request_idIsSet = false;
}
}
}
}
}


