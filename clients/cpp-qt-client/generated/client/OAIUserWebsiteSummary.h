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
 * OAIUserWebsiteSummary.h
 *
 * 
 */

#ifndef OAIUserWebsiteSummary_H
#define OAIUserWebsiteSummary_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUserWebsiteSummary : public OAIObject {
public:
    OAIUserWebsiteSummary();
    OAIUserWebsiteSummary(QString json);
    ~OAIUserWebsiteSummary() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getWebsite() const;
    void setWebsite(const QString &website);
    bool is_website_Set() const;
    bool is_website_Valid() const;

    QString getStatus() const;
    void setStatus(const QString &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    QString getVerifiedAt() const;
    void setVerifiedAt(const QString &verified_at);
    bool is_verified_at_Set() const;
    bool is_verified_at_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_website;
    bool m_website_isSet;
    bool m_website_isValid;

    QString m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    QString m_verified_at;
    bool m_verified_at_isSet;
    bool m_verified_at_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUserWebsiteSummary)

#endif // OAIUserWebsiteSummary_H
