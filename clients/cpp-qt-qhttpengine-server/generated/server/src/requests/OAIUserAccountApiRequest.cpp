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
#include "OAIUserAccountApiRequest.h"

namespace OpenAPI {

OAIUserAccountApiRequest::OAIUserAccountApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIUserAccountApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIUserAccountApiRequest::~OAIUserAccountApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIUserAccountApiRequest::~OAIUserAccountApiRequest()";
}

QMap<QString, QString>
OAIUserAccountApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIUserAccountApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIUserAccountApiRequest::getRawSocket(){
    return socket;
}


void OAIUserAccountApiRequest::boardsUserFollows_listRequest(){
    qDebug() << "/v5/user_account/following/boards";
    connect(this, &OAIUserAccountApiRequest::boardsUserFollows_list, handler.data(), &OAIUserAccountApiHandler::boardsUserFollows_list);

    
    QString bookmark;
    if(socket->queryString().keys().contains("bookmark")){
        fromStringValue(socket->queryString().value("bookmark"), bookmark);
    }
    
    qint32 page_size;
    if(socket->queryString().keys().contains("page_size")){
        fromStringValue(socket->queryString().value("page_size"), page_size);
    }
    
    bool explicit_following;
    if(socket->queryString().keys().contains("explicit_following")){
        fromStringValue(socket->queryString().value("explicit_following"), explicit_following);
    }
    
    QString ad_account_id;
    if(socket->queryString().keys().contains("ad_account_id")){
        fromStringValue(socket->queryString().value("ad_account_id"), ad_account_id);
    }
    


    Q_EMIT boardsUserFollows_list(bookmark, page_size, explicit_following, ad_account_id);
}


void OAIUserAccountApiRequest::followUser_updateRequest(const QString& usernamestr){
    qDebug() << "/v5/user_account/following/{username}";
    connect(this, &OAIUserAccountApiRequest::followUser_update, handler.data(), &OAIUserAccountApiHandler::followUser_update);

    
    QString username;
    fromStringValue(usernamestr, username);
     
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIFollowUserRequest oai_follow_user_request;
    ::OpenAPI::fromJsonValue(oai_follow_user_request, obj);
    

    Q_EMIT followUser_update(username, oai_follow_user_request);
}


void OAIUserAccountApiRequest::followers_listRequest(){
    qDebug() << "/v5/user_account/followers";
    connect(this, &OAIUserAccountApiRequest::followers_list, handler.data(), &OAIUserAccountApiHandler::followers_list);

    
    QString bookmark;
    if(socket->queryString().keys().contains("bookmark")){
        fromStringValue(socket->queryString().value("bookmark"), bookmark);
    }
    
    qint32 page_size;
    if(socket->queryString().keys().contains("page_size")){
        fromStringValue(socket->queryString().value("page_size"), page_size);
    }
    


    Q_EMIT followers_list(bookmark, page_size);
}


void OAIUserAccountApiRequest::linkedBusinessAccounts_getRequest(){
    qDebug() << "/v5/user_account/businesses";
    connect(this, &OAIUserAccountApiRequest::linkedBusinessAccounts_get, handler.data(), &OAIUserAccountApiHandler::linkedBusinessAccounts_get);

    


    Q_EMIT linkedBusinessAccounts_get();
}


void OAIUserAccountApiRequest::unverifyWebsite_deleteRequest(){
    qDebug() << "/v5/user_account/websites";
    connect(this, &OAIUserAccountApiRequest::unverifyWebsite_delete, handler.data(), &OAIUserAccountApiHandler::unverifyWebsite_delete);

    
    QString website;
    if(socket->queryString().keys().contains("website")){
        fromStringValue(socket->queryString().value("website"), website);
    }
    


    Q_EMIT unverifyWebsite_delete(website);
}


