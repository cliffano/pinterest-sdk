/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import * as models from '../model/models';

/* tslint:disable:no-unused-variable member-ordering */

export class CatalogsApi {
    protected basePath = 'https://api.pinterest.com/v5';
    public defaultHeaders : any = {};

    static $inject: string[] = ['$http', '$httpParamSerializer', 'basePath'];

    constructor(protected $http: ng.IHttpService, protected $httpParamSerializer?: (d: any) => any, basePath?: string) {
        if (basePath !== undefined) {
            this.basePath = basePath;
        }
    }

    /**
     * <strong>This endpoint is currently in beta and not available to all apps. <a href=\'/docs/api/v5/#tag/Understanding-catalog-management\'>Learn more</a>.</strong>  Create product group to use in Catalogs.
     * @summary Create product group
     * @param catalogsProductGroupCreateRequest Request object used to created a catalogs product group.
     */
    public catalogsProductGroupsCreate (catalogsProductGroupCreateRequest: models.CatalogsProductGroupCreateRequest, extraHttpRequestParams?: any ) : ng.IHttpPromise<object> {
        const localVarPath = this.basePath + '/catalogs/product_groups';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'catalogsProductGroupCreateRequest' is not null or undefined
        if (catalogsProductGroupCreateRequest === null || catalogsProductGroupCreateRequest === undefined) {
            throw new Error('Required parameter catalogsProductGroupCreateRequest was null or undefined when calling catalogsProductGroupsCreate.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
            data: catalogsProductGroupCreateRequest,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * <strong>This endpoint is currently in beta and not available to all apps. <a href=\'/docs/api/v5/#tag/Understanding-catalog-management\'>Learn more</a>.</strong>  Delete a product group from being in use in Catalogs.
     * @summary Delete product group
     * @param productGroupId Unique identifier of a product group
     */
    public catalogsProductGroupsDelete (productGroupId: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
        const localVarPath = this.basePath + '/catalogs/product_groups/{product_group_id}'
            .replace('{' + 'product_group_id' + '}', encodeURIComponent(String(productGroupId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'productGroupId' is not null or undefined
        if (productGroupId === null || productGroupId === undefined) {
            throw new Error('Required parameter productGroupId was null or undefined when calling catalogsProductGroupsDelete.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'DELETE',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * <strong>This endpoint is currently in beta and not available to all apps. <a href=\'/docs/api/v5/#tag/Understanding-catalog-management\'>Learn more</a>.</strong>  Get a list of product groups for a given Catalogs Feed Id.
     * @summary Get product groups list
     * @param feedId Unique identifier of a feed
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information.
     */
    public catalogsProductGroupsList (feedId: string, bookmark?: string, pageSize?: number, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.models.Paginated & object> {
        const localVarPath = this.basePath + '/catalogs/product_groups';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'feedId' is not null or undefined
        if (feedId === null || feedId === undefined) {
            throw new Error('Required parameter feedId was null or undefined when calling catalogsProductGroupsList.');
        }

        if (feedId !== undefined) {
            queryParameters['feed_id'] = feedId;
        }

        if (bookmark !== undefined) {
            queryParameters['bookmark'] = bookmark;
        }

        if (pageSize !== undefined) {
            queryParameters['page_size'] = pageSize;
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * <strong>This endpoint is currently in beta and not available to all apps. <a href=\'/docs/api/v5/#tag/Understanding-catalog-management\'>Learn more</a>.</strong>  Update product group to use in Catalogs.
     * @summary Update product group
     * @param productGroupId Unique identifier of a product group
     * @param catalogsProductGroupUpdateRequest Request object used to Update a catalogs product group.
     */
    public catalogsProductGroupsUpdate (productGroupId: string, catalogsProductGroupUpdateRequest: models.CatalogsProductGroupUpdateRequest, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.CatalogsProductGroup> {
        const localVarPath = this.basePath + '/catalogs/product_groups/{product_group_id}'
            .replace('{' + 'product_group_id' + '}', encodeURIComponent(String(productGroupId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'productGroupId' is not null or undefined
        if (productGroupId === null || productGroupId === undefined) {
            throw new Error('Required parameter productGroupId was null or undefined when calling catalogsProductGroupsUpdate.');
        }

        // verify required parameter 'catalogsProductGroupUpdateRequest' is not null or undefined
        if (catalogsProductGroupUpdateRequest === null || catalogsProductGroupUpdateRequest === undefined) {
            throw new Error('Required parameter catalogsProductGroupUpdateRequest was null or undefined when calling catalogsProductGroupsUpdate.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'PATCH',
            url: localVarPath,
            data: catalogsProductGroupUpdateRequest,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * <strong>This endpoint is currently in beta and not available to all apps. <a href=\'/docs/api/v5/#tag/Understanding-catalog-management\'>Learn more</a>.</strong>  Fetch a feed processing results owned by the owner user account.
     * @summary List processing results for a given feed
     * @param feedId Unique identifier of a feed
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information.
     */
    public feedProcessingResultsList (feedId: string, bookmark?: string, pageSize?: number, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.models.Paginated & object> {
        const localVarPath = this.basePath + '/catalogs/feeds/{feed_id}/processing_results'
            .replace('{' + 'feed_id' + '}', encodeURIComponent(String(feedId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'feedId' is not null or undefined
        if (feedId === null || feedId === undefined) {
            throw new Error('Required parameter feedId was null or undefined when calling feedProcessingResultsList.');
        }

        if (bookmark !== undefined) {
            queryParameters['bookmark'] = bookmark;
        }

        if (pageSize !== undefined) {
            queryParameters['page_size'] = pageSize;
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * <strong>This endpoint is currently in beta and not available to all apps. <a href=\'/docs/api/v5/#tag/Understanding-catalog-management\'>Learn more</a>.</strong>  Create a new feed owned by the \"operating user_account\".
     * @summary Create feed
     * @param catalogsFeedsCreateRequest Request object used to created a feed.
     */
    public feedsCreate (catalogsFeedsCreateRequest: models.CatalogsFeedsCreateRequest, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.CatalogsFeed> {
        const localVarPath = this.basePath + '/catalogs/feeds';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'catalogsFeedsCreateRequest' is not null or undefined
        if (catalogsFeedsCreateRequest === null || catalogsFeedsCreateRequest === undefined) {
            throw new Error('Required parameter catalogsFeedsCreateRequest was null or undefined when calling feedsCreate.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
            data: catalogsFeedsCreateRequest,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * <strong>This endpoint is currently in beta and not available to all apps. <a href=\'/docs/api/v5/#tag/Understanding-catalog-management\'>Learn more</a>.</strong>  Delete a feed owned by the \"operating user_account\".
     * @summary Delete feed
     * @param feedId Unique identifier of a feed
     */
    public feedsDelete (feedId: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
        const localVarPath = this.basePath + '/catalogs/feeds/{feed_id}'
            .replace('{' + 'feed_id' + '}', encodeURIComponent(String(feedId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'feedId' is not null or undefined
        if (feedId === null || feedId === undefined) {
            throw new Error('Required parameter feedId was null or undefined when calling feedsDelete.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'DELETE',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * <strong>This endpoint is currently in beta and not available to all apps. <a href=\'/docs/api/v5/#tag/Understanding-catalog-management\'>Learn more</a>.</strong>  Get a single feed owned by the \"operating user_account\".
     * @summary Get feed
     * @param feedId Unique identifier of a feed
     */
    public feedsGet (feedId: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.CatalogsFeed> {
        const localVarPath = this.basePath + '/catalogs/feeds/{feed_id}'
            .replace('{' + 'feed_id' + '}', encodeURIComponent(String(feedId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'feedId' is not null or undefined
        if (feedId === null || feedId === undefined) {
            throw new Error('Required parameter feedId was null or undefined when calling feedsGet.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * <strong>This endpoint is currently in beta and not available to all apps. <a href=\'/docs/api/v5/#tag/Understanding-catalog-management\'>Learn more</a>.</strong>  Fetch feeds owned by the \"operating user_account\".
     * @summary List feeds
     * @param bookmark Cursor used to fetch the next page of items
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information.
     */
    public feedsList (bookmark?: string, pageSize?: number, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.models.Paginated & object> {
        const localVarPath = this.basePath + '/catalogs/feeds';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        if (bookmark !== undefined) {
            queryParameters['bookmark'] = bookmark;
        }

        if (pageSize !== undefined) {
            queryParameters['page_size'] = pageSize;
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * <strong>This endpoint is currently in beta and not available to all apps. <a href=\'/docs/api/v5/#tag/Understanding-catalog-management\'>Learn more</a>.</strong>  Update a feed owned by the \"operating user_account\".
     * @summary Update feed
     * @param feedId Unique identifier of a feed
     * @param catalogsFeedsUpdateRequest Request object used to update a feed.
     */
    public feedsUpdate (feedId: string, catalogsFeedsUpdateRequest: models.CatalogsFeedsUpdateRequest, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.CatalogsFeed> {
        const localVarPath = this.basePath + '/catalogs/feeds/{feed_id}'
            .replace('{' + 'feed_id' + '}', encodeURIComponent(String(feedId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'feedId' is not null or undefined
        if (feedId === null || feedId === undefined) {
            throw new Error('Required parameter feedId was null or undefined when calling feedsUpdate.');
        }

        // verify required parameter 'catalogsFeedsUpdateRequest' is not null or undefined
        if (catalogsFeedsUpdateRequest === null || catalogsFeedsUpdateRequest === undefined) {
            throw new Error('Required parameter catalogsFeedsUpdateRequest was null or undefined when calling feedsUpdate.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'PATCH',
            url: localVarPath,
            data: catalogsFeedsUpdateRequest,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * <strong>This endpoint is currently in beta and not available to all apps. <a href=\'/docs/api/v5/#tag/Understanding-catalog-management\'>Learn more</a>.</strong>  Get a single catalogs items batch created by the \"operating user_account\".
     * @summary Get catalogs items batch
     * @param batchId Id of a catalogs items batch to fetch
     */
    public itemsBatchGet (batchId: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.CatalogsItemsBatch> {
        const localVarPath = this.basePath + '/catalogs/items/batch/{batch_id}'
            .replace('{' + 'batch_id' + '}', encodeURIComponent(String(batchId)));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'batchId' is not null or undefined
        if (batchId === null || batchId === undefined) {
            throw new Error('Required parameter batchId was null or undefined when calling itemsBatchGet.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * <strong>This endpoint is currently in beta and not available to all apps. <a href=\'/docs/api/v5/#tag/Understanding-catalog-management\'>Learn more</a>.</strong>  This endpoint supports multiple operations on a set of one or more catalog items.
     * @summary Perform an operation on an item batch
     * @param catalogsItemsBatchRequest Request object used to create catalogs items in a batch
     */
    public itemsBatchPost (catalogsItemsBatchRequest: models.CatalogsItemsBatchRequest, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.CatalogsItemsBatch> {
        const localVarPath = this.basePath + '/catalogs/items/batch';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'catalogsItemsBatchRequest' is not null or undefined
        if (catalogsItemsBatchRequest === null || catalogsItemsBatchRequest === undefined) {
            throw new Error('Required parameter catalogsItemsBatchRequest was null or undefined when calling itemsBatchPost.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
            data: catalogsItemsBatchRequest,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * Get the items of the catalog created by the \"operating user_account\"
     * @summary Get catalogs items
     * @param country Country for the Catalogs Items
     * @param itemIds Catalos Item ids
     * @param language Language for the Catalogs Items
     */
    public itemsGet (country: string, itemIds: Array<string>, language: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.CatalogsItems> {
        const localVarPath = this.basePath + '/catalogs/items';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'country' is not null or undefined
        if (country === null || country === undefined) {
            throw new Error('Required parameter country was null or undefined when calling itemsGet.');
        }

        // verify required parameter 'itemIds' is not null or undefined
        if (itemIds === null || itemIds === undefined) {
            throw new Error('Required parameter itemIds was null or undefined when calling itemsGet.');
        }

        // verify required parameter 'language' is not null or undefined
        if (language === null || language === undefined) {
            throw new Error('Required parameter language was null or undefined when calling itemsGet.');
        }

        if (country !== undefined) {
            queryParameters['country'] = country;
        }

        if (itemIds !== undefined) {
            queryParameters['item_ids'] = itemIds;
        }

        if (language !== undefined) {
            queryParameters['language'] = language;
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
}