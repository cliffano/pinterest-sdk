/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIPinMediaWithImages_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPinMediaWithImages_allOf::OAIPinMediaWithImages_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPinMediaWithImages_allOf::OAIPinMediaWithImages_allOf() {
    this->initializeModel();
}

OAIPinMediaWithImages_allOf::~OAIPinMediaWithImages_allOf() {}

void OAIPinMediaWithImages_allOf::initializeModel() {

    m_items_isSet = false;
    m_items_isValid = false;
}

void OAIPinMediaWithImages_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPinMediaWithImages_allOf::fromJsonObject(QJsonObject json) {

    m_items_isValid = ::OpenAPI::fromJsonValue(items, json[QString("items")]);
    m_items_isSet = !json[QString("items")].isNull() && m_items_isValid;
}

QString OAIPinMediaWithImages_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPinMediaWithImages_allOf::asJsonObject() const {
    QJsonObject obj;
    if (items.size() > 0) {
        obj.insert(QString("items"), ::OpenAPI::toJsonValue(items));
    }
    return obj;
}

QList<OAIImageMetadata> OAIPinMediaWithImages_allOf::getItems() const {
    return items;
}
void OAIPinMediaWithImages_allOf::setItems(const QList<OAIImageMetadata> &items) {
    this->items = items;
    this->m_items_isSet = true;
}

bool OAIPinMediaWithImages_allOf::is_items_Set() const{
    return m_items_isSet;
}

bool OAIPinMediaWithImages_allOf::is_items_Valid() const{
    return m_items_isValid;
}

bool OAIPinMediaWithImages_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (items.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPinMediaWithImages_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
