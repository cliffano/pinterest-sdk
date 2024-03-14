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

#ifndef OAI_OAIKeywordsApiRequest_H
#define OAI_OAIKeywordsApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAIError.h"
#include "OAIKeywordUpdateBody.h"
#include "OAIKeywordsMetricsArrayResponse.h"
#include "OAIKeywordsRequest.h"
#include "OAIKeywordsResponse.h"
#include "OAIKeywords_get_200_response.h"
#include "OAIMatchType.h"
#include <QList>
#include <QString>
#include "OAIKeywordsApiHandler.h"

namespace OpenAPI {

class OAIKeywordsApiRequest : public QObject
{
    Q_OBJECT

public:
    OAIKeywordsApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIKeywordsApiHandler> handler);
    virtual ~OAIKeywordsApiRequest();

    void countryKeywordsMetrics_getRequest(const QString& ad_account_id);
    void keywords_createRequest(const QString& ad_account_id);
    void keywords_getRequest(const QString& ad_account_id);
    void keywords_updateRequest(const QString& ad_account_id);
    

    void countryKeywordsMetrics_getResponse(const OAIKeywordsMetricsArrayResponse& res);
    void keywords_createResponse(const OAIKeywordsResponse& res);
    void keywords_getResponse(const OAIKeywords_get_200_response& res);
    void keywords_updateResponse(const OAIKeywordsResponse& res);
    

    void countryKeywordsMetrics_getError(const OAIKeywordsMetricsArrayResponse& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void keywords_createError(const OAIKeywordsResponse& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void keywords_getError(const OAIKeywords_get_200_response& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void keywords_updateError(const OAIKeywordsResponse& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

Q_SIGNALS:
    void countryKeywordsMetrics_get(QString ad_account_id, QString country_code, QList<QString> keywords);
    void keywords_create(QString ad_account_id, OAIKeywordsRequest oai_keywords_request);
    void keywords_get(QString ad_account_id, QString campaign_id, QString ad_group_id, QList<OAIMatchType> match_types, qint32 page_size, QString bookmark);
    void keywords_update(QString ad_account_id, OAIKeywordUpdateBody oai_keyword_update_body);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAIKeywordsApiHandler> handler;

    inline void setSocketResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
    }
};

}

#endif // OAI_OAIKeywordsApiRequest_H