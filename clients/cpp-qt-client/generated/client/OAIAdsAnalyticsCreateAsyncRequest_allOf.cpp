/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIAdsAnalyticsCreateAsyncRequest_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAdsAnalyticsCreateAsyncRequest_allOf::OAIAdsAnalyticsCreateAsyncRequest_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAdsAnalyticsCreateAsyncRequest_allOf::OAIAdsAnalyticsCreateAsyncRequest_allOf() {
    this->initializeModel();
}

OAIAdsAnalyticsCreateAsyncRequest_allOf::~OAIAdsAnalyticsCreateAsyncRequest_allOf() {}

void OAIAdsAnalyticsCreateAsyncRequest_allOf::initializeModel() {

    m_start_date_isSet = false;
    m_start_date_isValid = false;

    m_end_date_isSet = false;
    m_end_date_isValid = false;

    m_granularity_isSet = false;
    m_granularity_isValid = false;

    m_click_window_days_isSet = false;
    m_click_window_days_isValid = false;

    m_engagement_window_days_isSet = false;
    m_engagement_window_days_isValid = false;

    m_view_window_days_isSet = false;
    m_view_window_days_isValid = false;

    m_conversion_report_time_isSet = false;
    m_conversion_report_time_isValid = false;

    m_attribution_types_isSet = false;
    m_attribution_types_isValid = false;
}

void OAIAdsAnalyticsCreateAsyncRequest_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAdsAnalyticsCreateAsyncRequest_allOf::fromJsonObject(QJsonObject json) {

    m_start_date_isValid = ::OpenAPI::fromJsonValue(start_date, json[QString("start_date")]);
    m_start_date_isSet = !json[QString("start_date")].isNull() && m_start_date_isValid;

    m_end_date_isValid = ::OpenAPI::fromJsonValue(end_date, json[QString("end_date")]);
    m_end_date_isSet = !json[QString("end_date")].isNull() && m_end_date_isValid;

    m_granularity_isValid = ::OpenAPI::fromJsonValue(granularity, json[QString("granularity")]);
    m_granularity_isSet = !json[QString("granularity")].isNull() && m_granularity_isValid;

    m_click_window_days_isValid = ::OpenAPI::fromJsonValue(click_window_days, json[QString("click_window_days")]);
    m_click_window_days_isSet = !json[QString("click_window_days")].isNull() && m_click_window_days_isValid;

    m_engagement_window_days_isValid = ::OpenAPI::fromJsonValue(engagement_window_days, json[QString("engagement_window_days")]);
    m_engagement_window_days_isSet = !json[QString("engagement_window_days")].isNull() && m_engagement_window_days_isValid;

    m_view_window_days_isValid = ::OpenAPI::fromJsonValue(view_window_days, json[QString("view_window_days")]);
    m_view_window_days_isSet = !json[QString("view_window_days")].isNull() && m_view_window_days_isValid;

    m_conversion_report_time_isValid = ::OpenAPI::fromJsonValue(conversion_report_time, json[QString("conversion_report_time")]);
    m_conversion_report_time_isSet = !json[QString("conversion_report_time")].isNull() && m_conversion_report_time_isValid;

    m_attribution_types_isValid = ::OpenAPI::fromJsonValue(attribution_types, json[QString("attribution_types")]);
    m_attribution_types_isSet = !json[QString("attribution_types")].isNull() && m_attribution_types_isValid;
}

QString OAIAdsAnalyticsCreateAsyncRequest_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAdsAnalyticsCreateAsyncRequest_allOf::asJsonObject() const {
    QJsonObject obj;
    if (m_start_date_isSet) {
        obj.insert(QString("start_date"), ::OpenAPI::toJsonValue(start_date));
    }
    if (m_end_date_isSet) {
        obj.insert(QString("end_date"), ::OpenAPI::toJsonValue(end_date));
    }
    if (granularity.isSet()) {
        obj.insert(QString("granularity"), ::OpenAPI::toJsonValue(granularity));
    }
    if (click_window_days.isSet()) {
        obj.insert(QString("click_window_days"), ::OpenAPI::toJsonValue(click_window_days));
    }
    if (engagement_window_days.isSet()) {
        obj.insert(QString("engagement_window_days"), ::OpenAPI::toJsonValue(engagement_window_days));
    }
    if (view_window_days.isSet()) {
        obj.insert(QString("view_window_days"), ::OpenAPI::toJsonValue(view_window_days));
    }
    if (conversion_report_time.isSet()) {
        obj.insert(QString("conversion_report_time"), ::OpenAPI::toJsonValue(conversion_report_time));
    }
    if (attribution_types.size() > 0) {
        obj.insert(QString("attribution_types"), ::OpenAPI::toJsonValue(attribution_types));
    }
    return obj;
}

