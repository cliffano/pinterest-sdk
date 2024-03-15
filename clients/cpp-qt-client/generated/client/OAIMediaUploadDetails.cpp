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

#include "OAIMediaUploadDetails.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMediaUploadDetails::OAIMediaUploadDetails(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMediaUploadDetails::OAIMediaUploadDetails() {
    this->initializeModel();
}

OAIMediaUploadDetails::~OAIMediaUploadDetails() {}

void OAIMediaUploadDetails::initializeModel() {

    m_media_id_isSet = false;
    m_media_id_isValid = false;

    m_media_type_isSet = false;
    m_media_type_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;
}

void OAIMediaUploadDetails::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMediaUploadDetails::fromJsonObject(QJsonObject json) {

    m_media_id_isValid = ::OpenAPI::fromJsonValue(m_media_id, json[QString("media_id")]);
    m_media_id_isSet = !json[QString("media_id")].isNull() && m_media_id_isValid;

    m_media_type_isValid = ::OpenAPI::fromJsonValue(m_media_type, json[QString("media_type")]);
    m_media_type_isSet = !json[QString("media_type")].isNull() && m_media_type_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;
}

QString OAIMediaUploadDetails::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMediaUploadDetails::asJsonObject() const {
    QJsonObject obj;
    if (m_media_id_isSet) {
        obj.insert(QString("media_id"), ::OpenAPI::toJsonValue(m_media_id));
    }
    if (m_media_type.isSet()) {
        obj.insert(QString("media_type"), ::OpenAPI::toJsonValue(m_media_type));
    }
    if (m_status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(m_status));
    }
    return obj;
}

QString OAIMediaUploadDetails::getMediaId() const {
    return m_media_id;
}
void OAIMediaUploadDetails::setMediaId(const QString &media_id) {
    m_media_id = media_id;
    m_media_id_isSet = true;
}

bool OAIMediaUploadDetails::is_media_id_Set() const{
    return m_media_id_isSet;
}

bool OAIMediaUploadDetails::is_media_id_Valid() const{
    return m_media_id_isValid;
}

OAIMediaUploadType OAIMediaUploadDetails::getMediaType() const {
    return m_media_type;
}
void OAIMediaUploadDetails::setMediaType(const OAIMediaUploadType &media_type) {
    m_media_type = media_type;
    m_media_type_isSet = true;
}

bool OAIMediaUploadDetails::is_media_type_Set() const{
    return m_media_type_isSet;
}

bool OAIMediaUploadDetails::is_media_type_Valid() const{
    return m_media_type_isValid;
}

OAIMediaUploadStatus OAIMediaUploadDetails::getStatus() const {
    return m_status;
}
void OAIMediaUploadDetails::setStatus(const OAIMediaUploadStatus &status) {
    m_status = status;
    m_status_isSet = true;
}

bool OAIMediaUploadDetails::is_status_Set() const{
    return m_status_isSet;
}

bool OAIMediaUploadDetails::is_status_Valid() const{
    return m_status_isValid;
}

bool OAIMediaUploadDetails::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_media_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_media_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_status.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMediaUploadDetails::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
