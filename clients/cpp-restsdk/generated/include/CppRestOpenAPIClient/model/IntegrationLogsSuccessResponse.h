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
 * IntegrationLogsSuccessResponse.h
 *
 * Response when logs are successfully processed.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_IntegrationLogsSuccessResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_IntegrationLogsSuccessResponse_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Response when logs are successfully processed.
/// </summary>
class  IntegrationLogsSuccessResponse
    : public ModelBase
{
public:
    IntegrationLogsSuccessResponse();
    virtual ~IntegrationLogsSuccessResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IntegrationLogsSuccessResponse members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();

    void setMessage(const utility::string_t& value);


protected:
    utility::string_t m_Message;
    bool m_MessageIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_IntegrationLogsSuccessResponse_H_ */
