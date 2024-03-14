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

#include "OAICatalogsFeedProductCounts.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsFeedProductCounts::OAICatalogsFeedProductCounts(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsFeedProductCounts::OAICatalogsFeedProductCounts() {
    this->initializeModel();
}

OAICatalogsFeedProductCounts::~OAICatalogsFeedProductCounts() {}

void OAICatalogsFeedProductCounts::initializeModel() {

    m_original_isSet = false;
    m_original_isValid = false;
}

void OAICatalogsFeedProductCounts::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsFeedProductCounts::fromJsonObject(QJsonObject json) {

    m_original_isValid = ::OpenAPI::fromJsonValue(m_original, json[QString("original")]);
    m_original_isSet = !json[QString("original")].isNull() && m_original_isValid;
}

QString OAICatalogsFeedProductCounts::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsFeedProductCounts::asJsonObject() const {
    QJsonObject obj;
    if (m_original_isSet) {
        obj.insert(QString("original"), ::OpenAPI::toJsonValue(m_original));
    }
    return obj;
}

qint32 OAICatalogsFeedProductCounts::getOriginal() const {
    return m_original;
}
void OAICatalogsFeedProductCounts::setOriginal(const qint32 &original) {
    m_original = original;
    m_original_isSet = true;
}

bool OAICatalogsFeedProductCounts::is_original_Set() const{
    return m_original_isSet;
}

bool OAICatalogsFeedProductCounts::is_original_Valid() const{
    return m_original_isValid;
}

bool OAICatalogsFeedProductCounts::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_original_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsFeedProductCounts::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
