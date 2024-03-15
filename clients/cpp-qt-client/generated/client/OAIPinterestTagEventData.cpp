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

#include "OAIPinterestTagEventData.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPinterestTagEventData::OAIPinterestTagEventData(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPinterestTagEventData::OAIPinterestTagEventData() {
    this->initializeModel();
}

OAIPinterestTagEventData::~OAIPinterestTagEventData() {}

void OAIPinterestTagEventData::initializeModel() {

    m_currency_isSet = false;
    m_currency_isValid = false;

    m_lead_type_isSet = false;
    m_lead_type_isValid = false;

    m_line_items_isSet = false;
    m_line_items_isValid = false;

    m_order_id_isSet = false;
    m_order_id_isValid = false;

    m_order_quantity_isSet = false;
    m_order_quantity_isValid = false;

    m_page_name_isSet = false;
    m_page_name_isValid = false;

    m_promo_code_isSet = false;
    m_promo_code_isValid = false;

    m_property_isSet = false;
    m_property_isValid = false;

    m_search_query_isSet = false;
    m_search_query_isValid = false;

    m_value_isSet = false;
    m_value_isValid = false;

    m_video_title_isSet = false;
    m_video_title_isValid = false;
}

void OAIPinterestTagEventData::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPinterestTagEventData::fromJsonObject(QJsonObject json) {

    m_currency_isValid = ::OpenAPI::fromJsonValue(m_currency, json[QString("currency")]);
    m_currency_isSet = !json[QString("currency")].isNull() && m_currency_isValid;

    m_lead_type_isValid = ::OpenAPI::fromJsonValue(m_lead_type, json[QString("lead_type")]);
    m_lead_type_isSet = !json[QString("lead_type")].isNull() && m_lead_type_isValid;

    m_line_items_isValid = ::OpenAPI::fromJsonValue(m_line_items, json[QString("line_items")]);
    m_line_items_isSet = !json[QString("line_items")].isNull() && m_line_items_isValid;

    m_order_id_isValid = ::OpenAPI::fromJsonValue(m_order_id, json[QString("order_id")]);
    m_order_id_isSet = !json[QString("order_id")].isNull() && m_order_id_isValid;

    m_order_quantity_isValid = ::OpenAPI::fromJsonValue(m_order_quantity, json[QString("order_quantity")]);
    m_order_quantity_isSet = !json[QString("order_quantity")].isNull() && m_order_quantity_isValid;

    m_page_name_isValid = ::OpenAPI::fromJsonValue(m_page_name, json[QString("page_name")]);
    m_page_name_isSet = !json[QString("page_name")].isNull() && m_page_name_isValid;

    m_promo_code_isValid = ::OpenAPI::fromJsonValue(m_promo_code, json[QString("promo_code")]);
    m_promo_code_isSet = !json[QString("promo_code")].isNull() && m_promo_code_isValid;

    m_property_isValid = ::OpenAPI::fromJsonValue(m_property, json[QString("property")]);
    m_property_isSet = !json[QString("property")].isNull() && m_property_isValid;

    m_search_query_isValid = ::OpenAPI::fromJsonValue(m_search_query, json[QString("search_query")]);
    m_search_query_isSet = !json[QString("search_query")].isNull() && m_search_query_isValid;

    m_value_isValid = ::OpenAPI::fromJsonValue(m_value, json[QString("value")]);
    m_value_isSet = !json[QString("value")].isNull() && m_value_isValid;

    m_video_title_isValid = ::OpenAPI::fromJsonValue(m_video_title, json[QString("video_title")]);
    m_video_title_isSet = !json[QString("video_title")].isNull() && m_video_title_isValid;
}

QString OAIPinterestTagEventData::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPinterestTagEventData::asJsonObject() const {
    QJsonObject obj;
    if (m_currency.isSet()) {
        obj.insert(QString("currency"), ::OpenAPI::toJsonValue(m_currency));
    }
    if (m_lead_type_isSet) {
        obj.insert(QString("lead_type"), ::OpenAPI::toJsonValue(m_lead_type));
    }
    if (m_line_items.isSet()) {
        obj.insert(QString("line_items"), ::OpenAPI::toJsonValue(m_line_items));
    }
    if (m_order_id_isSet) {
        obj.insert(QString("order_id"), ::OpenAPI::toJsonValue(m_order_id));
    }
    if (m_order_quantity_isSet) {
        obj.insert(QString("order_quantity"), ::OpenAPI::toJsonValue(m_order_quantity));
    }
    if (m_page_name_isSet) {
        obj.insert(QString("page_name"), ::OpenAPI::toJsonValue(m_page_name));
    }
    if (m_promo_code_isSet) {
        obj.insert(QString("promo_code"), ::OpenAPI::toJsonValue(m_promo_code));
    }
    if (m_property_isSet) {
        obj.insert(QString("property"), ::OpenAPI::toJsonValue(m_property));
    }
    if (m_search_query_isSet) {
        obj.insert(QString("search_query"), ::OpenAPI::toJsonValue(m_search_query));
    }
    if (m_value_isSet) {
        obj.insert(QString("value"), ::OpenAPI::toJsonValue(m_value));
    }
    if (m_video_title_isSet) {
        obj.insert(QString("video_title"), ::OpenAPI::toJsonValue(m_video_title));
    }
    return obj;
}

