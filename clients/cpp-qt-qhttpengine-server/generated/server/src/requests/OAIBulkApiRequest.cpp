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

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QDebug>

#include "OAIHelpers.h"
#include "OAIBulkApiRequest.h"

namespace OpenAPI {

OAIBulkApiRequest::OAIBulkApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIBulkApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIBulkApiRequest::~OAIBulkApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIBulkApiRequest::~OAIBulkApiRequest()";
}

QMap<QString, QString>
OAIBulkApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIBulkApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIBulkApiRequest::getRawSocket(){
    return socket;
}


void OAIBulkApiRequest::bulkDownload_createRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/bulk/download";
    connect(this, &OAIBulkApiRequest::bulkDownload_create, handler.data(), &OAIBulkApiHandler::bulkDownload_create);

    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
     
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIBulkDownloadRequest oai_bulk_download_request;
    ::OpenAPI::fromJsonValue(oai_bulk_download_request, obj);
    

    Q_EMIT bulkDownload_create(ad_account_id, oai_bulk_download_request);
}


void OAIBulkApiRequest::bulkRequest_getRequest(const QString& ad_account_idstr, const QString& bulk_request_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/bulk/{bulk_request_id}";
    connect(this, &OAIBulkApiRequest::bulkRequest_get, handler.data(), &OAIBulkApiHandler::bulkRequest_get);

    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
        QString bulk_request_id;
    fromStringValue(bulk_request_idstr, bulk_request_id);
    

    Q_EMIT bulkRequest_get(ad_account_id, bulk_request_id);
}


void OAIBulkApiRequest::bulkUpsert_createRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/bulk/upsert";
    connect(this, &OAIBulkApiRequest::bulkUpsert_create, handler.data(), &OAIBulkApiHandler::bulkUpsert_create);

    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
     
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIBulkUpsertRequest oai_bulk_upsert_request;
    ::OpenAPI::fromJsonValue(oai_bulk_upsert_request, obj);
    

    Q_EMIT bulkUpsert_create(ad_account_id, oai_bulk_upsert_request);
}



void OAIBulkApiRequest::bulkDownload_createResponse(const OAIBulkDownloadResponse& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBulkApiRequest::bulkRequest_getResponse(const OAIBulkUpsertStatusResponse& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBulkApiRequest::bulkUpsert_createResponse(const OAIBulkUpsertResponse& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIBulkApiRequest::bulkDownload_createError(const OAIBulkDownloadResponse& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBulkApiRequest::bulkRequest_getError(const OAIBulkUpsertStatusResponse& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBulkApiRequest::bulkUpsert_createError(const OAIBulkUpsertResponse& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIBulkApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBulkApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
