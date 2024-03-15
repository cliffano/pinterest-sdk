package org.openapitools.vertxweb.server.api;

import org.openapitools.vertxweb.server.model.CatalogsFeed;
import org.openapitools.vertxweb.server.model.CatalogsItemValidationIssue;
import org.openapitools.vertxweb.server.model.CatalogsItems;
import org.openapitools.vertxweb.server.model.CatalogsItemsBatch;
import org.openapitools.vertxweb.server.model.CatalogsItemsFilters;
import org.openapitools.vertxweb.server.model.CatalogsList200Response;
import org.openapitools.vertxweb.server.model.CatalogsListProductsByFilterRequest;
import org.openapitools.vertxweb.server.model.CatalogsProductGroupPinsList200Response;
import org.openapitools.vertxweb.server.model.CatalogsProductGroupProductCounts;
import org.openapitools.vertxweb.server.model.CatalogsProductGroupsCreate201Response;
import org.openapitools.vertxweb.server.model.CatalogsProductGroupsCreateRequest;
import org.openapitools.vertxweb.server.model.CatalogsProductGroupsList200Response;
import org.openapitools.vertxweb.server.model.CatalogsProductGroupsUpdateRequest;
import org.openapitools.vertxweb.server.model.Error;
import org.openapitools.vertxweb.server.model.FeedProcessingResultsList200Response;
import org.openapitools.vertxweb.server.model.FeedsCreateRequest;
import org.openapitools.vertxweb.server.model.FeedsList200Response;
import org.openapitools.vertxweb.server.model.FeedsUpdateRequest;
import org.openapitools.vertxweb.server.model.ItemsBatchPostRequest;
import org.openapitools.vertxweb.server.model.ItemsIssuesList200Response;

import com.fasterxml.jackson.core.type.TypeReference;
import io.vertx.core.json.jackson.DatabindCodec;
import io.vertx.ext.web.openapi.RouterBuilder;
import io.vertx.ext.web.validation.RequestParameters;
import io.vertx.ext.web.validation.RequestParameter;
import io.vertx.ext.web.validation.ValidationHandler;
import io.vertx.ext.web.RoutingContext;
import io.vertx.core.json.JsonObject;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.util.List;
import java.util.Map;

public class CatalogsApiHandler {

    private static final Logger logger = LoggerFactory.getLogger(CatalogsApiHandler.class);

    private final CatalogsApi api;

    public CatalogsApiHandler(CatalogsApi api) {
        this.api = api;
    }

    @Deprecated
    public CatalogsApiHandler() {
        this(new CatalogsApiImpl());
    }

    public void mount(RouterBuilder builder) {
        builder.operation("catalogsList").handler(this::catalogsList);
        builder.operation("catalogsProductGroupPinsList").handler(this::catalogsProductGroupPinsList);
        builder.operation("catalogsProductGroupsCreate").handler(this::catalogsProductGroupsCreate);
        builder.operation("catalogsProductGroupsDelete").handler(this::catalogsProductGroupsDelete);
        builder.operation("catalogsProductGroupsGet").handler(this::catalogsProductGroupsGet);
        builder.operation("catalogsProductGroupsList").handler(this::catalogsProductGroupsList);
        builder.operation("catalogsProductGroupsProductCountsGet").handler(this::catalogsProductGroupsProductCountsGet);
        builder.operation("catalogsProductGroupsUpdate").handler(this::catalogsProductGroupsUpdate);
        builder.operation("feedProcessingResultsList").handler(this::feedProcessingResultsList);
        builder.operation("feedsCreate").handler(this::feedsCreate);
        builder.operation("feedsDelete").handler(this::feedsDelete);
        builder.operation("feedsGet").handler(this::feedsGet);
        builder.operation("feedsList").handler(this::feedsList);
        builder.operation("feedsUpdate").handler(this::feedsUpdate);
        builder.operation("itemsBatchGet").handler(this::itemsBatchGet);
        builder.operation("itemsBatchPost").handler(this::itemsBatchPost);
        builder.operation("itemsGet").handler(this::itemsGet);
        builder.operation("itemsIssuesList").handler(this::itemsIssuesList);
        builder.operation("productsByProductGroupFilterList").handler(this::productsByProductGroupFilterList);
    }

