/*
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


package com.prokarma.pkmst.controller;

import com.fasterxml.jackson.databind.ObjectMapper;
import com.prokarma.pkmst.model.CatalogsFeed;
import com.prokarma.pkmst.model.CatalogsFeedsCreateRequest;
import com.prokarma.pkmst.model.CatalogsFeedsUpdateRequest;
import com.prokarma.pkmst.model.CatalogsItems;
import com.prokarma.pkmst.model.CatalogsItemsBatch;
import com.prokarma.pkmst.model.CatalogsItemsBatchRequest;
import com.prokarma.pkmst.model.CatalogsProductGroup;
import com.prokarma.pkmst.model.CatalogsProductGroupCreateRequest;
import com.prokarma.pkmst.model.CatalogsProductGroupUpdateRequest;
import com.prokarma.pkmst.model.Error;
import com.prokarma.pkmst.model.Paginated;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.springframework.http.ResponseEntity;
import org.springframework.web.multipart.MultipartFile;

/**
 * API tests for CatalogsApi
 */
@Ignore
public class CatalogsApiTest {

    private final ObjectMapper objectMapper = new ObjectMapper();

    private final CatalogsApi api = new CatalogsApiController(objectMapper);

    private final String accept = "application/json";

    
    /**
     * Create product group
     *
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Create product group to use in Catalogs.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void catalogsProductGroupsCreateTest() throws Exception {
        CatalogsProductGroupCreateRequest catalogsProductGroupCreateRequest = null;
    ResponseEntity<Object> response = api.catalogsProductGroupsCreate(catalogsProductGroupCreateRequest , accept);

        // TODO: test validations
    }
    
    /**
     * Delete product group
     *
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Delete a product group from being in use in Catalogs.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void catalogsProductGroupsDeleteTest() throws Exception {
        String productGroupId = null;
    ResponseEntity<Void> response = api.catalogsProductGroupsDelete(productGroupId , accept);

        // TODO: test validations
    }
    
    /**
     * Get product groups list
     *
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get a list of product groups for a given Catalogs Feed Id.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void catalogsProductGroupsListTest() throws Exception {
        String feedId = null;
        String bookmark = null;
        Integer pageSize = null;
    ResponseEntity<Paginated> response = api.catalogsProductGroupsList(feedId, bookmark, pageSize , accept);

        // TODO: test validations
    }
    
    /**
     * Update product group
     *
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Update product group to use in Catalogs.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void catalogsProductGroupsUpdateTest() throws Exception {
        String productGroupId = null;
        CatalogsProductGroupUpdateRequest catalogsProductGroupUpdateRequest = null;
    ResponseEntity<CatalogsProductGroup> response = api.catalogsProductGroupsUpdate(productGroupId, catalogsProductGroupUpdateRequest , accept);

        // TODO: test validations
    }
    
    /**
     * List processing results for a given feed
     *
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Fetch a feed processing results owned by the owner user account.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void feedProcessingResultsListTest() throws Exception {
        String feedId = null;
        String bookmark = null;
        Integer pageSize = null;
    ResponseEntity<Paginated> response = api.feedProcessingResultsList(feedId, bookmark, pageSize , accept);

        // TODO: test validations
    }
    
    /**
     * Create feed
     *
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Create a new feed owned by the \&quot;operating user_account\&quot;.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void feedsCreateTest() throws Exception {
        CatalogsFeedsCreateRequest catalogsFeedsCreateRequest = null;
    ResponseEntity<CatalogsFeed> response = api.feedsCreate(catalogsFeedsCreateRequest , accept);

        // TODO: test validations
    }
    
    /**
     * Delete feed
     *
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Delete a feed owned by the \&quot;operating user_account\&quot;.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void feedsDeleteTest() throws Exception {
        String feedId = null;
    ResponseEntity<Void> response = api.feedsDelete(feedId , accept);

        // TODO: test validations
    }
    
    /**
     * Get feed
     *
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get a single feed owned by the \&quot;operating user_account\&quot;.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void feedsGetTest() throws Exception {
        String feedId = null;
    ResponseEntity<CatalogsFeed> response = api.feedsGet(feedId , accept);

        // TODO: test validations
    }
    
    /**
     * List feeds
     *
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Fetch feeds owned by the \&quot;operating user_account\&quot;.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void feedsListTest() throws Exception {
        String bookmark = null;
        Integer pageSize = null;
    ResponseEntity<Paginated> response = api.feedsList(bookmark, pageSize , accept);

        // TODO: test validations
    }
    
    /**
     * Update feed
     *
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Update a feed owned by the \&quot;operating user_account\&quot;.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void feedsUpdateTest() throws Exception {
        String feedId = null;
        CatalogsFeedsUpdateRequest catalogsFeedsUpdateRequest = null;
    ResponseEntity<CatalogsFeed> response = api.feedsUpdate(feedId, catalogsFeedsUpdateRequest , accept);

        // TODO: test validations
    }
    
    /**
     * Get catalogs items batch
     *
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get a single catalogs items batch created by the \&quot;operating user_account\&quot;.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void itemsBatchGetTest() throws Exception {
        String batchId = null;
    ResponseEntity<CatalogsItemsBatch> response = api.itemsBatchGet(batchId , accept);

        // TODO: test validations
    }
    
    /**
     * Perform an operation on an item batch
     *
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-catalog-management&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  This endpoint supports multiple operations on a set of one or more catalog items.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void itemsBatchPostTest() throws Exception {
        CatalogsItemsBatchRequest catalogsItemsBatchRequest = null;
    ResponseEntity<CatalogsItemsBatch> response = api.itemsBatchPost(catalogsItemsBatchRequest , accept);

        // TODO: test validations
    }
    
    /**
     * Get catalogs items
     *
     * Get the items of the catalog created by the \&quot;operating user_account\&quot;
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void itemsGetTest() throws Exception {
        String country = null;
        List<String> itemIds = null;
        String language = null;
    ResponseEntity<CatalogsItems> response = api.itemsGet(country, itemIds, language , accept);

        // TODO: test validations
    }
    
}
