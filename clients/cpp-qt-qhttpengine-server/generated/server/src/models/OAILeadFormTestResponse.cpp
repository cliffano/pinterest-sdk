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

#include "OAILeadFormTestResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAILeadFormTestResponse::OAILeadFormTestResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAILeadFormTestResponse::OAILeadFormTestResponse() {
    this->initializeModel();
}

OAILeadFormTestResponse::~OAILeadFormTestResponse() {}

void OAILeadFormTestResponse::initializeModel() {

    m_subscription_id_isSet = false;
    m_subscription_id_isValid = false;
}

void OAILeadFormTestResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAILeadFormTestResponse::fromJsonObject(QJsonObject json) {

    m_subscription_id_isValid = ::OpenAPI::fromJsonValue(subscription_id, json[QString("subscription_id")]);
    m_subscription_id_isSet = !json[QString("subscription_id")].isNull() && m_subscription_id_isValid;
}

QString OAILeadFormTestResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAILeadFormTestResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_subscription_id_isSet) {
        obj.insert(QString("subscription_id"), ::OpenAPI::toJsonValue(subscription_id));
    }
    return obj;
}

QString OAILeadFormTestResponse::getSubscriptionId() const {
    return subscription_id;
}
void OAILeadFormTestResponse::setSubscriptionId(const QString &subscription_id) {
    this->subscription_id = subscription_id;
    this->m_subscription_id_isSet = true;
}

bool OAILeadFormTestResponse::is_subscription_id_Set() const{
    return m_subscription_id_isSet;
}

bool OAILeadFormTestResponse::is_subscription_id_Valid() const{
    return m_subscription_id_isValid;
}

bool OAILeadFormTestResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_subscription_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAILeadFormTestResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
