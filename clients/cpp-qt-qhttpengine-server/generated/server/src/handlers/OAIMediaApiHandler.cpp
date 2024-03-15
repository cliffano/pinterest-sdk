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

#include "OAIMediaApiHandler.h"
#include "OAIMediaApiRequest.h"

namespace OpenAPI {

OAIMediaApiHandler::OAIMediaApiHandler(){

}

OAIMediaApiHandler::~OAIMediaApiHandler(){

}

void OAIMediaApiHandler::media_create(OAIMediaUploadRequest oai_media_upload_request) {
    Q_UNUSED(oai_media_upload_request);
    auto reqObj = qobject_cast<OAIMediaApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIMediaUpload res;
        reqObj->media_createResponse(res);
    }
}
void OAIMediaApiHandler::media_get(QString media_id) {
    Q_UNUSED(media_id);
    auto reqObj = qobject_cast<OAIMediaApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIMediaUploadDetails res;
        reqObj->media_getResponse(res);
    }
}
void OAIMediaApiHandler::media_list(QString bookmark, qint32 page_size) {
    Q_UNUSED(bookmark);
    Q_UNUSED(page_size);
    auto reqObj = qobject_cast<OAIMediaApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIMedia_list_200_response res;
        reqObj->media_listResponse(res);
    }
}


}
