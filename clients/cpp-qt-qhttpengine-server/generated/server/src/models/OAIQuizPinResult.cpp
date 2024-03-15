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

#include "OAIQuizPinResult.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIQuizPinResult::OAIQuizPinResult(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIQuizPinResult::OAIQuizPinResult() {
    this->initializeModel();
}

OAIQuizPinResult::~OAIQuizPinResult() {}

void OAIQuizPinResult::initializeModel() {

    m_organic_pin_id_isSet = false;
    m_organic_pin_id_isValid = false;

    m_android_deep_link_isSet = false;
    m_android_deep_link_isValid = false;

    m_ios_deep_link_isSet = false;
    m_ios_deep_link_isValid = false;

    m_destination_url_isSet = false;
    m_destination_url_isValid = false;

    m_result_id_isSet = false;
    m_result_id_isValid = false;
}

void OAIQuizPinResult::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIQuizPinResult::fromJsonObject(QJsonObject json) {

    m_organic_pin_id_isValid = ::OpenAPI::fromJsonValue(organic_pin_id, json[QString("organic_pin_id")]);
    m_organic_pin_id_isSet = !json[QString("organic_pin_id")].isNull() && m_organic_pin_id_isValid;

    m_android_deep_link_isValid = ::OpenAPI::fromJsonValue(android_deep_link, json[QString("android_deep_link")]);
    m_android_deep_link_isSet = !json[QString("android_deep_link")].isNull() && m_android_deep_link_isValid;

    m_ios_deep_link_isValid = ::OpenAPI::fromJsonValue(ios_deep_link, json[QString("ios_deep_link")]);
    m_ios_deep_link_isSet = !json[QString("ios_deep_link")].isNull() && m_ios_deep_link_isValid;

    m_destination_url_isValid = ::OpenAPI::fromJsonValue(destination_url, json[QString("destination_url")]);
    m_destination_url_isSet = !json[QString("destination_url")].isNull() && m_destination_url_isValid;

    m_result_id_isValid = ::OpenAPI::fromJsonValue(result_id, json[QString("result_id")]);
    m_result_id_isSet = !json[QString("result_id")].isNull() && m_result_id_isValid;
}

QString OAIQuizPinResult::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIQuizPinResult::asJsonObject() const {
    QJsonObject obj;
    if (m_organic_pin_id_isSet) {
        obj.insert(QString("organic_pin_id"), ::OpenAPI::toJsonValue(organic_pin_id));
    }
    if (m_android_deep_link_isSet) {
        obj.insert(QString("android_deep_link"), ::OpenAPI::toJsonValue(android_deep_link));
    }
    if (m_ios_deep_link_isSet) {
        obj.insert(QString("ios_deep_link"), ::OpenAPI::toJsonValue(ios_deep_link));
    }
    if (m_destination_url_isSet) {
        obj.insert(QString("destination_url"), ::OpenAPI::toJsonValue(destination_url));
    }
    if (m_result_id_isSet) {
        obj.insert(QString("result_id"), ::OpenAPI::toJsonValue(result_id));
    }
    return obj;
}

QString OAIQuizPinResult::getOrganicPinId() const {
    return organic_pin_id;
}
void OAIQuizPinResult::setOrganicPinId(const QString &organic_pin_id) {
    this->organic_pin_id = organic_pin_id;
    this->m_organic_pin_id_isSet = true;
}

bool OAIQuizPinResult::is_organic_pin_id_Set() const{
    return m_organic_pin_id_isSet;
}

bool OAIQuizPinResult::is_organic_pin_id_Valid() const{
    return m_organic_pin_id_isValid;
}

QString OAIQuizPinResult::getAndroidDeepLink() const {
    return android_deep_link;
}
void OAIQuizPinResult::setAndroidDeepLink(const QString &android_deep_link) {
    this->android_deep_link = android_deep_link;
    this->m_android_deep_link_isSet = true;
}

bool OAIQuizPinResult::is_android_deep_link_Set() const{
    return m_android_deep_link_isSet;
}

bool OAIQuizPinResult::is_android_deep_link_Valid() const{
    return m_android_deep_link_isValid;
}

QString OAIQuizPinResult::getIosDeepLink() const {
    return ios_deep_link;
}
void OAIQuizPinResult::setIosDeepLink(const QString &ios_deep_link) {
    this->ios_deep_link = ios_deep_link;
    this->m_ios_deep_link_isSet = true;
}

bool OAIQuizPinResult::is_ios_deep_link_Set() const{
    return m_ios_deep_link_isSet;
}

bool OAIQuizPinResult::is_ios_deep_link_Valid() const{
    return m_ios_deep_link_isValid;
}

QString OAIQuizPinResult::getDestinationUrl() const {
    return destination_url;
}
void OAIQuizPinResult::setDestinationUrl(const QString &destination_url) {
    this->destination_url = destination_url;
    this->m_destination_url_isSet = true;
}

bool OAIQuizPinResult::is_destination_url_Set() const{
    return m_destination_url_isSet;
}

bool OAIQuizPinResult::is_destination_url_Valid() const{
    return m_destination_url_isValid;
}

double OAIQuizPinResult::getResultId() const {
    return result_id;
}
void OAIQuizPinResult::setResultId(const double &result_id) {
    this->result_id = result_id;
    this->m_result_id_isSet = true;
}

bool OAIQuizPinResult::is_result_id_Set() const{
    return m_result_id_isSet;
}

bool OAIQuizPinResult::is_result_id_Valid() const{
    return m_result_id_isValid;
}

bool OAIQuizPinResult::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_organic_pin_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_android_deep_link_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ios_deep_link_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_destination_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_result_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIQuizPinResult::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
