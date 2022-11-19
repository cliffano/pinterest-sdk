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
#include "OAIAdsApiRequest.h"

namespace OpenAPI {

OAIAdsApiRequest::OAIAdsApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIAdsApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIAdsApiRequest::~OAIAdsApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIAdsApiRequest::~OAIAdsApiRequest()";
}

QMap<QString, QString>
OAIAdsApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIAdsApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIAdsApiRequest::getRawSocket(){
    return socket;
}


void OAIAdsApiRequest::adPreviews_createRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/ad_previews";
    connect(this, &OAIAdsApiRequest::adPreviews_create, handler.data(), &OAIAdsApiHandler::adPreviews_create);

    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
     
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIAdPreviewRequest oaiad_preview_request;
    ::OpenAPI::fromJsonValue(oaiad_preview_request, obj);
    

    emit adPreviews_create(ad_account_id, oaiad_preview_request);
}


void OAIAdsApiRequest::adTargetingAnalytics_getRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/ads/targeting_analytics";
    connect(this, &OAIAdsApiRequest::adTargetingAnalytics_get, handler.data(), &OAIAdsApiHandler::adTargetingAnalytics_get);

    
    QList<QString> ad_ids;
    if(socket->queryString().keys().contains("ad_ids")){
        fromStringValue(socket->queryString().values("ad_ids"), ad_ids);
    }
    
    QDate start_date;
    if(socket->queryString().keys().contains("start_date")){
        fromStringValue(socket->queryString().value("start_date"), start_date);
    }
    
    QDate end_date;
    if(socket->queryString().keys().contains("end_date")){
        fromStringValue(socket->queryString().value("end_date"), end_date);
    }
    
    QList<OAIAdsAnalyticsTargetingType> targeting_types;
    if(socket->queryString().keys().contains("targeting_types")){
        fromStringValue(socket->queryString().values("targeting_types"), targeting_types);
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
    
    OAIConversionReportAttributionType attribution_types;
    if(socket->queryString().keys().contains("attribution_types")){
        fromStringValue(socket->queryString().value("attribution_types"), attribution_types);
    }
    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
    

    emit adTargetingAnalytics_get(ad_account_id, ad_ids, start_date, end_date, targeting_types, columns, granularity, click_window_days, engagement_window_days, view_window_days, conversion_report_time, attribution_types);
}


void OAIAdsApiRequest::ads_analyticsRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/ads/analytics";
    connect(this, &OAIAdsApiRequest::ads_analytics, handler.data(), &OAIAdsApiHandler::ads_analytics);

    
    QDate start_date;
    if(socket->queryString().keys().contains("start_date")){
        fromStringValue(socket->queryString().value("start_date"), start_date);
    }
    
    QDate end_date;
    if(socket->queryString().keys().contains("end_date")){
        fromStringValue(socket->queryString().value("end_date"), end_date);
    }
    
    QList<QString> ad_ids;
    if(socket->queryString().keys().contains("ad_ids")){
        fromStringValue(socket->queryString().values("ad_ids"), ad_ids);
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
    

    emit ads_analytics(ad_account_id, start_date, end_date, ad_ids, columns, granularity, click_window_days, engagement_window_days, view_window_days, conversion_report_time);
}


void OAIAdsApiRequest::ads_createRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/ads";
    connect(this, &OAIAdsApiRequest::ads_create, handler.data(), &OAIAdsApiHandler::ads_create);

    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
     
    QJsonDocument doc;
    QList<OAIAdCreateRequest> oaiad_create_request;
    if(socket->readJson(doc)){
        QJsonArray jsonArray = doc.array();
        foreach(QJsonValue obj, jsonArray) {
            OAIAdCreateRequest o;
            ::OpenAPI::fromJsonValue(o, obj);
            oaiad_create_request.append(o);
        }
    }
    

    emit ads_create(ad_account_id, oaiad_create_request);
}


void OAIAdsApiRequest::ads_getRequest(const QString& ad_account_idstr, const QString& ad_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/ads/{ad_id}";
    connect(this, &OAIAdsApiRequest::ads_get, handler.data(), &OAIAdsApiHandler::ads_get);

    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
        QString ad_id;
    fromStringValue(ad_idstr, ad_id);
    

    emit ads_get(ad_account_id, ad_id);
}


void OAIAdsApiRequest::ads_listRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/ads";
    connect(this, &OAIAdsApiRequest::ads_list, handler.data(), &OAIAdsApiHandler::ads_list);

    
    QList<QString> campaign_ids;
    if(socket->queryString().keys().contains("campaign_ids")){
        fromStringValue(socket->queryString().values("campaign_ids"), campaign_ids);
    }
    
    QList<QString> ad_group_ids;
    if(socket->queryString().keys().contains("ad_group_ids")){
        fromStringValue(socket->queryString().values("ad_group_ids"), ad_group_ids);
    }
    
    QList<QString> ad_ids;
    if(socket->queryString().keys().contains("ad_ids")){
        fromStringValue(socket->queryString().values("ad_ids"), ad_ids);
    }
    
    QList<QString> entity_statuses;
    if(socket->queryString().keys().contains("entity_statuses")){
        fromStringValue(socket->queryString().values("entity_statuses"), entity_statuses);
    }
    
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
    

    emit ads_list(ad_account_id, campaign_ids, ad_group_ids, ad_ids, entity_statuses, page_size, order, bookmark);
}


void OAIAdsApiRequest::ads_updateRequest(const QString& ad_account_idstr){
    qDebug() << "/v5/ad_accounts/{ad_account_id}/ads";
    connect(this, &OAIAdsApiRequest::ads_update, handler.data(), &OAIAdsApiHandler::ads_update);

    
    QString ad_account_id;
    fromStringValue(ad_account_idstr, ad_account_id);
     
    QJsonDocument doc;
    QList<OAIAdUpdateRequest> oaiad_update_request;
    if(socket->readJson(doc)){
        QJsonArray jsonArray = doc.array();
        foreach(QJsonValue obj, jsonArray) {
            OAIAdUpdateRequest o;
            ::OpenAPI::fromJsonValue(o, obj);
            oaiad_update_request.append(o);
        }
    }
    

    emit ads_update(ad_account_id, oaiad_update_request);
}



void OAIAdsApiRequest::adPreviews_createResponse(const OAIAdPreviewURLResponse& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIAdsApiRequest::adTargetingAnalytics_getResponse(const OAIMetricsResponse& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIAdsApiRequest::ads_analyticsResponse(const QList<OAIAdsAnalyticsResponse_inner>& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toArray());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIAdsApiRequest::ads_createResponse(const OAIAdArrayResponse& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIAdsApiRequest::ads_getResponse(const OAIAdResponse& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIAdsApiRequest::ads_listResponse(const OAIAds_list_200_response& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIAdsApiRequest::ads_updateResponse(const OAIAdArrayResponse& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIAdsApiRequest::adPreviews_createError(const OAIAdPreviewURLResponse& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIAdsApiRequest::adTargetingAnalytics_getError(const OAIMetricsResponse& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIAdsApiRequest::ads_analyticsError(const QList<OAIAdsAnalyticsResponse_inner>& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toArray());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIAdsApiRequest::ads_createError(const OAIAdArrayResponse& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIAdsApiRequest::ads_getError(const OAIAdResponse& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIAdsApiRequest::ads_listError(const OAIAds_list_200_response& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIAdsApiRequest::ads_updateError(const OAIAdArrayResponse& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIAdsApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIAdsApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