QString OAIAdsAnalyticsCreateAsyncRequest_allOf::getStartDate() const {
    return start_date;
}
void OAIAdsAnalyticsCreateAsyncRequest_allOf::setStartDate(const QString &start_date) {
    this->start_date = start_date;
    this->m_start_date_isSet = true;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_start_date_Set() const{
    return m_start_date_isSet;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_start_date_Valid() const{
    return m_start_date_isValid;
}

QString OAIAdsAnalyticsCreateAsyncRequest_allOf::getEndDate() const {
    return end_date;
}
void OAIAdsAnalyticsCreateAsyncRequest_allOf::setEndDate(const QString &end_date) {
    this->end_date = end_date;
    this->m_end_date_isSet = true;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_end_date_Set() const{
    return m_end_date_isSet;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_end_date_Valid() const{
    return m_end_date_isValid;
}

OAIGranularity OAIAdsAnalyticsCreateAsyncRequest_allOf::getGranularity() const {
    return granularity;
}
void OAIAdsAnalyticsCreateAsyncRequest_allOf::setGranularity(const OAIGranularity &granularity) {
    this->granularity = granularity;
    this->m_granularity_isSet = true;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_granularity_Set() const{
    return m_granularity_isSet;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_granularity_Valid() const{
    return m_granularity_isValid;
}

OAIConversionAttributionWindowDays OAIAdsAnalyticsCreateAsyncRequest_allOf::getClickWindowDays() const {
    return click_window_days;
}
void OAIAdsAnalyticsCreateAsyncRequest_allOf::setClickWindowDays(const OAIConversionAttributionWindowDays &click_window_days) {
    this->click_window_days = click_window_days;
    this->m_click_window_days_isSet = true;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_click_window_days_Set() const{
    return m_click_window_days_isSet;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_click_window_days_Valid() const{
    return m_click_window_days_isValid;
}

OAIConversionAttributionWindowDays OAIAdsAnalyticsCreateAsyncRequest_allOf::getEngagementWindowDays() const {
    return engagement_window_days;
}
void OAIAdsAnalyticsCreateAsyncRequest_allOf::setEngagementWindowDays(const OAIConversionAttributionWindowDays &engagement_window_days) {
    this->engagement_window_days = engagement_window_days;
    this->m_engagement_window_days_isSet = true;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_engagement_window_days_Set() const{
    return m_engagement_window_days_isSet;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_engagement_window_days_Valid() const{
    return m_engagement_window_days_isValid;
}

OAIConversionAttributionWindowDays OAIAdsAnalyticsCreateAsyncRequest_allOf::getViewWindowDays() const {
    return view_window_days;
}
void OAIAdsAnalyticsCreateAsyncRequest_allOf::setViewWindowDays(const OAIConversionAttributionWindowDays &view_window_days) {
    this->view_window_days = view_window_days;
    this->m_view_window_days_isSet = true;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_view_window_days_Set() const{
    return m_view_window_days_isSet;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_view_window_days_Valid() const{
    return m_view_window_days_isValid;
}

OAIConversionReportTimeType OAIAdsAnalyticsCreateAsyncRequest_allOf::getConversionReportTime() const {
    return conversion_report_time;
}
void OAIAdsAnalyticsCreateAsyncRequest_allOf::setConversionReportTime(const OAIConversionReportTimeType &conversion_report_time) {
    this->conversion_report_time = conversion_report_time;
    this->m_conversion_report_time_isSet = true;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_conversion_report_time_Set() const{
    return m_conversion_report_time_isSet;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_conversion_report_time_Valid() const{
    return m_conversion_report_time_isValid;
}

QList<OAIConversionReportAttributionType> OAIAdsAnalyticsCreateAsyncRequest_allOf::getAttributionTypes() const {
    return attribution_types;
}
void OAIAdsAnalyticsCreateAsyncRequest_allOf::setAttributionTypes(const QList<OAIConversionReportAttributionType> &attribution_types) {
    this->attribution_types = attribution_types;
    this->m_attribution_types_isSet = true;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_attribution_types_Set() const{
    return m_attribution_types_isSet;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::is_attribution_types_Valid() const{
    return m_attribution_types_isValid;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_start_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_end_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (granularity.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (click_window_days.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (engagement_window_days.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (view_window_days.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (conversion_report_time.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (attribution_types.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAdsAnalyticsCreateAsyncRequest_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_start_date_isValid && m_end_date_isValid && m_granularity_isValid && true;
}

} // namespace OpenAPI
