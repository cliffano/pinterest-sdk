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

/*
 * CustomerListUpdateRequest.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CustomerListUpdateRequest_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CustomerListUpdateRequest_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/Exception.h"
#include "CppRestOpenAPIClient/model/UserListOperationType.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CustomerListUpdateRequest
    : public ModelBase
{
public:
    CustomerListUpdateRequest();
    virtual ~CustomerListUpdateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CustomerListUpdateRequest members

    /// <summary>
    /// Records list. Can be any combination of emails, MAIDs, or IDFAs. Emails must be lowercase and can be plain text or hashed using SHA1, SHA256, or MD5. MAIDs and IDFAs must be hashed with SHA1, SHA256, or MD5.
    /// </summary>
    utility::string_t getRecords() const;
    bool recordsIsSet() const;
    void unsetRecords();

    void setRecords(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UserListOperationType> getOperationType() const;
    bool operationTypeIsSet() const;
    void unsetOperation_type();

    void setOperationType(const std::shared_ptr<UserListOperationType>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Exception> getExceptions() const;
    bool exceptionsIsSet() const;
    void unsetExceptions();

    void setExceptions(const std::shared_ptr<Exception>& value);


protected:
    utility::string_t m_Records;
    bool m_RecordsIsSet;
    std::shared_ptr<UserListOperationType> m_Operation_type;
    bool m_Operation_typeIsSet;
    std::shared_ptr<Exception> m_Exceptions;
    bool m_ExceptionsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CustomerListUpdateRequest_H_ */
