/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIFeeds_list_200_response_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFeeds_list_200_response_allOf::OAIFeeds_list_200_response_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFeeds_list_200_response_allOf::OAIFeeds_list_200_response_allOf() {
    this->initializeModel();
}

OAIFeeds_list_200_response_allOf::~OAIFeeds_list_200_response_allOf() {}

void OAIFeeds_list_200_response_allOf::initializeModel() {

    m_items_isSet = false;
    m_items_isValid = false;
}

void OAIFeeds_list_200_response_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFeeds_list_200_response_allOf::fromJsonObject(QJsonObject json) {

    m_items_isValid = ::OpenAPI::fromJsonValue(items, json[QString("items")]);
    m_items_isSet = !json[QString("items")].isNull() && m_items_isValid;
}

QString OAIFeeds_list_200_response_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFeeds_list_200_response_allOf::asJsonObject() const {
    QJsonObject obj;
    if (items.size() > 0) {
        obj.insert(QString("items"), ::OpenAPI::toJsonValue(items));
    }
    return obj;
}

QList<OAICatalogsFeed> OAIFeeds_list_200_response_allOf::getItems() const {
    return items;
}
void OAIFeeds_list_200_response_allOf::setItems(const QList<OAICatalogsFeed> &items) {
    this->items = items;
    this->m_items_isSet = true;
}

bool OAIFeeds_list_200_response_allOf::is_items_Set() const{
    return m_items_isSet;
}

bool OAIFeeds_list_200_response_allOf::is_items_Valid() const{
    return m_items_isValid;
}

bool OAIFeeds_list_200_response_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (items.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFeeds_list_200_response_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI