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

#include "OAICatalogsProduct.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsProduct::OAICatalogsProduct(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsProduct::OAICatalogsProduct() {
    this->initializeModel();
}

OAICatalogsProduct::~OAICatalogsProduct() {}

void OAICatalogsProduct::initializeModel() {

    m_metadata_isSet = false;
    m_metadata_isValid = false;

    m_pin_isSet = false;
    m_pin_isValid = false;
}

void OAICatalogsProduct::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsProduct::fromJsonObject(QJsonObject json) {

    m_metadata_isValid = ::OpenAPI::fromJsonValue(m_metadata, json[QString("metadata")]);
    m_metadata_isSet = !json[QString("metadata")].isNull() && m_metadata_isValid;

    m_pin_isValid = ::OpenAPI::fromJsonValue(m_pin, json[QString("pin")]);
    m_pin_isSet = !json[QString("pin")].isNull() && m_pin_isValid;
}

QString OAICatalogsProduct::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsProduct::asJsonObject() const {
    QJsonObject obj;
    if (m_metadata.isSet()) {
        obj.insert(QString("metadata"), ::OpenAPI::toJsonValue(m_metadata));
    }
    if (m_pin.isSet()) {
        obj.insert(QString("pin"), ::OpenAPI::toJsonValue(m_pin));
    }
    return obj;
}

OAICatalogsProductMetadata OAICatalogsProduct::getMetadata() const {
    return m_metadata;
}
void OAICatalogsProduct::setMetadata(const OAICatalogsProductMetadata &metadata) {
    m_metadata = metadata;
    m_metadata_isSet = true;
}

bool OAICatalogsProduct::is_metadata_Set() const{
    return m_metadata_isSet;
}

bool OAICatalogsProduct::is_metadata_Valid() const{
    return m_metadata_isValid;
}

OAIPin OAICatalogsProduct::getPin() const {
    return m_pin;
}
void OAICatalogsProduct::setPin(const OAIPin &pin) {
    m_pin = pin;
    m_pin_isSet = true;
}

bool OAICatalogsProduct::is_pin_Set() const{
    return m_pin_isSet;
}

bool OAICatalogsProduct::is_pin_Valid() const{
    return m_pin_isValid;
}

bool OAICatalogsProduct::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_metadata.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_pin.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsProduct::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_metadata_isValid && m_pin_isValid && true;
}

} // namespace OpenAPI
