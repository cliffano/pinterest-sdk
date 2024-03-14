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

#ifndef OAI_OAITermsOfServiceApiRequest_H
#define OAI_OAITermsOfServiceApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAIError.h"
#include "OAITermsOfService.h"
#include <QString>
#include "OAITermsOfServiceApiHandler.h"

namespace OpenAPI {

class OAITermsOfServiceApiRequest : public QObject
{
    Q_OBJECT

public:
    OAITermsOfServiceApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAITermsOfServiceApiHandler> handler);
    virtual ~OAITermsOfServiceApiRequest();

    void termsOfService_getRequest(const QString& ad_account_id);
    

    void termsOfService_getResponse(const OAITermsOfService& res);
    

    void termsOfService_getError(const OAITermsOfService& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

Q_SIGNALS:
    void termsOfService_get(QString ad_account_id, bool include_html, QString tos_type);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAITermsOfServiceApiHandler> handler;

    inline void setSocketResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
    }
};

}

#endif // OAI_OAITermsOfServiceApiRequest_H
