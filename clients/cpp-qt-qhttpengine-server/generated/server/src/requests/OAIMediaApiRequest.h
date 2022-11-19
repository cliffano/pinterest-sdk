/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIMediaApiRequest_H
#define OAI_OAIMediaApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAIError.h"
#include "OAIMediaUpload.h"
#include "OAIMediaUploadDetails.h"
#include "OAIMediaUploadRequest.h"
#include "OAIMedia_list_200_response.h"
#include <QString>
#include "OAIMediaApiHandler.h"

namespace OpenAPI {

class OAIMediaApiRequest : public QObject
{
    Q_OBJECT

public:
    OAIMediaApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIMediaApiHandler> handler);
    virtual ~OAIMediaApiRequest();

    void media_createRequest();
    void media_getRequest(const QString& media_id);
    void media_listRequest();
    

    void media_createResponse(const OAIMediaUpload& res);
    void media_getResponse(const OAIMediaUploadDetails& res);
    void media_listResponse(const OAIMedia_list_200_response& res);
    

    void media_createError(const OAIMediaUpload& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void media_getError(const OAIMediaUploadDetails& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void media_listError(const OAIMedia_list_200_response& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

signals:
    void media_create(OAIMediaUploadRequest oai_media_upload_request);
    void media_get(QString media_id);
    void media_list(QString bookmark, qint32 page_size);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAIMediaApiHandler> handler;

    inline void setSocketResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
    }
};

}

#endif // OAI_OAIMediaApiRequest_H
