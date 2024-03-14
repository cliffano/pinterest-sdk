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

/*
 * BulkUpsertStatusResponse.h
 *
 * ID of the bulk request.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BulkUpsertStatusResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BulkUpsertStatusResponse_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/BulkUpsertStatus.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// ID of the bulk request.
/// </summary>
class  BulkUpsertStatusResponse
    : public ModelBase
{
public:
    BulkUpsertStatusResponse();
    virtual ~BulkUpsertStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BulkUpsertStatusResponse members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BulkUpsertStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<BulkUpsertStatus>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getResultUrl() const;
    bool resultUrlIsSet() const;
    void unsetResult_url();

    void setResultUrl(const utility::string_t& value);


protected:
    std::shared_ptr<BulkUpsertStatus> m_Status;
    bool m_StatusIsSet;
    utility::string_t m_Result_url;
    bool m_Result_urlIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BulkUpsertStatusResponse_H_ */
