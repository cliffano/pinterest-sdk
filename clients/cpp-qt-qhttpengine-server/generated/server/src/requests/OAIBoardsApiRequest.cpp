/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
#include "OAIBoardsApiRequest.h"

namespace OpenAPI {

OAIBoardsApiRequest::OAIBoardsApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIBoardsApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIBoardsApiRequest::~OAIBoardsApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIBoardsApiRequest::~OAIBoardsApiRequest()";
}

QMap<QString, QString>
OAIBoardsApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIBoardsApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIBoardsApiRequest::getRawSocket(){
    return socket;
}


void OAIBoardsApiRequest::boardSections_createRequest(const QString& board_idstr){
    qDebug() << "/v5/boards/{board_id}/sections";
    connect(this, &OAIBoardsApiRequest::boardSections_create, handler.data(), &OAIBoardsApiHandler::boardSections_create);

    
    QString board_id;
    fromStringValue(board_idstr, board_id);
     
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIBoardSection oai_board_section;
    ::OpenAPI::fromJsonValue(oai_board_section, obj);
    

    emit boardSections_create(board_id, oai_board_section);
}


void OAIBoardsApiRequest::boardSections_deleteRequest(const QString& board_idstr, const QString& section_idstr){
    qDebug() << "/v5/boards/{board_id}/sections/{section_id}";
    connect(this, &OAIBoardsApiRequest::boardSections_delete, handler.data(), &OAIBoardsApiHandler::boardSections_delete);

    
    QString board_id;
    fromStringValue(board_idstr, board_id);
        QString section_id;
    fromStringValue(section_idstr, section_id);
    

    emit boardSections_delete(board_id, section_id);
}


void OAIBoardsApiRequest::boardSections_listRequest(const QString& board_idstr){
    qDebug() << "/v5/boards/{board_id}/sections";
    connect(this, &OAIBoardsApiRequest::boardSections_list, handler.data(), &OAIBoardsApiHandler::boardSections_list);

    
    QString bookmark;
    if(socket->queryString().keys().contains("bookmark")){
        fromStringValue(socket->queryString().value("bookmark"), bookmark);
    }
    
    qint32 page_size;
    if(socket->queryString().keys().contains("page_size")){
        fromStringValue(socket->queryString().value("page_size"), page_size);
    }
    
    QString board_id;
    fromStringValue(board_idstr, board_id);
    

    emit boardSections_list(board_id, bookmark, page_size);
}


void OAIBoardsApiRequest::boardSections_listPinsRequest(const QString& board_idstr, const QString& section_idstr){
    qDebug() << "/v5/boards/{board_id}/sections/{section_id}/pins";
    connect(this, &OAIBoardsApiRequest::boardSections_listPins, handler.data(), &OAIBoardsApiHandler::boardSections_listPins);

    
    QString bookmark;
    if(socket->queryString().keys().contains("bookmark")){
        fromStringValue(socket->queryString().value("bookmark"), bookmark);
    }
    
    qint32 page_size;
    if(socket->queryString().keys().contains("page_size")){
        fromStringValue(socket->queryString().value("page_size"), page_size);
    }
    
    QString board_id;
    fromStringValue(board_idstr, board_id);
        QString section_id;
    fromStringValue(section_idstr, section_id);
    

    emit boardSections_listPins(board_id, section_id, bookmark, page_size);
}


void OAIBoardsApiRequest::boardSections_updateRequest(const QString& board_idstr, const QString& section_idstr){
    qDebug() << "/v5/boards/{board_id}/sections/{section_id}";
    connect(this, &OAIBoardsApiRequest::boardSections_update, handler.data(), &OAIBoardsApiHandler::boardSections_update);

    
    QString board_id;
    fromStringValue(board_idstr, board_id);
        QString section_id;
    fromStringValue(section_idstr, section_id);
     
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIBoardSection oai_board_section;
    ::OpenAPI::fromJsonValue(oai_board_section, obj);
    

    emit boardSections_update(board_id, section_id, oai_board_section);
}


