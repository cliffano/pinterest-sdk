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

#include "OAISSIOEditInsertionOrderResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISSIOEditInsertionOrderResponse::OAISSIOEditInsertionOrderResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISSIOEditInsertionOrderResponse::OAISSIOEditInsertionOrderResponse() {
    this->initializeModel();
}

OAISSIOEditInsertionOrderResponse::~OAISSIOEditInsertionOrderResponse() {}

void OAISSIOEditInsertionOrderResponse::initializeModel() {

    m_pin_order_id_isSet = false;
    m_pin_order_id_isValid = false;
}

void OAISSIOEditInsertionOrderResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISSIOEditInsertionOrderResponse::fromJsonObject(QJsonObject json) {

    m_pin_order_id_isValid = ::OpenAPI::fromJsonValue(pin_order_id, json[QString("pin_order_id")]);
    m_pin_order_id_isSet = !json[QString("pin_order_id")].isNull() && m_pin_order_id_isValid;
}

QString OAISSIOEditInsertionOrderResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISSIOEditInsertionOrderResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_pin_order_id_isSet) {
        obj.insert(QString("pin_order_id"), ::OpenAPI::toJsonValue(pin_order_id));
    }
    return obj;
}

QString OAISSIOEditInsertionOrderResponse::getPinOrderId() const {
    return pin_order_id;
}
void OAISSIOEditInsertionOrderResponse::setPinOrderId(const QString &pin_order_id) {
    this->pin_order_id = pin_order_id;
    this->m_pin_order_id_isSet = true;
}

bool OAISSIOEditInsertionOrderResponse::is_pin_order_id_Set() const{
    return m_pin_order_id_isSet;
}

bool OAISSIOEditInsertionOrderResponse::is_pin_order_id_Valid() const{
    return m_pin_order_id_isValid;
}

bool OAISSIOEditInsertionOrderResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pin_order_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISSIOEditInsertionOrderResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
