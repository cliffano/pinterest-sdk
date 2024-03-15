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

#include "OAICatalogsHotelItemResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsHotelItemResponse::OAICatalogsHotelItemResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsHotelItemResponse::OAICatalogsHotelItemResponse() {
    this->initializeModel();
}

OAICatalogsHotelItemResponse::~OAICatalogsHotelItemResponse() {}

void OAICatalogsHotelItemResponse::initializeModel() {

    m_catalog_type_isSet = false;
    m_catalog_type_isValid = false;

    m_hotel_id_isSet = false;
    m_hotel_id_isValid = false;

    m_pins_isSet = false;
    m_pins_isValid = false;

    m_attributes_isSet = false;
    m_attributes_isValid = false;
}

void OAICatalogsHotelItemResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsHotelItemResponse::fromJsonObject(QJsonObject json) {

    m_catalog_type_isValid = ::OpenAPI::fromJsonValue(catalog_type, json[QString("catalog_type")]);
    m_catalog_type_isSet = !json[QString("catalog_type")].isNull() && m_catalog_type_isValid;

    m_hotel_id_isValid = ::OpenAPI::fromJsonValue(hotel_id, json[QString("hotel_id")]);
    m_hotel_id_isSet = !json[QString("hotel_id")].isNull() && m_hotel_id_isValid;

    m_pins_isValid = ::OpenAPI::fromJsonValue(pins, json[QString("pins")]);
    m_pins_isSet = !json[QString("pins")].isNull() && m_pins_isValid;

    m_attributes_isValid = ::OpenAPI::fromJsonValue(attributes, json[QString("attributes")]);
    m_attributes_isSet = !json[QString("attributes")].isNull() && m_attributes_isValid;
}

QString OAICatalogsHotelItemResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsHotelItemResponse::asJsonObject() const {
    QJsonObject obj;
    if (catalog_type.isSet()) {
        obj.insert(QString("catalog_type"), ::OpenAPI::toJsonValue(catalog_type));
    }
    if (m_hotel_id_isSet) {
        obj.insert(QString("hotel_id"), ::OpenAPI::toJsonValue(hotel_id));
    }
    if (pins.size() > 0) {
        obj.insert(QString("pins"), ::OpenAPI::toJsonValue(pins));
    }
    if (attributes.isSet()) {
        obj.insert(QString("attributes"), ::OpenAPI::toJsonValue(attributes));
    }
    return obj;
}

OAICatalogsType OAICatalogsHotelItemResponse::getCatalogType() const {
    return catalog_type;
}
void OAICatalogsHotelItemResponse::setCatalogType(const OAICatalogsType &catalog_type) {
    this->catalog_type = catalog_type;
    this->m_catalog_type_isSet = true;
}

bool OAICatalogsHotelItemResponse::is_catalog_type_Set() const{
    return m_catalog_type_isSet;
}

bool OAICatalogsHotelItemResponse::is_catalog_type_Valid() const{
    return m_catalog_type_isValid;
}

QString OAICatalogsHotelItemResponse::getHotelId() const {
    return hotel_id;
}
void OAICatalogsHotelItemResponse::setHotelId(const QString &hotel_id) {
    this->hotel_id = hotel_id;
    this->m_hotel_id_isSet = true;
}

bool OAICatalogsHotelItemResponse::is_hotel_id_Set() const{
    return m_hotel_id_isSet;
}

bool OAICatalogsHotelItemResponse::is_hotel_id_Valid() const{
    return m_hotel_id_isValid;
}

QList<OAIPin> OAICatalogsHotelItemResponse::getPins() const {
    return pins;
}
void OAICatalogsHotelItemResponse::setPins(const QList<OAIPin> &pins) {
    this->pins = pins;
    this->m_pins_isSet = true;
}

bool OAICatalogsHotelItemResponse::is_pins_Set() const{
    return m_pins_isSet;
}

bool OAICatalogsHotelItemResponse::is_pins_Valid() const{
    return m_pins_isValid;
}

OAICatalogsHotelAttributes OAICatalogsHotelItemResponse::getAttributes() const {
    return attributes;
}
void OAICatalogsHotelItemResponse::setAttributes(const OAICatalogsHotelAttributes &attributes) {
    this->attributes = attributes;
    this->m_attributes_isSet = true;
}

bool OAICatalogsHotelItemResponse::is_attributes_Set() const{
    return m_attributes_isSet;
}

bool OAICatalogsHotelItemResponse::is_attributes_Valid() const{
    return m_attributes_isValid;
}

bool OAICatalogsHotelItemResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (catalog_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_hotel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (pins.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (attributes.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsHotelItemResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_catalog_type_isValid && true;
}

} // namespace OpenAPI
