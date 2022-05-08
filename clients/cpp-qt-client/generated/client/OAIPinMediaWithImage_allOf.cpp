/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIPinMediaWithImage_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPinMediaWithImage_allOf::OAIPinMediaWithImage_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPinMediaWithImage_allOf::OAIPinMediaWithImage_allOf() {
    this->initializeModel();
}

OAIPinMediaWithImage_allOf::~OAIPinMediaWithImage_allOf() {}

void OAIPinMediaWithImage_allOf::initializeModel() {

    m_images_isSet = false;
    m_images_isValid = false;
}

void OAIPinMediaWithImage_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPinMediaWithImage_allOf::fromJsonObject(QJsonObject json) {

    m_images_isValid = ::OpenAPI::fromJsonValue(images, json[QString("images")]);
    m_images_isSet = !json[QString("images")].isNull() && m_images_isValid;
}

QString OAIPinMediaWithImage_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPinMediaWithImage_allOf::asJsonObject() const {
    QJsonObject obj;
    if (images.size() > 0) {
        obj.insert(QString("images"), ::OpenAPI::toJsonValue(images));
    }
    return obj;
}

QMap<QString, OAIImageDetails> OAIPinMediaWithImage_allOf::getImages() const {
    return images;
}
void OAIPinMediaWithImage_allOf::setImages(const QMap<QString, OAIImageDetails> &images) {
    this->images = images;
    this->m_images_isSet = true;
}

bool OAIPinMediaWithImage_allOf::is_images_Set() const{
    return m_images_isSet;
}

bool OAIPinMediaWithImage_allOf::is_images_Valid() const{
    return m_images_isValid;
}

bool OAIPinMediaWithImage_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (images.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPinMediaWithImage_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI