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

#include "OAIConversionEvents_data_inner_custom_data_contents_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIConversionEvents_data_inner_custom_data_contents_inner::OAIConversionEvents_data_inner_custom_data_contents_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIConversionEvents_data_inner_custom_data_contents_inner::OAIConversionEvents_data_inner_custom_data_contents_inner() {
    this->initializeModel();
}

OAIConversionEvents_data_inner_custom_data_contents_inner::~OAIConversionEvents_data_inner_custom_data_contents_inner() {}

void OAIConversionEvents_data_inner_custom_data_contents_inner::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_item_price_isSet = false;
    m_item_price_isValid = false;

    m_quantity_isSet = false;
    m_quantity_isValid = false;

    m_item_name_isSet = false;
    m_item_name_isValid = false;

    m_item_category_isSet = false;
    m_item_category_isValid = false;

    m_item_brand_isSet = false;
    m_item_brand_isValid = false;
}

void OAIConversionEvents_data_inner_custom_data_contents_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIConversionEvents_data_inner_custom_data_contents_inner::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_item_price_isValid = ::OpenAPI::fromJsonValue(m_item_price, json[QString("item_price")]);
    m_item_price_isSet = !json[QString("item_price")].isNull() && m_item_price_isValid;

    m_quantity_isValid = ::OpenAPI::fromJsonValue(m_quantity, json[QString("quantity")]);
    m_quantity_isSet = !json[QString("quantity")].isNull() && m_quantity_isValid;

    m_item_name_isValid = ::OpenAPI::fromJsonValue(m_item_name, json[QString("item_name")]);
    m_item_name_isSet = !json[QString("item_name")].isNull() && m_item_name_isValid;

    m_item_category_isValid = ::OpenAPI::fromJsonValue(m_item_category, json[QString("item_category")]);
    m_item_category_isSet = !json[QString("item_category")].isNull() && m_item_category_isValid;

    m_item_brand_isValid = ::OpenAPI::fromJsonValue(m_item_brand, json[QString("item_brand")]);
    m_item_brand_isSet = !json[QString("item_brand")].isNull() && m_item_brand_isValid;
}

QString OAIConversionEvents_data_inner_custom_data_contents_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIConversionEvents_data_inner_custom_data_contents_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_item_price_isSet) {
        obj.insert(QString("item_price"), ::OpenAPI::toJsonValue(m_item_price));
    }
    if (m_quantity_isSet) {
        obj.insert(QString("quantity"), ::OpenAPI::toJsonValue(m_quantity));
    }
    if (m_item_name_isSet) {
        obj.insert(QString("item_name"), ::OpenAPI::toJsonValue(m_item_name));
    }
    if (m_item_category_isSet) {
        obj.insert(QString("item_category"), ::OpenAPI::toJsonValue(m_item_category));
    }
    if (m_item_brand_isSet) {
        obj.insert(QString("item_brand"), ::OpenAPI::toJsonValue(m_item_brand));
    }
    return obj;
}

QString OAIConversionEvents_data_inner_custom_data_contents_inner::getId() const {
    return m_id;
}
void OAIConversionEvents_data_inner_custom_data_contents_inner::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIConversionEvents_data_inner_custom_data_contents_inner::is_id_Set() const{
    return m_id_isSet;
}

bool OAIConversionEvents_data_inner_custom_data_contents_inner::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIConversionEvents_data_inner_custom_data_contents_inner::getItemPrice() const {
    return m_item_price;
}
void OAIConversionEvents_data_inner_custom_data_contents_inner::setItemPrice(const QString &item_price) {
    m_item_price = item_price;
    m_item_price_isSet = true;
}

bool OAIConversionEvents_data_inner_custom_data_contents_inner::is_item_price_Set() const{
    return m_item_price_isSet;
}

bool OAIConversionEvents_data_inner_custom_data_contents_inner::is_item_price_Valid() const{
    return m_item_price_isValid;
}

qint64 OAIConversionEvents_data_inner_custom_data_contents_inner::getQuantity() const {
    return m_quantity;
}
void OAIConversionEvents_data_inner_custom_data_contents_inner::setQuantity(const qint64 &quantity) {
    m_quantity = quantity;
    m_quantity_isSet = true;
}

bool OAIConversionEvents_data_inner_custom_data_contents_inner::is_quantity_Set() const{
    return m_quantity_isSet;
}

bool OAIConversionEvents_data_inner_custom_data_contents_inner::is_quantity_Valid() const{
    return m_quantity_isValid;
}

QString OAIConversionEvents_data_inner_custom_data_contents_inner::getItemName() const {
    return m_item_name;
}
void OAIConversionEvents_data_inner_custom_data_contents_inner::setItemName(const QString &item_name) {
    m_item_name = item_name;
    m_item_name_isSet = true;
}

bool OAIConversionEvents_data_inner_custom_data_contents_inner::is_item_name_Set() const{
    return m_item_name_isSet;
}

bool OAIConversionEvents_data_inner_custom_data_contents_inner::is_item_name_Valid() const{
    return m_item_name_isValid;
}

QString OAIConversionEvents_data_inner_custom_data_contents_inner::getItemCategory() const {
    return m_item_category;
}
void OAIConversionEvents_data_inner_custom_data_contents_inner::setItemCategory(const QString &item_category) {
    m_item_category = item_category;
    m_item_category_isSet = true;
}

bool OAIConversionEvents_data_inner_custom_data_contents_inner::is_item_category_Set() const{
    return m_item_category_isSet;
}

bool OAIConversionEvents_data_inner_custom_data_contents_inner::is_item_category_Valid() const{
    return m_item_category_isValid;
}

QString OAIConversionEvents_data_inner_custom_data_contents_inner::getItemBrand() const {
    return m_item_brand;
}
void OAIConversionEvents_data_inner_custom_data_contents_inner::setItemBrand(const QString &item_brand) {
    m_item_brand = item_brand;
    m_item_brand_isSet = true;
}

bool OAIConversionEvents_data_inner_custom_data_contents_inner::is_item_brand_Set() const{
    return m_item_brand_isSet;
}

bool OAIConversionEvents_data_inner_custom_data_contents_inner::is_item_brand_Valid() const{
    return m_item_brand_isValid;
}

bool OAIConversionEvents_data_inner_custom_data_contents_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_item_price_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_quantity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_item_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_item_category_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_item_brand_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIConversionEvents_data_inner_custom_data_contents_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
