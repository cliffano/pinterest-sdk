/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * AdsAnalyticsCreateAsyncResponse.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AdsAnalyticsCreateAsyncResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AdsAnalyticsCreateAsyncResponse_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  AdsAnalyticsCreateAsyncResponse
    : public ModelBase
{
public:
    AdsAnalyticsCreateAsyncResponse();
    virtual ~AdsAnalyticsCreateAsyncResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AdsAnalyticsCreateAsyncResponse members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getReportStatus() const;
    bool reportStatusIsSet() const;
    void unsetReport_status();

    void setReportStatus(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getToken() const;
    bool tokenIsSet() const;
    void unsetToken();

    void setToken(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();

    void setMessage(const utility::string_t& value);


protected:
    utility::string_t m_Report_status;
    bool m_Report_statusIsSet;
    utility::string_t m_Token;
    bool m_TokenIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AdsAnalyticsCreateAsyncResponse_H_ */