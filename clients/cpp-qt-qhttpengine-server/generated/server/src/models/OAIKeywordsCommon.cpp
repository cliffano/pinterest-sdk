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

#include "OAIKeywordsCommon.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIKeywordsCommon::OAIKeywordsCommon(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIKeywordsCommon::OAIKeywordsCommon() {
    this->initializeModel();
}

OAIKeywordsCommon::~OAIKeywordsCommon() {}

void OAIKeywordsCommon::initializeModel() {

    m_bid_isSet = false;
    m_bid_isValid = false;

    m_match_type_isSet = false;
    m_match_type_isValid = false;

    m_value_isSet = false;
    m_value_isValid = false;
}

void OAIKeywordsCommon::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIKeywordsCommon::fromJsonObject(QJsonObject json) {

    m_bid_isValid = ::OpenAPI::fromJsonValue(bid, json[QString("bid")]);
    m_bid_isSet = !json[QString("bid")].isNull() && m_bid_isValid;

    m_match_type_isValid = ::OpenAPI::fromJsonValue(match_type, json[QString("match_type")]);
    m_match_type_isSet = !json[QString("match_type")].isNull() && m_match_type_isValid;

    m_value_isValid = ::OpenAPI::fromJsonValue(value, json[QString("value")]);
    m_value_isSet = !json[QString("value")].isNull() && m_value_isValid;
}

QString OAIKeywordsCommon::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIKeywordsCommon::asJsonObject() const {
    QJsonObject obj;
    if (m_bid_isSet) {
        obj.insert(QString("bid"), ::OpenAPI::toJsonValue(bid));
    }
    if (match_type.isSet()) {
        obj.insert(QString("match_type"), ::OpenAPI::toJsonValue(match_type));
    }
    if (m_value_isSet) {
        obj.insert(QString("value"), ::OpenAPI::toJsonValue(value));
    }
    return obj;
}

qint32 OAIKeywordsCommon::getBid() const {
    return bid;
}
void OAIKeywordsCommon::setBid(const qint32 &bid) {
    this->bid = bid;
    this->m_bid_isSet = true;
}

bool OAIKeywordsCommon::is_bid_Set() const{
    return m_bid_isSet;
}

bool OAIKeywordsCommon::is_bid_Valid() const{
    return m_bid_isValid;
}

OAIMatchTypeResponse OAIKeywordsCommon::getMatchType() const {
    return match_type;
}
void OAIKeywordsCommon::setMatchType(const OAIMatchTypeResponse &match_type) {
    this->match_type = match_type;
    this->m_match_type_isSet = true;
}

bool OAIKeywordsCommon::is_match_type_Set() const{
    return m_match_type_isSet;
}

bool OAIKeywordsCommon::is_match_type_Valid() const{
    return m_match_type_isValid;
}

QString OAIKeywordsCommon::getValue() const {
    return value;
}
void OAIKeywordsCommon::setValue(const QString &value) {
    this->value = value;
    this->m_value_isSet = true;
}

bool OAIKeywordsCommon::is_value_Set() const{
    return m_value_isSet;
}

bool OAIKeywordsCommon::is_value_Valid() const{
    return m_value_isValid;
}

bool OAIKeywordsCommon::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_bid_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (match_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_value_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIKeywordsCommon::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_match_type_isValid && m_value_isValid && true;
}

} // namespace OpenAPI
