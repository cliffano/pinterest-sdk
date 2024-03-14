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

#include "OAIProductGroupPromotionUpdateItem.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProductGroupPromotionUpdateItem::OAIProductGroupPromotionUpdateItem(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProductGroupPromotionUpdateItem::OAIProductGroupPromotionUpdateItem() {
    this->initializeModel();
}

OAIProductGroupPromotionUpdateItem::~OAIProductGroupPromotionUpdateItem() {}

void OAIProductGroupPromotionUpdateItem::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;
}

void OAIProductGroupPromotionUpdateItem::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProductGroupPromotionUpdateItem::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;
}

QString OAIProductGroupPromotionUpdateItem::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProductGroupPromotionUpdateItem::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    return obj;
}

QString OAIProductGroupPromotionUpdateItem::getId() const {
    return m_id;
}
void OAIProductGroupPromotionUpdateItem::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIProductGroupPromotionUpdateItem::is_id_Set() const{
    return m_id_isSet;
}

bool OAIProductGroupPromotionUpdateItem::is_id_Valid() const{
    return m_id_isValid;
}

bool OAIProductGroupPromotionUpdateItem::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProductGroupPromotionUpdateItem::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
