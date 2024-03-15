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
#include "OAIConversionTagsApiRequest.h"

namespace OpenAPI {

OAIConversionTagsApiRequest::OAIConversionTagsApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIConversionTagsApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIConversionTagsApiRequest::~OAIConversionTagsApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIConversionTagsApiRequest::~OAIConversionTagsApiRequest()";
}

QMap<QString, QString>
OAIConversionTagsApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIConversionTagsApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIConversionTagsApiRequest::getRawSocket(){
    return socket;
}


void OAIConversionTagsApiRequest::conversionTags_createRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/conversion_tags";
    connect(this, &OAIConversionTagsApiRequest::conversionTags_create, handler.data(), &OAIConversionTagsApiHandler::conversionTags_create);

    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
     
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIConversionTagCreate oai_conversion_tag_create;
    ::OpenAPI::fromJsonValue(oai_conversion_tag_create, obj);
    

    Q_EMIT conversionTags_create(ad_account_id, oai_conversion_tag_create);
}


void OAIConversionTagsApiRequest::conversionTags_getRequest(const QString& ad_account_idstr, const QString& conversion_tag_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/conversion_tags/{conversion_tag_id}";
    connect(this, &OAIConversionTagsApiRequest::conversionTags_get, handler.data(), &OAIConversionTagsApiHandler::conversionTags_get);

    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
        QString conversion_tag_id;
    fromStringValue(conversion_tag_idstr, conversion_tag_id);
    

    Q_EMIT conversionTags_get(ad_account_id, conversion_tag_id);
}


void OAIConversionTagsApiRequest::conversionTags_listRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/conversion_tags";
    connect(this, &OAIConversionTagsApiRequest::conversionTags_list, handler.data(), &OAIConversionTagsApiHandler::conversionTags_list);

    
    bool filter_deleted;
    if(socket->queryString().keys().contains("filter_deleted")){
        fromStringValue(socket->queryString().value("filter_deleted"), filter_deleted);
    }
    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
    

    Q_EMIT conversionTags_list(ad_account_id, filter_deleted);
}


void OAIConversionTagsApiRequest::ocpmEligibleConversionTags_getRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/conversion_tags/ocpm_eligible";
    connect(this, &OAIConversionTagsApiRequest::ocpmEligibleConversionTags_get, handler.data(), &OAIConversionTagsApiHandler::ocpmEligibleConversionTags_get);

    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
    

    Q_EMIT ocpmEligibleConversionTags_get(ad_account_id);
}


void OAIConversionTagsApiRequest::pageVisitConversionTags_getRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/conversion_tags/page_visit";
    connect(this, &OAIConversionTagsApiRequest::pageVisitConversionTags_get, handler.data(), &OAIConversionTagsApiHandler::pageVisitConversionTags_get);

    
    qint32 page_size;
    if(socket->queryString().keys().contains("page_size")){
        fromStringValue(socket->queryString().value("page_size"), page_size);
    }
    
    QString order;
    if(socket->queryString().keys().contains("order")){
        fromStringValue(socket->queryString().value("order"), order);
    }
    
    QString bookmark;
    if(socket->queryString().keys().contains("bookmark")){
        fromStringValue(socket->queryString().value("bookmark"), bookmark);
    }
    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
    

    Q_EMIT pageVisitConversionTags_get(ad_account_id, page_size, order, bookmark);
}



void OAIConversionTagsApiRequest::conversionTags_createResponse(const OAIConversionTagResponse& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConversionTagsApiRequest::conversionTags_getResponse(const OAIConversionTagResponse& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConversionTagsApiRequest::conversionTags_listResponse(const OAIConversionTagListResponse& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConversionTagsApiRequest::ocpmEligibleConversionTags_getResponse(const QMap<QString, QList<OAIConversionEventResponse>>& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConversionTagsApiRequest::pageVisitConversionTags_getResponse(const OAIPage_visit_conversion_tags_get_200_response& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIConversionTagsApiRequest::conversionTags_createError(const OAIConversionTagResponse& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConversionTagsApiRequest::conversionTags_getError(const OAIConversionTagResponse& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConversionTagsApiRequest::conversionTags_listError(const OAIConversionTagListResponse& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConversionTagsApiRequest::ocpmEligibleConversionTags_getError(const QMap<QString, QList<OAIConversionEventResponse>>& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConversionTagsApiRequest::pageVisitConversionTags_getError(const OAIPage_visit_conversion_tags_get_200_response& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIConversionTagsApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIConversionTagsApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}