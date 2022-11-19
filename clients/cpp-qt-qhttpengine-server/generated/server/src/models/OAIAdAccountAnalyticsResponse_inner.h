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
 * OAIAdAccountAnalyticsResponse_inner.h
 *
 * 
 */

#ifndef OAIAdAccountAnalyticsResponse_inner_H
#define OAIAdAccountAnalyticsResponse_inner_H

#include <QJsonObject>

#include "OAIAnyType.h"
#include <QDate>
#include <QMap>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdAccountAnalyticsResponse_inner : public OAIObject {
public:
    OAIAdAccountAnalyticsResponse_inner();
    OAIAdAccountAnalyticsResponse_inner(QString json);
    ~OAIAdAccountAnalyticsResponse_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAdAccountId() const;
    void setAdAccountId(const QString &ad_account_id);
    bool is_ad_account_id_Set() const;
    bool is_ad_account_id_Valid() const;

    QDate getDate() const;
    void setDate(const QDate &date);
    bool is_date_Set() const;
    bool is_date_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString ad_account_id;
    bool m_ad_account_id_isSet;
    bool m_ad_account_id_isValid;

    QDate date;
    bool m_date_isSet;
    bool m_date_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdAccountAnalyticsResponse_inner)

#endif // OAIAdAccountAnalyticsResponse_inner_H
