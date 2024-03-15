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

#include "OAICatalogsApiHandler.h"
#include "OAICatalogsApiRequest.h"

namespace OpenAPI {

OAICatalogsApiHandler::OAICatalogsApiHandler(){

}

OAICatalogsApiHandler::~OAICatalogsApiHandler(){

}

void OAICatalogsApiHandler::catalogsProductGroupPins_list(QString product_group_id, QString bookmark, qint32 page_size, QString ad_account_id) {
    Q_UNUSED(product_group_id);
    Q_UNUSED(bookmark);
    Q_UNUSED(page_size);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAICatalogs_product_group_pins_list_200_response res;
        reqObj->catalogsProductGroupPins_listResponse(res);
    }
}
void OAICatalogsApiHandler::catalogsProductGroups_create(OAICatalogs_product_groups_create_request oai_catalogs_product_groups_create_request, QString ad_account_id) {
    Q_UNUSED(oai_catalogs_product_groups_create_request);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAICatalogs_product_groups_create_201_response res;
        reqObj->catalogsProductGroups_createResponse(res);
    }
}
void OAICatalogsApiHandler::catalogsProductGroups_delete(QString product_group_id, QString ad_account_id) {
    Q_UNUSED(product_group_id);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        
        reqObj->catalogsProductGroups_deleteResponse();
    }
}
void OAICatalogsApiHandler::catalogsProductGroups_get(QString product_group_id, QString ad_account_id) {
    Q_UNUSED(product_group_id);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAICatalogs_product_groups_create_201_response res;
        reqObj->catalogsProductGroups_getResponse(res);
    }
}
void OAICatalogsApiHandler::catalogsProductGroups_list(QString feed_id, QString catalog_id, QString bookmark, qint32 page_size, QString ad_account_id) {
    Q_UNUSED(feed_id);
    Q_UNUSED(catalog_id);
    Q_UNUSED(bookmark);
    Q_UNUSED(page_size);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAICatalogs_product_groups_list_200_response res;
        reqObj->catalogsProductGroups_listResponse(res);
    }
}
void OAICatalogsApiHandler::catalogsProductGroups_productCountsGet(QString product_group_id, QString ad_account_id) {
    Q_UNUSED(product_group_id);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAICatalogsProductGroupProductCounts res;
        reqObj->catalogsProductGroups_productCountsGetResponse(res);
    }
}
void OAICatalogsApiHandler::catalogsProductGroups_update(QString product_group_id, OAICatalogs_product_groups_update_request oai_catalogs_product_groups_update_request, QString ad_account_id) {
    Q_UNUSED(product_group_id);
    Q_UNUSED(oai_catalogs_product_groups_update_request);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAICatalogs_product_groups_create_201_response res;
        reqObj->catalogsProductGroups_updateResponse(res);
    }
}
void OAICatalogsApiHandler::catalogs_list(QString bookmark, qint32 page_size, QString ad_account_id) {
    Q_UNUSED(bookmark);
    Q_UNUSED(page_size);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAICatalogs_list_200_response res;
        reqObj->catalogs_listResponse(res);
    }
}
void OAICatalogsApiHandler::feedProcessingResults_list(QString feed_id, QString bookmark, qint32 page_size, QString ad_account_id) {
    Q_UNUSED(feed_id);
    Q_UNUSED(bookmark);
    Q_UNUSED(page_size);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIFeed_processing_results_list_200_response res;
        reqObj->feedProcessingResults_listResponse(res);
    }
}
void OAICatalogsApiHandler::feeds_create(OAIFeeds_create_request oai_feeds_create_request, QString ad_account_id) {
    Q_UNUSED(oai_feeds_create_request);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAICatalogsFeed res;
        reqObj->feeds_createResponse(res);
    }
}
void OAICatalogsApiHandler::feeds_delete(QString feed_id, QString ad_account_id) {
    Q_UNUSED(feed_id);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        
        reqObj->feeds_deleteResponse();
    }
}
void OAICatalogsApiHandler::feeds_get(QString feed_id, QString ad_account_id) {
    Q_UNUSED(feed_id);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAICatalogsFeed res;
        reqObj->feeds_getResponse(res);
    }
}
void OAICatalogsApiHandler::feeds_list(QString bookmark, qint32 page_size, QString catalog_id, QString ad_account_id) {
    Q_UNUSED(bookmark);
    Q_UNUSED(page_size);
    Q_UNUSED(catalog_id);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIFeeds_list_200_response res;
        reqObj->feeds_listResponse(res);
    }
}
void OAICatalogsApiHandler::feeds_update(QString feed_id, OAIFeeds_update_request oai_feeds_update_request, QString ad_account_id) {
    Q_UNUSED(feed_id);
    Q_UNUSED(oai_feeds_update_request);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAICatalogsFeed res;
        reqObj->feeds_updateResponse(res);
    }
}
void OAICatalogsApiHandler::itemsBatch_get(QString batch_id, QString ad_account_id) {
    Q_UNUSED(batch_id);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAICatalogsItemsBatch res;
        reqObj->itemsBatch_getResponse(res);
    }
}
void OAICatalogsApiHandler::itemsBatch_post(OAIItems_batch_post_request oai_items_batch_post_request, QString ad_account_id) {
    Q_UNUSED(oai_items_batch_post_request);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAICatalogsItemsBatch res;
        reqObj->itemsBatch_postResponse(res);
    }
}
void OAICatalogsApiHandler::itemsIssues_list(QString processing_result_id, QString bookmark, qint32 page_size, QList<qint32> item_numbers, OAICatalogsItemValidationIssue item_validation_issue, QString ad_account_id) {
    Q_UNUSED(processing_result_id);
    Q_UNUSED(bookmark);
    Q_UNUSED(page_size);
    Q_UNUSED(item_numbers);
    Q_UNUSED(item_validation_issue);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIItems_issues_list_200_response res;
        reqObj->itemsIssues_listResponse(res);
    }
}
void OAICatalogsApiHandler::items_get(QString country, QString language, QString ad_account_id, QList<QString> item_ids, OAICatalogsItemsFilters filters) {
    Q_UNUSED(country);
    Q_UNUSED(language);
    Q_UNUSED(ad_account_id);
    Q_UNUSED(item_ids);
    Q_UNUSED(filters);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAICatalogsItems res;
        reqObj->items_getResponse(res);
    }
}
void OAICatalogsApiHandler::productsByProductGroupFilter_list(OAICatalogsListProductsByFilterRequest oai_catalogs_list_products_by_filter_request, QString bookmark, qint32 page_size, QString ad_account_id) {
    Q_UNUSED(oai_catalogs_list_products_by_filter_request);
    Q_UNUSED(bookmark);
    Q_UNUSED(page_size);
    Q_UNUSED(ad_account_id);
    auto reqObj = qobject_cast<OAICatalogsApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAICatalogs_product_group_pins_list_200_response res;
        reqObj->productsByProductGroupFilter_listResponse(res);
    }
}


}
