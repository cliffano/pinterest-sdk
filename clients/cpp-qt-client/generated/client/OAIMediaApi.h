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

#ifndef OAI_OAIMediaApi_H
#define OAI_OAIMediaApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIError.h"
#include "OAIMediaUpload.h"
#include "OAIMediaUploadDetails.h"
#include "OAIMediaUploadRequest.h"
#include "OAIMedia_list_200_response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIMediaApi : public QObject {
    Q_OBJECT

public:
    OAIMediaApi(const int timeOut = 0);
    ~OAIMediaApi();

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
    * @param[in]  oai_media_upload_request OAIMediaUploadRequest [required]
    */
    void media_create(const OAIMediaUploadRequest &oai_media_upload_request);

    /**
    * @param[in]  media_id QString [required]
    */
    void media_get(const QString &media_id);

    /**
    * @param[in]  bookmark QString [optional]
    * @param[in]  page_size qint32 [optional]
    */
    void media_list(const ::OpenAPI::OptionalParam<QString> &bookmark = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &page_size = ::OpenAPI::OptionalParam<qint32>());


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

    void media_createCallback(OAIHttpRequestWorker *worker);
    void media_getCallback(OAIHttpRequestWorker *worker);
    void media_listCallback(OAIHttpRequestWorker *worker);

Q_SIGNALS:

    void media_createSignal(OAIMediaUpload summary);
    void media_getSignal(OAIMediaUploadDetails summary);
    void media_listSignal(OAIMedia_list_200_response summary);

    void media_createSignalFull(OAIHttpRequestWorker *worker, OAIMediaUpload summary);
    void media_getSignalFull(OAIHttpRequestWorker *worker, OAIMediaUploadDetails summary);
    void media_listSignalFull(OAIHttpRequestWorker *worker, OAIMedia_list_200_response summary);

    Q_DECL_DEPRECATED_X("Use media_createSignalError() instead")
    void media_createSignalE(OAIMediaUpload summary, QNetworkReply::NetworkError error_type, QString error_str);
    void media_createSignalError(OAIMediaUpload summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use media_getSignalError() instead")
    void media_getSignalE(OAIMediaUploadDetails summary, QNetworkReply::NetworkError error_type, QString error_str);
    void media_getSignalError(OAIMediaUploadDetails summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use media_listSignalError() instead")
    void media_listSignalE(OAIMedia_list_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void media_listSignalError(OAIMedia_list_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use media_createSignalErrorFull() instead")
    void media_createSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void media_createSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use media_getSignalErrorFull() instead")
    void media_getSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void media_getSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use media_listSignalErrorFull() instead")
    void media_listSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void media_listSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace OpenAPI
#endif
