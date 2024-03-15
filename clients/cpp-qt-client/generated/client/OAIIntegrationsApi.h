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

#ifndef OAI_OAIIntegrationsApi_H
#define OAI_OAIIntegrationsApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIDetailedError.h"
#include "OAIError.h"
#include "OAIIntegrationLogsRequest.h"
#include "OAIIntegrationLogsSuccessResponse.h"
#include "OAIIntegrationMetadata.h"
#include "OAIIntegrationRecord.h"
#include "OAIIntegrationRequest.h"
#include "OAIIntegrationRequestPatch.h"
#include "OAIIntegrations_get_list_200_response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIIntegrationsApi : public QObject {
    Q_OBJECT

public:
    OAIIntegrationsApi(const int timeOut = 0);
    ~OAIIntegrationsApi();

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
    * @param[in]  external_business_id QString [required]
    */
    void integrationsCommerce_del(const QString &external_business_id);

    /**
    * @param[in]  external_business_id QString [required]
    */
    void integrationsCommerce_get(const QString &external_business_id);

    /**
    * @param[in]  external_business_id QString [required]
    * @param[in]  oai_integration_request_patch OAIIntegrationRequestPatch [optional]
    */
    void integrationsCommerce_patch(const QString &external_business_id, const ::OpenAPI::OptionalParam<OAIIntegrationRequestPatch> &oai_integration_request_patch = ::OpenAPI::OptionalParam<OAIIntegrationRequestPatch>());

    /**
    * @param[in]  oai_integration_request OAIIntegrationRequest [optional]
    */
    void integrationsCommerce_post(const ::OpenAPI::OptionalParam<OAIIntegrationRequest> &oai_integration_request = ::OpenAPI::OptionalParam<OAIIntegrationRequest>());

    /**
    * @param[in]  oai_integration_logs_request OAIIntegrationLogsRequest [required]
    */
    void integrationsLogs_post(const OAIIntegrationLogsRequest &oai_integration_logs_request);

    /**
    * @param[in]  id QString [required]
    */
    void integrations_getById(const QString &id);

    /**
    * @param[in]  bookmark QString [optional]
    * @param[in]  page_size qint32 [optional]
    */
    void integrations_getList(const ::OpenAPI::OptionalParam<QString> &bookmark = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &page_size = ::OpenAPI::OptionalParam<qint32>());


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

    void integrationsCommerce_delCallback(OAIHttpRequestWorker *worker);
    void integrationsCommerce_getCallback(OAIHttpRequestWorker *worker);
    void integrationsCommerce_patchCallback(OAIHttpRequestWorker *worker);
    void integrationsCommerce_postCallback(OAIHttpRequestWorker *worker);
    void integrationsLogs_postCallback(OAIHttpRequestWorker *worker);
    void integrations_getByIdCallback(OAIHttpRequestWorker *worker);
    void integrations_getListCallback(OAIHttpRequestWorker *worker);

Q_SIGNALS:

    void integrationsCommerce_delSignal();
    void integrationsCommerce_getSignal(OAIIntegrationMetadata summary);
    void integrationsCommerce_patchSignal(OAIIntegrationMetadata summary);
    void integrationsCommerce_postSignal(OAIIntegrationMetadata summary);
    void integrationsLogs_postSignal(OAIIntegrationLogsSuccessResponse summary);
    void integrations_getByIdSignal(OAIIntegrationRecord summary);
    void integrations_getListSignal(OAIIntegrations_get_list_200_response summary);

    void integrationsCommerce_delSignalFull(OAIHttpRequestWorker *worker);
    void integrationsCommerce_getSignalFull(OAIHttpRequestWorker *worker, OAIIntegrationMetadata summary);
    void integrationsCommerce_patchSignalFull(OAIHttpRequestWorker *worker, OAIIntegrationMetadata summary);
    void integrationsCommerce_postSignalFull(OAIHttpRequestWorker *worker, OAIIntegrationMetadata summary);
    void integrationsLogs_postSignalFull(OAIHttpRequestWorker *worker, OAIIntegrationLogsSuccessResponse summary);
    void integrations_getByIdSignalFull(OAIHttpRequestWorker *worker, OAIIntegrationRecord summary);
    void integrations_getListSignalFull(OAIHttpRequestWorker *worker, OAIIntegrations_get_list_200_response summary);

    Q_DECL_DEPRECATED_X("Use integrationsCommerce_delSignalError() instead")
    void integrationsCommerce_delSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void integrationsCommerce_delSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use integrationsCommerce_getSignalError() instead")
    void integrationsCommerce_getSignalE(OAIIntegrationMetadata summary, QNetworkReply::NetworkError error_type, QString error_str);
    void integrationsCommerce_getSignalError(OAIIntegrationMetadata summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use integrationsCommerce_patchSignalError() instead")
    void integrationsCommerce_patchSignalE(OAIIntegrationMetadata summary, QNetworkReply::NetworkError error_type, QString error_str);
    void integrationsCommerce_patchSignalError(OAIIntegrationMetadata summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use integrationsCommerce_postSignalError() instead")
    void integrationsCommerce_postSignalE(OAIIntegrationMetadata summary, QNetworkReply::NetworkError error_type, QString error_str);
    void integrationsCommerce_postSignalError(OAIIntegrationMetadata summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use integrationsLogs_postSignalError() instead")
    void integrationsLogs_postSignalE(OAIIntegrationLogsSuccessResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void integrationsLogs_postSignalError(OAIIntegrationLogsSuccessResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use integrations_getByIdSignalError() instead")
    void integrations_getByIdSignalE(OAIIntegrationRecord summary, QNetworkReply::NetworkError error_type, QString error_str);
    void integrations_getByIdSignalError(OAIIntegrationRecord summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use integrations_getListSignalError() instead")
    void integrations_getListSignalE(OAIIntegrations_get_list_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void integrations_getListSignalError(OAIIntegrations_get_list_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use integrationsCommerce_delSignalErrorFull() instead")
    void integrationsCommerce_delSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void integrationsCommerce_delSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use integrationsCommerce_getSignalErrorFull() instead")
    void integrationsCommerce_getSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void integrationsCommerce_getSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use integrationsCommerce_patchSignalErrorFull() instead")
    void integrationsCommerce_patchSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void integrationsCommerce_patchSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use integrationsCommerce_postSignalErrorFull() instead")
    void integrationsCommerce_postSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void integrationsCommerce_postSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use integrationsLogs_postSignalErrorFull() instead")
    void integrationsLogs_postSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void integrationsLogs_postSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use integrations_getByIdSignalErrorFull() instead")
    void integrations_getByIdSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void integrations_getByIdSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use integrations_getListSignalErrorFull() instead")
    void integrations_getListSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void integrations_getListSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace OpenAPI
#endif
