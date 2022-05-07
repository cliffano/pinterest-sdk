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

import { autoinject } from 'aurelia-framework';
import { HttpClient } from 'aurelia-http-client';
import { Api } from './Api';
import { AuthStorage } from './AuthStorage';
import {
  CatalogsItemsBatch,
  CatalogsItemsBatchRequest,
  CatalogsFeedsUpdateRequest,
  CatalogsFeedsCreateRequest,
  Paginated &amp; object,
  CatalogsItems,
  CatalogsProductGroupCreateRequest,
  CatalogsProductGroup,
  CatalogsProductGroupUpdateRequest,
  CatalogsFeed,
} from './models';

/**
 * catalogsProductGroupsCreate - parameters interface
 */
export interface ICatalogsProductGroupsCreateParams {
  catalogsProductGroupCreateRequest: CatalogsProductGroupCreateRequest;
}

/**
 * catalogsProductGroupsDelete - parameters interface
 */
export interface ICatalogsProductGroupsDeleteParams {
  productGroupId: string;
}

/**
 * catalogsProductGroupsList - parameters interface
 */
export interface ICatalogsProductGroupsListParams {
  feedId: string;
  bookmark?: string;
  pageSize?: number;
}

/**
 * catalogsProductGroupsUpdate - parameters interface
 */
export interface ICatalogsProductGroupsUpdateParams {
  productGroupId: string;
  catalogsProductGroupUpdateRequest: CatalogsProductGroupUpdateRequest;
}

/**
 * feedProcessingResultsList - parameters interface
 */
export interface IFeedProcessingResultsListParams {
  feedId: string;
  bookmark?: string;
  pageSize?: number;
}

/**
 * feedsCreate - parameters interface
 */
export interface IFeedsCreateParams {
  catalogsFeedsCreateRequest: CatalogsFeedsCreateRequest;
}

/**
 * feedsDelete - parameters interface
 */
export interface IFeedsDeleteParams {
  feedId: string;
}

/**
 * feedsGet - parameters interface
 */
export interface IFeedsGetParams {
  feedId: string;
}

/**
 * feedsList - parameters interface
 */
export interface IFeedsListParams {
  bookmark?: string;
  pageSize?: number;
}

/**
 * feedsUpdate - parameters interface
 */
export interface IFeedsUpdateParams {
  feedId: string;
  catalogsFeedsUpdateRequest: CatalogsFeedsUpdateRequest;
}

/**
 * itemsBatchGet - parameters interface
 */
export interface IItemsBatchGetParams {
  batchId: string;
}

/**
 * itemsBatchPost - parameters interface
 */
export interface IItemsBatchPostParams {
  catalogsItemsBatchRequest: CatalogsItemsBatchRequest;
}

/**
 * itemsGet - parameters interface
 */
export interface IItemsGetParams {
  country: string;
  itemIds: Array<string>;
  language: string;
}

/**
 * CatalogsApi - API class
 */
@autoinject()
export class CatalogsApi extends Api {

  /**
   * Creates a new CatalogsApi class.
   *
   * @param httpClient The Aurelia HTTP client to be injected.
   * @param authStorage A storage for authentication data.
   */
  constructor(httpClient: HttpClient, authStorage: AuthStorage) {
    super(httpClient, authStorage);
  }

