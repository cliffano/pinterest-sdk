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

#include "OAIBulkDownloadRequest_campaign_filter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBulkDownloadRequest_campaign_filter::OAIBulkDownloadRequest_campaign_filter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBulkDownloadRequest_campaign_filter::OAIBulkDownloadRequest_campaign_filter() {
    this->initializeModel();
}

OAIBulkDownloadRequest_campaign_filter::~OAIBulkDownloadRequest_campaign_filter() {}

void OAIBulkDownloadRequest_campaign_filter::initializeModel() {

    m_start_time_isSet = false;
    m_start_time_isValid = false;

    m_end_time_isSet = false;
    m_end_time_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_campaign_status_isSet = false;
    m_campaign_status_isValid = false;

    m_objective_type_isSet = false;
    m_objective_type_isValid = false;
}

void OAIBulkDownloadRequest_campaign_filter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBulkDownloadRequest_campaign_filter::fromJsonObject(QJsonObject json) {

    m_start_time_isValid = ::OpenAPI::fromJsonValue(start_time, json[QString("start_time")]);
    m_start_time_isSet = !json[QString("start_time")].isNull() && m_start_time_isValid;

    m_end_time_isValid = ::OpenAPI::fromJsonValue(end_time, json[QString("end_time")]);
    m_end_time_isSet = !json[QString("end_time")].isNull() && m_end_time_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_campaign_status_isValid = ::OpenAPI::fromJsonValue(campaign_status, json[QString("campaign_status")]);
    m_campaign_status_isSet = !json[QString("campaign_status")].isNull() && m_campaign_status_isValid;

    m_objective_type_isValid = ::OpenAPI::fromJsonValue(objective_type, json[QString("objective_type")]);
    m_objective_type_isSet = !json[QString("objective_type")].isNull() && m_objective_type_isValid;
}

QString OAIBulkDownloadRequest_campaign_filter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBulkDownloadRequest_campaign_filter::asJsonObject() const {
    QJsonObject obj;
    if (m_start_time_isSet) {
        obj.insert(QString("start_time"), ::OpenAPI::toJsonValue(start_time));
    }
    if (m_end_time_isSet) {
        obj.insert(QString("end_time"), ::OpenAPI::toJsonValue(end_time));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (campaign_status.size() > 0) {
        obj.insert(QString("campaign_status"), ::OpenAPI::toJsonValue(campaign_status));
    }
    if (objective_type.size() > 0) {
        obj.insert(QString("objective_type"), ::OpenAPI::toJsonValue(objective_type));
    }
    return obj;
}

QString OAIBulkDownloadRequest_campaign_filter::getStartTime() const {
    return start_time;
}
void OAIBulkDownloadRequest_campaign_filter::setStartTime(const QString &start_time) {
    this->start_time = start_time;
    this->m_start_time_isSet = true;
}

bool OAIBulkDownloadRequest_campaign_filter::is_start_time_Set() const{
    return m_start_time_isSet;
}

bool OAIBulkDownloadRequest_campaign_filter::is_start_time_Valid() const{
    return m_start_time_isValid;
}

QString OAIBulkDownloadRequest_campaign_filter::getEndTime() const {
    return end_time;
}
void OAIBulkDownloadRequest_campaign_filter::setEndTime(const QString &end_time) {
    this->end_time = end_time;
    this->m_end_time_isSet = true;
}

bool OAIBulkDownloadRequest_campaign_filter::is_end_time_Set() const{
    return m_end_time_isSet;
}

bool OAIBulkDownloadRequest_campaign_filter::is_end_time_Valid() const{
    return m_end_time_isValid;
}

QString OAIBulkDownloadRequest_campaign_filter::getName() const {
    return name;
}
void OAIBulkDownloadRequest_campaign_filter::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIBulkDownloadRequest_campaign_filter::is_name_Set() const{
    return m_name_isSet;
}

bool OAIBulkDownloadRequest_campaign_filter::is_name_Valid() const{
    return m_name_isValid;
}

QList<OAICampaignSummaryStatus> OAIBulkDownloadRequest_campaign_filter::getCampaignStatus() const {
    return campaign_status;
}
void OAIBulkDownloadRequest_campaign_filter::setCampaignStatus(const QList<OAICampaignSummaryStatus> &campaign_status) {
    this->campaign_status = campaign_status;
    this->m_campaign_status_isSet = true;
}

bool OAIBulkDownloadRequest_campaign_filter::is_campaign_status_Set() const{
    return m_campaign_status_isSet;
}

bool OAIBulkDownloadRequest_campaign_filter::is_campaign_status_Valid() const{
    return m_campaign_status_isValid;
}

QList<OAIObjectiveType> OAIBulkDownloadRequest_campaign_filter::getObjectiveType() const {
    return objective_type;
}
void OAIBulkDownloadRequest_campaign_filter::setObjectiveType(const QList<OAIObjectiveType> &objective_type) {
    this->objective_type = objective_type;
    this->m_objective_type_isSet = true;
}

bool OAIBulkDownloadRequest_campaign_filter::is_objective_type_Set() const{
    return m_objective_type_isSet;
}

bool OAIBulkDownloadRequest_campaign_filter::is_objective_type_Valid() const{
    return m_objective_type_isValid;
}

bool OAIBulkDownloadRequest_campaign_filter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_start_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_end_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (campaign_status.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (objective_type.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBulkDownloadRequest_campaign_filter::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