OAICurrency OAIPinterestTagEventData::getCurrency() const {
    return m_currency;
}
void OAIPinterestTagEventData::setCurrency(const OAICurrency &currency) {
    m_currency = currency;
    m_currency_isSet = true;
}

bool OAIPinterestTagEventData::is_currency_Set() const{
    return m_currency_isSet;
}

bool OAIPinterestTagEventData::is_currency_Valid() const{
    return m_currency_isValid;
}

QString OAIPinterestTagEventData::getLeadType() const {
    return m_lead_type;
}
void OAIPinterestTagEventData::setLeadType(const QString &lead_type) {
    m_lead_type = lead_type;
    m_lead_type_isSet = true;
}

bool OAIPinterestTagEventData::is_lead_type_Set() const{
    return m_lead_type_isSet;
}

bool OAIPinterestTagEventData::is_lead_type_Valid() const{
    return m_lead_type_isValid;
}

OAILineItem OAIPinterestTagEventData::getLineItems() const {
    return m_line_items;
}
void OAIPinterestTagEventData::setLineItems(const OAILineItem &line_items) {
    m_line_items = line_items;
    m_line_items_isSet = true;
}

bool OAIPinterestTagEventData::is_line_items_Set() const{
    return m_line_items_isSet;
}

bool OAIPinterestTagEventData::is_line_items_Valid() const{
    return m_line_items_isValid;
}

QString OAIPinterestTagEventData::getOrderId() const {
    return m_order_id;
}
void OAIPinterestTagEventData::setOrderId(const QString &order_id) {
    m_order_id = order_id;
    m_order_id_isSet = true;
}

bool OAIPinterestTagEventData::is_order_id_Set() const{
    return m_order_id_isSet;
}

bool OAIPinterestTagEventData::is_order_id_Valid() const{
    return m_order_id_isValid;
}

qint32 OAIPinterestTagEventData::getOrderQuantity() const {
    return m_order_quantity;
}
void OAIPinterestTagEventData::setOrderQuantity(const qint32 &order_quantity) {
    m_order_quantity = order_quantity;
    m_order_quantity_isSet = true;
}

bool OAIPinterestTagEventData::is_order_quantity_Set() const{
    return m_order_quantity_isSet;
}

bool OAIPinterestTagEventData::is_order_quantity_Valid() const{
    return m_order_quantity_isValid;
}

QString OAIPinterestTagEventData::getPageName() const {
    return m_page_name;
}
void OAIPinterestTagEventData::setPageName(const QString &page_name) {
    m_page_name = page_name;
    m_page_name_isSet = true;
}

bool OAIPinterestTagEventData::is_page_name_Set() const{
    return m_page_name_isSet;
}

bool OAIPinterestTagEventData::is_page_name_Valid() const{
    return m_page_name_isValid;
}

QString OAIPinterestTagEventData::getPromoCode() const {
    return m_promo_code;
}
void OAIPinterestTagEventData::setPromoCode(const QString &promo_code) {
    m_promo_code = promo_code;
    m_promo_code_isSet = true;
}

bool OAIPinterestTagEventData::is_promo_code_Set() const{
    return m_promo_code_isSet;
}

bool OAIPinterestTagEventData::is_promo_code_Valid() const{
    return m_promo_code_isValid;
}

QString OAIPinterestTagEventData::getProperty() const {
    return m_property;
}
void OAIPinterestTagEventData::setProperty(const QString &property) {
    m_property = property;
    m_property_isSet = true;
}

bool OAIPinterestTagEventData::is_property_Set() const{
    return m_property_isSet;
}

bool OAIPinterestTagEventData::is_property_Valid() const{
    return m_property_isValid;
}

QString OAIPinterestTagEventData::getSearchQuery() const {
    return m_search_query;
}
void OAIPinterestTagEventData::setSearchQuery(const QString &search_query) {
    m_search_query = search_query;
    m_search_query_isSet = true;
}

bool OAIPinterestTagEventData::is_search_query_Set() const{
    return m_search_query_isSet;
}

bool OAIPinterestTagEventData::is_search_query_Valid() const{
    return m_search_query_isValid;
}

QString OAIPinterestTagEventData::getValue() const {
    return m_value;
}
void OAIPinterestTagEventData::setValue(const QString &value) {
    m_value = value;
    m_value_isSet = true;
}

bool OAIPinterestTagEventData::is_value_Set() const{
    return m_value_isSet;
}

bool OAIPinterestTagEventData::is_value_Valid() const{
    return m_value_isValid;
}

QString OAIPinterestTagEventData::getVideoTitle() const {
    return m_video_title;
}
void OAIPinterestTagEventData::setVideoTitle(const QString &video_title) {
    m_video_title = video_title;
    m_video_title_isSet = true;
}

bool OAIPinterestTagEventData::is_video_title_Set() const{
    return m_video_title_isSet;
}

bool OAIPinterestTagEventData::is_video_title_Valid() const{
    return m_video_title_isValid;
}

bool OAIPinterestTagEventData::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_currency.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_lead_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_line_items.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_order_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_order_quantity_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_page_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_promo_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_property_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_search_query_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_title_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPinterestTagEventData::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
