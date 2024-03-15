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

#include "OAIAdsAnalyticsGetAsyncResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAdsAnalyticsGetAsyncResponse::OAIAdsAnalyticsGetAsyncResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAdsAnalyticsGetAsyncResponse::OAIAdsAnalyticsGetAsyncResponse() {
    this->initializeModel();
}

OAIAdsAnalyticsGetAsyncResponse::~OAIAdsAnalyticsGetAsyncResponse() {}

void OAIAdsAnalyticsGetAsyncResponse::initializeModel() {

    m_report_status_isSet = false;
    m_report_status_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_size_isSet = false;
    m_size_isValid = false;
}

void OAIAdsAnalyticsGetAsyncResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAdsAnalyticsGetAsyncResponse::fromJsonObject(QJsonObject json) {

    m_report_status_isValid = ::OpenAPI::fromJsonValue(m_report_status, json[QString("report_status")]);
    m_report_status_isSet = !json[QString("report_status")].isNull() && m_report_status_isValid;

    m_url_isValid = ::OpenAPI::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_size_isValid = ::OpenAPI::fromJsonValue(m_size, json[QString("size")]);
    m_size_isSet = !json[QString("size")].isNull() && m_size_isValid;
}

QString OAIAdsAnalyticsGetAsyncResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAdsAnalyticsGetAsyncResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_report_status.isSet()) {
        obj.insert(QString("report_status"), ::OpenAPI::toJsonValue(m_report_status));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(m_url));
    }
    if (m_size_isSet) {
        obj.insert(QString("size"), ::OpenAPI::toJsonValue(m_size));
    }
    return obj;
}

OAIBulkReportingJobStatus OAIAdsAnalyticsGetAsyncResponse::getReportStatus() const {
    return m_report_status;
}
void OAIAdsAnalyticsGetAsyncResponse::setReportStatus(const OAIBulkReportingJobStatus &report_status) {
    m_report_status = report_status;
    m_report_status_isSet = true;
}

bool OAIAdsAnalyticsGetAsyncResponse::is_report_status_Set() const{
    return m_report_status_isSet;
}

bool OAIAdsAnalyticsGetAsyncResponse::is_report_status_Valid() const{
    return m_report_status_isValid;
}

QString OAIAdsAnalyticsGetAsyncResponse::getUrl() const {
    return m_url;
}
void OAIAdsAnalyticsGetAsyncResponse::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIAdsAnalyticsGetAsyncResponse::is_url_Set() const{
    return m_url_isSet;
}

bool OAIAdsAnalyticsGetAsyncResponse::is_url_Valid() const{
    return m_url_isValid;
}

double OAIAdsAnalyticsGetAsyncResponse::getSize() const {
    return m_size;
}
void OAIAdsAnalyticsGetAsyncResponse::setSize(const double &size) {
    m_size = size;
    m_size_isSet = true;
}

bool OAIAdsAnalyticsGetAsyncResponse::is_size_Set() const{
    return m_size_isSet;
}

bool OAIAdsAnalyticsGetAsyncResponse::is_size_Valid() const{
    return m_size_isValid;
}

bool OAIAdsAnalyticsGetAsyncResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_report_status.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_size_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAdsAnalyticsGetAsyncResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
