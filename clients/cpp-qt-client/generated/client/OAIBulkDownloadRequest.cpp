/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIBulkDownloadRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBulkDownloadRequest::OAIBulkDownloadRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBulkDownloadRequest::OAIBulkDownloadRequest() {
    this->initializeModel();
}

OAIBulkDownloadRequest::~OAIBulkDownloadRequest() {}

void OAIBulkDownloadRequest::initializeModel() {

    m_entity_types_isSet = false;
    m_entity_types_isValid = false;

    m_entity_ids_isSet = false;
    m_entity_ids_isValid = false;

    m_updated_since_isSet = false;
    m_updated_since_isValid = false;

    m_campaign_filter_isSet = false;
    m_campaign_filter_isValid = false;

    m_output_format_isSet = false;
    m_output_format_isValid = false;
}

void OAIBulkDownloadRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBulkDownloadRequest::fromJsonObject(QJsonObject json) {

    m_entity_types_isValid = ::OpenAPI::fromJsonValue(entity_types, json[QString("entity_types")]);
    m_entity_types_isSet = !json[QString("entity_types")].isNull() && m_entity_types_isValid;

    m_entity_ids_isValid = ::OpenAPI::fromJsonValue(entity_ids, json[QString("entity_ids")]);
    m_entity_ids_isSet = !json[QString("entity_ids")].isNull() && m_entity_ids_isValid;

    m_updated_since_isValid = ::OpenAPI::fromJsonValue(updated_since, json[QString("updated_since")]);
    m_updated_since_isSet = !json[QString("updated_since")].isNull() && m_updated_since_isValid;

    m_campaign_filter_isValid = ::OpenAPI::fromJsonValue(campaign_filter, json[QString("campaign_filter")]);
    m_campaign_filter_isSet = !json[QString("campaign_filter")].isNull() && m_campaign_filter_isValid;

    m_output_format_isValid = ::OpenAPI::fromJsonValue(output_format, json[QString("output_format")]);
    m_output_format_isSet = !json[QString("output_format")].isNull() && m_output_format_isValid;
}

QString OAIBulkDownloadRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBulkDownloadRequest::asJsonObject() const {
    QJsonObject obj;
    if (entity_types.size() > 0) {
        obj.insert(QString("entity_types"), ::OpenAPI::toJsonValue(entity_types));
    }
    if (entity_ids.size() > 0) {
        obj.insert(QString("entity_ids"), ::OpenAPI::toJsonValue(entity_ids));
    }
    if (m_updated_since_isSet) {
        obj.insert(QString("updated_since"), ::OpenAPI::toJsonValue(updated_since));
    }
    if (campaign_filter.isSet()) {
        obj.insert(QString("campaign_filter"), ::OpenAPI::toJsonValue(campaign_filter));
    }
    if (output_format.isSet()) {
        obj.insert(QString("output_format"), ::OpenAPI::toJsonValue(output_format));
    }
    return obj;
}

QList<OAIBulkEntityType> OAIBulkDownloadRequest::getEntityTypes() const {
    return entity_types;
}
void OAIBulkDownloadRequest::setEntityTypes(const QList<OAIBulkEntityType> &entity_types) {
    this->entity_types = entity_types;
    this->m_entity_types_isSet = true;
}

bool OAIBulkDownloadRequest::is_entity_types_Set() const{
    return m_entity_types_isSet;
}

bool OAIBulkDownloadRequest::is_entity_types_Valid() const{
    return m_entity_types_isValid;
}

QList<QString> OAIBulkDownloadRequest::getEntityIds() const {
    return entity_ids;
}
void OAIBulkDownloadRequest::setEntityIds(const QList<QString> &entity_ids) {
    this->entity_ids = entity_ids;
    this->m_entity_ids_isSet = true;
}

bool OAIBulkDownloadRequest::is_entity_ids_Set() const{
    return m_entity_ids_isSet;
}

bool OAIBulkDownloadRequest::is_entity_ids_Valid() const{
    return m_entity_ids_isValid;
}

QString OAIBulkDownloadRequest::getUpdatedSince() const {
    return updated_since;
}
void OAIBulkDownloadRequest::setUpdatedSince(const QString &updated_since) {
    this->updated_since = updated_since;
    this->m_updated_since_isSet = true;
}

bool OAIBulkDownloadRequest::is_updated_since_Set() const{
    return m_updated_since_isSet;
}

bool OAIBulkDownloadRequest::is_updated_since_Valid() const{
    return m_updated_since_isValid;
}

OAIBulkDownloadRequest_campaign_filter OAIBulkDownloadRequest::getCampaignFilter() const {
    return campaign_filter;
}
void OAIBulkDownloadRequest::setCampaignFilter(const OAIBulkDownloadRequest_campaign_filter &campaign_filter) {
    this->campaign_filter = campaign_filter;
    this->m_campaign_filter_isSet = true;
}

bool OAIBulkDownloadRequest::is_campaign_filter_Set() const{
    return m_campaign_filter_isSet;
}

bool OAIBulkDownloadRequest::is_campaign_filter_Valid() const{
    return m_campaign_filter_isValid;
}

OAIBulkOutputFormat OAIBulkDownloadRequest::getOutputFormat() const {
    return output_format;
}
void OAIBulkDownloadRequest::setOutputFormat(const OAIBulkOutputFormat &output_format) {
    this->output_format = output_format;
    this->m_output_format_isSet = true;
}

bool OAIBulkDownloadRequest::is_output_format_Set() const{
    return m_output_format_isSet;
}

bool OAIBulkDownloadRequest::is_output_format_Valid() const{
    return m_output_format_isValid;
}

bool OAIBulkDownloadRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (entity_types.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (entity_ids.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_updated_since_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (campaign_filter.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (output_format.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBulkDownloadRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
