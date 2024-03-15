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
 * AdsCreditRedeemRequest.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AdsCreditRedeemRequest_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AdsCreditRedeemRequest_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  AdsCreditRedeemRequest
    : public ModelBase
{
public:
    AdsCreditRedeemRequest();
    virtual ~AdsCreditRedeemRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AdsCreditRedeemRequest members

    /// <summary>
    /// Takes in a SHA256 hash of the offerCode.
    /// </summary>
    utility::string_t getOfferCodeHash() const;
    bool offerCodeHashIsSet() const;
    void unsetOfferCodeHash();

    void setOfferCodeHash(const utility::string_t& value);

    /// <summary>
    /// If true, only validate if we can redeem offer code. Otherwise it will actually apply the offer code to the account
    /// </summary>
    bool isValidateOnly() const;
    bool validateOnlyIsSet() const;
    void unsetValidateOnly();

    void setValidateOnly(bool value);


protected:
    utility::string_t m_OfferCodeHash;
    bool m_OfferCodeHashIsSet;
    bool m_ValidateOnly;
    bool m_ValidateOnlyIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AdsCreditRedeemRequest_H_ */
