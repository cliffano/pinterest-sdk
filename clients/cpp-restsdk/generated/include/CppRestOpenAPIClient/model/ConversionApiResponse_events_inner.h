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
 * ConversionApiResponse_events_inner.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ConversionApiResponse_events_inner_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ConversionApiResponse_events_inner_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ConversionApiResponse_events_inner
    : public ModelBase
{
public:
    ConversionApiResponse_events_inner();
    virtual ~ConversionApiResponse_events_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ConversionApiResponse_events_inner members

    /// <summary>
    /// Whether the event was processed successfully.
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);

    /// <summary>
    /// Error message containing more information about why the event failed to be processed.
    /// </summary>
    utility::string_t getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unsetError_message();

    void setErrorMessage(const utility::string_t& value);

    /// <summary>
    /// Warning messages about any fields in the event which are not standard. These are not critical to event processing.
    /// </summary>
    utility::string_t getWarningMessage() const;
    bool warningMessageIsSet() const;
    void unsetWarning_message();

    void setWarningMessage(const utility::string_t& value);


protected:
    utility::string_t m_Status;
    bool m_StatusIsSet;
    utility::string_t m_Error_message;
    bool m_Error_messageIsSet;
    utility::string_t m_Warning_message;
    bool m_Warning_messageIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ConversionApiResponse_events_inner_H_ */
