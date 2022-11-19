/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
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
#include "OAIProductGroupPromotionsApiRequest.h"

namespace OpenAPI {

OAIProductGroupPromotionsApiRequest::OAIProductGroupPromotionsApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIProductGroupPromotionsApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIProductGroupPromotionsApiRequest::~OAIProductGroupPromotionsApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIProductGroupPromotionsApiRequest::~OAIProductGroupPromotionsApiRequest()";
}

QMap<QString, QString>
OAIProductGroupPromotionsApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIProductGroupPromotionsApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIProductGroupPromotionsApiRequest::getRawSocket(){
    return socket;
}


void OAIProductGroupPromotionsApiRequest::productGroupPromotion_getRequest(const QString& ad_account_idstr, const QString& product_group_promotion_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/product_group_promotions/{product_group_promotion_id}";
    connect(this, &OAIProductGroupPromotionsApiRequest::productGroupPromotion_get, handler.data(), &OAIProductGroupPromotionsApiHandler::productGroupPromotion_get);

    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
        QString product_group_promotion_id;
    fromStringValue(product_group_promotion_idstr, product_group_promotion_id);
    

    emit productGroupPromotion_get(ad_account_id, product_group_promotion_id);
}


void OAIProductGroupPromotionsApiRequest::productGroupPromotions_createRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/product_group_promotions";
    connect(this, &OAIProductGroupPromotionsApiRequest::productGroupPromotions_create, handler.data(), &OAIProductGroupPromotionsApiHandler::productGroupPromotions_create);

    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
     
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIProductGroupPromotionCreateRequest oai_product_group_promotion_create_request;
    ::OpenAPI::fromJsonValue(oai_product_group_promotion_create_request, obj);
    

    emit productGroupPromotions_create(ad_account_id, oai_product_group_promotion_create_request);
}


void OAIProductGroupPromotionsApiRequest::productGroupPromotions_updateRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/product_group_promotions";
    connect(this, &OAIProductGroupPromotionsApiRequest::productGroupPromotions_update, handler.data(), &OAIProductGroupPromotionsApiHandler::productGroupPromotions_update);

    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
     
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIProductGroupPromotionUpdateRequest oai_product_group_promotion_update_request;
    ::OpenAPI::fromJsonValue(oai_product_group_promotion_update_request, obj);
    

    emit productGroupPromotions_update(ad_account_id, oai_product_group_promotion_update_request);
}


void OAIProductGroupPromotionsApiRequest::productGroups_analyticsRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/product_groups/analytics";
    connect(this, &OAIProductGroupPromotionsApiRequest::productGroups_analytics, handler.data(), &OAIProductGroupPromotionsApiHandler::productGroups_analytics);

    
    QDate start_date;
    if(socket->queryString().keys().contains("start_date")){
        fromStringValue(socket->queryString().value("start_date"), start_date);
    }
    
    QDate end_date;
    if(socket->queryString().keys().contains("end_date")){
        fromStringValue(socket->queryString().value("end_date"), end_date);
    }
    
    QList<QString> product_group_ids;
    if(socket->queryString().keys().contains("product_group_ids")){
        fromStringValue(socket->queryString().values("product_group_ids"), product_group_ids);
    }
    
    QList<QString> columns;
    if(socket->queryString().keys().contains("columns")){
        fromStringValue(socket->queryString().values("columns"), columns);
    }
    
    OAIGranularity granularity;
    if(socket->queryString().keys().contains("granularity")){
        fromStringValue(socket->queryString().value("granularity"), granularity);
    }
    
    qint32 click_window_days;
    if(socket->queryString().keys().contains("click_window_days")){
        fromStringValue(socket->queryString().value("click_window_days"), click_window_days);
    }
    
    qint32 engagement_window_days;
    if(socket->queryString().keys().contains("engagement_window_days")){
        fromStringValue(socket->queryString().value("engagement_window_days"), engagement_window_days);
    }
    
    qint32 view_window_days;
    if(socket->queryString().keys().contains("view_window_days")){
        fromStringValue(socket->queryString().value("view_window_days"), view_window_days);
    }
    
    QString conversion_report_time;
    if(socket->queryString().keys().contains("conversion_report_time")){
        fromStringValue(socket->queryString().value("conversion_report_time"), conversion_report_time);
    }
    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
    

    emit productGroups_analytics(ad_account_id, start_date, end_date, product_group_ids, columns, granularity, click_window_days, engagement_window_days, view_window_days, conversion_report_time);
}



void OAIProductGroupPromotionsApiRequest::productGroupPromotion_getResponse(const OAIProductGroupPromotion& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIProductGroupPromotionsApiRequest::productGroupPromotions_createResponse(const QList<OAIProductGroupPromotionArrayElement>& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toArray());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIProductGroupPromotionsApiRequest::productGroupPromotions_updateResponse(const QList<OAIProductGroupPromotionUpdateResponseItem>& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toArray());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIProductGroupPromotionsApiRequest::productGroups_analyticsResponse(const QList<OAIProductGroupAnalyticsResponse_inner>& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toArray());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIProductGroupPromotionsApiRequest::productGroupPromotion_getError(const OAIProductGroupPromotion& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIProductGroupPromotionsApiRequest::productGroupPromotions_createError(const QList<OAIProductGroupPromotionArrayElement>& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toArray());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIProductGroupPromotionsApiRequest::productGroupPromotions_updateError(const QList<OAIProductGroupPromotionUpdateResponseItem>& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toArray());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIProductGroupPromotionsApiRequest::productGroups_analyticsError(const QList<OAIProductGroupAnalyticsResponse_inner>& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toArray());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIProductGroupPromotionsApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIProductGroupPromotionsApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
