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

#include "OAIDeliveryMetricsResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDeliveryMetricsResponse::OAIDeliveryMetricsResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDeliveryMetricsResponse::OAIDeliveryMetricsResponse() {
    this->initializeModel();
}

OAIDeliveryMetricsResponse::~OAIDeliveryMetricsResponse() {}

void OAIDeliveryMetricsResponse::initializeModel() {

    m_items_isSet = false;
    m_items_isValid = false;
}

void OAIDeliveryMetricsResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDeliveryMetricsResponse::fromJsonObject(QJsonObject json) {

    m_items_isValid = ::OpenAPI::fromJsonValue(m_items, json[QString("items")]);
    m_items_isSet = !json[QString("items")].isNull() && m_items_isValid;
}

QString OAIDeliveryMetricsResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDeliveryMetricsResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_items.size() > 0) {
        obj.insert(QString("items"), ::OpenAPI::toJsonValue(m_items));
    }
    return obj;
}

QList<OAIDeliveryMetricsResponse_items_inner> OAIDeliveryMetricsResponse::getItems() const {
    return m_items;
}
void OAIDeliveryMetricsResponse::setItems(const QList<OAIDeliveryMetricsResponse_items_inner> &items) {
    m_items = items;
    m_items_isSet = true;
}

bool OAIDeliveryMetricsResponse::is_items_Set() const{
    return m_items_isSet;
}

bool OAIDeliveryMetricsResponse::is_items_Valid() const{
    return m_items_isValid;
}

bool OAIDeliveryMetricsResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_items.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDeliveryMetricsResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
