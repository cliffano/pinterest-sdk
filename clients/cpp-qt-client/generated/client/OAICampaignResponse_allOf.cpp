/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICampaignResponse_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICampaignResponse_allOf::OAICampaignResponse_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICampaignResponse_allOf::OAICampaignResponse_allOf() {
    this->initializeModel();
}

OAICampaignResponse_allOf::~OAICampaignResponse_allOf() {}

void OAICampaignResponse_allOf::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;
}

void OAICampaignResponse_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICampaignResponse_allOf::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;
}

QString OAICampaignResponse_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICampaignResponse_allOf::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    return obj;
}

QString OAICampaignResponse_allOf::getId() const {
    return id;
}
void OAICampaignResponse_allOf::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAICampaignResponse_allOf::is_id_Set() const{
    return m_id_isSet;
}

bool OAICampaignResponse_allOf::is_id_Valid() const{
    return m_id_isValid;
}

bool OAICampaignResponse_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICampaignResponse_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && true;
}

} // namespace OpenAPI