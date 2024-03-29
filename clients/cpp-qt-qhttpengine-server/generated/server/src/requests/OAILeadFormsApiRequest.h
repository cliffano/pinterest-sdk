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

#ifndef OAI_OAILeadFormsApiRequest_H
#define OAI_OAILeadFormsApiRequest_H

#include <QObject>
#include <QStringList>
#include <QMultiMap>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAIError.h"
#include "OAILeadFormResponse.h"
#include "OAILeadFormTestRequest.h"
#include "OAILeadFormTestResponse.h"
#include "OAILead_forms_list_200_response.h"
#include <QString>
#include "OAILeadFormsApiHandler.h"

namespace OpenAPI {

class OAILeadFormsApiRequest : public QObject
{
    Q_OBJECT

public:
    OAILeadFormsApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAILeadFormsApiHandler> handler);
    virtual ~OAILeadFormsApiRequest();

    void leadFormTest_createRequest(const QString& ad_account_id, const QString& lead_form_id);
    void leadForm_getRequest(const QString& ad_account_id, const QString& lead_form_id);
    void leadForms_listRequest(const QString& ad_account_id);
    

    void leadFormTest_createResponse(const OAILeadFormTestResponse& res);
    void leadForm_getResponse(const OAILeadFormResponse& res);
    void leadForms_listResponse(const OAILead_forms_list_200_response& res);
    

    void leadFormTest_createError(const OAILeadFormTestResponse& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void leadForm_getError(const OAILeadFormResponse& res, QNetworkReply::NetworkError error_type, QString& error_str);
    void leadForms_listError(const OAILead_forms_list_200_response& res, QNetworkReply::NetworkError error_type, QString& error_str);
    

    void sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type);

    void sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type);

    QMap<QString, QString> getRequestHeaders() const;

    QHttpEngine::Socket* getRawSocket();

    void setResponseHeaders(const QMultiMap<QString,QString>& headers);

Q_SIGNALS:
    void leadFormTest_create(QString ad_account_id, QString lead_form_id, OAILeadFormTestRequest oai_lead_form_test_request);
    void leadForm_get(QString ad_account_id, QString lead_form_id);
    void leadForms_list(QString ad_account_id, qint32 page_size, QString order, QString bookmark);
    

private:
    QMap<QString, QString> requestHeaders;
    QMap<QString, QString> responseHeaders;
    QHttpEngine::Socket  *socket;
    QSharedPointer<OAILeadFormsApiHandler> handler;

    inline void setSocketResponseHeaders(){
        QHttpEngine::Socket::HeaderMap resHeaders;
        for(auto itr = responseHeaders.begin(); itr != responseHeaders.end(); ++itr) {
            resHeaders.insert(itr.key().toUtf8(), itr.value().toUtf8());
        }
        socket->setHeaders(resHeaders);
    }
};

}

#endif // OAI_OAILeadFormsApiRequest_H
