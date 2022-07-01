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


#include "OAIApiRouter.h"
#include "OAIAdAccountsApiRequest.h"
#include "OAIBoardsApiRequest.h"
#include "OAICatalogsApiRequest.h"
#include "OAIMediaApiRequest.h"
#include "OAIOauthApiRequest.h"
#include "OAIPinsApiRequest.h"
#include "OAIUserAccountApiRequest.h"


namespace OpenAPI {

OAIApiRouter::OAIApiRouter() {
    createApiHandlers();
}

OAIApiRouter::~OAIApiRouter(){

}

void OAIApiRouter::createApiHandlers() { 
    mOAIAdAccountsApiHandler = QSharedPointer<OAIAdAccountsApiHandler>::create();
    mOAIBoardsApiHandler = QSharedPointer<OAIBoardsApiHandler>::create();
    mOAICatalogsApiHandler = QSharedPointer<OAICatalogsApiHandler>::create();
    mOAIMediaApiHandler = QSharedPointer<OAIMediaApiHandler>::create();
    mOAIOauthApiHandler = QSharedPointer<OAIOauthApiHandler>::create();
    mOAIPinsApiHandler = QSharedPointer<OAIPinsApiHandler>::create();
    mOAIUserAccountApiHandler = QSharedPointer<OAIUserAccountApiHandler>::create();
}


void OAIApiRouter::setOAIAdAccountsApiHandler(QSharedPointer<OAIAdAccountsApiHandler> handler){
    mOAIAdAccountsApiHandler = handler;
}
void OAIApiRouter::setOAIBoardsApiHandler(QSharedPointer<OAIBoardsApiHandler> handler){
    mOAIBoardsApiHandler = handler;
}
void OAIApiRouter::setOAICatalogsApiHandler(QSharedPointer<OAICatalogsApiHandler> handler){
    mOAICatalogsApiHandler = handler;
}
void OAIApiRouter::setOAIMediaApiHandler(QSharedPointer<OAIMediaApiHandler> handler){
    mOAIMediaApiHandler = handler;
}
void OAIApiRouter::setOAIOauthApiHandler(QSharedPointer<OAIOauthApiHandler> handler){
    mOAIOauthApiHandler = handler;
}
void OAIApiRouter::setOAIPinsApiHandler(QSharedPointer<OAIPinsApiHandler> handler){
    mOAIPinsApiHandler = handler;
}
void OAIApiRouter::setOAIUserAccountApiHandler(QSharedPointer<OAIUserAccountApiHandler> handler){
    mOAIUserAccountApiHandler = handler;
}

void OAIApiRouter::setUpRoutes() {
    
    Routes.insert(QString("%1 %2").arg("GET").arg("/v5/ad_accounts").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIAdAccountsApiRequest(socket, mOAIAdAccountsApiHandler);
            reqObj->adAccounts_listRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/v5/boards").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIBoardsApiRequest(socket, mOAIBoardsApiHandler);
            reqObj->boards_createRequest();
    });
    Routes.insert(QString("%1 %2").arg("GET").arg("/v5/boards").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIBoardsApiRequest(socket, mOAIBoardsApiHandler);
            reqObj->boards_listRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/v5/catalogs/product_groups").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAICatalogsApiRequest(socket, mOAICatalogsApiHandler);
            reqObj->catalogsProductGroups_createRequest();
    });
    Routes.insert(QString("%1 %2").arg("GET").arg("/v5/catalogs/product_groups").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAICatalogsApiRequest(socket, mOAICatalogsApiHandler);
            reqObj->catalogsProductGroups_listRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/v5/catalogs/feeds").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAICatalogsApiRequest(socket, mOAICatalogsApiHandler);
            reqObj->feeds_createRequest();
    });
    Routes.insert(QString("%1 %2").arg("GET").arg("/v5/catalogs/feeds").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAICatalogsApiRequest(socket, mOAICatalogsApiHandler);
            reqObj->feeds_listRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/v5/catalogs/items/batch").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAICatalogsApiRequest(socket, mOAICatalogsApiHandler);
            reqObj->itemsBatch_postRequest();
    });
    Routes.insert(QString("%1 %2").arg("GET").arg("/v5/catalogs/items").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAICatalogsApiRequest(socket, mOAICatalogsApiHandler);
            reqObj->items_getRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/v5/media").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIMediaApiRequest(socket, mOAIMediaApiHandler);
            reqObj->media_createRequest();
    });
    Routes.insert(QString("%1 %2").arg("GET").arg("/v5/media").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIMediaApiRequest(socket, mOAIMediaApiHandler);
            reqObj->media_listRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/v5/oauth/token").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIOauthApiRequest(socket, mOAIOauthApiHandler);
            reqObj->oauth_tokenRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/v5/pins").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIPinsApiRequest(socket, mOAIPinsApiHandler);
            reqObj->pins_createRequest();
    });
    Routes.insert(QString("%1 %2").arg("GET").arg("/v5/user_account/analytics").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIUserAccountApiRequest(socket, mOAIUserAccountApiHandler);
            reqObj->userAccount_analyticsRequest();
    });
    Routes.insert(QString("%1 %2").arg("GET").arg("/v5/user_account").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIUserAccountApiRequest(socket, mOAIUserAccountApiHandler);
            reqObj->userAccount_getRequest();
    });
}

