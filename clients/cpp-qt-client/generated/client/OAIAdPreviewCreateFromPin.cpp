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

#include "OAIAdPreviewCreateFromPin.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAdPreviewCreateFromPin::OAIAdPreviewCreateFromPin(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAdPreviewCreateFromPin::OAIAdPreviewCreateFromPin() {
    this->initializeModel();
}

OAIAdPreviewCreateFromPin::~OAIAdPreviewCreateFromPin() {}

void OAIAdPreviewCreateFromPin::initializeModel() {

    m_pin_id_isSet = false;
    m_pin_id_isValid = false;
}

void OAIAdPreviewCreateFromPin::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAdPreviewCreateFromPin::fromJsonObject(QJsonObject json) {

    m_pin_id_isValid = ::OpenAPI::fromJsonValue(m_pin_id, json[QString("pin_id")]);
    m_pin_id_isSet = !json[QString("pin_id")].isNull() && m_pin_id_isValid;
}

QString OAIAdPreviewCreateFromPin::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAdPreviewCreateFromPin::asJsonObject() const {
    QJsonObject obj;
    if (m_pin_id_isSet) {
        obj.insert(QString("pin_id"), ::OpenAPI::toJsonValue(m_pin_id));
    }
    return obj;
}

QString OAIAdPreviewCreateFromPin::getPinId() const {
    return m_pin_id;
}
void OAIAdPreviewCreateFromPin::setPinId(const QString &pin_id) {
    m_pin_id = pin_id;
    m_pin_id_isSet = true;
}

bool OAIAdPreviewCreateFromPin::is_pin_id_Set() const{
    return m_pin_id_isSet;
}

bool OAIAdPreviewCreateFromPin::is_pin_id_Valid() const{
    return m_pin_id_isValid;
}

bool OAIAdPreviewCreateFromPin::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pin_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAdPreviewCreateFromPin::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pin_id_isValid && true;
}

} // namespace OpenAPI
