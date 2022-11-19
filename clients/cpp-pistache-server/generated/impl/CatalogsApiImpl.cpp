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

#include "CatalogsApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

CatalogsApiImpl::CatalogsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : CatalogsApi(rtr)
{
}

void CatalogsApiImpl::catalogs_product_group_pins_list(const std::string &productGroupId, const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::catalogs_product_groups_create(const CatalogsProductGroupCreateRequest &catalogsProductGroupCreateRequest, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::catalogs_product_groups_delete(const std::string &productGroupId, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::catalogs_product_groups_get(const std::string &productGroupId, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::catalogs_product_groups_list(const std::optional<std::string> &feedId, const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::catalogs_product_groups_product_counts_get(const std::string &productGroupId, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::catalogs_product_groups_update(const std::string &productGroupId, const CatalogsProductGroupUpdateRequest &catalogsProductGroupUpdateRequest, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::feed_processing_results_list(const std::string &feedId, const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::feeds_create(const CatalogsFeedsCreateRequest &catalogsFeedsCreateRequest, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::feeds_delete(const std::string &feedId, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::feeds_get(const std::string &feedId, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::feeds_list(const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::feeds_update(const std::string &feedId, const CatalogsFeedsUpdateRequest &catalogsFeedsUpdateRequest, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::items_batch_get(const std::string &batchId, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::items_batch_post(const CatalogsItemsBatchRequest &catalogsItemsBatchRequest, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::items_issues_list(const std::string &processingResultId, const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, const std::optional<std::vector<int32_t>> &itemNumbers, const std::optional<CatalogsItemValidationIssue> &itemValidationIssue, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::items_get(const std::optional<std::string> &country, const std::optional<std::vector<std::string>> &itemIds, const std::optional<std::string> &language, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CatalogsApiImpl::products_by_product_group_filter_list(const CatalogsListProductsByFilterRequest &catalogsListProductsByFilterRequest, const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, const std::optional<std::string> &adAccountId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

