/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIOauthAccessTokenRequestRefresh_allOf.h
 *
 * 
 */

#ifndef OAIOauthAccessTokenRequestRefresh_allOf_H
#define OAIOauthAccessTokenRequestRefresh_allOf_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOauthAccessTokenRequestRefresh_allOf : public OAIObject {
public:
    OAIOauthAccessTokenRequestRefresh_allOf();
    OAIOauthAccessTokenRequestRefresh_allOf(QString json);
    ~OAIOauthAccessTokenRequestRefresh_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getRefreshToken() const;
    void setRefreshToken(const QString &refresh_token);
    bool is_refresh_token_Set() const;
    bool is_refresh_token_Valid() const;

    QString getScope() const;
    void setScope(const QString &scope);
    bool is_scope_Set() const;
    bool is_scope_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString refresh_token;
    bool m_refresh_token_isSet;
    bool m_refresh_token_isValid;

    QString scope;
    bool m_scope_isSet;
    bool m_scope_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOauthAccessTokenRequestRefresh_allOf)

#endif // OAIOauthAccessTokenRequestRefresh_allOf_H
