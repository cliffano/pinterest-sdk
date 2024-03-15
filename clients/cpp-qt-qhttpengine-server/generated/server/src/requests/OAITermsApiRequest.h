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

#ifndef OAI_OAITermsApiRequest_H
#define OAI_OAITermsApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAIError.h"
#include "OAIRelatedTerms.h"
#include <QList>
#include <QString>
#include "OAITermsApiHandler.h"

namespace OpenAPI {

class OAITermsApiRequest : public QObject
{
    Q_OBJECT

public:
    OAITermsApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAITermsApiHandler> handler);
    virtual ~OAITermsApiRequest();

    void termsRelated_listRequest();
    void termsSuggested_listRequest();
    

    void termsRelated_listResponse(const OAIRelatedTerms& res);
    void termsSuggested_listResponse(const QList<QString>& res);
    

    void termsRelated_listError(const OAIRelatedTerms& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void termsSuggested_listError(const QList<QString>& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

Q_SIGNALS:
    void termsRelated_list(QList<QString> terms);
    void termsSuggested_list(QString term, qint32 limit);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAITermsApiHandler> handler;

    inline void setSocketResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
    }
};

}

#endif // OAI_OAITermsApiRequest_H
