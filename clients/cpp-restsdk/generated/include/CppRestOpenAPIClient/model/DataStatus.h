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
 * DataStatus.h
 *
 * Metrics availablity, e.g., \&quot;READY\&quot;.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_DataStatus_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_DataStatus_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  DataStatus
    : public ModelBase
{
public:
    DataStatus();
    virtual ~DataStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eDataStatus
    {
        DataStatus_PROCESSING,
        DataStatus_READY,
        DataStatus_ESTIMATE,
        DataStatus_BEFORE_BUSINESS_CREATED,
        DataStatus_BEFORE_DATA_RETENTION_PERIOD,
        DataStatus_BEFORE_PIN_DATA_RETENTION_PERIOD,
        DataStatus_BEFORE_METRIC_START_DATE,
        DataStatus_BEFORE_CORE_METRIC_START_DATE,
        DataStatus_BEFORE_PIN_FORMAT_METRIC_START_DATE,
        DataStatus_BEFORE_AUDIENCE_METRIC_START_DATE,
        DataStatus_BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE,
        DataStatus_BEFORE_VIDEO_METRIC_START_DATE,
        DataStatus_BEFORE_CONVERSION_METRIC_START_DATE,
        DataStatus_PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD,
        DataStatus_IN_BAD_TAG_DATE,
        DataStatus_BEFORE_PUBLISHED_METRIC_START_DATE,
        DataStatus_BEFORE_ASSIST_METRIC_START_DATE,
        DataStatus_BEFORE_PIN_CREATED,
        DataStatus_BEFORE_ACCOUNT_CLAIMED,
        DataStatus_BEFORE_DEMOGRAPHIC_FILTERS_START_DATE,
        DataStatus_AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD,
        DataStatus_AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD,
        DataStatus_BEFORE_PRODUCT_GROUP_FILTER_START_DATE,
    };

    eDataStatus getValue() const;
    void setValue(eDataStatus const value);

    protected:
        eDataStatus m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_DataStatus_H_ */
