/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIImageDetails.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIImageDetails::OAIImageDetails(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIImageDetails::OAIImageDetails() {
    this->initializeModel();
}

OAIImageDetails::~OAIImageDetails() {}

void OAIImageDetails::initializeModel() {

    m_width_isSet = false;
    m_width_isValid = false;

    m_height_isSet = false;
    m_height_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;
}

void OAIImageDetails::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIImageDetails::fromJsonObject(QJsonObject json) {

    m_width_isValid = ::OpenAPI::fromJsonValue(width, json[QString("width")]);
    m_width_isSet = !json[QString("width")].isNull() && m_width_isValid;

    m_height_isValid = ::OpenAPI::fromJsonValue(height, json[QString("height")]);
    m_height_isSet = !json[QString("height")].isNull() && m_height_isValid;

    m_url_isValid = ::OpenAPI::fromJsonValue(url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;
}

QString OAIImageDetails::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIImageDetails::asJsonObject() const {
    QJsonObject obj;
    if (m_width_isSet) {
        obj.insert(QString("width"), ::OpenAPI::toJsonValue(width));
    }
    if (m_height_isSet) {
        obj.insert(QString("height"), ::OpenAPI::toJsonValue(height));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(url));
    }
    return obj;
}

qint32 OAIImageDetails::getWidth() const {
    return width;
}
void OAIImageDetails::setWidth(const qint32 &width) {
    this->width = width;
    this->m_width_isSet = true;
}

bool OAIImageDetails::is_width_Set() const{
    return m_width_isSet;
}

bool OAIImageDetails::is_width_Valid() const{
    return m_width_isValid;
}

qint32 OAIImageDetails::getHeight() const {
    return height;
}
void OAIImageDetails::setHeight(const qint32 &height) {
    this->height = height;
    this->m_height_isSet = true;
}

bool OAIImageDetails::is_height_Set() const{
    return m_height_isSet;
}

bool OAIImageDetails::is_height_Valid() const{
    return m_height_isValid;
}

QString OAIImageDetails::getUrl() const {
    return url;
}
void OAIImageDetails::setUrl(const QString &url) {
    this->url = url;
    this->m_url_isSet = true;
}

bool OAIImageDetails::is_url_Set() const{
    return m_url_isSet;
}

bool OAIImageDetails::is_url_Valid() const{
    return m_url_isValid;
}

bool OAIImageDetails::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIImageDetails::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_width_isValid && m_height_isValid && m_url_isValid && true;
}

} // namespace OpenAPI
