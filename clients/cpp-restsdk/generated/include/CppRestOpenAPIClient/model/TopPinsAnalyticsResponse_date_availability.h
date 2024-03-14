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
 * TopPinsAnalyticsResponse_date_availability.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_TopPinsAnalyticsResponse_date_availability_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_TopPinsAnalyticsResponse_date_availability_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  TopPinsAnalyticsResponse_date_availability
    : public ModelBase
{
public:
    TopPinsAnalyticsResponse_date_availability();
    virtual ~TopPinsAnalyticsResponse_date_availability();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TopPinsAnalyticsResponse_date_availability members

    /// <summary>
    /// 
    /// </summary>
    double getLatestAvailableTimestamp() const;
    bool latestAvailableTimestampIsSet() const;
    void unsetLatest_available_timestamp();

    void setLatestAvailableTimestamp(double value);

    /// <summary>
    /// 
    /// </summary>
    bool isIsRealtime() const;
    bool isRealtimeIsSet() const;
    void unsetIs_realtime();

    void setIsRealtime(bool value);


protected:
    double m_Latest_available_timestamp;
    bool m_Latest_available_timestampIsSet;
    bool m_Is_realtime;
    bool m_Is_realtimeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_TopPinsAnalyticsResponse_date_availability_H_ */
