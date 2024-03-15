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

#include "OAIPinMediaSourcePinURL.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPinMediaSourcePinURL::OAIPinMediaSourcePinURL(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPinMediaSourcePinURL::OAIPinMediaSourcePinURL() {
    this->initializeModel();
}

OAIPinMediaSourcePinURL::~OAIPinMediaSourcePinURL() {}

void OAIPinMediaSourcePinURL::initializeModel() {

    m_source_type_isSet = false;
    m_source_type_isValid = false;

    m_is_affiliate_link_isSet = false;
    m_is_affiliate_link_isValid = false;
}

void OAIPinMediaSourcePinURL::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPinMediaSourcePinURL::fromJsonObject(QJsonObject json) {

    m_source_type_isValid = ::OpenAPI::fromJsonValue(m_source_type, json[QString("source_type")]);
    m_source_type_isSet = !json[QString("source_type")].isNull() && m_source_type_isValid;

    m_is_affiliate_link_isValid = ::OpenAPI::fromJsonValue(m_is_affiliate_link, json[QString("is_affiliate_link")]);
    m_is_affiliate_link_isSet = !json[QString("is_affiliate_link")].isNull() && m_is_affiliate_link_isValid;
}

QString OAIPinMediaSourcePinURL::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPinMediaSourcePinURL::asJsonObject() const {
    QJsonObject obj;
    if (m_source_type_isSet) {
        obj.insert(QString("source_type"), ::OpenAPI::toJsonValue(m_source_type));
    }
    if (m_is_affiliate_link_isSet) {
        obj.insert(QString("is_affiliate_link"), ::OpenAPI::toJsonValue(m_is_affiliate_link));
    }
    return obj;
}

QString OAIPinMediaSourcePinURL::getSourceType() const {
    return m_source_type;
}
void OAIPinMediaSourcePinURL::setSourceType(const QString &source_type) {
    m_source_type = source_type;
    m_source_type_isSet = true;
}

bool OAIPinMediaSourcePinURL::is_source_type_Set() const{
    return m_source_type_isSet;
}

bool OAIPinMediaSourcePinURL::is_source_type_Valid() const{
    return m_source_type_isValid;
}

bool OAIPinMediaSourcePinURL::isIsAffiliateLink() const {
    return m_is_affiliate_link;
}
void OAIPinMediaSourcePinURL::setIsAffiliateLink(const bool &is_affiliate_link) {
    m_is_affiliate_link = is_affiliate_link;
    m_is_affiliate_link_isSet = true;
}

bool OAIPinMediaSourcePinURL::is_is_affiliate_link_Set() const{
    return m_is_affiliate_link_isSet;
}

bool OAIPinMediaSourcePinURL::is_is_affiliate_link_Valid() const{
    return m_is_affiliate_link_isValid;
}

bool OAIPinMediaSourcePinURL::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_source_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_affiliate_link_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPinMediaSourcePinURL::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_source_type_isValid && true;
}

} // namespace OpenAPI