void OAIBoardsApiRequest::boards_createRequest(){
    qDebug() << "/v5/boards";
    connect(this, &OAIBoardsApiRequest::boards_create, handler.data(), &OAIBoardsApiHandler::boards_create);

    
 
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIBoard oai_board;
    ::OpenAPI::fromJsonValue(oai_board, obj);
    

    emit boards_create(oai_board);
}


void OAIBoardsApiRequest::boards_deleteRequest(const QString& board_idstr){
    qDebug() << "/v5/boards/{board_id}";
    connect(this, &OAIBoardsApiRequest::boards_delete, handler.data(), &OAIBoardsApiHandler::boards_delete);

    
    QString board_id;
    fromStringValue(board_idstr, board_id);
    

    emit boards_delete(board_id);
}


void OAIBoardsApiRequest::boards_getRequest(const QString& board_idstr){
    qDebug() << "/v5/boards/{board_id}";
    connect(this, &OAIBoardsApiRequest::boards_get, handler.data(), &OAIBoardsApiHandler::boards_get);

    
    QString board_id;
    fromStringValue(board_idstr, board_id);
    

    emit boards_get(board_id);
}


void OAIBoardsApiRequest::boards_listRequest(){
    qDebug() << "/v5/boards";
    connect(this, &OAIBoardsApiRequest::boards_list, handler.data(), &OAIBoardsApiHandler::boards_list);

    
    QString bookmark;
    if(socket->queryString().keys().contains("bookmark")){
        fromStringValue(socket->queryString().value("bookmark"), bookmark);
    }
    
    qint32 page_size;
    if(socket->queryString().keys().contains("page_size")){
        fromStringValue(socket->queryString().value("page_size"), page_size);
    }
    
    QString privacy;
    if(socket->queryString().keys().contains("privacy")){
        fromStringValue(socket->queryString().value("privacy"), privacy);
    }
    


    emit boards_list(bookmark, page_size, privacy);
}


void OAIBoardsApiRequest::boards_listPinsRequest(const QString& board_idstr){
    qDebug() << "/v5/boards/{board_id}/pins";
    connect(this, &OAIBoardsApiRequest::boards_listPins, handler.data(), &OAIBoardsApiHandler::boards_listPins);

    
    QString bookmark;
    if(socket->queryString().keys().contains("bookmark")){
        fromStringValue(socket->queryString().value("bookmark"), bookmark);
    }
    
    qint32 page_size;
    if(socket->queryString().keys().contains("page_size")){
        fromStringValue(socket->queryString().value("page_size"), page_size);
    }
    
    QString board_id;
    fromStringValue(board_idstr, board_id);
    

    emit boards_listPins(board_id, bookmark, page_size);
}


void OAIBoardsApiRequest::boards_updateRequest(const QString& board_idstr){
    qDebug() << "/v5/boards/{board_id}";
    connect(this, &OAIBoardsApiRequest::boards_update, handler.data(), &OAIBoardsApiHandler::boards_update);

    
    QString board_id;
    fromStringValue(board_idstr, board_id);
     
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIBoardUpdate oai_board_update;
    ::OpenAPI::fromJsonValue(oai_board_update, obj);
    

    emit boards_update(board_id, oai_board_update);
}



void OAIBoardsApiRequest::boardSections_createResponse(const OAIBoardSection& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boardSections_deleteResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boardSections_listResponse(const OAIPaginated& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boardSections_listPinsResponse(const OAIPaginated& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boardSections_updateResponse(const OAIBoardSection& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boards_createResponse(const OAIBoard& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boards_deleteResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boards_getResponse(const OAIBoard& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boards_listResponse(const OAIPaginated& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boards_listPinsResponse(const OAIPaginated& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boards_updateResponse(const OAIBoard& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIBoardsApiRequest::boardSections_createError(const OAIBoardSection& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boardSections_deleteError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boardSections_listError(const OAIPaginated& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boardSections_listPinsError(const OAIPaginated& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boardSections_updateError(const OAIBoardSection& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boards_createError(const OAIBoard& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boards_deleteError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boards_getError(const OAIBoard& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boards_listError(const OAIPaginated& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boards_listPinsError(const OAIPaginated& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::boards_updateError(const OAIBoard& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIBoardsApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIBoardsApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
