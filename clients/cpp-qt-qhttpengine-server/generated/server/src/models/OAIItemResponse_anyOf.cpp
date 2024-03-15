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

#include "OAIItemResponse_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIItemResponse_anyOf::OAIItemResponse_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIItemResponse_anyOf::OAIItemResponse_anyOf() {
    this->initializeModel();
}

OAIItemResponse_anyOf::~OAIItemResponse_anyOf() {}

void OAIItemResponse_anyOf::initializeModel() {

    m_catalog_type_isSet = false;
    m_catalog_type_isValid = false;

    m_item_id_isSet = false;
    m_item_id_isValid = false;

    m_pins_isSet = false;
    m_pins_isValid = false;

    m_attributes_isSet = false;
    m_attributes_isValid = false;

    m_hotel_id_isSet = false;
    m_hotel_id_isValid = false;
}

void OAIItemResponse_anyOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIItemResponse_anyOf::fromJsonObject(QJsonObject json) {

    m_catalog_type_isValid = ::OpenAPI::fromJsonValue(catalog_type, json[QString("catalog_type")]);
    m_catalog_type_isSet = !json[QString("catalog_type")].isNull() && m_catalog_type_isValid;

    m_item_id_isValid = ::OpenAPI::fromJsonValue(item_id, json[QString("item_id")]);
    m_item_id_isSet = !json[QString("item_id")].isNull() && m_item_id_isValid;

    m_pins_isValid = ::OpenAPI::fromJsonValue(pins, json[QString("pins")]);
    m_pins_isSet = !json[QString("pins")].isNull() && m_pins_isValid;

    m_attributes_isValid = ::OpenAPI::fromJsonValue(attributes, json[QString("attributes")]);
    m_attributes_isSet = !json[QString("attributes")].isNull() && m_attributes_isValid;

    m_hotel_id_isValid = ::OpenAPI::fromJsonValue(hotel_id, json[QString("hotel_id")]);
    m_hotel_id_isSet = !json[QString("hotel_id")].isNull() && m_hotel_id_isValid;
}

QString OAIItemResponse_anyOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIItemResponse_anyOf::asJsonObject() const {
    QJsonObject obj;
    if (catalog_type.isSet()) {
        obj.insert(QString("catalog_type"), ::OpenAPI::toJsonValue(catalog_type));
    }
    if (m_item_id_isSet) {
        obj.insert(QString("item_id"), ::OpenAPI::toJsonValue(item_id));
    }
    if (pins.size() > 0) {
        obj.insert(QString("pins"), ::OpenAPI::toJsonValue(pins));
    }
    if (attributes.isSet()) {
        obj.insert(QString("attributes"), ::OpenAPI::toJsonValue(attributes));
    }
    if (m_hotel_id_isSet) {
        obj.insert(QString("hotel_id"), ::OpenAPI::toJsonValue(hotel_id));
    }
    return obj;
}

OAICatalogsType OAIItemResponse_anyOf::getCatalogType() const {
    return catalog_type;
}
void OAIItemResponse_anyOf::setCatalogType(const OAICatalogsType &catalog_type) {
    this->catalog_type = catalog_type;
    this->m_catalog_type_isSet = true;
}

bool OAIItemResponse_anyOf::is_catalog_type_Set() const{
    return m_catalog_type_isSet;
}

bool OAIItemResponse_anyOf::is_catalog_type_Valid() const{
    return m_catalog_type_isValid;
}

QString OAIItemResponse_anyOf::getItemId() const {
    return item_id;
}
void OAIItemResponse_anyOf::setItemId(const QString &item_id) {
    this->item_id = item_id;
    this->m_item_id_isSet = true;
}

bool OAIItemResponse_anyOf::is_item_id_Set() const{
    return m_item_id_isSet;
}

bool OAIItemResponse_anyOf::is_item_id_Valid() const{
    return m_item_id_isValid;
}

QList<OAIPin> OAIItemResponse_anyOf::getPins() const {
    return pins;
}
void OAIItemResponse_anyOf::setPins(const QList<OAIPin> &pins) {
    this->pins = pins;
    this->m_pins_isSet = true;
}

bool OAIItemResponse_anyOf::is_pins_Set() const{
    return m_pins_isSet;
}

bool OAIItemResponse_anyOf::is_pins_Valid() const{
    return m_pins_isValid;
}

OAICatalogsHotelAttributes OAIItemResponse_anyOf::getAttributes() const {
    return attributes;
}
void OAIItemResponse_anyOf::setAttributes(const OAICatalogsHotelAttributes &attributes) {
    this->attributes = attributes;
    this->m_attributes_isSet = true;
}

bool OAIItemResponse_anyOf::is_attributes_Set() const{
    return m_attributes_isSet;
}

bool OAIItemResponse_anyOf::is_attributes_Valid() const{
    return m_attributes_isValid;
}

QString OAIItemResponse_anyOf::getHotelId() const {
    return hotel_id;
}
void OAIItemResponse_anyOf::setHotelId(const QString &hotel_id) {
    this->hotel_id = hotel_id;
    this->m_hotel_id_isSet = true;
}

bool OAIItemResponse_anyOf::is_hotel_id_Set() const{
    return m_hotel_id_isSet;
}

bool OAIItemResponse_anyOf::is_hotel_id_Valid() const{
    return m_hotel_id_isValid;
}

bool OAIItemResponse_anyOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (catalog_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_item_id_isSet) {
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

        if (m_hotel_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIItemResponse_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_catalog_type_isValid && true;
}

} // namespace OpenAPI
