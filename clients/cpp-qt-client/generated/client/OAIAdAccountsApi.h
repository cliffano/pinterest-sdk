/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIAdAccountsApi_H
#define OAI_OAIAdAccountsApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIAdAccount.h"
#include "OAIAdAccountAnalyticsResponse_inner.h"
#include "OAIAdAccountCreateRequest.h"
#include "OAIAdGroupsAnalyticsResponse_inner.h"
#include "OAIAd_accounts_list_200_response.h"
#include "OAIAdsAnalyticsCreateAsyncRequest.h"
#include "OAIAdsAnalyticsCreateAsyncResponse.h"
#include "OAIAdsAnalyticsGetAsyncResponse.h"
#include "OAIAdsAnalyticsResponse_inner.h"
#include "OAICampaignsAnalyticsResponse_inner.h"
#include "OAIError.h"
#include "OAIGranularity.h"
#include "OAIProductGroupAnalyticsResponse_inner.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIAdAccountsApi : public QObject {
    Q_OBJECT

public:
    OAIAdAccountsApi(const int timeOut = 0);
    ~OAIAdAccountsApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  ad_account_id QString [required]
    * @param[in]  start_date QDate [required]
    * @param[in]  end_date QDate [required]
    * @param[in]  columns QList<QString> [required]
    * @param[in]  granularity OAIGranularity [required]
    * @param[in]  click_window_days qint32 [optional]
    * @param[in]  engagement_window_days qint32 [optional]
    * @param[in]  view_window_days qint32 [optional]
    * @param[in]  conversion_report_time QString [optional]
    */
    void adAccount_analytics(const QString &ad_account_id, const QDate &start_date, const QDate &end_date, const QList<QString> &columns, const OAIGranularity &granularity, const ::OpenAPI::OptionalParam<qint32> &click_window_days = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &engagement_window_days = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &view_window_days = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &conversion_report_time = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  oaiad_account_create_request OAIAdAccountCreateRequest [required]
    */
    void adAccounts_create(const OAIAdAccountCreateRequest &oaiad_account_create_request);

    /**
    * @param[in]  ad_account_id QString [required]
    */
    void adAccounts_get(const QString &ad_account_id);

    /**
    * @param[in]  bookmark QString [optional]
    * @param[in]  page_size qint32 [optional]
    * @param[in]  include_shared_accounts bool [optional]
    */
    void adAccounts_list(const ::OpenAPI::OptionalParam<QString> &bookmark = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &page_size = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<bool> &include_shared_accounts = ::OpenAPI::OptionalParam<bool>());

    /**
    * @param[in]  ad_account_id QString [required]
    * @param[in]  start_date QDate [required]
    * @param[in]  end_date QDate [required]
    * @param[in]  ad_group_ids QList<QString> [required]
    * @param[in]  columns QList<QString> [required]
    * @param[in]  granularity OAIGranularity [required]
    * @param[in]  click_window_days qint32 [optional]
    * @param[in]  engagement_window_days qint32 [optional]
    * @param[in]  view_window_days qint32 [optional]
    * @param[in]  conversion_report_time QString [optional]
    */
    void adGroups_analytics(const QString &ad_account_id, const QDate &start_date, const QDate &end_date, const QList<QString> &ad_group_ids, const QList<QString> &columns, const OAIGranularity &granularity, const ::OpenAPI::OptionalParam<qint32> &click_window_days = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &engagement_window_days = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &view_window_days = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &conversion_report_time = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  ad_account_id QString [required]
    * @param[in]  start_date QDate [required]
    * @param[in]  end_date QDate [required]
    * @param[in]  ad_ids QList<QString> [required]
    * @param[in]  columns QList<QString> [required]
    * @param[in]  granularity OAIGranularity [required]
    * @param[in]  click_window_days qint32 [optional]
    * @param[in]  engagement_window_days qint32 [optional]
    * @param[in]  view_window_days qint32 [optional]
    * @param[in]  conversion_report_time QString [optional]
    */
    void ads_analytics(const QString &ad_account_id, const QDate &start_date, const QDate &end_date, const QList<QString> &ad_ids, const QList<QString> &columns, const OAIGranularity &granularity, const ::OpenAPI::OptionalParam<qint32> &click_window_days = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &engagement_window_days = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &view_window_days = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &conversion_report_time = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  ad_account_id QString [required]
    * @param[in]  oai_ads_analytics_create_async_request OAIAdsAnalyticsCreateAsyncRequest [required]
    */
    void analytics_createReport(const QString &ad_account_id, const OAIAdsAnalyticsCreateAsyncRequest &oai_ads_analytics_create_async_request);

    /**
    * @param[in]  ad_account_id QString [required]
    * @param[in]  token QString [required]
    */
    void analytics_getReport(const QString &ad_account_id, const QString &token);

    /**
    * @param[in]  ad_account_id QString [required]
    * @param[in]  start_date QDate [required]
    * @param[in]  end_date QDate [required]
    * @param[in]  campaign_ids QList<QString> [required]
    * @param[in]  columns QList<QString> [required]
    * @param[in]  granularity OAIGranularity [required]
    * @param[in]  click_window_days qint32 [optional]
    * @param[in]  engagement_window_days qint32 [optional]
    * @param[in]  view_window_days qint32 [optional]
    * @param[in]  conversion_report_time QString [optional]
    */
    void campaigns_analytics(const QString &ad_account_id, const QDate &start_date, const QDate &end_date, const QList<QString> &campaign_ids, const QList<QString> &columns, const OAIGranularity &granularity, const ::OpenAPI::OptionalParam<qint32> &click_window_days = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &engagement_window_days = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &view_window_days = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &conversion_report_time = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  ad_account_id QString [required]
    * @param[in]  start_date QDate [required]
    * @param[in]  end_date QDate [required]
    * @param[in]  product_group_ids QList<QString> [required]
    * @param[in]  columns QList<QString> [required]
    * @param[in]  granularity OAIGranularity [required]
    * @param[in]  click_window_days qint32 [optional]
    * @param[in]  engagement_window_days qint32 [optional]
    * @param[in]  view_window_days qint32 [optional]
    * @param[in]  conversion_report_time QString [optional]
    */
    void productGroups_analytics(const QString &ad_account_id, const QDate &start_date, const QDate &end_date, const QList<QString> &product_group_ids, const QList<QString> &columns, const OAIGranularity &granularity, const ::OpenAPI::OptionalParam<qint32> &click_window_days = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &engagement_window_days = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &view_window_days = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &conversion_report_time = ::OpenAPI::OptionalParam<QString>());


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void adAccount_analyticsCallback(OAIHttpRequestWorker *worker);
    void adAccounts_createCallback(OAIHttpRequestWorker *worker);
    void adAccounts_getCallback(OAIHttpRequestWorker *worker);
    void adAccounts_listCallback(OAIHttpRequestWorker *worker);
    void adGroups_analyticsCallback(OAIHttpRequestWorker *worker);
    void ads_analyticsCallback(OAIHttpRequestWorker *worker);
    void analytics_createReportCallback(OAIHttpRequestWorker *worker);
    void analytics_getReportCallback(OAIHttpRequestWorker *worker);
    void campaigns_analyticsCallback(OAIHttpRequestWorker *worker);
    void productGroups_analyticsCallback(OAIHttpRequestWorker *worker);

signals:

    void adAccount_analyticsSignal(QList<OAIAdAccountAnalyticsResponse_inner> summary);
    void adAccounts_createSignal(OAIAdAccount summary);
    void adAccounts_getSignal(OAIAdAccount summary);
    void adAccounts_listSignal(OAIAd_accounts_list_200_response summary);
    void adGroups_analyticsSignal(QList<OAIAdGroupsAnalyticsResponse_inner> summary);
    void ads_analyticsSignal(QList<OAIAdsAnalyticsResponse_inner> summary);
    void analytics_createReportSignal(OAIAdsAnalyticsCreateAsyncResponse summary);
    void analytics_getReportSignal(OAIAdsAnalyticsGetAsyncResponse summary);
    void campaigns_analyticsSignal(QList<OAICampaignsAnalyticsResponse_inner> summary);
    void productGroups_analyticsSignal(QList<OAIProductGroupAnalyticsResponse_inner> summary);

    void adAccount_analyticsSignalFull(OAIHttpRequestWorker *worker, QList<OAIAdAccountAnalyticsResponse_inner> summary);
    void adAccounts_createSignalFull(OAIHttpRequestWorker *worker, OAIAdAccount summary);
    void adAccounts_getSignalFull(OAIHttpRequestWorker *worker, OAIAdAccount summary);
    void adAccounts_listSignalFull(OAIHttpRequestWorker *worker, OAIAd_accounts_list_200_response summary);
    void adGroups_analyticsSignalFull(OAIHttpRequestWorker *worker, QList<OAIAdGroupsAnalyticsResponse_inner> summary);
    void ads_analyticsSignalFull(OAIHttpRequestWorker *worker, QList<OAIAdsAnalyticsResponse_inner> summary);
    void analytics_createReportSignalFull(OAIHttpRequestWorker *worker, OAIAdsAnalyticsCreateAsyncResponse summary);
    void analytics_getReportSignalFull(OAIHttpRequestWorker *worker, OAIAdsAnalyticsGetAsyncResponse summary);
    void campaigns_analyticsSignalFull(OAIHttpRequestWorker *worker, QList<OAICampaignsAnalyticsResponse_inner> summary);
    void productGroups_analyticsSignalFull(OAIHttpRequestWorker *worker, QList<OAIProductGroupAnalyticsResponse_inner> summary);

    void adAccount_analyticsSignalE(QList<OAIAdAccountAnalyticsResponse_inner> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void adAccounts_createSignalE(OAIAdAccount summary, QNetworkReply::NetworkError error_type, QString error_str);
    void adAccounts_getSignalE(OAIAdAccount summary, QNetworkReply::NetworkError error_type, QString error_str);
    void adAccounts_listSignalE(OAIAd_accounts_list_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void adGroups_analyticsSignalE(QList<OAIAdGroupsAnalyticsResponse_inner> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ads_analyticsSignalE(QList<OAIAdsAnalyticsResponse_inner> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void analytics_createReportSignalE(OAIAdsAnalyticsCreateAsyncResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void analytics_getReportSignalE(OAIAdsAnalyticsGetAsyncResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void campaigns_analyticsSignalE(QList<OAICampaignsAnalyticsResponse_inner> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void productGroups_analyticsSignalE(QList<OAIProductGroupAnalyticsResponse_inner> summary, QNetworkReply::NetworkError error_type, QString error_str);

    void adAccount_analyticsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void adAccounts_createSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void adAccounts_getSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void adAccounts_listSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void adGroups_analyticsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ads_analyticsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void analytics_createReportSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void analytics_getReportSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void campaigns_analyticsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void productGroups_analyticsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
