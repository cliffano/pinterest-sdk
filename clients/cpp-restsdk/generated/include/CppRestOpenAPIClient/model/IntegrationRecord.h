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
 * IntegrationRecord.h
 *
 * Integration record
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_IntegrationRecord_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_IntegrationRecord_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Integration record
/// </summary>
class  IntegrationRecord
    : public ModelBase
{
public:
    IntegrationRecord();
    virtual ~IntegrationRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IntegrationRecord members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getExternalBusinessId() const;
    bool externalBusinessIdIsSet() const;
    void unsetExternal_business_id();

    void setExternalBusinessId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConnectedMerchantId() const;
    bool connectedMerchantIdIsSet() const;
    void unsetConnected_merchant_id();

    void setConnectedMerchantId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConnectedUserId() const;
    bool connectedUserIdIsSet() const;
    void unsetConnected_user_id();

    void setConnectedUserId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConnectedAdvertiserId() const;
    bool connectedAdvertiserIdIsSet() const;
    void unsetConnected_advertiser_id();

    void setConnectedAdvertiserId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConnectedLbaId() const;
    bool connectedLbaIdIsSet() const;
    void unsetConnected_lba_id();

    void setConnectedLbaId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConnectedTagId() const;
    bool connectedTagIdIsSet() const;
    void unsetConnected_tag_id();

    void setConnectedTagId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPartnerAccessToken() const;
    bool partnerAccessTokenIsSet() const;
    void unsetPartner_access_token();

    void setPartnerAccessToken(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPartnerRefreshToken() const;
    bool partnerRefreshTokenIsSet() const;
    void unsetPartner_refresh_token();

    void setPartnerRefreshToken(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPartnerPrimaryEmail() const;
    bool partnerPrimaryEmailIsSet() const;
    void unsetPartner_primary_email();

    void setPartnerPrimaryEmail(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPartnerAccessTokenExpiry() const;
    bool partnerAccessTokenExpiryIsSet() const;
    void unsetPartner_access_token_expiry();

    void setPartnerAccessTokenExpiry(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPartnerRefreshTokenExpiry() const;
    bool partnerRefreshTokenExpiryIsSet() const;
    void unsetPartner_refresh_token_expiry();

    void setPartnerRefreshTokenExpiry(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getScopes() const;
    bool scopesIsSet() const;
    void unsetScopes();

    void setScopes(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPartnerMetadata() const;
    bool partnerMetadataIsSet() const;
    void unsetPartner_metadata();

    void setPartnerMetadata(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAdditionalId1() const;
    bool additionalId1IsSet() const;
    void unsetAdditional_id_1();

    void setAdditionalId1(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetCreated_time();

    void setCreatedTime(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetUpdated_time();

    void setUpdatedTime(int32_t value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_External_business_id;
    bool m_External_business_idIsSet;
    utility::string_t m_Connected_merchant_id;
    bool m_Connected_merchant_idIsSet;
    utility::string_t m_Connected_user_id;
    bool m_Connected_user_idIsSet;
    utility::string_t m_Connected_advertiser_id;
    bool m_Connected_advertiser_idIsSet;
    utility::string_t m_Connected_lba_id;
    bool m_Connected_lba_idIsSet;
    utility::string_t m_Connected_tag_id;
    bool m_Connected_tag_idIsSet;
    utility::string_t m_Partner_access_token;
    bool m_Partner_access_tokenIsSet;
    utility::string_t m_Partner_refresh_token;
    bool m_Partner_refresh_tokenIsSet;
    utility::string_t m_Partner_primary_email;
    bool m_Partner_primary_emailIsSet;
    int32_t m_Partner_access_token_expiry;
    bool m_Partner_access_token_expiryIsSet;
    int32_t m_Partner_refresh_token_expiry;
    bool m_Partner_refresh_token_expiryIsSet;
    utility::string_t m_Scopes;
    bool m_ScopesIsSet;
    utility::string_t m_Partner_metadata;
    bool m_Partner_metadataIsSet;
    utility::string_t m_Additional_id_1;
    bool m_Additional_id_1IsSet;
    int32_t m_Created_time;
    bool m_Created_timeIsSet;
    int32_t m_Updated_time;
    bool m_Updated_timeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_IntegrationRecord_H_ */
