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

#include "OAIPinsApiHandler.h"
#include "OAIPinsApiRequest.h"

namespace OpenAPI {

OAIPinsApiHandler::OAIPinsApiHandler(){

}

OAIPinsApiHandler::~OAIPinsApiHandler(){

}

void OAIPinsApiHandler::pins_analytics(QString pin_id, QDate start_date, QDate end_date, QList<QString> metric_types, QString app_types, QString split_field, QString ad_account_id) {
    Q_UNUSED(pin_id);
    Q_UNUSED(start_date);
    Q_UNUSED(end_date);
    Q_UNUSED(metric_types);
    Q_UNUSED(app_types);
    Q_UNUSED(split_field);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAIPinsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        QMap<QString, OAIAnalyticsMetricsResponse> res;
        reqObj->pins_analyticsResponse(res);
    }
}
void OAIPinsApiHandler::pins_create(OAIPin oai_pin) {
    Q_UNUSED(oai_pin);
    auto reqObj = qobject_cast<OAIPinsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIPin res;
        reqObj->pins_createResponse(res);
    }
}
void OAIPinsApiHandler::pins_delete(QString pin_id) {
    Q_UNUSED(pin_id);
    auto reqObj = qobject_cast<OAIPinsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        
        reqObj->pins_deleteResponse();
    }
}
void OAIPinsApiHandler::pins_get(QString pin_id, QString ad_account_id) {
    Q_UNUSED(pin_id);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAIPinsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIPin res;
        reqObj->pins_getResponse(res);
    }
}


}
