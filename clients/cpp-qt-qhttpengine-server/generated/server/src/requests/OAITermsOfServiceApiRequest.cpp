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

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QDebug>

#include "OAIHelpers.h"
#include "OAITermsOfServiceApiRequest.h"

namespace OpenAPI {

OAITermsOfServiceApiRequest::OAITermsOfServiceApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAITermsOfServiceApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAITermsOfServiceApiRequest::~OAITermsOfServiceApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAITermsOfServiceApiRequest::~OAITermsOfServiceApiRequest()";
}

QMap<QString, QString>
OAITermsOfServiceApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAITermsOfServiceApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAITermsOfServiceApiRequest::getRawSocket(){
    return socket;
}


void OAITermsOfServiceApiRequest::termsOfService_getRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/terms_of_service";
    connect(this, &OAITermsOfServiceApiRequest::termsOfService_get, handler.data(), &OAITermsOfServiceApiHandler::termsOfService_get);

    
    bool include_html;
    if(socket->queryString().keys().contains("include_html")){
        fromStringValue(socket->queryString().value("include_html"), include_html);
    }
    
    QString tos_type;
    if(socket->queryString().keys().contains("tos_type")){
        fromStringValue(socket->queryString().value("tos_type"), tos_type);
    }
    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
    

    Q_EMIT termsOfService_get(ad_account_id, include_html, tos_type);
}



void OAITermsOfServiceApiRequest::termsOfService_getResponse(const OAITermsOfService& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAITermsOfServiceApiRequest::termsOfService_getError(const OAITermsOfService& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAITermsOfServiceApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAITermsOfServiceApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
