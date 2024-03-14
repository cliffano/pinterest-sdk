/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
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

#include "OAIKeywordsApiHandler.h"
#include "OAIKeywordsApiRequest.h"

namespace OpenAPI {

OAIKeywordsApiHandler::OAIKeywordsApiHandler(){

}

OAIKeywordsApiHandler::~OAIKeywordsApiHandler(){

}

void OAIKeywordsApiHandler::countryKeywordsMetrics_get(QString ad_account_id, QString country_code, QList<QString> keywords) {
    Q_UNUSED(ad_account_id);
    Q_UNUSED(country_code);
    Q_UNUSED(keywords);
    auto reqObj = qobject_cast<OAIKeywordsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIKeywordsMetricsArrayResponse res;
        reqObj->countryKeywordsMetrics_getResponse(res);
    }
}
void OAIKeywordsApiHandler::keywords_create(QString ad_account_id, OAIKeywordsRequest oai_keywords_request) {
    Q_UNUSED(ad_account_id);
    Q_UNUSED(oai_keywords_request);
    auto reqObj = qobject_cast<OAIKeywordsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIKeywordsResponse res;
        reqObj->keywords_createResponse(res);
    }
}
void OAIKeywordsApiHandler::keywords_get(QString ad_account_id, QString campaign_id, QString ad_group_id, QList<OAIMatchType> match_types, qint32 page_size, QString bookmark) {
    Q_UNUSED(ad_account_id);
    Q_UNUSED(campaign_id);
    Q_UNUSED(ad_group_id);
    Q_UNUSED(match_types);
    Q_UNUSED(page_size);
    Q_UNUSED(bookmark);
    auto reqObj = qobject_cast<OAIKeywordsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIKeywords_get_200_response res;
        reqObj->keywords_getResponse(res);
    }
}
void OAIKeywordsApiHandler::keywords_update(QString ad_account_id, OAIKeywordUpdateBody oai_keyword_update_body) {
    Q_UNUSED(ad_account_id);
    Q_UNUSED(oai_keyword_update_body);
    auto reqObj = qobject_cast<OAIKeywordsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIKeywordsResponse res;
        reqObj->keywords_updateResponse(res);
    }
}


}
