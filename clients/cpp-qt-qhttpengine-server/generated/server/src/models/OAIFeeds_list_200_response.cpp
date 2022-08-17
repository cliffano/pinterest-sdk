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

#include "OAIFeeds_list_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFeeds_list_200_response::OAIFeeds_list_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFeeds_list_200_response::OAIFeeds_list_200_response() {
    this->initializeModel();
}

OAIFeeds_list_200_response::~OAIFeeds_list_200_response() {}

void OAIFeeds_list_200_response::initializeModel() {

    m_items_isSet = false;
    m_items_isValid = false;

    m_bookmark_isSet = false;
    m_bookmark_isValid = false;
}

void OAIFeeds_list_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFeeds_list_200_response::fromJsonObject(QJsonObject json) {

    m_items_isValid = ::OpenAPI::fromJsonValue(items, json[QString("items")]);
    m_items_isSet = !json[QString("items")].isNull() && m_items_isValid;

    m_bookmark_isValid = ::OpenAPI::fromJsonValue(bookmark, json[QString("bookmark")]);
    m_bookmark_isSet = !json[QString("bookmark")].isNull() && m_bookmark_isValid;
}

QString OAIFeeds_list_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFeeds_list_200_response::asJsonObject() const {
    QJsonObject obj;
    if (items.size() > 0) {
        obj.insert(QString("items"), ::OpenAPI::toJsonValue(items));
    }
    if (m_bookmark_isSet) {
        obj.insert(QString("bookmark"), ::OpenAPI::toJsonValue(bookmark));
    }
    return obj;
}

QList<OAICatalogsFeed> OAIFeeds_list_200_response::getItems() const {
    return items;
}
void OAIFeeds_list_200_response::setItems(const QList<OAICatalogsFeed> &items) {
    this->items = items;
    this->m_items_isSet = true;
}

bool OAIFeeds_list_200_response::is_items_Set() const{
    return m_items_isSet;
}

bool OAIFeeds_list_200_response::is_items_Valid() const{
    return m_items_isValid;
}

QString OAIFeeds_list_200_response::getBookmark() const {
    return bookmark;
}
void OAIFeeds_list_200_response::setBookmark(const QString &bookmark) {
    this->bookmark = bookmark;
    this->m_bookmark_isSet = true;
}

bool OAIFeeds_list_200_response::is_bookmark_Set() const{
    return m_bookmark_isSet;
}

bool OAIFeeds_list_200_response::is_bookmark_Valid() const{
    return m_bookmark_isValid;
}

bool OAIFeeds_list_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (items.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_bookmark_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFeeds_list_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_items_isValid && true;
}

} // namespace OpenAPI