void OAIUserAccountApiRequest::userAccount_analyticsRequest(){
    qDebug() << "/v5/user_account/analytics";
    connect(this, &OAIUserAccountApiRequest::userAccount_analytics, handler.data(), &OAIUserAccountApiHandler::userAccount_analytics);

    
    QDate start_date;
    if(socket->queryString().keys().contains("start_date")){
        fromStringValue(socket->queryString().value("start_date"), start_date);
    }
    
    QDate end_date;
    if(socket->queryString().keys().contains("end_date")){
        fromStringValue(socket->queryString().value("end_date"), end_date);
    }
    
    QString from_claimed_content;
    if(socket->queryString().keys().contains("from_claimed_content")){
        fromStringValue(socket->queryString().value("from_claimed_content"), from_claimed_content);
    }
    
    QString pin_format;
    if(socket->queryString().keys().contains("pin_format")){
        fromStringValue(socket->queryString().value("pin_format"), pin_format);
    }
    
    QString app_types;
    if(socket->queryString().keys().contains("app_types")){
        fromStringValue(socket->queryString().value("app_types"), app_types);
    }
    
    QString content_type;
    if(socket->queryString().keys().contains("content_type")){
        fromStringValue(socket->queryString().value("content_type"), content_type);
    }
    
    QString source;
    if(socket->queryString().keys().contains("source")){
        fromStringValue(socket->queryString().value("source"), source);
    }
    
    QList<QString> metric_types;
    if(socket->queryString().keys().contains("metric_types")){
        fromStringValue(socket->queryString().values("metric_types"), metric_types);
    }
    
    QString split_field;
    if(socket->queryString().keys().contains("split_field")){
        fromStringValue(socket->queryString().value("split_field"), split_field);
    }
    
    QString ad_account_id;
    if(socket->queryString().keys().contains("ad_account_id")){
        fromStringValue(socket->queryString().value("ad_account_id"), ad_account_id);
    }
    


    Q_EMIT userAccount_analytics(start_date, end_date, from_claimed_content, pin_format, app_types, content_type, source, metric_types, split_field, ad_account_id);
}


void OAIUserAccountApiRequest::userAccount_analytics_topPinsRequest(){
    qDebug() << "/v5/user_account/analytics/top_pins";
    connect(this, &OAIUserAccountApiRequest::userAccount_analytics_topPins, handler.data(), &OAIUserAccountApiHandler::userAccount_analytics_topPins);

    
    QDate start_date;
    if(socket->queryString().keys().contains("start_date")){
        fromStringValue(socket->queryString().value("start_date"), start_date);
    }
    
    QDate end_date;
    if(socket->queryString().keys().contains("end_date")){
        fromStringValue(socket->queryString().value("end_date"), end_date);
    }
    
    QString sort_by;
    if(socket->queryString().keys().contains("sort_by")){
        fromStringValue(socket->queryString().value("sort_by"), sort_by);
    }
    
    QString from_claimed_content;
    if(socket->queryString().keys().contains("from_claimed_content")){
        fromStringValue(socket->queryString().value("from_claimed_content"), from_claimed_content);
    }
    
    QString pin_format;
    if(socket->queryString().keys().contains("pin_format")){
        fromStringValue(socket->queryString().value("pin_format"), pin_format);
    }
    
    QString app_types;
    if(socket->queryString().keys().contains("app_types")){
        fromStringValue(socket->queryString().value("app_types"), app_types);
    }
    
    QString content_type;
    if(socket->queryString().keys().contains("content_type")){
        fromStringValue(socket->queryString().value("content_type"), content_type);
    }
    
    QString source;
    if(socket->queryString().keys().contains("source")){
        fromStringValue(socket->queryString().value("source"), source);
    }
    
    QList<QString> metric_types;
    if(socket->queryString().keys().contains("metric_types")){
        fromStringValue(socket->queryString().values("metric_types"), metric_types);
    }
    
    qint32 num_of_pins;
    if(socket->queryString().keys().contains("num_of_pins")){
        fromStringValue(socket->queryString().value("num_of_pins"), num_of_pins);
    }
    
    qint32 created_in_last_n_days;
    if(socket->queryString().keys().contains("created_in_last_n_days")){
        fromStringValue(socket->queryString().value("created_in_last_n_days"), created_in_last_n_days);
    }
    
    QString ad_account_id;
    if(socket->queryString().keys().contains("ad_account_id")){
        fromStringValue(socket->queryString().value("ad_account_id"), ad_account_id);
    }
    


    Q_EMIT userAccount_analytics_topPins(start_date, end_date, sort_by, from_claimed_content, pin_format, app_types, content_type, source, metric_types, num_of_pins, created_in_last_n_days, ad_account_id);
}


