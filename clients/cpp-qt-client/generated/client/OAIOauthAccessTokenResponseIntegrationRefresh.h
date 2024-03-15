/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIOauthAccessTokenResponseIntegrationRefresh.h
 *
 * A successful OAuth access token response for the refresh token flow, with an added refresh token.
 */

#ifndef OAIOauthAccessTokenResponseIntegrationRefresh_H
#define OAIOauthAccessTokenResponseIntegrationRefresh_H

#include <QJsonObject>

#include "OAIOauthAccessTokenResponse.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOauthAccessTokenResponseIntegrationRefresh : public OAIObject {
public:
    OAIOauthAccessTokenResponseIntegrationRefresh();
    OAIOauthAccessTokenResponseIntegrationRefresh(QString json);
    ~OAIOauthAccessTokenResponseIntegrationRefresh() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getResponseType() const;
    void setResponseType(const QString &response_type);
    bool is_response_type_Set() const;
    bool is_response_type_Valid() const;

    QString getAccessToken() const;
    void setAccessToken(const QString &access_token);
    bool is_access_token_Set() const;
    bool is_access_token_Valid() const;

    QString getTokenType() const;
    void setTokenType(const QString &token_type);
    bool is_token_type_Set() const;
    bool is_token_type_Valid() const;

    qint32 getExpiresIn() const;
    void setExpiresIn(const qint32 &expires_in);
    bool is_expires_in_Set() const;
    bool is_expires_in_Valid() const;

    QString getScope() const;
    void setScope(const QString &scope);
    bool is_scope_Set() const;
    bool is_scope_Valid() const;

    QString getRefreshToken() const;
    void setRefreshToken(const QString &refresh_token);
    bool is_refresh_token_Set() const;
    bool is_refresh_token_Valid() const;

    qint32 getRefreshTokenExpiresIn() const;
    void setRefreshTokenExpiresIn(const qint32 &refresh_token_expires_in);
    bool is_refresh_token_expires_in_Set() const;
    bool is_refresh_token_expires_in_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_response_type;
    bool m_response_type_isSet;
    bool m_response_type_isValid;

    QString m_access_token;
    bool m_access_token_isSet;
    bool m_access_token_isValid;

    QString m_token_type;
    bool m_token_type_isSet;
    bool m_token_type_isValid;

    qint32 m_expires_in;
    bool m_expires_in_isSet;
    bool m_expires_in_isValid;

    QString m_scope;
    bool m_scope_isSet;
    bool m_scope_isValid;

    QString m_refresh_token;
    bool m_refresh_token_isSet;
    bool m_refresh_token_isValid;

    qint32 m_refresh_token_expires_in;
    bool m_refresh_token_expires_in_isSet;
    bool m_refresh_token_expires_in_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOauthAccessTokenResponseIntegrationRefresh)

#endif // OAIOauthAccessTokenResponseIntegrationRefresh_H
