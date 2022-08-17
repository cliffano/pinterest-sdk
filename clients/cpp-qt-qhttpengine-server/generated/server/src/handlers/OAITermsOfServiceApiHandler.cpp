/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
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

#include "OAITermsOfServiceApiHandler.h"
#include "OAITermsOfServiceApiRequest.h"

namespace OpenAPI {

OAITermsOfServiceApiHandler::OAITermsOfServiceApiHandler(){

}

OAITermsOfServiceApiHandler::~OAITermsOfServiceApiHandler(){

}

void OAITermsOfServiceApiHandler::termsOfService_get(QString ad_account_id, bool include_html, QString tos_type) {
    Q_UNUSED(ad_account_id);
    Q_UNUSED(include_html);
    Q_UNUSED(tos_type);
    auto reqObj = qobject_cast<OAITermsOfServiceApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAITermsOfService res;
        reqObj->termsOfService_getResponse(res);
    }
}


}
