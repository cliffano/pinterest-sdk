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

#ifndef OAI_OAICatalogsApi_H
#define OAI_OAICatalogsApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICatalogsFeed.h"
#include "OAICatalogsItemValidationIssue.h"
#include "OAICatalogsItems.h"
#include "OAICatalogsItemsBatch.h"
#include "OAICatalogsItemsFilters.h"
#include "OAICatalogsListProductsByFilterRequest.h"
#include "OAICatalogsProductGroupProductCounts.h"
#include "OAICatalogs_list_200_response.h"
#include "OAICatalogs_product_group_pins_list_200_response.h"
#include "OAICatalogs_product_groups_create_201_response.h"
#include "OAICatalogs_product_groups_create_request.h"
#include "OAICatalogs_product_groups_list_200_response.h"
#include "OAICatalogs_product_groups_update_request.h"
#include "OAIError.h"
#include "OAIFeed_processing_results_list_200_response.h"
#include "OAIFeeds_create_request.h"
#include "OAIFeeds_list_200_response.h"
#include "OAIFeeds_update_request.h"
#include "OAIItems_batch_post_request.h"
#include "OAIItems_issues_list_200_response.h"
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
    * @param[in]  product_group_id QString [required]
    * @param[in]  bookmark QString [optional]
    * @param[in]  page_size qint32 [optional]
    * @param[in]  ad_account_id QString [optional]
    */
    void catalogsProductGroupPins_list(const QString &product_group_id, const ::OpenAPI::OptionalParam<QString> &bookmark = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &page_size = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  oai_catalogs_product_groups_create_request OAICatalogs_product_groups_create_request [required]
    * @param[in]  ad_account_id QString [optional]
    */
    void catalogsProductGroups_create(const OAICatalogs_product_groups_create_request &oai_catalogs_product_groups_create_request, const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  product_group_id QString [required]
    * @param[in]  ad_account_id QString [optional]
    */
    void catalogsProductGroups_delete(const QString &product_group_id, const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  product_group_id QString [required]
    * @param[in]  ad_account_id QString [optional]
    */
    void catalogsProductGroups_get(const QString &product_group_id, const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  feed_id QString [optional]
    * @param[in]  catalog_id QString [optional]
    * @param[in]  bookmark QString [optional]
    * @param[in]  page_size qint32 [optional]
    * @param[in]  ad_account_id QString [optional]
    */
    void catalogsProductGroups_list(const ::OpenAPI::OptionalParam<QString> &feed_id = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &catalog_id = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &bookmark = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &page_size = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  product_group_id QString [required]
    * @param[in]  ad_account_id QString [optional]
    */
    void catalogsProductGroups_productCountsGet(const QString &product_group_id, const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  product_group_id QString [required]
    * @param[in]  oai_catalogs_product_groups_update_request OAICatalogs_product_groups_update_request [required]
    * @param[in]  ad_account_id QString [optional]
    */
    void catalogsProductGroups_update(const QString &product_group_id, const OAICatalogs_product_groups_update_request &oai_catalogs_product_groups_update_request, const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  bookmark QString [optional]
    * @param[in]  page_size qint32 [optional]
    * @param[in]  ad_account_id QString [optional]
    */
    void catalogs_list(const ::OpenAPI::OptionalParam<QString> &bookmark = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &page_size = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  feed_id QString [required]
    * @param[in]  bookmark QString [optional]
    * @param[in]  page_size qint32 [optional]
    * @param[in]  ad_account_id QString [optional]
    */
    void feedProcessingResults_list(const QString &feed_id, const ::OpenAPI::OptionalParam<QString> &bookmark = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &page_size = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  oai_feeds_create_request OAIFeeds_create_request [required]
    * @param[in]  ad_account_id QString [optional]
    */
    void feeds_create(const OAIFeeds_create_request &oai_feeds_create_request, const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  feed_id QString [required]
    * @param[in]  ad_account_id QString [optional]
    */
    void feeds_delete(const QString &feed_id, const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  feed_id QString [required]
    * @param[in]  ad_account_id QString [optional]
    */
    void feeds_get(const QString &feed_id, const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  bookmark QString [optional]
    * @param[in]  page_size qint32 [optional]
    * @param[in]  catalog_id QString [optional]
    * @param[in]  ad_account_id QString [optional]
    */
    void feeds_list(const ::OpenAPI::OptionalParam<QString> &bookmark = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &page_size = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &catalog_id = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  feed_id QString [required]
    * @param[in]  oai_feeds_update_request OAIFeeds_update_request [required]
    * @param[in]  ad_account_id QString [optional]
    */
    void feeds_update(const QString &feed_id, const OAIFeeds_update_request &oai_feeds_update_request, const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  batch_id QString [required]
    * @param[in]  ad_account_id QString [optional]
    */
    void itemsBatch_get(const QString &batch_id, const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  oai_items_batch_post_request OAIItems_batch_post_request [required]
    * @param[in]  ad_account_id QString [optional]
    */
    void itemsBatch_post(const OAIItems_batch_post_request &oai_items_batch_post_request, const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  processing_result_id QString [required]
    * @param[in]  bookmark QString [optional]
    * @param[in]  page_size qint32 [optional]
    * @param[in]  item_numbers QList<qint32> [optional]
    * @param[in]  item_validation_issue OAICatalogsItemValidationIssue [optional]
    * @param[in]  ad_account_id QString [optional]
    */
    void itemsIssues_list(const QString &processing_result_id, const ::OpenAPI::OptionalParam<QString> &bookmark = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &page_size = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QList<qint32>> &item_numbers = ::OpenAPI::OptionalParam<QList<qint32>>(), const ::OpenAPI::OptionalParam<OAICatalogsItemValidationIssue> &item_validation_issue = ::OpenAPI::OptionalParam<OAICatalogsItemValidationIssue>(), const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  country QString [required]
    * @param[in]  language QString [required]
    * @param[in]  ad_account_id QString [optional]
    * @param[in]  item_ids QList<QString> [optional]
    * @param[in]  filters OAICatalogsItemsFilters [optional]
    */
    void items_get(const QString &country, const QString &language, const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QList<QString>> &item_ids = ::OpenAPI::OptionalParam<QList<QString>>(), const ::OpenAPI::OptionalParam<OAICatalogsItemsFilters> &filters = ::OpenAPI::OptionalParam<OAICatalogsItemsFilters>());

    /**
    * @param[in]  oai_catalogs_list_products_by_filter_request OAICatalogsListProductsByFilterRequest [required]
    * @param[in]  bookmark QString [optional]
    * @param[in]  page_size qint32 [optional]
    * @param[in]  ad_account_id QString [optional]
    */
    void productsByProductGroupFilter_list(const OAICatalogsListProductsByFilterRequest &oai_catalogs_list_products_by_filter_request, const ::OpenAPI::OptionalParam<QString> &bookmark = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &page_size = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<QString> &ad_account_id = ::OpenAPI::OptionalParam<QString>());


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

    void catalogsProductGroupPins_listCallback(OAIHttpRequestWorker *worker);
    void catalogsProductGroups_createCallback(OAIHttpRequestWorker *worker);
    void catalogsProductGroups_deleteCallback(OAIHttpRequestWorker *worker);
    void catalogsProductGroups_getCallback(OAIHttpRequestWorker *worker);
    void catalogsProductGroups_listCallback(OAIHttpRequestWorker *worker);
    void catalogsProductGroups_productCountsGetCallback(OAIHttpRequestWorker *worker);
    void catalogsProductGroups_updateCallback(OAIHttpRequestWorker *worker);
    void catalogs_listCallback(OAIHttpRequestWorker *worker);
    void feedProcessingResults_listCallback(OAIHttpRequestWorker *worker);
    void feeds_createCallback(OAIHttpRequestWorker *worker);
    void feeds_deleteCallback(OAIHttpRequestWorker *worker);
    void feeds_getCallback(OAIHttpRequestWorker *worker);
    void feeds_listCallback(OAIHttpRequestWorker *worker);
    void feeds_updateCallback(OAIHttpRequestWorker *worker);
    void itemsBatch_getCallback(OAIHttpRequestWorker *worker);
    void itemsBatch_postCallback(OAIHttpRequestWorker *worker);
    void itemsIssues_listCallback(OAIHttpRequestWorker *worker);
    void items_getCallback(OAIHttpRequestWorker *worker);
    void productsByProductGroupFilter_listCallback(OAIHttpRequestWorker *worker);

Q_SIGNALS:

    void catalogsProductGroupPins_listSignal(OAICatalogs_product_group_pins_list_200_response summary);
    void catalogsProductGroups_createSignal(OAICatalogs_product_groups_create_201_response summary);
    void catalogsProductGroups_deleteSignal();
    void catalogsProductGroups_getSignal(OAICatalogs_product_groups_create_201_response summary);
    void catalogsProductGroups_listSignal(OAICatalogs_product_groups_list_200_response summary);
    void catalogsProductGroups_productCountsGetSignal(OAICatalogsProductGroupProductCounts summary);
    void catalogsProductGroups_updateSignal(OAICatalogs_product_groups_create_201_response summary);
    void catalogs_listSignal(OAICatalogs_list_200_response summary);
    void feedProcessingResults_listSignal(OAIFeed_processing_results_list_200_response summary);
    void feeds_createSignal(OAICatalogsFeed summary);
    void feeds_deleteSignal();
    void feeds_getSignal(OAICatalogsFeed summary);
    void feeds_listSignal(OAIFeeds_list_200_response summary);
    void feeds_updateSignal(OAICatalogsFeed summary);
    void itemsBatch_getSignal(OAICatalogsItemsBatch summary);
    void itemsBatch_postSignal(OAICatalogsItemsBatch summary);
    void itemsIssues_listSignal(OAIItems_issues_list_200_response summary);
    void items_getSignal(OAICatalogsItems summary);
    void productsByProductGroupFilter_listSignal(OAICatalogs_product_group_pins_list_200_response summary);

    void catalogsProductGroupPins_listSignalFull(OAIHttpRequestWorker *worker, OAICatalogs_product_group_pins_list_200_response summary);
    void catalogsProductGroups_createSignalFull(OAIHttpRequestWorker *worker, OAICatalogs_product_groups_create_201_response summary);
    void catalogsProductGroups_deleteSignalFull(OAIHttpRequestWorker *worker);
    void catalogsProductGroups_getSignalFull(OAIHttpRequestWorker *worker, OAICatalogs_product_groups_create_201_response summary);
    void catalogsProductGroups_listSignalFull(OAIHttpRequestWorker *worker, OAICatalogs_product_groups_list_200_response summary);
    void catalogsProductGroups_productCountsGetSignalFull(OAIHttpRequestWorker *worker, OAICatalogsProductGroupProductCounts summary);
    void catalogsProductGroups_updateSignalFull(OAIHttpRequestWorker *worker, OAICatalogs_product_groups_create_201_response summary);
    void catalogs_listSignalFull(OAIHttpRequestWorker *worker, OAICatalogs_list_200_response summary);
    void feedProcessingResults_listSignalFull(OAIHttpRequestWorker *worker, OAIFeed_processing_results_list_200_response summary);
    void feeds_createSignalFull(OAIHttpRequestWorker *worker, OAICatalogsFeed summary);
    void feeds_deleteSignalFull(OAIHttpRequestWorker *worker);
    void feeds_getSignalFull(OAIHttpRequestWorker *worker, OAICatalogsFeed summary);
    void feeds_listSignalFull(OAIHttpRequestWorker *worker, OAIFeeds_list_200_response summary);
    void feeds_updateSignalFull(OAIHttpRequestWorker *worker, OAICatalogsFeed summary);
    void itemsBatch_getSignalFull(OAIHttpRequestWorker *worker, OAICatalogsItemsBatch summary);
    void itemsBatch_postSignalFull(OAIHttpRequestWorker *worker, OAICatalogsItemsBatch summary);
    void itemsIssues_listSignalFull(OAIHttpRequestWorker *worker, OAIItems_issues_list_200_response summary);
    void items_getSignalFull(OAIHttpRequestWorker *worker, OAICatalogsItems summary);
    void productsByProductGroupFilter_listSignalFull(OAIHttpRequestWorker *worker, OAICatalogs_product_group_pins_list_200_response summary);

    Q_DECL_DEPRECATED_X("Use catalogsProductGroupPins_listSignalError() instead")
    void catalogsProductGroupPins_listSignalE(OAICatalogs_product_group_pins_list_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroupPins_listSignalError(OAICatalogs_product_group_pins_list_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use catalogsProductGroups_createSignalError() instead")
    void catalogsProductGroups_createSignalE(OAICatalogs_product_groups_create_201_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_createSignalError(OAICatalogs_product_groups_create_201_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use catalogsProductGroups_deleteSignalError() instead")
    void catalogsProductGroups_deleteSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_deleteSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use catalogsProductGroups_getSignalError() instead")
    void catalogsProductGroups_getSignalE(OAICatalogs_product_groups_create_201_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_getSignalError(OAICatalogs_product_groups_create_201_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use catalogsProductGroups_listSignalError() instead")
    void catalogsProductGroups_listSignalE(OAICatalogs_product_groups_list_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_listSignalError(OAICatalogs_product_groups_list_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use catalogsProductGroups_productCountsGetSignalError() instead")
    void catalogsProductGroups_productCountsGetSignalE(OAICatalogsProductGroupProductCounts summary, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_productCountsGetSignalError(OAICatalogsProductGroupProductCounts summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use catalogsProductGroups_updateSignalError() instead")
    void catalogsProductGroups_updateSignalE(OAICatalogs_product_groups_create_201_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_updateSignalError(OAICatalogs_product_groups_create_201_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use catalogs_listSignalError() instead")
    void catalogs_listSignalE(OAICatalogs_list_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogs_listSignalError(OAICatalogs_list_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use feedProcessingResults_listSignalError() instead")
    void feedProcessingResults_listSignalE(OAIFeed_processing_results_list_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void feedProcessingResults_listSignalError(OAIFeed_processing_results_list_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use feeds_createSignalError() instead")
    void feeds_createSignalE(OAICatalogsFeed summary, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_createSignalError(OAICatalogsFeed summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use feeds_deleteSignalError() instead")
    void feeds_deleteSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_deleteSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use feeds_getSignalError() instead")
    void feeds_getSignalE(OAICatalogsFeed summary, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_getSignalError(OAICatalogsFeed summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use feeds_listSignalError() instead")
    void feeds_listSignalE(OAIFeeds_list_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_listSignalError(OAIFeeds_list_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use feeds_updateSignalError() instead")
    void feeds_updateSignalE(OAICatalogsFeed summary, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_updateSignalError(OAICatalogsFeed summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use itemsBatch_getSignalError() instead")
    void itemsBatch_getSignalE(OAICatalogsItemsBatch summary, QNetworkReply::NetworkError error_type, QString error_str);
    void itemsBatch_getSignalError(OAICatalogsItemsBatch summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use itemsBatch_postSignalError() instead")
    void itemsBatch_postSignalE(OAICatalogsItemsBatch summary, QNetworkReply::NetworkError error_type, QString error_str);
    void itemsBatch_postSignalError(OAICatalogsItemsBatch summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use itemsIssues_listSignalError() instead")
    void itemsIssues_listSignalE(OAIItems_issues_list_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void itemsIssues_listSignalError(OAIItems_issues_list_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use items_getSignalError() instead")
    void items_getSignalE(OAICatalogsItems summary, QNetworkReply::NetworkError error_type, QString error_str);
    void items_getSignalError(OAICatalogsItems summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use productsByProductGroupFilter_listSignalError() instead")
    void productsByProductGroupFilter_listSignalE(OAICatalogs_product_group_pins_list_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void productsByProductGroupFilter_listSignalError(OAICatalogs_product_group_pins_list_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use catalogsProductGroupPins_listSignalErrorFull() instead")
    void catalogsProductGroupPins_listSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroupPins_listSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use catalogsProductGroups_createSignalErrorFull() instead")
    void catalogsProductGroups_createSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_createSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use catalogsProductGroups_deleteSignalErrorFull() instead")
    void catalogsProductGroups_deleteSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_deleteSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use catalogsProductGroups_getSignalErrorFull() instead")
    void catalogsProductGroups_getSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_getSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use catalogsProductGroups_listSignalErrorFull() instead")
    void catalogsProductGroups_listSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_listSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use catalogsProductGroups_productCountsGetSignalErrorFull() instead")
    void catalogsProductGroups_productCountsGetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_productCountsGetSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use catalogsProductGroups_updateSignalErrorFull() instead")
    void catalogsProductGroups_updateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogsProductGroups_updateSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use catalogs_listSignalErrorFull() instead")
    void catalogs_listSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void catalogs_listSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use feedProcessingResults_listSignalErrorFull() instead")
    void feedProcessingResults_listSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void feedProcessingResults_listSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use feeds_createSignalErrorFull() instead")
    void feeds_createSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_createSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use feeds_deleteSignalErrorFull() instead")
    void feeds_deleteSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_deleteSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use feeds_getSignalErrorFull() instead")
    void feeds_getSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_getSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use feeds_listSignalErrorFull() instead")
    void feeds_listSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_listSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use feeds_updateSignalErrorFull() instead")
    void feeds_updateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void feeds_updateSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use itemsBatch_getSignalErrorFull() instead")
    void itemsBatch_getSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void itemsBatch_getSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use itemsBatch_postSignalErrorFull() instead")
    void itemsBatch_postSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void itemsBatch_postSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use itemsIssues_listSignalErrorFull() instead")
    void itemsIssues_listSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void itemsIssues_listSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use items_getSignalErrorFull() instead")
    void items_getSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void items_getSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use productsByProductGroupFilter_listSignalErrorFull() instead")
    void productsByProductGroupFilter_listSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void productsByProductGroupFilter_listSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace OpenAPI
#endif
