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

#ifndef OAI_OAICatalogsApi_H
#define OAI_OAICatalogsApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICatalogsFeed.h"
#include "OAICatalogsFeedsCreateRequest.h"
#include "OAICatalogsFeedsUpdateRequest.h"
#include "OAICatalogsItems.h"
#include "OAICatalogsItemsBatch.h"
#include "OAICatalogsItemsBatchRequest.h"
#include "OAICatalogsProductGroup.h"
#include "OAICatalogsProductGroupCreateRequest.h"
#include "OAICatalogsProductGroupUpdateRequest.h"
#include "OAIError.h"
#include "OAIObject.h"
#include "OAIPaginated.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAICatalogsApi : public QObject {
    Q_OBJECT

public:
    OAICatalogsApi(const int timeOut = 0);
    ~OAICatalogsApi();

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
    * @param[in]  oai_catalogs_product_group_create_request OAICatalogsProductGroupCreateRequest [required]
    */
    void catalogsProductGroups_create(const OAICatalogsProductGroupCreateRequest &oai_catalogs_product_group_create_request);

    /**
    * @param[in]  product_group_id QString [required]
    */
    void catalogsProductGroups_delete(const QString &product_group_id);

    /**
    * @param[in]  feed_id QString [required]
    * @param[in]  bookmark QString [optional]
    * @param[in]  page_size qint32 [optional]
    */
    void catalogsProductGroups_list(const QString &feed_id, const ::OpenAPI::OptionalParam<QString> &bookmark = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &page_size = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  product_group_id QString [required]
    * @param[in]  oai_catalogs_product_group_update_request OAICatalogsProductGroupUpdateRequest [required]
    */
    void catalogsProductGroups_update(const QString &product_group_id, const OAICatalogsProductGroupUpdateRequest &oai_catalogs_product_group_update_request);

    /**
    * @param[in]  feed_id QString [required]
    * @param[in]  bookmark QString [optional]
    * @param[in]  page_size qint32 [optional]
    */
    void feedProcessingResults_list(const QString &feed_id, const ::OpenAPI::OptionalParam<QString> &bookmark = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &page_size = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  oai_catalogs_feeds_create_request OAICatalogsFeedsCreateRequest [required]
    */
    void feeds_create(const OAICatalogsFeedsCreateRequest &oai_catalogs_feeds_create_request);

    /**
    * @param[in]  feed_id QString [required]
    */
    void feeds_delete(const QString &feed_id);

    /**
    * @param[in]  feed_id QString [required]
    */
    void feeds_get(const QString &feed_id);

    /**
    * @param[in]  bookmark QString [optional]
    * @param[in]  page_size qint32 [optional]
    */
    void feeds_list(const ::OpenAPI::OptionalParam<QString> &bookmark = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &page_size = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  feed_id QString [required]
    * @param[in]  oai_catalogs_feeds_update_request OAICatalogsFeedsUpdateRequest [required]
    */
    void feeds_update(const QString &feed_id, const OAICatalogsFeedsUpdateRequest &oai_catalogs_feeds_update_request);

    /**
    * @param[in]  batch_id QString [required]
    */
    void itemsBatch_get(const QString &batch_id);

    /**
    * @param[in]  oai_catalogs_items_batch_request OAICatalogsItemsBatchRequest [required]
    */
    void itemsBatch_post(const OAICatalogsItemsBatchRequest &oai_catalogs_items_batch_request);

    /**
    * @param[in]  country QString [required]
    * @param[in]  item_ids QList<QString> [required]
    * @param[in]  language QString [required]
    */
    void items_get(const QString &country, const QList<QString> &item_ids, const QString &language);


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

    void catalogsProductGroups_createCallback(OAIHttpRequestWorker *worker);
    void catalogsProductGroups_deleteCallback(OAIHttpRequestWorker *worker);
    void catalogsProductGroups_listCallback(OAIHttpRequestWorker *worker);
    void catalogsProductGroups_updateCallback(OAIHttpRequestWorker *worker);
    void feedProcessingResults_listCallback(OAIHttpRequestWorker *worker);
    void feeds_createCallback(OAIHttpRequestWorker *worker);
    void feeds_deleteCallback(OAIHttpRequestWorker *worker);
    void feeds_getCallback(OAIHttpRequestWorker *worker);
    void feeds_listCallback(OAIHttpRequestWorker *worker);
    void feeds_updateCallback(OAIHttpRequestWorker *worker);
    void itemsBatch_getCallback(OAIHttpRequestWorker *worker);
    void itemsBatch_postCallback(OAIHttpRequestWorker *worker);
    void items_getCallback(OAIHttpRequestWorker *worker);

signals:

    void catalogsProductGroups_createSignal(OAIObject summary);
    void catalogsProductGroups_deleteSignal();
    void catalogsProductGroups_listSignal(OAIPaginated summary);
    void catalogsProductGroups_updateSignal(OAICatalogsProductGroup summary);
    void feedProcessingResults_listSignal(OAIPaginated summary);
    void feeds_createSignal(OAICatalogsFeed summary);
    void feeds_deleteSignal();
    void feeds_getSignal(OAICatalogsFeed summary);
    void feeds_listSignal(OAIPaginated summary);
    void feeds_updateSignal(OAICatalogsFeed summary);
    void itemsBatch_getSignal(OAICatalogsItemsBatch summary);
    void itemsBatch_postSignal(OAICatalogsItemsBatch summary);
    void items_getSignal(OAICatalogsItems summary);

    void catalogsProductGroups_createSignalFull(OAIHttpRequestWorker *worker, OAIObject summary);
    void catalogsProductGroups_deleteSignalFull(OAIHttpRequestWorker *worker);
    void catalogsProductGroups_listSignalFull(OAIHttpRequestWorker *worker, OAIPaginated summary);
    void catalogsProductGroups_updateSignalFull(OAIHttpRequestWorker *worker, OAICatalogsProductGroup summary);
    void feedProcessingResults_listSignalFull(OAIHttpRequestWorker *worker, OAIPaginated summary);
    void feeds_createSignalFull(OAIHttpRequestWorker *worker, OAICatalogsFeed summary);
    void feeds_deleteSignalFull(OAIHttpRequestWorker *worker);
    void feeds_getSignalFull(OAIHttpRequestWorker *worker, OAICatalogsFeed summary);
    void feeds_listSignalFull(OAIHttpRequestWorker *worker, OAIPaginated summary);
    void feeds_updateSignalFull(OAIHttpRequestWorker *worker, OAICatalogsFeed summary);
    void itemsBatch_getSignalFull(OAIHttpRequestWorker *worker, OAICatalogsItemsBatch summary);
    void itemsBatch_postSignalFull(OAIHttpRequestWorker *worker, OAICatalogsItemsBatch summary);
    void items_getSignalFull(OAIHttpRequestWorker *worker, OAICatalogsItems summary);

    void catalogsProductGroups_createSignalE(OAIObject summary, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_deleteSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_listSignalE(OAIPaginated summary, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_updateSignalE(OAICatalogsProductGroup summary, QNetworkReply::NetworkError error_type, QString error_str);
    void feedProcessingResults_listSignalE(OAIPaginated summary, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_createSignalE(OAICatalogsFeed summary, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_deleteSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_getSignalE(OAICatalogsFeed summary, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_listSignalE(OAIPaginated summary, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_updateSignalE(OAICatalogsFeed summary, QNetworkReply::NetworkError error_type, QString error_str);
    void itemsBatch_getSignalE(OAICatalogsItemsBatch summary, QNetworkReply::NetworkError error_type, QString error_str);
    void itemsBatch_postSignalE(OAICatalogsItemsBatch summary, QNetworkReply::NetworkError error_type, QString error_str);
    void items_getSignalE(OAICatalogsItems summary, QNetworkReply::NetworkError error_type, QString error_str);

    void catalogsProductGroups_createSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_deleteSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_listSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_updateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void feedProcessingResults_listSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_createSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_deleteSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_getSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_listSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_updateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void itemsBatch_getSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void itemsBatch_postSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void items_getSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
