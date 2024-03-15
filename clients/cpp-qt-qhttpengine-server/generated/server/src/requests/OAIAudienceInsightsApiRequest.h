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

#ifndef OAI_OAIAudienceInsightsApiRequest_H
#define OAI_OAIAudienceInsightsApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAIAudienceDefinitionResponse.h"
#include "OAIAudienceInsightType.h"
#include "OAIAudienceInsightsResponse.h"
#include "OAIError.h"
#include <QString>
#include "OAIAudienceInsightsApiHandler.h"

namespace OpenAPI {

class OAIAudienceInsightsApiRequest : public QObject
{
    Q_OBJECT

public:
    OAIAudienceInsightsApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIAudienceInsightsApiHandler> handler);
    virtual ~OAIAudienceInsightsApiRequest();

    void audienceInsightsScopeAndType_getRequest(const QString& ad_account_id);
    void audienceInsights_getRequest(const QString& ad_account_id);
    

    void audienceInsightsScopeAndType_getResponse(const OAIAudienceDefinitionResponse& res);
    void audienceInsights_getResponse(const OAIAudienceInsightsResponse& res);
    

    void audienceInsightsScopeAndType_getError(const OAIAudienceDefinitionResponse& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void audienceInsights_getError(const OAIAudienceInsightsResponse& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

Q_SIGNALS:
    void audienceInsightsScopeAndType_get(QString ad_account_id);
    void audienceInsights_get(QString ad_account_id, OAIAudienceInsightType audience_insight_type);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAIAudienceInsightsApiHandler> handler;

    inline void setSocketResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
    }
};

}

#endif // OAI_OAIAudienceInsightsApiRequest_H
