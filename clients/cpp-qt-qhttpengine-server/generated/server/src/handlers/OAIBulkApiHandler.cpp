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

#include "OAIBulkApiHandler.h"
#include "OAIBulkApiRequest.h"

namespace OpenAPI {

OAIBulkApiHandler::OAIBulkApiHandler(){

}

OAIBulkApiHandler::~OAIBulkApiHandler(){

}

void OAIBulkApiHandler::bulkDownload_create(QString ad_account_id, OAIBulkDownloadRequest oai_bulk_download_request) {
    Q_UNUSED(ad_account_id);
    Q_UNUSED(oai_bulk_download_request);
    auto reqObj = qobject_cast<OAIBulkApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIBulkDownloadResponse res;
        reqObj->bulkDownload_createResponse(res);
    }
}
void OAIBulkApiHandler::bulkRequest_get(QString ad_account_id, QString bulk_request_id) {
    Q_UNUSED(ad_account_id);
    Q_UNUSED(bulk_request_id);
    auto reqObj = qobject_cast<OAIBulkApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIBulkUpsertStatusResponse res;
        reqObj->bulkRequest_getResponse(res);
    }
}
void OAIBulkApiHandler::bulkUpsert_create(QString ad_account_id, OAIBulkUpsertRequest oai_bulk_upsert_request) {
    Q_UNUSED(ad_account_id);
    Q_UNUSED(oai_bulk_upsert_request);
    auto reqObj = qobject_cast<OAIBulkApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIBulkUpsertResponse res;
        reqObj->bulkUpsert_createResponse(res);
    }
}


}
