/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAICampaignsApiRequest_H
#define OAI_OAICampaignsApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAICampaignCreateRequest.h"
#include "OAICampaignCreateResponse.h"
#include "OAICampaignResponse.h"
#include "OAICampaignUpdateRequest.h"
#include "OAICampaignUpdateResponse.h"
#include "OAICampaigns_list_200_response.h"
#include "OAIError.h"
#include <QList>
#include <QString>
#include "OAICampaignsApiHandler.h"

namespace OpenAPI {

class OAICampaignsApiRequest : public QObject
{
    Q_OBJECT

public:
    OAICampaignsApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAICampaignsApiHandler> handler);
    virtual ~OAICampaignsApiRequest();

    void campaigns_createRequest(const QString& ad_account_id);
    void campaigns_getRequest(const QString& ad_account_id, const QString& campaign_id);
    void campaigns_listRequest(const QString& ad_account_id);
    void campaigns_updateRequest(const QString& ad_account_id);
    

    void campaigns_createResponse(const OAICampaignCreateResponse& res);
    void campaigns_getResponse(const OAICampaignResponse& res);
    void campaigns_listResponse(const OAICampaigns_list_200_response& res);
    void campaigns_updateResponse(const OAICampaignUpdateResponse& res);
    

    void campaigns_createError(const OAICampaignCreateResponse& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void campaigns_getError(const OAICampaignResponse& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void campaigns_listError(const OAICampaigns_list_200_response& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void campaigns_updateError(const OAICampaignUpdateResponse& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

signals:
    void campaigns_create(QString ad_account_id, QList<OAICampaignCreateRequest> oai_campaign_create_request);
    void campaigns_get(QString ad_account_id, QString campaign_id);
    void campaigns_list(QString ad_account_id, QList<QString> campaign_ids, QList<QString> entity_statuses, qint32 page_size, QString order, QString bookmark);
    void campaigns_update(QString ad_account_id, QList<OAICampaignUpdateRequest> oai_campaign_update_request);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAICampaignsApiHandler> handler;

    inline void setSocketResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
    }
};

}

#endif // OAI_OAICampaignsApiRequest_H
