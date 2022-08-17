/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIOauthAccessTokenResponseCode_allOf.h
 *
 * 
 */

#ifndef OAIOauthAccessTokenResponseCode_allOf_H
#define OAIOauthAccessTokenResponseCode_allOf_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOauthAccessTokenResponseCode_allOf : public OAIObject {
public:
    OAIOauthAccessTokenResponseCode_allOf();
    OAIOauthAccessTokenResponseCode_allOf(QString json);
    ~OAIOauthAccessTokenResponseCode_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

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

    QString refresh_token;
    bool m_refresh_token_isSet;
    bool m_refresh_token_isValid;

    qint32 refresh_token_expires_in;
    bool m_refresh_token_expires_in_isSet;
    bool m_refresh_token_expires_in_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOauthAccessTokenResponseCode_allOf)

#endif // OAIOauthAccessTokenResponseCode_allOf_H
