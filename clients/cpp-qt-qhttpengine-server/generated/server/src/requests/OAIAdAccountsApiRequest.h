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

#ifndef OAI_OAIAdAccountsApiRequest_H
#define OAI_OAIAdAccountsApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAIAdsAnalyticsCreateAsyncRequest.h"
#include "OAIAdsAnalyticsCreateAsyncResponse.h"
#include "OAIAdsAnalyticsGetAsyncResponse.h"
#include "OAIAnyType.h"
#include "OAIError.h"
#include "OAIGranularity.h"
#include "OAIObject.h"
#include "OAIPaginated.h"
#include <QString>
#include <QMap>
#include "OAIAdAccountsApiHandler.h"

namespace OpenAPI {

class OAIAdAccountsApiRequest : public QObject
{
    Q_OBJECT

public:
    OAIAdAccountsApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIAdAccountsApiHandler> handler);
    virtual ~OAIAdAccountsApiRequest();

    void adAccount_analyticsRequest(const QString& ad_account_id);
    void adAccounts_listRequest();
    void adGroups_analyticsRequest(const QString& ad_account_id);
    void adGroups_listRequest(const QString& ad_account_id);
    void ads_analyticsRequest(const QString& ad_account_id);
    void ads_listRequest(const QString& ad_account_id);
    void analytics_createReportRequest(const QString& ad_account_id);
    void analytics_getReportRequest(const QString& ad_account_id);
    void campaigns_analyticsRequest(const QString& ad_account_id);
    void campaigns_listRequest(const QString& ad_account_id);
    void productGroups_analyticsRequest(const QString& ad_account_id);
    

    void adAccount_analyticsResponse(const QList<QMap<QString, OAIObject>>& res);
    void adAccounts_listResponse(const OAIPaginated& res);
    void adGroups_analyticsResponse(const QList<QMap<QString, OAIObject>>& res);
    void adGroups_listResponse(const OAIPaginated& res);
    void ads_analyticsResponse(const QList<QMap<QString, OAIObject>>& res);
    void ads_listResponse(const OAIPaginated& res);
    void analytics_createReportResponse(const OAIAdsAnalyticsCreateAsyncResponse& res);
    void analytics_getReportResponse(const OAIAdsAnalyticsGetAsyncResponse& res);
    void campaigns_analyticsResponse(const QList<QMap<QString, OAIObject>>& res);
    void campaigns_listResponse(const OAIPaginated& res);
    void productGroups_analyticsResponse(const QList<QMap<QString, OAIObject>>& res);
    

    void adAccount_analyticsError(const QList<QMap<QString, OAIObject>>& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void adAccounts_listError(const OAIPaginated& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void adGroups_analyticsError(const QList<QMap<QString, OAIObject>>& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void adGroups_listError(const OAIPaginated& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void ads_analyticsError(const QList<QMap<QString, OAIObject>>& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void ads_listError(const OAIPaginated& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void analytics_createReportError(const OAIAdsAnalyticsCreateAsyncResponse& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void analytics_getReportError(const OAIAdsAnalyticsGetAsyncResponse& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void campaigns_analyticsError(const QList<QMap<QString, OAIObject>>& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void campaigns_listError(const OAIPaginated& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void productGroups_analyticsError(const QList<QMap<QString, OAIObject>>& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

signals:
    void adAccount_analytics(QString ad_account_id, QDate start_date, QDate end_date, QList<QString> columns, OAIGranularity granularity, qint32 click_window_days, qint32 engagement_window_days, qint32 view_window_days, QString conversion_report_time);
    void adAccounts_list(QString bookmark, qint32 page_size, bool include_shared_accounts);
    void adGroups_analytics(QString ad_account_id, QDate start_date, QDate end_date, QList<QString> ad_group_ids, QList<QString> columns, OAIGranularity granularity, qint32 click_window_days, qint32 engagement_window_days, qint32 view_window_days, QString conversion_report_time);
    void adGroups_list(QString ad_account_id, QList<QString> campaign_ids, QList<QString> ad_group_ids, QList<QString> entity_statuses, qint32 page_size, QString order, QString bookmark, bool translate_interests_to_names);
    void ads_analytics(QString ad_account_id, QDate start_date, QDate end_date, QList<QString> ad_ids, QList<QString> columns, OAIGranularity granularity, qint32 click_window_days, qint32 engagement_window_days, qint32 view_window_days, QString conversion_report_time);
    void ads_list(QString ad_account_id, QList<QString> campaign_ids, QList<QString> ad_group_ids, QList<QString> ad_ids, QList<QString> entity_statuses, qint32 page_size, QString order, QString bookmark);
    void analytics_createReport(QString ad_account_id, OAIAdsAnalyticsCreateAsyncRequest oai_ads_analytics_create_async_request);
    void analytics_getReport(QString ad_account_id, QString token);
    void campaigns_analytics(QString ad_account_id, QDate start_date, QDate end_date, QList<QString> campaign_ids, QList<QString> columns, OAIGranularity granularity, qint32 click_window_days, qint32 engagement_window_days, qint32 view_window_days, QString conversion_report_time);
    void campaigns_list(QString ad_account_id, QList<QString> campaign_ids, QList<QString> entity_statuses, qint32 page_size, QString order, QString bookmark);
    void productGroups_analytics(QString ad_account_id, QDate start_date, QDate end_date, QList<QString> product_group_ids, QList<QString> columns, OAIGranularity granularity, qint32 click_window_days, qint32 engagement_window_days, qint32 view_window_days, QString conversion_report_time);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAIAdAccountsApiHandler> handler;

    inline void setSocketResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
    }
};

}

#endif // OAI_OAIAdAccountsApiRequest_H
