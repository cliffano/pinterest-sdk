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

#ifndef OAI_OAICatalogsApiRequest_H
#define OAI_OAICatalogsApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
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
#include "OAICatalogsApiHandler.h"

namespace OpenAPI {

class OAICatalogsApiRequest : public QObject
{
    Q_OBJECT

public:
    OAICatalogsApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAICatalogsApiHandler> handler);
    virtual ~OAICatalogsApiRequest();

    void catalogsProductGroups_createRequest();
    void catalogsProductGroups_deleteRequest(const QString& product_group_id);
    void catalogsProductGroups_listRequest();
    void catalogsProductGroups_updateRequest(const QString& product_group_id);
    void feedProcessingResults_listRequest(const QString& feed_id);
    void feeds_createRequest();
    void feeds_deleteRequest(const QString& feed_id);
    void feeds_getRequest(const QString& feed_id);
    void feeds_listRequest();
    void feeds_updateRequest(const QString& feed_id);
    void itemsBatch_getRequest(const QString& batch_id);
    void itemsBatch_postRequest();
    void items_getRequest();
    

    void catalogsProductGroups_createResponse(const OAIObject& res);
    void catalogsProductGroups_deleteResponse();
    void catalogsProductGroups_listResponse(const OAIPaginated& res);
    void catalogsProductGroups_updateResponse(const OAICatalogsProductGroup& res);
    void feedProcessingResults_listResponse(const OAIPaginated& res);
    void feeds_createResponse(const OAICatalogsFeed& res);
    void feeds_deleteResponse();
    void feeds_getResponse(const OAICatalogsFeed& res);
    void feeds_listResponse(const OAIPaginated& res);
    void feeds_updateResponse(const OAICatalogsFeed& res);
    void itemsBatch_getResponse(const OAICatalogsItemsBatch& res);
    void itemsBatch_postResponse(const OAICatalogsItemsBatch& res);
    void items_getResponse(const OAICatalogsItems& res);
    

    void catalogsProductGroups_createError(const OAIObject& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void catalogsProductGroups_deleteError(QNetworkReply::NetworkError error_type, QString& error_str);
    void catalogsProductGroups_listError(const OAIPaginated& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void catalogsProductGroups_updateError(const OAICatalogsProductGroup& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void feedProcessingResults_listError(const OAIPaginated& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void feeds_createError(const OAICatalogsFeed& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void feeds_deleteError(QNetworkReply::NetworkError error_type, QString& error_str);
    void feeds_getError(const OAICatalogsFeed& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void feeds_listError(const OAIPaginated& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void feeds_updateError(const OAICatalogsFeed& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void itemsBatch_getError(const OAICatalogsItemsBatch& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void itemsBatch_postError(const OAICatalogsItemsBatch& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void items_getError(const OAICatalogsItems& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

signals:
    void catalogsProductGroups_create(OAICatalogsProductGroupCreateRequest oai_catalogs_product_group_create_request);
    void catalogsProductGroups_delete(QString product_group_id);
    void catalogsProductGroups_list(QString feed_id, QString bookmark, qint32 page_size);
    void catalogsProductGroups_update(QString product_group_id, OAICatalogsProductGroupUpdateRequest oai_catalogs_product_group_update_request);
    void feedProcessingResults_list(QString feed_id, QString bookmark, qint32 page_size);
    void feeds_create(OAICatalogsFeedsCreateRequest oai_catalogs_feeds_create_request);
    void feeds_delete(QString feed_id);
    void feeds_get(QString feed_id);
    void feeds_list(QString bookmark, qint32 page_size);
    void feeds_update(QString feed_id, OAICatalogsFeedsUpdateRequest oai_catalogs_feeds_update_request);
    void itemsBatch_get(QString batch_id);
    void itemsBatch_post(OAICatalogsItemsBatchRequest oai_catalogs_items_batch_request);
    void items_get(QString country, QList<QString> item_ids, QString language);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAICatalogsApiHandler> handler;

    inline void setSocketResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
    }
};

}

#endif // OAI_OAICatalogsApiRequest_H