    private void catalogsList(RoutingContext routingContext) {
        logger.info("catalogsList()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        String bookmark = requestParameters.queryParameter("bookmark") != null ? requestParameters.queryParameter("bookmark").getString() : null;
        Integer pageSize = requestParameters.queryParameter("page_size") != null ? requestParameters.queryParameter("page_size").getInteger() : 25;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter bookmark is {}", bookmark);
        logger.debug("Parameter pageSize is {}", pageSize);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.catalogsList(bookmark, pageSize, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void catalogsProductGroupPinsList(RoutingContext routingContext) {
        logger.info("catalogsProductGroupPinsList()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        String productGroupId = requestParameters.pathParameter("product_group_id") != null ? requestParameters.pathParameter("product_group_id").getString() : null;
        String bookmark = requestParameters.queryParameter("bookmark") != null ? requestParameters.queryParameter("bookmark").getString() : null;
        Integer pageSize = requestParameters.queryParameter("page_size") != null ? requestParameters.queryParameter("page_size").getInteger() : 25;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter productGroupId is {}", productGroupId);
        logger.debug("Parameter bookmark is {}", bookmark);
        logger.debug("Parameter pageSize is {}", pageSize);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.catalogsProductGroupPinsList(productGroupId, bookmark, pageSize, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void catalogsProductGroupsCreate(RoutingContext routingContext) {
        logger.info("catalogsProductGroupsCreate()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        RequestParameter body = requestParameters.body();
        CatalogsProductGroupsCreateRequest catalogsProductGroupsCreateRequest = body != null ? DatabindCodec.mapper().convertValue(body.get(), new TypeReference<CatalogsProductGroupsCreateRequest>(){}) : null;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter catalogsProductGroupsCreateRequest is {}", catalogsProductGroupsCreateRequest);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.catalogsProductGroupsCreate(catalogsProductGroupsCreateRequest, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void catalogsProductGroupsDelete(RoutingContext routingContext) {
        logger.info("catalogsProductGroupsDelete()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        String productGroupId = requestParameters.pathParameter("product_group_id") != null ? requestParameters.pathParameter("product_group_id").getString() : null;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter productGroupId is {}", productGroupId);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.catalogsProductGroupsDelete(productGroupId, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void catalogsProductGroupsGet(RoutingContext routingContext) {
        logger.info("catalogsProductGroupsGet()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        String productGroupId = requestParameters.pathParameter("product_group_id") != null ? requestParameters.pathParameter("product_group_id").getString() : null;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter productGroupId is {}", productGroupId);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.catalogsProductGroupsGet(productGroupId, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void catalogsProductGroupsList(RoutingContext routingContext) {
        logger.info("catalogsProductGroupsList()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        String feedId = requestParameters.queryParameter("feed_id") != null ? requestParameters.queryParameter("feed_id").getString() : null;
        String catalogId = requestParameters.queryParameter("catalog_id") != null ? requestParameters.queryParameter("catalog_id").getString() : null;
        String bookmark = requestParameters.queryParameter("bookmark") != null ? requestParameters.queryParameter("bookmark").getString() : null;
        Integer pageSize = requestParameters.queryParameter("page_size") != null ? requestParameters.queryParameter("page_size").getInteger() : 25;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter feedId is {}", feedId);
        logger.debug("Parameter catalogId is {}", catalogId);
        logger.debug("Parameter bookmark is {}", bookmark);
        logger.debug("Parameter pageSize is {}", pageSize);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.catalogsProductGroupsList(feedId, catalogId, bookmark, pageSize, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void catalogsProductGroupsProductCountsGet(RoutingContext routingContext) {
        logger.info("catalogsProductGroupsProductCountsGet()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        String productGroupId = requestParameters.pathParameter("product_group_id") != null ? requestParameters.pathParameter("product_group_id").getString() : null;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter productGroupId is {}", productGroupId);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.catalogsProductGroupsProductCountsGet(productGroupId, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void catalogsProductGroupsUpdate(RoutingContext routingContext) {
        logger.info("catalogsProductGroupsUpdate()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        String productGroupId = requestParameters.pathParameter("product_group_id") != null ? requestParameters.pathParameter("product_group_id").getString() : null;
        RequestParameter body = requestParameters.body();
        CatalogsProductGroupsUpdateRequest catalogsProductGroupsUpdateRequest = body != null ? DatabindCodec.mapper().convertValue(body.get(), new TypeReference<CatalogsProductGroupsUpdateRequest>(){}) : null;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter productGroupId is {}", productGroupId);
        logger.debug("Parameter catalogsProductGroupsUpdateRequest is {}", catalogsProductGroupsUpdateRequest);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.catalogsProductGroupsUpdate(productGroupId, catalogsProductGroupsUpdateRequest, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void feedProcessingResultsList(RoutingContext routingContext) {
        logger.info("feedProcessingResultsList()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        String feedId = requestParameters.pathParameter("feed_id") != null ? requestParameters.pathParameter("feed_id").getString() : null;
        String bookmark = requestParameters.queryParameter("bookmark") != null ? requestParameters.queryParameter("bookmark").getString() : null;
        Integer pageSize = requestParameters.queryParameter("page_size") != null ? requestParameters.queryParameter("page_size").getInteger() : 25;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter feedId is {}", feedId);
        logger.debug("Parameter bookmark is {}", bookmark);
        logger.debug("Parameter pageSize is {}", pageSize);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.feedProcessingResultsList(feedId, bookmark, pageSize, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void feedsCreate(RoutingContext routingContext) {
        logger.info("feedsCreate()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        RequestParameter body = requestParameters.body();
        FeedsCreateRequest feedsCreateRequest = body != null ? DatabindCodec.mapper().convertValue(body.get(), new TypeReference<FeedsCreateRequest>(){}) : null;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter feedsCreateRequest is {}", feedsCreateRequest);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.feedsCreate(feedsCreateRequest, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void feedsDelete(RoutingContext routingContext) {
        logger.info("feedsDelete()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        String feedId = requestParameters.pathParameter("feed_id") != null ? requestParameters.pathParameter("feed_id").getString() : null;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter feedId is {}", feedId);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.feedsDelete(feedId, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void feedsGet(RoutingContext routingContext) {
        logger.info("feedsGet()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        String feedId = requestParameters.pathParameter("feed_id") != null ? requestParameters.pathParameter("feed_id").getString() : null;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter feedId is {}", feedId);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.feedsGet(feedId, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void feedsList(RoutingContext routingContext) {
        logger.info("feedsList()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        String bookmark = requestParameters.queryParameter("bookmark") != null ? requestParameters.queryParameter("bookmark").getString() : null;
        Integer pageSize = requestParameters.queryParameter("page_size") != null ? requestParameters.queryParameter("page_size").getInteger() : 25;
        String catalogId = requestParameters.queryParameter("catalog_id") != null ? requestParameters.queryParameter("catalog_id").getString() : null;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter bookmark is {}", bookmark);
        logger.debug("Parameter pageSize is {}", pageSize);
        logger.debug("Parameter catalogId is {}", catalogId);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.feedsList(bookmark, pageSize, catalogId, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void feedsUpdate(RoutingContext routingContext) {
        logger.info("feedsUpdate()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        String feedId = requestParameters.pathParameter("feed_id") != null ? requestParameters.pathParameter("feed_id").getString() : null;
        RequestParameter body = requestParameters.body();
        FeedsUpdateRequest feedsUpdateRequest = body != null ? DatabindCodec.mapper().convertValue(body.get(), new TypeReference<FeedsUpdateRequest>(){}) : null;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter feedId is {}", feedId);
        logger.debug("Parameter feedsUpdateRequest is {}", feedsUpdateRequest);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.feedsUpdate(feedId, feedsUpdateRequest, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void itemsBatchGet(RoutingContext routingContext) {
        logger.info("itemsBatchGet()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        String batchId = requestParameters.pathParameter("batch_id") != null ? requestParameters.pathParameter("batch_id").getString() : null;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter batchId is {}", batchId);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.itemsBatchGet(batchId, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void itemsBatchPost(RoutingContext routingContext) {
        logger.info("itemsBatchPost()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        RequestParameter body = requestParameters.body();
        ItemsBatchPostRequest itemsBatchPostRequest = body != null ? DatabindCodec.mapper().convertValue(body.get(), new TypeReference<ItemsBatchPostRequest>(){}) : null;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter itemsBatchPostRequest is {}", itemsBatchPostRequest);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.itemsBatchPost(itemsBatchPostRequest, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void itemsGet(RoutingContext routingContext) {
        logger.info("itemsGet()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        String country = requestParameters.queryParameter("country") != null ? requestParameters.queryParameter("country").getString() : null;
        String language = requestParameters.queryParameter("language") != null ? requestParameters.queryParameter("language").getString() : null;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;
        List<String> itemIds = requestParameters.queryParameter("item_ids") != null ? DatabindCodec.mapper().convertValue(requestParameters.queryParameter("item_ids").get(), new TypeReference<List<String>>(){}) : null;
        CatalogsItemsFilters filters = requestParameters.queryParameter("filters") != null ? DatabindCodec.mapper().convertValue(requestParameters.queryParameter("filters").get(), new TypeReference<CatalogsItemsFilters>(){}) : null;

        logger.debug("Parameter country is {}", country);
        logger.debug("Parameter language is {}", language);
        logger.debug("Parameter adAccountId is {}", adAccountId);
        logger.debug("Parameter itemIds is {}", itemIds);
        logger.debug("Parameter filters is {}", filters);

        api.itemsGet(country, language, adAccountId, itemIds, filters)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void itemsIssuesList(RoutingContext routingContext) {
        logger.info("itemsIssuesList()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        String processingResultId = requestParameters.pathParameter("processing_result_id") != null ? requestParameters.pathParameter("processing_result_id").getString() : null;
        String bookmark = requestParameters.queryParameter("bookmark") != null ? requestParameters.queryParameter("bookmark").getString() : null;
        Integer pageSize = requestParameters.queryParameter("page_size") != null ? requestParameters.queryParameter("page_size").getInteger() : 25;
        List<Integer> itemNumbers = requestParameters.queryParameter("item_numbers") != null ? DatabindCodec.mapper().convertValue(requestParameters.queryParameter("item_numbers").get(), new TypeReference<List<Integer>>(){}) : null;
        CatalogsItemValidationIssue itemValidationIssue = requestParameters.queryParameter("item_validation_issue") != null ? requestParameters.queryParameter("item_validation_issue").getCatalogsItemValidationIssue() : null;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter processingResultId is {}", processingResultId);
        logger.debug("Parameter bookmark is {}", bookmark);
        logger.debug("Parameter pageSize is {}", pageSize);
        logger.debug("Parameter itemNumbers is {}", itemNumbers);
        logger.debug("Parameter itemValidationIssue is {}", itemValidationIssue);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.itemsIssuesList(processingResultId, bookmark, pageSize, itemNumbers, itemValidationIssue, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

    private void productsByProductGroupFilterList(RoutingContext routingContext) {
        logger.info("productsByProductGroupFilterList()");

        // Param extraction
        RequestParameters requestParameters = routingContext.get(ValidationHandler.REQUEST_CONTEXT_KEY);

        RequestParameter body = requestParameters.body();
        CatalogsListProductsByFilterRequest catalogsListProductsByFilterRequest = body != null ? DatabindCodec.mapper().convertValue(body.get(), new TypeReference<CatalogsListProductsByFilterRequest>(){}) : null;
        String bookmark = requestParameters.queryParameter("bookmark") != null ? requestParameters.queryParameter("bookmark").getString() : null;
        Integer pageSize = requestParameters.queryParameter("page_size") != null ? requestParameters.queryParameter("page_size").getInteger() : 25;
        String adAccountId = requestParameters.queryParameter("ad_account_id") != null ? requestParameters.queryParameter("ad_account_id").getString() : null;

        logger.debug("Parameter catalogsListProductsByFilterRequest is {}", catalogsListProductsByFilterRequest);
        logger.debug("Parameter bookmark is {}", bookmark);
        logger.debug("Parameter pageSize is {}", pageSize);
        logger.debug("Parameter adAccountId is {}", adAccountId);

        api.productsByProductGroupFilterList(catalogsListProductsByFilterRequest, bookmark, pageSize, adAccountId)
            .onSuccess(apiResponse -> {
                routingContext.response().setStatusCode(apiResponse.getStatusCode());
                if (apiResponse.hasData()) {
                    routingContext.json(apiResponse.getData());
                } else {
                    routingContext.response().end();
                }
            })
            .onFailure(routingContext::fail);
    }

}
