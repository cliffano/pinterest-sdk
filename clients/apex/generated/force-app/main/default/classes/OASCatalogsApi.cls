/*
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

public class OASCatalogsApi {
    OASClient client;

    public OASCatalogsApi(OASClient client) {
        this.client = client;
    }

    public OASCatalogsApi() {
        this.client = new OASClient();
    }

    public OASClient getClient() {
        return this.client;
    }

    /**
     * Create product group
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;\n\nCreate product group to use in Catalogs.
     * @param oaSCatalogsProductGroupCreateRequest Request object used to created a catalogs product group. (required)
     * @return Object
     * @throws OAS.ApiException if fails to make API call
     */
    public Object catalogsProductGroupsCreate(Map<String, Object> params) {
        client.assertNotNull(params.get('oaSCatalogsProductGroupCreateRequest'), 'oaSCatalogsProductGroupCreateRequest');
        List<OAS.Param> query = new List<OAS.Param>();
        List<OAS.Param> form = new List<OAS.Param>();

        return (Object) client.invoke(
            'POST', '/catalogs/product_groups',
            (OASCatalogsProductGroupCreateRequest) params.get('oaSCatalogsProductGroupCreateRequest'),
            query, form,
            new Map<String, Object>(),
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>{ 'application/json' },
            new List<String> { 'pinterest_oauth2' },
            Object.class
        );
    }
    /**
     * Delete product group
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;\n\nDelete a product group from being in use in Catalogs.
     * @param productGroupId Unique identifier of a product group (required)
     * @throws OAS.ApiException if fails to make API call
     */
    public void catalogsProductGroupsDelete(Map<String, Object> params) {
        client.assertNotNull(params.get('productGroupId'), 'productGroupId');
        List<OAS.Param> query = new List<OAS.Param>();
        List<OAS.Param> form = new List<OAS.Param>();

        client.invoke(
            'DELETE', '/catalogs/product_groups/{product_group_id}', '',
            query, form,
            new Map<String, Object>{
                'product_group_id' => (String) params.get('productGroupId')
            },
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>(),
            new List<String> { 'pinterest_oauth2' },
            null
        );
    }
    /**
     * Get product groups list
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;\n\nGet a list of product groups for a given Catalogs Feed Id.
     * @param feedId Unique identifier of a feed (required)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @return OASPaginated
     * @throws OAS.ApiException if fails to make API call
     */
    public OASPaginated catalogsProductGroupsList(Map<String, Object> params) {
        client.assertNotNull(params.get('feedId'), 'feedId');
        List<OAS.Param> query = new List<OAS.Param>();

        // cast query params to verify their expected type
        query.addAll(client.makeParam('feed_id', (String) params.get('feedId')));
        query.addAll(client.makeParam('bookmark', (String) params.get('bookmark')));
        query.addAll(client.makeParam('page_size', (Integer) params.get('pageSize')));

        List<OAS.Param> form = new List<OAS.Param>();

        return (OASPaginated) client.invoke(
            'GET', '/catalogs/product_groups', '',
            query, form,
            new Map<String, Object>(),
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>(),
            new List<String> { 'pinterest_oauth2' },
            OASPaginated.class
        );
    }
    /**
     * Update product group
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;\n\nUpdate product group to use in Catalogs.
     * @param productGroupId Unique identifier of a product group (required)
     * @param oaSCatalogsProductGroupUpdateRequest Request object used to Update a catalogs product group. (required)
     * @return OASCatalogsProductGroup
     * @throws OAS.ApiException if fails to make API call
     */
    public OASCatalogsProductGroup catalogsProductGroupsUpdate(Map<String, Object> params) {
        client.assertNotNull(params.get('productGroupId'), 'productGroupId');
        client.assertNotNull(params.get('oaSCatalogsProductGroupUpdateRequest'), 'oaSCatalogsProductGroupUpdateRequest');
        List<OAS.Param> query = new List<OAS.Param>();
        List<OAS.Param> form = new List<OAS.Param>();

        return (OASCatalogsProductGroup) client.invoke(
            'PATCH', '/catalogs/product_groups/{product_group_id}',
            (OASCatalogsProductGroupUpdateRequest) params.get('oaSCatalogsProductGroupUpdateRequest'),
            query, form,
            new Map<String, Object>{
                'product_group_id' => (String) params.get('productGroupId')
            },
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>{ 'application/json' },
            new List<String> { 'pinterest_oauth2' },
            OASCatalogsProductGroup.class
        );
    }
    /**
     * List processing results for a given feed
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;\n\nFetch a feed processing results owned by the owner user account.
     * @param feedId Unique identifier of a feed (required)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @return OASPaginated
     * @throws OAS.ApiException if fails to make API call
     */
    public OASPaginated feedProcessingResultsList(Map<String, Object> params) {
        client.assertNotNull(params.get('feedId'), 'feedId');
        List<OAS.Param> query = new List<OAS.Param>();

        // cast query params to verify their expected type
        query.addAll(client.makeParam('bookmark', (String) params.get('bookmark')));
        query.addAll(client.makeParam('page_size', (Integer) params.get('pageSize')));

        List<OAS.Param> form = new List<OAS.Param>();

        return (OASPaginated) client.invoke(
            'GET', '/catalogs/feeds/{feed_id}/processing_results', '',
            query, form,
            new Map<String, Object>{
                'feed_id' => (String) params.get('feedId')
            },
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>(),
            new List<String> { 'pinterest_oauth2' },
            OASPaginated.class
        );
    }
    /**
     * Create feed
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;\n\nCreate a new feed owned by the &quot;operating user_account&quot;.
     * @param oaSCatalogsFeedsCreateRequest Request object used to created a feed. (required)
     * @return OASCatalogsFeed
     * @throws OAS.ApiException if fails to make API call
     */
    public OASCatalogsFeed feedsCreate(Map<String, Object> params) {
        client.assertNotNull(params.get('oaSCatalogsFeedsCreateRequest'), 'oaSCatalogsFeedsCreateRequest');
        List<OAS.Param> query = new List<OAS.Param>();
        List<OAS.Param> form = new List<OAS.Param>();

        return (OASCatalogsFeed) client.invoke(
            'POST', '/catalogs/feeds',
            (OASCatalogsFeedsCreateRequest) params.get('oaSCatalogsFeedsCreateRequest'),
            query, form,
            new Map<String, Object>(),
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>{ 'application/json' },
            new List<String> { 'pinterest_oauth2' },
            OASCatalogsFeed.class
        );
    }
    /**
     * Delete feed
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;\n\nDelete a feed owned by the &quot;operating user_account&quot;.
     * @param feedId Unique identifier of a feed (required)
     * @throws OAS.ApiException if fails to make API call
     */
    public void feedsDelete(Map<String, Object> params) {
        client.assertNotNull(params.get('feedId'), 'feedId');
        List<OAS.Param> query = new List<OAS.Param>();
        List<OAS.Param> form = new List<OAS.Param>();

        client.invoke(
            'DELETE', '/catalogs/feeds/{feed_id}', '',
            query, form,
            new Map<String, Object>{
                'feed_id' => (String) params.get('feedId')
            },
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>(),
            new List<String> { 'pinterest_oauth2' },
            null
        );
    }
    /**
     * Get feed
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;\n\nGet a single feed owned by the &quot;operating user_account&quot;.
     * @param feedId Unique identifier of a feed (required)
     * @return OASCatalogsFeed
     * @throws OAS.ApiException if fails to make API call
     */
    public OASCatalogsFeed feedsGet(Map<String, Object> params) {
        client.assertNotNull(params.get('feedId'), 'feedId');
        List<OAS.Param> query = new List<OAS.Param>();
        List<OAS.Param> form = new List<OAS.Param>();

        return (OASCatalogsFeed) client.invoke(
            'GET', '/catalogs/feeds/{feed_id}', '',
            query, form,
            new Map<String, Object>{
                'feed_id' => (String) params.get('feedId')
            },
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>(),
            new List<String> { 'pinterest_oauth2' },
            OASCatalogsFeed.class
        );
    }
    /**
     * List feeds
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;\n\nFetch feeds owned by the &quot;operating user_account&quot;.
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @return OASPaginated
     * @throws OAS.ApiException if fails to make API call
     */
    public OASPaginated feedsList(Map<String, Object> params) {
        List<OAS.Param> query = new List<OAS.Param>();

        // cast query params to verify their expected type
        query.addAll(client.makeParam('bookmark', (String) params.get('bookmark')));
        query.addAll(client.makeParam('page_size', (Integer) params.get('pageSize')));

        List<OAS.Param> form = new List<OAS.Param>();

        return (OASPaginated) client.invoke(
            'GET', '/catalogs/feeds', '',
            query, form,
            new Map<String, Object>(),
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>(),
            new List<String> { 'pinterest_oauth2' },
            OASPaginated.class
        );
    }
    /**
     * Update feed
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;\n\nUpdate a feed owned by the &quot;operating user_account&quot;.
     * @param feedId Unique identifier of a feed (required)
     * @param oaSCatalogsFeedsUpdateRequest Request object used to update a feed. (required)
     * @return OASCatalogsFeed
     * @throws OAS.ApiException if fails to make API call
     */
    public OASCatalogsFeed feedsUpdate(Map<String, Object> params) {
        client.assertNotNull(params.get('feedId'), 'feedId');
        client.assertNotNull(params.get('oaSCatalogsFeedsUpdateRequest'), 'oaSCatalogsFeedsUpdateRequest');
        List<OAS.Param> query = new List<OAS.Param>();
        List<OAS.Param> form = new List<OAS.Param>();

        return (OASCatalogsFeed) client.invoke(
            'PATCH', '/catalogs/feeds/{feed_id}',
            (OASCatalogsFeedsUpdateRequest) params.get('oaSCatalogsFeedsUpdateRequest'),
            query, form,
            new Map<String, Object>{
                'feed_id' => (String) params.get('feedId')
            },
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>{ 'application/json' },
            new List<String> { 'pinterest_oauth2' },
            OASCatalogsFeed.class
        );
    }
    /**
     * Get catalogs items batch
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;\n\nGet a single catalogs items batch created by the &quot;operating user_account&quot;.
     * @param batchId Id of a catalogs items batch to fetch (required)
     * @return OASCatalogsItemsBatch
     * @throws OAS.ApiException if fails to make API call
     */
    public OASCatalogsItemsBatch itemsBatchGet(Map<String, Object> params) {
        client.assertNotNull(params.get('batchId'), 'batchId');
        List<OAS.Param> query = new List<OAS.Param>();
        List<OAS.Param> form = new List<OAS.Param>();

        return (OASCatalogsItemsBatch) client.invoke(
            'GET', '/catalogs/items/batch/{batch_id}', '',
            query, form,
            new Map<String, Object>{
                'batch_id' => (String) params.get('batchId')
            },
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>(),
            new List<String> { 'pinterest_oauth2' },
            OASCatalogsItemsBatch.class
        );
    }
    /**
     * Perform an operation on an item batch
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;\n\nThis endpoint supports multiple operations on a set of one or more catalog items.
     * @param oaSCatalogsItemsBatchRequest Request object used to create catalogs items in a batch (required)
     * @return OASCatalogsItemsBatch
     * @throws OAS.ApiException if fails to make API call
     */
    public OASCatalogsItemsBatch itemsBatchPost(Map<String, Object> params) {
        client.assertNotNull(params.get('oaSCatalogsItemsBatchRequest'), 'oaSCatalogsItemsBatchRequest');
        List<OAS.Param> query = new List<OAS.Param>();
        List<OAS.Param> form = new List<OAS.Param>();

        return (OASCatalogsItemsBatch) client.invoke(
            'POST', '/catalogs/items/batch',
            (OASCatalogsItemsBatchRequest) params.get('oaSCatalogsItemsBatchRequest'),
            query, form,
            new Map<String, Object>(),
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>{ 'application/json' },
            new List<String> { 'pinterest_oauth2' },
            OASCatalogsItemsBatch.class
        );
    }
    /**
     * Get catalogs items
     * Get the items of the catalog created by the &quot;operating user_account&quot;
     * @param country Country for the Catalogs Items (required)
     * @param itemIds Catalos Item ids (required)
     * @param language Language for the Catalogs Items (required)
     * @return OASCatalogsItems
     * @throws OAS.ApiException if fails to make API call
     */
    public OASCatalogsItems itemsGet(Map<String, Object> params) {
        client.assertNotNull(params.get('country'), 'country');
        client.assertNotNull(params.get('itemIds'), 'itemIds');
        client.assertNotNull(params.get('language'), 'language');
        List<OAS.Param> query = new List<OAS.Param>();

        // cast query params to verify their expected type
        query.addAll(client.makeParam('country', (String) params.get('country')));
        query.addAll(client.makeParams('item_ids', (List<String>) params.get('itemIds')));
        query.addAll(client.makeParam('language', (String) params.get('language')));

        List<OAS.Param> form = new List<OAS.Param>();

        return (OASCatalogsItems) client.invoke(
            'GET', '/catalogs/items', '',
            query, form,
            new Map<String, Object>(),
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>(),
            new List<String> { 'pinterest_oauth2' },
            OASCatalogsItems.class
        );
    }
}