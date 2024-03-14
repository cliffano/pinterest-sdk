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

#include "OAIImageMetadata.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIImageMetadata::OAIImageMetadata(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIImageMetadata::OAIImageMetadata() {
    this->initializeModel();
}

OAIImageMetadata::~OAIImageMetadata() {}

void OAIImageMetadata::initializeModel() {

    m_item_type_isSet = false;
    m_item_type_isValid = false;

    m_images_isSet = false;
    m_images_isValid = false;
}

void OAIImageMetadata::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIImageMetadata::fromJsonObject(QJsonObject json) {

    m_item_type_isValid = ::OpenAPI::fromJsonValue(m_item_type, json[QString("item_type")]);
    m_item_type_isSet = !json[QString("item_type")].isNull() && m_item_type_isValid;

    m_images_isValid = ::OpenAPI::fromJsonValue(m_images, json[QString("images")]);
    m_images_isSet = !json[QString("images")].isNull() && m_images_isValid;
}

QString OAIImageMetadata::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIImageMetadata::asJsonObject() const {
    QJsonObject obj;
    if (m_item_type_isSet) {
        obj.insert(QString("item_type"), ::OpenAPI::toJsonValue(m_item_type));
    }
    if (m_images.size() > 0) {
        obj.insert(QString("images"), ::OpenAPI::toJsonValue(m_images));
    }
    return obj;
}

QString OAIImageMetadata::getItemType() const {
    return m_item_type;
}
void OAIImageMetadata::setItemType(const QString &item_type) {
    m_item_type = item_type;
    m_item_type_isSet = true;
}

bool OAIImageMetadata::is_item_type_Set() const{
    return m_item_type_isSet;
}

bool OAIImageMetadata::is_item_type_Valid() const{
    return m_item_type_isValid;
}

QMap<QString, OAIImageDetails> OAIImageMetadata::getImages() const {
    return m_images;
}
void OAIImageMetadata::setImages(const QMap<QString, OAIImageDetails> &images) {
    m_images = images;
    m_images_isSet = true;
}

bool OAIImageMetadata::is_images_Set() const{
    return m_images_isSet;
}

bool OAIImageMetadata::is_images_Valid() const{
    return m_images_isValid;
}

bool OAIImageMetadata::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_item_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_images.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIImageMetadata::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI