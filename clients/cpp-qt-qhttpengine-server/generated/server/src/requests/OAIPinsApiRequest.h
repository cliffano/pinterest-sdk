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

#ifndef OAI_OAIPinsApiRequest_H
#define OAI_OAIPinsApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAIAnalyticsMetricsResponse.h"
#include "OAIError.h"
#include "OAIPin.h"
#include <QString>
#include "OAIPinsApiHandler.h"

namespace OpenAPI {

class OAIPinsApiRequest : public QObject
{
    Q_OBJECT

public:
    OAIPinsApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIPinsApiHandler> handler);
    virtual ~OAIPinsApiRequest();

    void pins_analyticsRequest(const QString& pin_id);
    void pins_createRequest();
    void pins_deleteRequest(const QString& pin_id);
    void pins_getRequest(const QString& pin_id);
    

    void pins_analyticsResponse(const QMap<QString, OAIAnalyticsMetricsResponse>& res);
    void pins_createResponse(const OAIPin& res);
    void pins_deleteResponse();
    void pins_getResponse(const OAIPin& res);
    

    void pins_analyticsError(const QMap<QString, OAIAnalyticsMetricsResponse>& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void pins_createError(const OAIPin& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void pins_deleteError(QNetworkReply::NetworkError error_type, QString& error_str);
    void pins_getError(const OAIPin& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

signals:
    void pins_analytics(QString pin_id, QDate start_date, QDate end_date, QList<QString> metric_types, QString app_types, QString split_field, QString ad_account_id);
    void pins_create(OAIPin oai_pin);
    void pins_delete(QString pin_id);
    void pins_get(QString pin_id, QString ad_account_id);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAIPinsApiHandler> handler;

    inline void setSocketResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
    }
};

}

#endif // OAI_OAIPinsApiRequest_H
