/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIUserAccountApi_H
#define OAI_OAIUserAccountApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIAccount.h"
#include "OAIAnalyticsMetricsResponse.h"
#include "OAIError.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIUserAccountApi : public QObject {
    Q_OBJECT

public:
    OAIUserAccountApi(const int timeOut = 0);
    ~OAIUserAccountApi();

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
    * @param[in]  start_date QDate [required]
    * @param[in]  end_date QDate [required]
    * @param[in]  from_claimed_content QString [optional]
    * @param[in]  pin_format QString [optional]
    * @param[in]  app_types QString [optional]
    * @param[in]  metric_types QList<QString> [optional]
    * @param[in]  split_field QString [optional]
    * @param[in]  ad_account_id QString [optional]
    */
    void userAccount_analytics(const QDate &start_date, const QDate &end_date, const ::OpenAPI::OptionalParam<QString> &from_claimed_content = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &pin_format = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &app_types = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QList<QString>> &metric_types = ::OpenAPI::OptionalParam<QList<QString>>(), const ::OpenAPI::OptionalParam<QString> &split_field = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  ad_account_id QString [optional]
    */
    void userAccount_get(const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());


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

    void userAccount_analyticsCallback(OAIHttpRequestWorker *worker);
    void userAccount_getCallback(OAIHttpRequestWorker *worker);

signals:

    void userAccount_analyticsSignal(QMap<QString, OAIAnalyticsMetricsResponse> summary);
    void userAccount_getSignal(OAIAccount summary);

    void userAccount_analyticsSignalFull(OAIHttpRequestWorker *worker, QMap<QString, OAIAnalyticsMetricsResponse> summary);
    void userAccount_getSignalFull(OAIHttpRequestWorker *worker, OAIAccount summary);

    void userAccount_analyticsSignalE(QMap<QString, OAIAnalyticsMetricsResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userAccount_getSignalE(OAIAccount summary, QNetworkReply::NetworkError error_type, QString error_str);

    void userAccount_analyticsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userAccount_getSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif