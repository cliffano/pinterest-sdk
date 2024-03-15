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
 * BulkReportingJobStatus.h
 *
 * Possible status for a bulk reporting job
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BulkReportingJobStatus_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BulkReportingJobStatus_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  BulkReportingJobStatus
    : public ModelBase
{
public:
    BulkReportingJobStatus();
    virtual ~BulkReportingJobStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eBulkReportingJobStatus
    {
        BulkReportingJobStatus_DOES_NOT_EXIST,
        BulkReportingJobStatus_FINISHED,
        BulkReportingJobStatus_IN_PROGRESS,
        BulkReportingJobStatus_EXPIRED,
        BulkReportingJobStatus_FAILED,
        BulkReportingJobStatus_CANCELLED,
    };

    eBulkReportingJobStatus getValue() const;
    void setValue(eBulkReportingJobStatus const value);

    protected:
        eBulkReportingJobStatus m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BulkReportingJobStatus_H_ */
