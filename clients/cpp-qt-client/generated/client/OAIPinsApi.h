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

#ifndef OAI_OAIPinsApi_H
#define OAI_OAIPinsApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIAnalyticsMetricsResponse.h"
#include "OAIError.h"
#include "OAIPin.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIPinsApi : public QObject {
    Q_OBJECT

public:
    OAIPinsApi(const int timeOut = 0);
    ~OAIPinsApi();

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
    * @param[in]  pin_id QString [required]
    * @param[in]  start_date QDate [required]
    * @param[in]  end_date QDate [required]
    * @param[in]  metric_types QList<QString> [required]
    * @param[in]  app_types QString [optional]
    * @param[in]  split_field QString [optional]
    * @param[in]  ad_account_id QString [optional]
    */
    void pins_analytics(const QString &pin_id, const QDate &start_date, const QDate &end_date, const QList<QString> &metric_types, const ::OpenAPI::OptionalParam<QString> &app_types = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &split_field = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  oai_pin OAIPin [required]
    */
    void pins_create(const OAIPin &oai_pin);

    /**
    * @param[in]  pin_id QString [required]
    */
    void pins_delete(const QString &pin_id);

    /**
    * @param[in]  pin_id QString [required]
    * @param[in]  ad_account_id QString [optional]
    */
    void pins_get(const QString &pin_id, const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());


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

    void pins_analyticsCallback(OAIHttpRequestWorker *worker);
    void pins_createCallback(OAIHttpRequestWorker *worker);
    void pins_deleteCallback(OAIHttpRequestWorker *worker);
    void pins_getCallback(OAIHttpRequestWorker *worker);

signals:

    void pins_analyticsSignal(QMap<QString, OAIAnalyticsMetricsResponse> summary);
    void pins_createSignal(OAIPin summary);
    void pins_deleteSignal();
    void pins_getSignal(OAIPin summary);

    void pins_analyticsSignalFull(OAIHttpRequestWorker *worker, QMap<QString, OAIAnalyticsMetricsResponse> summary);
    void pins_createSignalFull(OAIHttpRequestWorker *worker, OAIPin summary);
    void pins_deleteSignalFull(OAIHttpRequestWorker *worker);
    void pins_getSignalFull(OAIHttpRequestWorker *worker, OAIPin summary);

    void pins_analyticsSignalE(QMap<QString, OAIAnalyticsMetricsResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void pins_createSignalE(OAIPin summary, QNetworkReply::NetworkError error_type, QString error_str);
    void pins_deleteSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void pins_getSignalE(OAIPin summary, QNetworkReply::NetworkError error_type, QString error_str);

    void pins_analyticsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void pins_createSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void pins_deleteSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void pins_getSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
