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

#include "CatalogsApi.h"
#include "Helpers.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

const std::string CatalogsApi::base = "/v5";

CatalogsApi::CatalogsApi(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : ApiBase(rtr)
{
}

void CatalogsApi::init() {
    setupRoutes();
}

void CatalogsApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Get(*router, base + "/catalogs/product_groups/:product_group_id/products", Routes::bind(&CatalogsApi::catalogs_product_group_pins_list_handler, this));
    Routes::Post(*router, base + "/catalogs/product_groups", Routes::bind(&CatalogsApi::catalogs_product_groups_create_handler, this));
    Routes::Delete(*router, base + "/catalogs/product_groups/:product_group_id", Routes::bind(&CatalogsApi::catalogs_product_groups_delete_handler, this));
    Routes::Get(*router, base + "/catalogs/product_groups/:product_group_id", Routes::bind(&CatalogsApi::catalogs_product_groups_get_handler, this));
    Routes::Get(*router, base + "/catalogs/product_groups", Routes::bind(&CatalogsApi::catalogs_product_groups_list_handler, this));
    Routes::Get(*router, base + "/catalogs/product_groups/:product_group_id/product_counts", Routes::bind(&CatalogsApi::catalogs_product_groups_product_counts_get_handler, this));
    Routes::Patch(*router, base + "/catalogs/product_groups/:product_group_id", Routes::bind(&CatalogsApi::catalogs_product_groups_update_handler, this));
    Routes::Get(*router, base + "/catalogs", Routes::bind(&CatalogsApi::catalogs_list_handler, this));
    Routes::Get(*router, base + "/catalogs/feeds/:feed_id/processing_results", Routes::bind(&CatalogsApi::feed_processing_results_list_handler, this));
    Routes::Post(*router, base + "/catalogs/feeds", Routes::bind(&CatalogsApi::feeds_create_handler, this));
    Routes::Delete(*router, base + "/catalogs/feeds/:feed_id", Routes::bind(&CatalogsApi::feeds_delete_handler, this));
    Routes::Get(*router, base + "/catalogs/feeds/:feed_id", Routes::bind(&CatalogsApi::feeds_get_handler, this));
    Routes::Get(*router, base + "/catalogs/feeds", Routes::bind(&CatalogsApi::feeds_list_handler, this));
    Routes::Patch(*router, base + "/catalogs/feeds/:feed_id", Routes::bind(&CatalogsApi::feeds_update_handler, this));
    Routes::Get(*router, base + "/catalogs/items/batch/:batch_id", Routes::bind(&CatalogsApi::items_batch_get_handler, this));
    Routes::Post(*router, base + "/catalogs/items/batch", Routes::bind(&CatalogsApi::items_batch_post_handler, this));
    Routes::Get(*router, base + "/catalogs/processing_results/:processing_result_id/item_issues", Routes::bind(&CatalogsApi::items_issues_list_handler, this));
    Routes::Get(*router, base + "/catalogs/items", Routes::bind(&CatalogsApi::items_get_handler, this));
    Routes::Post(*router, base + "/catalogs/products/get_by_product_group_filters", Routes::bind(&CatalogsApi::products_by_product_group_filter_list_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&CatalogsApi::catalogs_api_default_handler, this));
}

std::pair<Pistache::Http::Code, std::string> CatalogsApi::handleParsingException(const std::exception& ex) const noexcept
{
    try {
        throw;
    } catch (nlohmann::detail::exception &e) {
        return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
    } catch (org::openapitools::server::helpers::ValidationException &e) {
        return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
    } catch (std::exception &e) {
        return std::make_pair(Pistache::Http::Code::Internal_Server_Error, e.what());
    }
}

