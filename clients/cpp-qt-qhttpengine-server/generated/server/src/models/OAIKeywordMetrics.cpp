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

#include "OAIKeywordMetrics.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIKeywordMetrics::OAIKeywordMetrics(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIKeywordMetrics::OAIKeywordMetrics() {
    this->initializeModel();
}

OAIKeywordMetrics::~OAIKeywordMetrics() {}

void OAIKeywordMetrics::initializeModel() {

    m_avg_cpc_in_micro_currency_isSet = false;
    m_avg_cpc_in_micro_currency_isValid = false;

    m_keyword_query_volume_isSet = false;
    m_keyword_query_volume_isValid = false;
}

void OAIKeywordMetrics::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIKeywordMetrics::fromJsonObject(QJsonObject json) {

    m_avg_cpc_in_micro_currency_isValid = ::OpenAPI::fromJsonValue(avg_cpc_in_micro_currency, json[QString("avg_cpc_in_micro_currency")]);
    m_avg_cpc_in_micro_currency_isSet = !json[QString("avg_cpc_in_micro_currency")].isNull() && m_avg_cpc_in_micro_currency_isValid;

    m_keyword_query_volume_isValid = ::OpenAPI::fromJsonValue(keyword_query_volume, json[QString("keyword_query_volume")]);
    m_keyword_query_volume_isSet = !json[QString("keyword_query_volume")].isNull() && m_keyword_query_volume_isValid;
}

QString OAIKeywordMetrics::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIKeywordMetrics::asJsonObject() const {
    QJsonObject obj;
    if (m_avg_cpc_in_micro_currency_isSet) {
        obj.insert(QString("avg_cpc_in_micro_currency"), ::OpenAPI::toJsonValue(avg_cpc_in_micro_currency));
    }
    if (m_keyword_query_volume_isSet) {
        obj.insert(QString("keyword_query_volume"), ::OpenAPI::toJsonValue(keyword_query_volume));
    }
    return obj;
}

double OAIKeywordMetrics::getAvgCpcInMicroCurrency() const {
    return avg_cpc_in_micro_currency;
}
void OAIKeywordMetrics::setAvgCpcInMicroCurrency(const double &avg_cpc_in_micro_currency) {
    this->avg_cpc_in_micro_currency = avg_cpc_in_micro_currency;
    this->m_avg_cpc_in_micro_currency_isSet = true;
}

bool OAIKeywordMetrics::is_avg_cpc_in_micro_currency_Set() const{
    return m_avg_cpc_in_micro_currency_isSet;
}

bool OAIKeywordMetrics::is_avg_cpc_in_micro_currency_Valid() const{
    return m_avg_cpc_in_micro_currency_isValid;
}

QString OAIKeywordMetrics::getKeywordQueryVolume() const {
    return keyword_query_volume;
}
void OAIKeywordMetrics::setKeywordQueryVolume(const QString &keyword_query_volume) {
    this->keyword_query_volume = keyword_query_volume;
    this->m_keyword_query_volume_isSet = true;
}

bool OAIKeywordMetrics::is_keyword_query_volume_Set() const{
    return m_keyword_query_volume_isSet;
}

bool OAIKeywordMetrics::is_keyword_query_volume_Valid() const{
    return m_keyword_query_volume_isValid;
}

bool OAIKeywordMetrics::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_avg_cpc_in_micro_currency_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_keyword_query_volume_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIKeywordMetrics::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