  /**
   * Create product group
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Create product group to use in Catalogs.
   * @param params.catalogsProductGroupCreateRequest Request object used to created a catalogs product group.
   */
  async catalogsProductGroupsCreate(params: ICatalogsProductGroupsCreateParams): Promise<object> {
    // Verify required parameters are set
    this.ensureParamIsSet('catalogsProductGroupsCreate', params, 'catalogsProductGroupCreateRequest');

    // Create URL to call
    const url = `${this.basePath}/catalogs/product_groups`;

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asPost()
      // Encode body parameter
      .withHeader('content-type', 'application/json')
      .withContent(JSON.stringify(params['catalogsProductGroupCreateRequest'] || {}))

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Delete product group
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Delete a product group from being in use in Catalogs.
   * @param params.productGroupId Unique identifier of a product group
   */
  async catalogsProductGroupsDelete(params: ICatalogsProductGroupsDeleteParams): Promise<any> {
    // Verify required parameters are set
    this.ensureParamIsSet('catalogsProductGroupsDelete', params, 'productGroupId');

    // Create URL to call
    const url = `${this.basePath}/catalogs/product_groups/{product_group_id}`
      .replace(`{${'product_group_id'}}`, encodeURIComponent(`${params['productGroupId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asDelete()

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Get product groups list
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get a list of product groups for a given Catalogs Feed Id.
   * @param params.feedId Unique identifier of a feed
   * @param params.bookmark Cursor used to fetch the next page of items
   * @param params.pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information.
   */
  async catalogsProductGroupsList(params: ICatalogsProductGroupsListParams): Promise<Paginated & object> {
    // Verify required parameters are set
    this.ensureParamIsSet('catalogsProductGroupsList', params, 'feedId');

    // Create URL to call
    const url = `${this.basePath}/catalogs/product_groups`;

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()
      // Set query parameters
      .withParams({ 
        'feed_id': params['feedId'],
        'bookmark': params['bookmark'],
        'page_size': params['pageSize'],
      })

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Update product group
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Update product group to use in Catalogs.
   * @param params.productGroupId Unique identifier of a product group
   * @param params.catalogsProductGroupUpdateRequest Request object used to Update a catalogs product group.
   */
  async catalogsProductGroupsUpdate(params: ICatalogsProductGroupsUpdateParams): Promise<CatalogsProductGroup> {
    // Verify required parameters are set
    this.ensureParamIsSet('catalogsProductGroupsUpdate', params, 'productGroupId');
    this.ensureParamIsSet('catalogsProductGroupsUpdate', params, 'catalogsProductGroupUpdateRequest');

    // Create URL to call
    const url = `${this.basePath}/catalogs/product_groups/{product_group_id}`
      .replace(`{${'product_group_id'}}`, encodeURIComponent(`${params['productGroupId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asPatch()
      // Encode body parameter
      .withHeader('content-type', 'application/json')
      .withContent(JSON.stringify(params['catalogsProductGroupUpdateRequest'] || {}))

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * List processing results for a given feed
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Fetch a feed processing results owned by the owner user account.
   * @param params.feedId Unique identifier of a feed
   * @param params.bookmark Cursor used to fetch the next page of items
   * @param params.pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information.
   */
  async feedProcessingResultsList(params: IFeedProcessingResultsListParams): Promise<Paginated & object> {
    // Verify required parameters are set
    this.ensureParamIsSet('feedProcessingResultsList', params, 'feedId');

    // Create URL to call
    const url = `${this.basePath}/catalogs/feeds/{feed_id}/processing_results`
      .replace(`{${'feed_id'}}`, encodeURIComponent(`${params['feedId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()
      // Set query parameters
      .withParams({ 
        'bookmark': params['bookmark'],
        'page_size': params['pageSize'],
      })

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Create feed
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Create a new feed owned by the \&quot;operating user_account\&quot;.
   * @param params.catalogsFeedsCreateRequest Request object used to created a feed.
   */
  async feedsCreate(params: IFeedsCreateParams): Promise<CatalogsFeed> {
    // Verify required parameters are set
    this.ensureParamIsSet('feedsCreate', params, 'catalogsFeedsCreateRequest');

    // Create URL to call
    const url = `${this.basePath}/catalogs/feeds`;

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asPost()
      // Encode body parameter
      .withHeader('content-type', 'application/json')
      .withContent(JSON.stringify(params['catalogsFeedsCreateRequest'] || {}))

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Delete feed
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Delete a feed owned by the \&quot;operating user_account\&quot;.
   * @param params.feedId Unique identifier of a feed
   */
  async feedsDelete(params: IFeedsDeleteParams): Promise<any> {
    // Verify required parameters are set
    this.ensureParamIsSet('feedsDelete', params, 'feedId');

    // Create URL to call
    const url = `${this.basePath}/catalogs/feeds/{feed_id}`
      .replace(`{${'feed_id'}}`, encodeURIComponent(`${params['feedId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asDelete()

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Get feed
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get a single feed owned by the \&quot;operating user_account\&quot;.
   * @param params.feedId Unique identifier of a feed
   */
  async feedsGet(params: IFeedsGetParams): Promise<CatalogsFeed> {
    // Verify required parameters are set
    this.ensureParamIsSet('feedsGet', params, 'feedId');

    // Create URL to call
    const url = `${this.basePath}/catalogs/feeds/{feed_id}`
      .replace(`{${'feed_id'}}`, encodeURIComponent(`${params['feedId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * List feeds
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Fetch feeds owned by the \&quot;operating user_account\&quot;.
   * @param params.bookmark Cursor used to fetch the next page of items
   * @param params.pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information.
   */
  async feedsList(params: IFeedsListParams): Promise<Paginated & object> {
    // Verify required parameters are set

    // Create URL to call
    const url = `${this.basePath}/catalogs/feeds`;

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()
      // Set query parameters
      .withParams({ 
        'bookmark': params['bookmark'],
        'page_size': params['pageSize'],
      })

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Update feed
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Update a feed owned by the \&quot;operating user_account\&quot;.
   * @param params.feedId Unique identifier of a feed
   * @param params.catalogsFeedsUpdateRequest Request object used to update a feed.
   */
  async feedsUpdate(params: IFeedsUpdateParams): Promise<CatalogsFeed> {
    // Verify required parameters are set
    this.ensureParamIsSet('feedsUpdate', params, 'feedId');
    this.ensureParamIsSet('feedsUpdate', params, 'catalogsFeedsUpdateRequest');

    // Create URL to call
    const url = `${this.basePath}/catalogs/feeds/{feed_id}`
      .replace(`{${'feed_id'}}`, encodeURIComponent(`${params['feedId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asPatch()
      // Encode body parameter
      .withHeader('content-type', 'application/json')
      .withContent(JSON.stringify(params['catalogsFeedsUpdateRequest'] || {}))

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Get catalogs items batch
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get a single catalogs items batch created by the \&quot;operating user_account\&quot;.
   * @param params.batchId Id of a catalogs items batch to fetch
   */
  async itemsBatchGet(params: IItemsBatchGetParams): Promise<CatalogsItemsBatch> {
    // Verify required parameters are set
    this.ensureParamIsSet('itemsBatchGet', params, 'batchId');

    // Create URL to call
    const url = `${this.basePath}/catalogs/items/batch/{batch_id}`
      .replace(`{${'batch_id'}}`, encodeURIComponent(`${params['batchId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Perform an operation on an item batch
   * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Understanding-catalog-management\&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  This endpoint supports multiple operations on a set of one or more catalog items.
   * @param params.catalogsItemsBatchRequest Request object used to create catalogs items in a batch
   */
  async itemsBatchPost(params: IItemsBatchPostParams): Promise<CatalogsItemsBatch> {
    // Verify required parameters are set
    this.ensureParamIsSet('itemsBatchPost', params, 'catalogsItemsBatchRequest');

    // Create URL to call
    const url = `${this.basePath}/catalogs/items/batch`;

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asPost()
      // Encode body parameter
      .withHeader('content-type', 'application/json')
      .withContent(JSON.stringify(params['catalogsItemsBatchRequest'] || {}))

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Get catalogs items
   * Get the items of the catalog created by the \&quot;operating user_account\&quot;
   * @param params.country Country for the Catalogs Items
   * @param params.itemIds Catalos Item ids
   * @param params.language Language for the Catalogs Items
   */
  async itemsGet(params: IItemsGetParams): Promise<CatalogsItems> {
    // Verify required parameters are set
    this.ensureParamIsSet('itemsGet', params, 'country');
    this.ensureParamIsSet('itemsGet', params, 'itemIds');
    this.ensureParamIsSet('itemsGet', params, 'language');

    // Create URL to call
    const url = `${this.basePath}/catalogs/items`;

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()
      // Set query parameters
      .withParams({ 
        'country': params['country'],
        'item_ids': params['itemIds'],
        'language': params['language'],
      })

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

}

