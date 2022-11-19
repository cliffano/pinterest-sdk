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

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QDebug>

#include "OAIAdAccountsApiHandler.h"
#include "OAIAdAccountsApiRequest.h"

namespace OpenAPI {

OAIAdAccountsApiHandler::OAIAdAccountsApiHandler(){

}

OAIAdAccountsApiHandler::~OAIAdAccountsApiHandler(){

}

void OAIAdAccountsApiHandler::adAccountTargetingAnalytics_get(QString ad_account_id, QDate start_date, QDate end_date, QList<OAIAdsAnalyticsTargetingType> targeting_types, QList<QString> columns, OAIGranularity granularity, qint32 click_window_days, qint32 engagement_window_days, qint32 view_window_days, QString conversion_report_time, OAIConversionReportAttributionType attribution_types) {
    Q_UNUSED(ad_account_id);
    Q_UNUSED(start_date);
    Q_UNUSED(end_date);
    Q_UNUSED(targeting_types);
    Q_UNUSED(columns);
    Q_UNUSED(granularity);
    Q_UNUSED(click_window_days);
    Q_UNUSED(engagement_window_days);
    Q_UNUSED(view_window_days);
    Q_UNUSED(conversion_report_time);
    Q_UNUSED(attribution_types);
    auto reqObj = qobject_cast<OAIAdAccountsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIMetricsResponse res;
        reqObj->adAccountTargetingAnalytics_getResponse(res);
    }
}
void OAIAdAccountsApiHandler::adAccount_analytics(QString ad_account_id, QDate start_date, QDate end_date, QList<QString> columns, OAIGranularity granularity, qint32 click_window_days, qint32 engagement_window_days, qint32 view_window_days, QString conversion_report_time) {
    Q_UNUSED(ad_account_id);
    Q_UNUSED(start_date);
    Q_UNUSED(end_date);
    Q_UNUSED(columns);
    Q_UNUSED(granularity);
    Q_UNUSED(click_window_days);
    Q_UNUSED(engagement_window_days);
    Q_UNUSED(view_window_days);
    Q_UNUSED(conversion_report_time);
    auto reqObj = qobject_cast<OAIAdAccountsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        QList<OAIAdAccountAnalyticsResponse_inner> res;
        reqObj->adAccount_analyticsResponse(res);
    }
}
void OAIAdAccountsApiHandler::adAccounts_create(OAIAdAccountCreateRequest oaiad_account_create_request) {
    Q_UNUSED(oaiad_account_create_request);
    auto reqObj = qobject_cast<OAIAdAccountsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIAdAccount res;
        reqObj->adAccounts_createResponse(res);
    }
}
void OAIAdAccountsApiHandler::adAccounts_get(QString ad_account_id) {
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAIAdAccountsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIAdAccount res;
        reqObj->adAccounts_getResponse(res);
    }
}
void OAIAdAccountsApiHandler::adAccounts_list(QString bookmark, qint32 page_size, bool include_shared_accounts) {
    Q_UNUSED(bookmark);
    Q_UNUSED(page_size);
    Q_UNUSED(include_shared_accounts);
    auto reqObj = qobject_cast<OAIAdAccountsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIAd_accounts_list_200_response res;
        reqObj->adAccounts_listResponse(res);
    }
}
void OAIAdAccountsApiHandler::analytics_createReport(QString ad_account_id, OAIAdsAnalyticsCreateAsyncRequest oai_ads_analytics_create_async_request) {
    Q_UNUSED(ad_account_id);
    Q_UNUSED(oai_ads_analytics_create_async_request);
    auto reqObj = qobject_cast<OAIAdAccountsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIAdsAnalyticsCreateAsyncResponse res;
        reqObj->analytics_createReportResponse(res);
    }
}
void OAIAdAccountsApiHandler::analytics_getReport(QString ad_account_id, QString token) {
    Q_UNUSED(ad_account_id);
    Q_UNUSED(token);
    auto reqObj = qobject_cast<OAIAdAccountsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIAdsAnalyticsGetAsyncResponse res;
        reqObj->analytics_getReportResponse(res);
    }
}


}
