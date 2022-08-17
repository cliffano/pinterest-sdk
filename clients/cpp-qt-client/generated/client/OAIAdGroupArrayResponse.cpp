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

#include "OAIAdGroupArrayResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAdGroupArrayResponse::OAIAdGroupArrayResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAdGroupArrayResponse::OAIAdGroupArrayResponse() {
    this->initializeModel();
}

OAIAdGroupArrayResponse::~OAIAdGroupArrayResponse() {}

void OAIAdGroupArrayResponse::initializeModel() {

    m_items_isSet = false;
    m_items_isValid = false;
}

void OAIAdGroupArrayResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAdGroupArrayResponse::fromJsonObject(QJsonObject json) {

    m_items_isValid = ::OpenAPI::fromJsonValue(items, json[QString("items")]);
    m_items_isSet = !json[QString("items")].isNull() && m_items_isValid;
}

QString OAIAdGroupArrayResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAdGroupArrayResponse::asJsonObject() const {
    QJsonObject obj;
    if (items.size() > 0) {
        obj.insert(QString("items"), ::OpenAPI::toJsonValue(items));
    }
    return obj;
}

QList<OAIAdGroupArrayResponseElement> OAIAdGroupArrayResponse::getItems() const {
    return items;
}
void OAIAdGroupArrayResponse::setItems(const QList<OAIAdGroupArrayResponseElement> &items) {
    this->items = items;
    this->m_items_isSet = true;
}

bool OAIAdGroupArrayResponse::is_items_Set() const{
    return m_items_isSet;
}

bool OAIAdGroupArrayResponse::is_items_Valid() const{
    return m_items_isValid;
}

bool OAIAdGroupArrayResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (items.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAdGroupArrayResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