void OAIApiRouter::processRequest(QHttpEngine::Socket *socket){
    if( handleRequest(socket) ){
        return;
    }
    if( handleRequestAndExtractPathParam(socket) ){
        return;
    }
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    if(socket->isOpen()){
        socket->writeHeaders();
        socket->close();
    }
}

bool OAIApiRouter::handleRequest(QHttpEngine::Socket *socket){
    auto reqPath = QString("%1 %2").arg(fromQHttpEngineMethod(socket->method())).arg(socket->path()).toLower();
    if ( Routes.contains(reqPath) ) {
        Routes.value(reqPath).operator()(socket);
        return true;
    }
    return false;
}

bool OAIApiRouter::handleRequestAndExtractPathParam(QHttpEngine::Socket *socket){
    auto reqPath = QString("%1 %2").arg(fromQHttpEngineMethod(socket->method())).arg(socket->path()).toLower();
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/ad_accounts/{ad_account_id}/analytics").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ad_account_id = match.captured(QString("ad_account_id").toLower());
                auto reqObj = new OAIAdAccountsApiRequest(socket, mOAIAdAccountsApiHandler);
                reqObj->adAccount_analyticsRequest(ad_account_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/ad_accounts/{ad_account_id}/ad_groups/analytics").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ad_account_id = match.captured(QString("ad_account_id").toLower());
                auto reqObj = new OAIAdAccountsApiRequest(socket, mOAIAdAccountsApiHandler);
                reqObj->adGroups_analyticsRequest(ad_account_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/ad_accounts/{ad_account_id}/ad_groups").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ad_account_id = match.captured(QString("ad_account_id").toLower());
                auto reqObj = new OAIAdAccountsApiRequest(socket, mOAIAdAccountsApiHandler);
                reqObj->adGroups_listRequest(ad_account_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/ad_accounts/{ad_account_id}/ads/analytics").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ad_account_id = match.captured(QString("ad_account_id").toLower());
                auto reqObj = new OAIAdAccountsApiRequest(socket, mOAIAdAccountsApiHandler);
                reqObj->ads_analyticsRequest(ad_account_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/ad_accounts/{ad_account_id}/ads").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ad_account_id = match.captured(QString("ad_account_id").toLower());
                auto reqObj = new OAIAdAccountsApiRequest(socket, mOAIAdAccountsApiHandler);
                reqObj->ads_listRequest(ad_account_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("POST").arg("/v5/ad_accounts/{ad_account_id}/reports").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ad_account_id = match.captured(QString("ad_account_id").toLower());
                auto reqObj = new OAIAdAccountsApiRequest(socket, mOAIAdAccountsApiHandler);
                reqObj->analytics_createReportRequest(ad_account_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/ad_accounts/{ad_account_id}/reports").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ad_account_id = match.captured(QString("ad_account_id").toLower());
                auto reqObj = new OAIAdAccountsApiRequest(socket, mOAIAdAccountsApiHandler);
                reqObj->analytics_getReportRequest(ad_account_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/ad_accounts/{ad_account_id}/campaigns/analytics").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ad_account_id = match.captured(QString("ad_account_id").toLower());
                auto reqObj = new OAIAdAccountsApiRequest(socket, mOAIAdAccountsApiHandler);
                reqObj->campaigns_analyticsRequest(ad_account_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/ad_accounts/{ad_account_id}/campaigns").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ad_account_id = match.captured(QString("ad_account_id").toLower());
                auto reqObj = new OAIAdAccountsApiRequest(socket, mOAIAdAccountsApiHandler);
                reqObj->campaigns_listRequest(ad_account_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/ad_accounts/{ad_account_id}/product_groups/analytics").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString ad_account_id = match.captured(QString("ad_account_id").toLower());
                auto reqObj = new OAIAdAccountsApiRequest(socket, mOAIAdAccountsApiHandler);
                reqObj->productGroups_analyticsRequest(ad_account_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("POST").arg("/v5/boards/{board_id}/sections").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString board_id = match.captured(QString("board_id").toLower());
                auto reqObj = new OAIBoardsApiRequest(socket, mOAIBoardsApiHandler);
                reqObj->boardSections_createRequest(board_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("DELETE").arg("/v5/boards/{board_id}/sections/{section_id}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString board_id = match.captured(QString("board_id").toLower());
                QString section_id = match.captured(QString("section_id").toLower());
                auto reqObj = new OAIBoardsApiRequest(socket, mOAIBoardsApiHandler);
                reqObj->boardSections_deleteRequest(board_id, section_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/boards/{board_id}/sections").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString board_id = match.captured(QString("board_id").toLower());
                auto reqObj = new OAIBoardsApiRequest(socket, mOAIBoardsApiHandler);
                reqObj->boardSections_listRequest(board_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/boards/{board_id}/sections/{section_id}/pins").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString board_id = match.captured(QString("board_id").toLower());
                QString section_id = match.captured(QString("section_id").toLower());
                auto reqObj = new OAIBoardsApiRequest(socket, mOAIBoardsApiHandler);
                reqObj->boardSections_listPinsRequest(board_id, section_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("PATCH").arg("/v5/boards/{board_id}/sections/{section_id}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString board_id = match.captured(QString("board_id").toLower());
                QString section_id = match.captured(QString("section_id").toLower());
                auto reqObj = new OAIBoardsApiRequest(socket, mOAIBoardsApiHandler);
                reqObj->boardSections_updateRequest(board_id, section_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("DELETE").arg("/v5/boards/{board_id}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString board_id = match.captured(QString("board_id").toLower());
                auto reqObj = new OAIBoardsApiRequest(socket, mOAIBoardsApiHandler);
                reqObj->boards_deleteRequest(board_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/boards/{board_id}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString board_id = match.captured(QString("board_id").toLower());
                auto reqObj = new OAIBoardsApiRequest(socket, mOAIBoardsApiHandler);
                reqObj->boards_getRequest(board_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/boards/{board_id}/pins").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString board_id = match.captured(QString("board_id").toLower());
                auto reqObj = new OAIBoardsApiRequest(socket, mOAIBoardsApiHandler);
                reqObj->boards_listPinsRequest(board_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("PATCH").arg("/v5/boards/{board_id}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString board_id = match.captured(QString("board_id").toLower());
                auto reqObj = new OAIBoardsApiRequest(socket, mOAIBoardsApiHandler);
                reqObj->boards_updateRequest(board_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("DELETE").arg("/v5/catalogs/product_groups/{product_group_id}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString product_group_id = match.captured(QString("product_group_id").toLower());
                auto reqObj = new OAICatalogsApiRequest(socket, mOAICatalogsApiHandler);
                reqObj->catalogsProductGroups_deleteRequest(product_group_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("PATCH").arg("/v5/catalogs/product_groups/{product_group_id}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString product_group_id = match.captured(QString("product_group_id").toLower());
                auto reqObj = new OAICatalogsApiRequest(socket, mOAICatalogsApiHandler);
                reqObj->catalogsProductGroups_updateRequest(product_group_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/catalogs/feeds/{feed_id}/processing_results").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString feed_id = match.captured(QString("feed_id").toLower());
                auto reqObj = new OAICatalogsApiRequest(socket, mOAICatalogsApiHandler);
                reqObj->feedProcessingResults_listRequest(feed_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("DELETE").arg("/v5/catalogs/feeds/{feed_id}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString feed_id = match.captured(QString("feed_id").toLower());
                auto reqObj = new OAICatalogsApiRequest(socket, mOAICatalogsApiHandler);
                reqObj->feeds_deleteRequest(feed_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/catalogs/feeds/{feed_id}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString feed_id = match.captured(QString("feed_id").toLower());
                auto reqObj = new OAICatalogsApiRequest(socket, mOAICatalogsApiHandler);
                reqObj->feeds_getRequest(feed_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("PATCH").arg("/v5/catalogs/feeds/{feed_id}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString feed_id = match.captured(QString("feed_id").toLower());
                auto reqObj = new OAICatalogsApiRequest(socket, mOAICatalogsApiHandler);
                reqObj->feeds_updateRequest(feed_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/catalogs/items/batch/{batch_id}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString batch_id = match.captured(QString("batch_id").toLower());
                auto reqObj = new OAICatalogsApiRequest(socket, mOAICatalogsApiHandler);
                reqObj->itemsBatch_getRequest(batch_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/media/{media_id}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString media_id = match.captured(QString("media_id").toLower());
                auto reqObj = new OAIMediaApiRequest(socket, mOAIMediaApiHandler);
                reqObj->media_getRequest(media_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/pins/{pin_id}/analytics").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString pin_id = match.captured(QString("pin_id").toLower());
                auto reqObj = new OAIPinsApiRequest(socket, mOAIPinsApiHandler);
                reqObj->pins_analyticsRequest(pin_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("DELETE").arg("/v5/pins/{pin_id}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString pin_id = match.captured(QString("pin_id").toLower());
                auto reqObj = new OAIPinsApiRequest(socket, mOAIPinsApiHandler);
                reqObj->pins_deleteRequest(pin_id);
                return true;
            }
        }
    }
    {
        auto completePath = QString("%1 %2").arg("GET").arg("/v5/pins/{pin_id}").toLower();
        if ( reqPath.startsWith(completePath.leftRef( completePath.indexOf(QString("/{")))) ) {
            QRegularExpressionMatch match = getRequestMatch( completePath, reqPath );
            if ( match.hasMatch() ){
                QString pin_id = match.captured(QString("pin_id").toLower());
                auto reqObj = new OAIPinsApiRequest(socket, mOAIPinsApiHandler);
                reqObj->pins_getRequest(pin_id);
                return true;
            }
        }
    }
    return false;
}

}
