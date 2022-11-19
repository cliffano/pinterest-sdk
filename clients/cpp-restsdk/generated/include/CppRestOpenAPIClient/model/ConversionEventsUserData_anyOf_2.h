/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ConversionEventsUserData_anyOf_2.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ConversionEventsUserData_anyOf_2_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ConversionEventsUserData_anyOf_2_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ConversionEventsUserData_anyOf_2
    : public ModelBase
{
public:
    ConversionEventsUserData_anyOf_2();
    virtual ~ConversionEventsUserData_anyOf_2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ConversionEventsUserData_anyOf_2 members

    /// <summary>
    /// The user&#39;s IP address, which can be either in IPv4 or IPv6 format. Used for matching.
    /// </summary>
    utility::string_t getClientIpAddress() const;
    bool clientIpAddressIsSet() const;
    void unsetClient_ip_address();

    void setClientIpAddress(const utility::string_t& value);

    /// <summary>
    /// The user agent string of the user&#39;s web browser.
    /// </summary>
    utility::string_t getClientUserAgent() const;
    bool clientUserAgentIsSet() const;
    void unsetClient_user_agent();

    void setClientUserAgent(const utility::string_t& value);


protected:
    utility::string_t m_Client_ip_address;
    bool m_Client_ip_addressIsSet;
    utility::string_t m_Client_user_agent;
    bool m_Client_user_agentIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ConversionEventsUserData_anyOf_2_H_ */