void OAIUserAccountApiRequest::userAccount_analytics_topVideoPinsRequest(){
    qDebug() << "/v5/user_account/analytics/top_video_pins";
    connect(this, &OAIUserAccountApiRequest::userAccount_analytics_topVideoPins, handler.data(), &OAIUserAccountApiHandler::userAccount_analytics_topVideoPins);

    
    QDate start_date;
    if(socket->queryString().keys().contains("start_date")){
        fromStringValue(socket->queryString().value("start_date"), start_date);
    }
    
    QDate end_date;
    if(socket->queryString().keys().contains("end_date")){
        fromStringValue(socket->queryString().value("end_date"), end_date);
    }
    
    QString sort_by;
    if(socket->queryString().keys().contains("sort_by")){
        fromStringValue(socket->queryString().value("sort_by"), sort_by);
    }
    
    QString from_claimed_content;
    if(socket->queryString().keys().contains("from_claimed_content")){
        fromStringValue(socket->queryString().value("from_claimed_content"), from_claimed_content);
    }
    
    QString pin_format;
    if(socket->queryString().keys().contains("pin_format")){
        fromStringValue(socket->queryString().value("pin_format"), pin_format);
    }
    
    QString app_types;
    if(socket->queryString().keys().contains("app_types")){
        fromStringValue(socket->queryString().value("app_types"), app_types);
    }
    
    QString content_type;
    if(socket->queryString().keys().contains("content_type")){
        fromStringValue(socket->queryString().value("content_type"), content_type);
    }
    
    QString source;
    if(socket->queryString().keys().contains("source")){
        fromStringValue(socket->queryString().value("source"), source);
    }
    
    QList<QString> metric_types;
    if(socket->queryString().keys().contains("metric_types")){
        fromStringValue(socket->queryString().values("metric_types"), metric_types);
    }
    
    qint32 num_of_pins;
    if(socket->queryString().keys().contains("num_of_pins")){
        fromStringValue(socket->queryString().value("num_of_pins"), num_of_pins);
    }
    
    qint32 created_in_last_n_days;
    if(socket->queryString().keys().contains("created_in_last_n_days")){
        fromStringValue(socket->queryString().value("created_in_last_n_days"), created_in_last_n_days);
    }
    
    QString ad_account_id;
    if(socket->queryString().keys().contains("ad_account_id")){
        fromStringValue(socket->queryString().value("ad_account_id"), ad_account_id);
    }
    


    Q_EMIT userAccount_analytics_topVideoPins(start_date, end_date, sort_by, from_claimed_content, pin_format, app_types, content_type, source, metric_types, num_of_pins, created_in_last_n_days, ad_account_id);
}


void OAIUserAccountApiRequest::userAccount_followedInterestsRequest(const QString& usernamestr){
    qDebug() << "/v5/users/{username}/interests/follow";
    connect(this, &OAIUserAccountApiRequest::userAccount_followedInterests, handler.data(), &OAIUserAccountApiHandler::userAccount_followedInterests);

    
    QString bookmark;
    if(socket->queryString().keys().contains("bookmark")){
        fromStringValue(socket->queryString().value("bookmark"), bookmark);
    }
    
    qint32 page_size;
    if(socket->queryString().keys().contains("page_size")){
        fromStringValue(socket->queryString().value("page_size"), page_size);
    }
    
    QString username;
    fromStringValue(usernamestr, username);
    

    Q_EMIT userAccount_followedInterests(username, bookmark, page_size);
}


void OAIUserAccountApiRequest::userAccount_getRequest(){
    qDebug() << "/v5/user_account";
    connect(this, &OAIUserAccountApiRequest::userAccount_get, handler.data(), &OAIUserAccountApiHandler::userAccount_get);

    
    QString ad_account_id;
    if(socket->queryString().keys().contains("ad_account_id")){
        fromStringValue(socket->queryString().value("ad_account_id"), ad_account_id);
    }
    


    Q_EMIT userAccount_get(ad_account_id);
}


void OAIUserAccountApiRequest::userFollowing_getRequest(){
    qDebug() << "/v5/user_account/following";
    connect(this, &OAIUserAccountApiRequest::userFollowing_get, handler.data(), &OAIUserAccountApiHandler::userFollowing_get);

    
    QString bookmark;
    if(socket->queryString().keys().contains("bookmark")){
        fromStringValue(socket->queryString().value("bookmark"), bookmark);
    }
    
    qint32 page_size;
    if(socket->queryString().keys().contains("page_size")){
        fromStringValue(socket->queryString().value("page_size"), page_size);
    }
    
    OAIUserFollowingFeedType feed_type;
    if(socket->queryString().keys().contains("feed_type")){
        fromStringValue(socket->queryString().value("feed_type"), feed_type);
    }
    
    bool explicit_following;
    if(socket->queryString().keys().contains("explicit_following")){
        fromStringValue(socket->queryString().value("explicit_following"), explicit_following);
    }
    
    QString ad_account_id;
    if(socket->queryString().keys().contains("ad_account_id")){
        fromStringValue(socket->queryString().value("ad_account_id"), ad_account_id);
    }
    


    Q_EMIT userFollowing_get(bookmark, page_size, feed_type, explicit_following, ad_account_id);
}


void OAIUserAccountApiRequest::userWebsites_getRequest(){
    qDebug() << "/v5/user_account/websites";
    connect(this, &OAIUserAccountApiRequest::userWebsites_get, handler.data(), &OAIUserAccountApiHandler::userWebsites_get);

    
    QString bookmark;
    if(socket->queryString().keys().contains("bookmark")){
        fromStringValue(socket->queryString().value("bookmark"), bookmark);
    }
    
    qint32 page_size;
    if(socket->queryString().keys().contains("page_size")){
        fromStringValue(socket->queryString().value("page_size"), page_size);
    }
    


    Q_EMIT userWebsites_get(bookmark, page_size);
}


void OAIUserAccountApiRequest::verifyWebsite_updateRequest(){
    qDebug() << "/v5/user_account/websites";
    connect(this, &OAIUserAccountApiRequest::verifyWebsite_update, handler.data(), &OAIUserAccountApiHandler::verifyWebsite_update);

    
 
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIUserWebsiteVerifyRequest oai_user_website_verify_request;
    ::OpenAPI::fromJsonValue(oai_user_website_verify_request, obj);
    

    Q_EMIT verifyWebsite_update(oai_user_website_verify_request);
}


void OAIUserAccountApiRequest::websiteVerification_getRequest(){
    qDebug() << "/v5/user_account/websites/verification";
    connect(this, &OAIUserAccountApiRequest::websiteVerification_get, handler.data(), &OAIUserAccountApiHandler::websiteVerification_get);

    


    Q_EMIT websiteVerification_get();
}



void OAIUserAccountApiRequest::boardsUserFollows_listResponse(const OAIBoards_user_follows_list_200_response& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::followUser_updateResponse(const OAIUserSummary& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::followers_listResponse(const OAIFollowers_list_200_response& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::linkedBusinessAccounts_getResponse(const QList<OAILinkedBusiness>& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toArray());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::unverifyWebsite_deleteResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::userAccount_analyticsResponse(const QMap<QString, OAIAnalyticsMetricsResponse>& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::userAccount_analytics_topPinsResponse(const OAITopPinsAnalyticsResponse& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::userAccount_analytics_topVideoPinsResponse(const OAITopVideoPinsAnalyticsResponse& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::userAccount_followedInterestsResponse(const OAIUser_account_followed_interests_200_response& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::userAccount_getResponse(const OAIAccount& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::userFollowing_getResponse(const OAIUser_following_get_200_response& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::userWebsites_getResponse(const OAIUser_websites_get_200_response& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::verifyWebsite_updateResponse(const OAIUserWebsiteSummary& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::websiteVerification_getResponse(const OAIUserWebsiteVerificationCode& res){
    setSocketResponseHeaders();
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIUserAccountApiRequest::boardsUserFollows_listError(const OAIBoards_user_follows_list_200_response& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::followUser_updateError(const OAIUserSummary& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::followers_listError(const OAIFollowers_list_200_response& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::linkedBusinessAccounts_getError(const QList<OAILinkedBusiness>& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toArray());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::unverifyWebsite_deleteError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::userAccount_analyticsError(const QMap<QString, OAIAnalyticsMetricsResponse>& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::userAccount_analytics_topPinsError(const OAITopPinsAnalyticsResponse& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::userAccount_analytics_topVideoPinsError(const OAITopVideoPinsAnalyticsResponse& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::userAccount_followedInterestsError(const OAIUser_account_followed_interests_200_response& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::userAccount_getError(const OAIAccount& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::userFollowing_getError(const OAIUser_following_get_200_response& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::userWebsites_getError(const OAIUser_websites_get_200_response& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::verifyWebsite_updateError(const OAIUserWebsiteSummary& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::websiteVerification_getError(const OAIUserWebsiteVerificationCode& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    QJsonDocument resDoc(::OpenAPI::toJsonValue(res).toObject());
    socket->writeJson(resDoc);
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIUserAccountApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIUserAccountApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
