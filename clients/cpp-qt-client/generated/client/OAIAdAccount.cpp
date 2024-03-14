/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIAdAccount.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAdAccount::OAIAdAccount(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAdAccount::OAIAdAccount() {
    this->initializeModel();
}

OAIAdAccount::~OAIAdAccount() {}

void OAIAdAccount::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_owner_isSet = false;
    m_owner_isValid = false;

    m_country_isSet = false;
    m_country_isValid = false;

    m_currency_isSet = false;
    m_currency_isValid = false;

    m_permissions_isSet = false;
    m_permissions_isValid = false;
}

void OAIAdAccount::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAdAccount::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_owner_isValid = ::OpenAPI::fromJsonValue(m_owner, json[QString("owner")]);
    m_owner_isSet = !json[QString("owner")].isNull() && m_owner_isValid;

    m_country_isValid = ::OpenAPI::fromJsonValue(m_country, json[QString("country")]);
    m_country_isSet = !json[QString("country")].isNull() && m_country_isValid;

    m_currency_isValid = ::OpenAPI::fromJsonValue(m_currency, json[QString("currency")]);
    m_currency_isSet = !json[QString("currency")].isNull() && m_currency_isValid;

    m_permissions_isValid = ::OpenAPI::fromJsonValue(m_permissions, json[QString("permissions")]);
    m_permissions_isSet = !json[QString("permissions")].isNull() && m_permissions_isValid;
}

QString OAIAdAccount::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAdAccount::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_owner.isSet()) {
        obj.insert(QString("owner"), ::OpenAPI::toJsonValue(m_owner));
    }
    if (m_country.isSet()) {
        obj.insert(QString("country"), ::OpenAPI::toJsonValue(m_country));
    }
    if (m_currency.isSet()) {
        obj.insert(QString("currency"), ::OpenAPI::toJsonValue(m_currency));
    }
    if (m_permissions.size() > 0) {
        obj.insert(QString("permissions"), ::OpenAPI::toJsonValue(m_permissions));
    }
    return obj;
}

QString OAIAdAccount::getId() const {
    return m_id;
}
void OAIAdAccount::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIAdAccount::is_id_Set() const{
    return m_id_isSet;
}

bool OAIAdAccount::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIAdAccount::getName() const {
    return m_name;
}
void OAIAdAccount::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIAdAccount::is_name_Set() const{
    return m_name_isSet;
}

bool OAIAdAccount::is_name_Valid() const{
    return m_name_isValid;
}

OAIAd_account_owner OAIAdAccount::getOwner() const {
    return m_owner;
}
void OAIAdAccount::setOwner(const OAIAd_account_owner &owner) {
    m_owner = owner;
    m_owner_isSet = true;
}

bool OAIAdAccount::is_owner_Set() const{
    return m_owner_isSet;
}

bool OAIAdAccount::is_owner_Valid() const{
    return m_owner_isValid;
}

OAICountry OAIAdAccount::getCountry() const {
    return m_country;
}
void OAIAdAccount::setCountry(const OAICountry &country) {
    m_country = country;
    m_country_isSet = true;
}

bool OAIAdAccount::is_country_Set() const{
    return m_country_isSet;
}

bool OAIAdAccount::is_country_Valid() const{
    return m_country_isValid;
}

OAICurrency OAIAdAccount::getCurrency() const {
    return m_currency;
}
void OAIAdAccount::setCurrency(const OAICurrency &currency) {
    m_currency = currency;
    m_currency_isSet = true;
}

bool OAIAdAccount::is_currency_Set() const{
    return m_currency_isSet;
}

bool OAIAdAccount::is_currency_Valid() const{
    return m_currency_isValid;
}

QList<QString> OAIAdAccount::getPermissions() const {
    return m_permissions;
}
void OAIAdAccount::setPermissions(const QList<QString> &permissions) {
    m_permissions = permissions;
    m_permissions_isSet = true;
}

bool OAIAdAccount::is_permissions_Set() const{
    return m_permissions_isSet;
}

bool OAIAdAccount::is_permissions_Valid() const{
    return m_permissions_isValid;
}

bool OAIAdAccount::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_owner.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_country.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_currency.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_permissions.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAdAccount::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI