/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIBulkApiRequest_H
#define OAI_OAIBulkApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAIBulkDownloadRequest.h"
#include "OAIBulkDownloadResponse.h"
#include "OAIBulkUpsertRequest.h"
#include "OAIBulkUpsertResponse.h"
#include "OAIBulkUpsertStatusResponse.h"
#include "OAIError.h"
#include <QString>
#include "OAIBulkApiHandler.h"

namespace OpenAPI {

class OAIBulkApiRequest : public QObject
{
    Q_OBJECT

public:
    OAIBulkApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIBulkApiHandler> handler);
    virtual ~OAIBulkApiRequest();

    void bulkDownload_createRequest(const QString& ad_account_id);
    void bulkRequest_getRequest(const QString& ad_account_id, const QString& bulk_request_id);
    void bulkUpsert_createRequest(const QString& ad_account_id);
    

    void bulkDownload_createResponse(const OAIBulkDownloadResponse& res);
    void bulkRequest_getResponse(const OAIBulkUpsertStatusResponse& res);
    void bulkUpsert_createResponse(const OAIBulkUpsertResponse& res);
    

    void bulkDownload_createError(const OAIBulkDownloadResponse& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void bulkRequest_getError(const OAIBulkUpsertStatusResponse& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void bulkUpsert_createError(const OAIBulkUpsertResponse& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

Q_SIGNALS:
    void bulkDownload_create(QString ad_account_id, OAIBulkDownloadRequest oai_bulk_download_request);
    void bulkRequest_get(QString ad_account_id, QString bulk_request_id);
    void bulkUpsert_create(QString ad_account_id, OAIBulkUpsertRequest oai_bulk_upsert_request);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAIBulkApiHandler> handler;

    inline void setSocketResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
    }
};

}

#endif // OAI_OAIBulkApiRequest_H
