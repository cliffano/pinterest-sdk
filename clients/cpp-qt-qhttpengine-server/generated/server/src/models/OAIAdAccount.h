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
 * OAIAdAccount.h
 *
 * 
 */

#ifndef OAIAdAccount_H
#define OAIAdAccount_H

#include <QJsonObject>

#include "OAIAd_account_owner.h"
#include "OAICountry.h"
#include "OAICurrency.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdAccount : public OAIObject {
public:
    OAIAdAccount();
    OAIAdAccount(QString json);
    ~OAIAdAccount() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    OAIAd_account_owner getOwner() const;
    void setOwner(const OAIAd_account_owner &owner);
    bool is_owner_Set() const;
    bool is_owner_Valid() const;

    OAICountry getCountry() const;
    void setCountry(const OAICountry &country);
    bool is_country_Set() const;
    bool is_country_Valid() const;

    OAICurrency getCurrency() const;
    void setCurrency(const OAICurrency &currency);
    bool is_currency_Set() const;
    bool is_currency_Valid() const;

    QList<QString> getPermissions() const;
    void setPermissions(const QList<QString> &permissions);
    bool is_permissions_Set() const;
    bool is_permissions_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    OAIAd_account_owner owner;
    bool m_owner_isSet;
    bool m_owner_isValid;

    OAICountry country;
    bool m_country_isSet;
    bool m_country_isValid;

    OAICurrency currency;
    bool m_currency_isSet;
    bool m_currency_isValid;

    QList<QString> permissions;
    bool m_permissions_isSet;
    bool m_permissions_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdAccount)

#endif // OAIAdAccount_H