std::pair<Pistache::Http::Code, std::string> CatalogsApi::handleOperationException(const std::exception& ex) const noexcept
{
    return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void CatalogsApi::catalogs_product_group_pins_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto productGroupId = request.param(":productGroupId").as<std::string>();
    
    // Getting the query params
    auto bookmarkQuery = request.query().get("bookmark");
    std::optional<std::string> bookmark;
    if(bookmarkQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(bookmarkQuery.value(), valueQuery_instance)){
            bookmark = valueQuery_instance;
        }
    }
    auto pageSizeQuery = request.query().get("page_size");
    std::optional<int32_t> pageSize;
    if(pageSizeQuery.has_value()){
        int32_t valueQuery_instance;
        if(fromStringValue(pageSizeQuery.value(), valueQuery_instance)){
            pageSize = valueQuery_instance;
        }
    }
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        this->catalogs_product_group_pins_list(productGroupId, bookmark, pageSize, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::catalogs_product_groups_create_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Catalogs_product_groups_create_request catalogsProductGroupsCreateRequest;
    
    // Getting the query params
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        nlohmann::json::parse(request.body()).get_to(catalogsProductGroupsCreateRequest);
        catalogsProductGroupsCreateRequest.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->catalogs_product_groups_create(catalogsProductGroupsCreateRequest, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::catalogs_product_groups_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto productGroupId = request.param(":productGroupId").as<std::string>();
    
    // Getting the query params
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        this->catalogs_product_groups_delete(productGroupId, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::catalogs_product_groups_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto productGroupId = request.param(":productGroupId").as<std::string>();
    
    // Getting the query params
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        this->catalogs_product_groups_get(productGroupId, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::catalogs_product_groups_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the query params
    auto feedIdQuery = request.query().get("feed_id");
    std::optional<std::string> feedId;
    if(feedIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(feedIdQuery.value(), valueQuery_instance)){
            feedId = valueQuery_instance;
        }
    }
    auto catalogIdQuery = request.query().get("catalog_id");
    std::optional<std::string> catalogId;
    if(catalogIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(catalogIdQuery.value(), valueQuery_instance)){
            catalogId = valueQuery_instance;
        }
    }
    auto bookmarkQuery = request.query().get("bookmark");
    std::optional<std::string> bookmark;
    if(bookmarkQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(bookmarkQuery.value(), valueQuery_instance)){
            bookmark = valueQuery_instance;
        }
    }
    auto pageSizeQuery = request.query().get("page_size");
    std::optional<int32_t> pageSize;
    if(pageSizeQuery.has_value()){
        int32_t valueQuery_instance;
        if(fromStringValue(pageSizeQuery.value(), valueQuery_instance)){
            pageSize = valueQuery_instance;
        }
    }
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        this->catalogs_product_groups_list(feedId, catalogId, bookmark, pageSize, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::catalogs_product_groups_product_counts_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto productGroupId = request.param(":productGroupId").as<std::string>();
    
    // Getting the query params
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        this->catalogs_product_groups_product_counts_get(productGroupId, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::catalogs_product_groups_update_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto productGroupId = request.param(":productGroupId").as<std::string>();
    
    // Getting the body param
    
    Catalogs_product_groups_update_request catalogsProductGroupsUpdateRequest;
    
    // Getting the query params
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        nlohmann::json::parse(request.body()).get_to(catalogsProductGroupsUpdateRequest);
        catalogsProductGroupsUpdateRequest.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->catalogs_product_groups_update(productGroupId, catalogsProductGroupsUpdateRequest, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::catalogs_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the query params
    auto bookmarkQuery = request.query().get("bookmark");
    std::optional<std::string> bookmark;
    if(bookmarkQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(bookmarkQuery.value(), valueQuery_instance)){
            bookmark = valueQuery_instance;
        }
    }
    auto pageSizeQuery = request.query().get("page_size");
    std::optional<int32_t> pageSize;
    if(pageSizeQuery.has_value()){
        int32_t valueQuery_instance;
        if(fromStringValue(pageSizeQuery.value(), valueQuery_instance)){
            pageSize = valueQuery_instance;
        }
    }
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        this->catalogs_list(bookmark, pageSize, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::feed_processing_results_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto feedId = request.param(":feedId").as<std::string>();
    
    // Getting the query params
    auto bookmarkQuery = request.query().get("bookmark");
    std::optional<std::string> bookmark;
    if(bookmarkQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(bookmarkQuery.value(), valueQuery_instance)){
            bookmark = valueQuery_instance;
        }
    }
    auto pageSizeQuery = request.query().get("page_size");
    std::optional<int32_t> pageSize;
    if(pageSizeQuery.has_value()){
        int32_t valueQuery_instance;
        if(fromStringValue(pageSizeQuery.value(), valueQuery_instance)){
            pageSize = valueQuery_instance;
        }
    }
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        this->feed_processing_results_list(feedId, bookmark, pageSize, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::feeds_create_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Feeds_create_request feedsCreateRequest;
    
    // Getting the query params
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        nlohmann::json::parse(request.body()).get_to(feedsCreateRequest);
        feedsCreateRequest.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->feeds_create(feedsCreateRequest, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::feeds_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto feedId = request.param(":feedId").as<std::string>();
    
    // Getting the query params
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        this->feeds_delete(feedId, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::feeds_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto feedId = request.param(":feedId").as<std::string>();
    
    // Getting the query params
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        this->feeds_get(feedId, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::feeds_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the query params
    auto bookmarkQuery = request.query().get("bookmark");
    std::optional<std::string> bookmark;
    if(bookmarkQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(bookmarkQuery.value(), valueQuery_instance)){
            bookmark = valueQuery_instance;
        }
    }
    auto pageSizeQuery = request.query().get("page_size");
    std::optional<int32_t> pageSize;
    if(pageSizeQuery.has_value()){
        int32_t valueQuery_instance;
        if(fromStringValue(pageSizeQuery.value(), valueQuery_instance)){
            pageSize = valueQuery_instance;
        }
    }
    auto catalogIdQuery = request.query().get("catalog_id");
    std::optional<std::string> catalogId;
    if(catalogIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(catalogIdQuery.value(), valueQuery_instance)){
            catalogId = valueQuery_instance;
        }
    }
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        this->feeds_list(bookmark, pageSize, catalogId, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::feeds_update_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto feedId = request.param(":feedId").as<std::string>();
    
    // Getting the body param
    
    Feeds_update_request feedsUpdateRequest;
    
    // Getting the query params
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        nlohmann::json::parse(request.body()).get_to(feedsUpdateRequest);
        feedsUpdateRequest.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->feeds_update(feedId, feedsUpdateRequest, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::items_batch_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto batchId = request.param(":batchId").as<std::string>();
    
    // Getting the query params
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        this->items_batch_get(batchId, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::items_batch_post_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Items_batch_post_request itemsBatchPostRequest;
    
    // Getting the query params
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        nlohmann::json::parse(request.body()).get_to(itemsBatchPostRequest);
        itemsBatchPostRequest.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->items_batch_post(itemsBatchPostRequest, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::items_issues_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto processingResultId = request.param(":processingResultId").as<std::string>();
    
    // Getting the query params
    auto bookmarkQuery = request.query().get("bookmark");
    std::optional<std::string> bookmark;
    if(bookmarkQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(bookmarkQuery.value(), valueQuery_instance)){
            bookmark = valueQuery_instance;
        }
    }
    auto pageSizeQuery = request.query().get("page_size");
    std::optional<int32_t> pageSize;
    if(pageSizeQuery.has_value()){
        int32_t valueQuery_instance;
        if(fromStringValue(pageSizeQuery.value(), valueQuery_instance)){
            pageSize = valueQuery_instance;
        }
    }
    auto itemNumbersQuery = request.query().get("item_numbers");
    std::optional<std::vector<int32_t>> itemNumbers;
    if(itemNumbersQuery.has_value()){
        std::vector<int32_t> valueQuery_instance;
        if(fromStringValue(itemNumbersQuery.value(), valueQuery_instance)){
            itemNumbers = valueQuery_instance;
        }
    }
    auto itemValidationIssueQuery = request.query().get("item_validation_issue");
    std::optional<CatalogsItemValidationIssue> itemValidationIssue;
    if(itemValidationIssueQuery.has_value()){
        CatalogsItemValidationIssue valueQuery_instance;
        if(fromStringValue(itemValidationIssueQuery.value(), valueQuery_instance)){
            itemValidationIssue = valueQuery_instance;
        }
    }
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        this->items_issues_list(processingResultId, bookmark, pageSize, itemNumbers, itemValidationIssue, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::items_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the query params
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    auto countryQuery = request.query().get("country");
    std::optional<std::string> country;
    if(countryQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(countryQuery.value(), valueQuery_instance)){
            country = valueQuery_instance;
        }
    }
    auto languageQuery = request.query().get("language");
    std::optional<std::string> language;
    if(languageQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(languageQuery.value(), valueQuery_instance)){
            language = valueQuery_instance;
        }
    }
    auto itemIdsQuery = request.query().get("item_ids");
    std::optional<std::vector<std::string>> itemIds;
    if(itemIdsQuery.has_value()){
        std::vector<std::string> valueQuery_instance;
        if(fromStringValue(itemIdsQuery.value(), valueQuery_instance)){
            itemIds = valueQuery_instance;
        }
    }
    auto filtersQuery = request.query().get("filters");
    std::optional<CatalogsItemsFilters> filters;
    if(filtersQuery.has_value()){
        CatalogsItemsFilters valueQuery_instance;
        if(fromStringValue(filtersQuery.value(), valueQuery_instance)){
            filters = valueQuery_instance;
        }
    }
    
    try {
        this->items_get(country, language, adAccountId, itemIds, filters, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void CatalogsApi::products_by_product_group_filter_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    CatalogsListProductsByFilterRequest catalogsListProductsByFilterRequest;
    
    // Getting the query params
    auto bookmarkQuery = request.query().get("bookmark");
    std::optional<std::string> bookmark;
    if(bookmarkQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(bookmarkQuery.value(), valueQuery_instance)){
            bookmark = valueQuery_instance;
        }
    }
    auto pageSizeQuery = request.query().get("page_size");
    std::optional<int32_t> pageSize;
    if(pageSizeQuery.has_value()){
        int32_t valueQuery_instance;
        if(fromStringValue(pageSizeQuery.value(), valueQuery_instance)){
            pageSize = valueQuery_instance;
        }
    }
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        nlohmann::json::parse(request.body()).get_to(catalogsListProductsByFilterRequest);
        catalogsListProductsByFilterRequest.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->products_by_product_group_filter_list(catalogsListProductsByFilterRequest, bookmark, pageSize, adAccountId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}

void CatalogsApi::catalogs_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

} // namespace org::openapitools::server::api

