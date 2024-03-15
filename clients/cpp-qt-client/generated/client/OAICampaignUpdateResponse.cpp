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

#include "OAICampaignUpdateResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICampaignUpdateResponse::OAICampaignUpdateResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICampaignUpdateResponse::OAICampaignUpdateResponse() {
    this->initializeModel();
}

OAICampaignUpdateResponse::~OAICampaignUpdateResponse() {}

void OAICampaignUpdateResponse::initializeModel() {

    m_items_isSet = false;
    m_items_isValid = false;
}

void OAICampaignUpdateResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICampaignUpdateResponse::fromJsonObject(QJsonObject json) {

    m_items_isValid = ::OpenAPI::fromJsonValue(m_items, json[QString("items")]);
    m_items_isSet = !json[QString("items")].isNull() && m_items_isValid;
}

QString OAICampaignUpdateResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICampaignUpdateResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_items.size() > 0) {
        obj.insert(QString("items"), ::OpenAPI::toJsonValue(m_items));
    }
    return obj;
}

QList<OAICampaignCreateResponseItem> OAICampaignUpdateResponse::getItems() const {
    return m_items;
}
void OAICampaignUpdateResponse::setItems(const QList<OAICampaignCreateResponseItem> &items) {
    m_items = items;
    m_items_isSet = true;
}

bool OAICampaignUpdateResponse::is_items_Set() const{
    return m_items_isSet;
}

bool OAICampaignUpdateResponse::is_items_Valid() const{
    return m_items_isValid;
}

bool OAICampaignUpdateResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_items.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICampaignUpdateResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
