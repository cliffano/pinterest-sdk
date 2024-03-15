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

#ifndef OAI_OAILeadFormsApi_H
#define OAI_OAILeadFormsApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIError.h"
#include "OAILeadFormResponse.h"
#include "OAILeadFormTestRequest.h"
#include "OAILeadFormTestResponse.h"
#include "OAILead_forms_list_200_response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAILeadFormsApi : public QObject {
    Q_OBJECT

public:
    OAILeadFormsApi(const int timeOut = 0);
    ~OAILeadFormsApi();

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
    * @param[in]  lead_form_id QString [required]
    * @param[in]  oai_lead_form_test_request OAILeadFormTestRequest [required]
    */
    void leadFormTest_create(const QString &ad_account_id, const QString &lead_form_id, const OAILeadFormTestRequest &oai_lead_form_test_request);

    /**
    * @param[in]  ad_account_id QString [required]
    * @param[in]  lead_form_id QString [required]
    */
    void leadForm_get(const QString &ad_account_id, const QString &lead_form_id);

    /**
    * @param[in]  ad_account_id QString [required]
    * @param[in]  page_size qint32 [optional]
    * @param[in]  order QString [optional]
    * @param[in]  bookmark QString [optional]
    */
    void leadForms_list(const QString &ad_account_id, const ::OpenAPI::OptionalParam<qint32> &page_size = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &order = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &bookmark = ::OpenAPI::OptionalParam<QString>());


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

    void leadFormTest_createCallback(OAIHttpRequestWorker *worker);
    void leadForm_getCallback(OAIHttpRequestWorker *worker);
    void leadForms_listCallback(OAIHttpRequestWorker *worker);

Q_SIGNALS:

    void leadFormTest_createSignal(OAILeadFormTestResponse summary);
    void leadForm_getSignal(OAILeadFormResponse summary);
    void leadForms_listSignal(OAILead_forms_list_200_response summary);

    void leadFormTest_createSignalFull(OAIHttpRequestWorker *worker, OAILeadFormTestResponse summary);
    void leadForm_getSignalFull(OAIHttpRequestWorker *worker, OAILeadFormResponse summary);
    void leadForms_listSignalFull(OAIHttpRequestWorker *worker, OAILead_forms_list_200_response summary);

    Q_DECL_DEPRECATED_X("Use leadFormTest_createSignalError() instead")
    void leadFormTest_createSignalE(OAILeadFormTestResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void leadFormTest_createSignalError(OAILeadFormTestResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use leadForm_getSignalError() instead")
    void leadForm_getSignalE(OAILeadFormResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void leadForm_getSignalError(OAILeadFormResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use leadForms_listSignalError() instead")
    void leadForms_listSignalE(OAILead_forms_list_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void leadForms_listSignalError(OAILead_forms_list_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use leadFormTest_createSignalErrorFull() instead")
    void leadFormTest_createSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void leadFormTest_createSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use leadForm_getSignalErrorFull() instead")
    void leadForm_getSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void leadForm_getSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use leadForms_listSignalErrorFull() instead")
    void leadForms_listSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void leadForms_listSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace OpenAPI
#endif