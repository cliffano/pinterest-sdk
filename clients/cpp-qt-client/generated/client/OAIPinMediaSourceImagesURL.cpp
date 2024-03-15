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

#include "OAIPinMediaSourceImagesURL.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPinMediaSourceImagesURL::OAIPinMediaSourceImagesURL(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPinMediaSourceImagesURL::OAIPinMediaSourceImagesURL() {
    this->initializeModel();
}

OAIPinMediaSourceImagesURL::~OAIPinMediaSourceImagesURL() {}

void OAIPinMediaSourceImagesURL::initializeModel() {

    m_source_type_isSet = false;
    m_source_type_isValid = false;

    m_items_isSet = false;
    m_items_isValid = false;

    m_index_isSet = false;
    m_index_isValid = false;
}

void OAIPinMediaSourceImagesURL::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPinMediaSourceImagesURL::fromJsonObject(QJsonObject json) {

    m_source_type_isValid = ::OpenAPI::fromJsonValue(m_source_type, json[QString("source_type")]);
    m_source_type_isSet = !json[QString("source_type")].isNull() && m_source_type_isValid;

    m_items_isValid = ::OpenAPI::fromJsonValue(m_items, json[QString("items")]);
    m_items_isSet = !json[QString("items")].isNull() && m_items_isValid;

    m_index_isValid = ::OpenAPI::fromJsonValue(m_index, json[QString("index")]);
    m_index_isSet = !json[QString("index")].isNull() && m_index_isValid;
}

QString OAIPinMediaSourceImagesURL::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPinMediaSourceImagesURL::asJsonObject() const {
    QJsonObject obj;
    if (m_source_type_isSet) {
        obj.insert(QString("source_type"), ::OpenAPI::toJsonValue(m_source_type));
    }
    if (m_items.size() > 0) {
        obj.insert(QString("items"), ::OpenAPI::toJsonValue(m_items));
    }
    if (m_index_isSet) {
        obj.insert(QString("index"), ::OpenAPI::toJsonValue(m_index));
    }
    return obj;
}

QString OAIPinMediaSourceImagesURL::getSourceType() const {
    return m_source_type;
}
void OAIPinMediaSourceImagesURL::setSourceType(const QString &source_type) {
    m_source_type = source_type;
    m_source_type_isSet = true;
}

bool OAIPinMediaSourceImagesURL::is_source_type_Set() const{
    return m_source_type_isSet;
}

bool OAIPinMediaSourceImagesURL::is_source_type_Valid() const{
    return m_source_type_isValid;
}

QList<OAIPinMediaSourceImagesURL_items_inner> OAIPinMediaSourceImagesURL::getItems() const {
    return m_items;
}
void OAIPinMediaSourceImagesURL::setItems(const QList<OAIPinMediaSourceImagesURL_items_inner> &items) {
    m_items = items;
    m_items_isSet = true;
}

bool OAIPinMediaSourceImagesURL::is_items_Set() const{
    return m_items_isSet;
}

bool OAIPinMediaSourceImagesURL::is_items_Valid() const{
    return m_items_isValid;
}

qint32 OAIPinMediaSourceImagesURL::getIndex() const {
    return m_index;
}
void OAIPinMediaSourceImagesURL::setIndex(const qint32 &index) {
    m_index = index;
    m_index_isSet = true;
}

bool OAIPinMediaSourceImagesURL::is_index_Set() const{
    return m_index_isSet;
}

bool OAIPinMediaSourceImagesURL::is_index_Valid() const{
    return m_index_isValid;
}

bool OAIPinMediaSourceImagesURL::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_source_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_items.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_index_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPinMediaSourceImagesURL::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_items_isValid && true;
}

} // namespace OpenAPI
