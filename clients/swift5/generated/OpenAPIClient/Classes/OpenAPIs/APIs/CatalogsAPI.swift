//
// CatalogsAPI.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

open class CatalogsAPI {

    /**
     Create product group
     
     - parameter catalogsProductGroupCreateRequest: (body) Request object used to created a catalogs product group. 
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @discardableResult
    open class func catalogsProductGroupsCreate(catalogsProductGroupCreateRequest: CatalogsProductGroupCreateRequest, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: AnyCodable?, _ error: Error?) -> Void)) -> RequestTask {
        return catalogsProductGroupsCreateWithRequestBuilder(catalogsProductGroupCreateRequest: catalogsProductGroupCreateRequest).execute(apiResponseQueue) { result in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Create product group
     - POST /catalogs/product_groups
     - <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Create product group to use in Catalogs.
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - parameter catalogsProductGroupCreateRequest: (body) Request object used to created a catalogs product group. 
     - returns: RequestBuilder<AnyCodable> 
     */
    open class func catalogsProductGroupsCreateWithRequestBuilder(catalogsProductGroupCreateRequest: CatalogsProductGroupCreateRequest) -> RequestBuilder<AnyCodable> {
        let localVariablePath = "/catalogs/product_groups"
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters = JSONEncodingHelper.encodingParameters(forEncodableObject: catalogsProductGroupCreateRequest)

        let localVariableUrlComponents = URLComponents(string: localVariableURLString)

        let localVariableNillableHeaders: [String: Any?] = [
            :
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<AnyCodable>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return localVariableRequestBuilder.init(method: "POST", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters)
    }

    /**
     Delete product group
     
     - parameter productGroupId: (path) Unique identifier of a product group 
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @discardableResult
    open class func catalogsProductGroupsDelete(productGroupId: String, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: Void?, _ error: Error?) -> Void)) -> RequestTask {
        return catalogsProductGroupsDeleteWithRequestBuilder(productGroupId: productGroupId).execute(apiResponseQueue) { result in
            switch result {
            case .success:
                completion((), nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Delete product group
     - DELETE /catalogs/product_groups/{product_group_id}
     - <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Delete a product group from being in use in Catalogs.
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - parameter productGroupId: (path) Unique identifier of a product group 
     - returns: RequestBuilder<Void> 
     */
    open class func catalogsProductGroupsDeleteWithRequestBuilder(productGroupId: String) -> RequestBuilder<Void> {
        var localVariablePath = "/catalogs/product_groups/{product_group_id}"
        let productGroupIdPreEscape = "\(APIHelper.mapValueToPathItem(productGroupId))"
        let productGroupIdPostEscape = productGroupIdPreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        localVariablePath = localVariablePath.replacingOccurrences(of: "{product_group_id}", with: productGroupIdPostEscape, options: .literal, range: nil)
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters: [String: Any]? = nil

        let localVariableUrlComponents = URLComponents(string: localVariableURLString)

        let localVariableNillableHeaders: [String: Any?] = [
            :
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<Void>.Type = OpenAPIClientAPI.requestBuilderFactory.getNonDecodableBuilder()

        return localVariableRequestBuilder.init(method: "DELETE", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters)
    }

    /**
     Get product groups list
     
     - parameter feedId: (query) Unique identifier of a feed 
     - parameter bookmark: (query) Cursor used to fetch the next page of items (optional)
     - parameter pageSize: (query) Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @discardableResult
    open class func catalogsProductGroupsList(feedId: String, bookmark: String? = nil, pageSize: Int? = nil, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: Paginated?, _ error: Error?) -> Void)) -> RequestTask {
        return catalogsProductGroupsListWithRequestBuilder(feedId: feedId, bookmark: bookmark, pageSize: pageSize).execute(apiResponseQueue) { result in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Get product groups list
     - GET /catalogs/product_groups
     - <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Get a list of product groups for a given Catalogs Feed Id.
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - parameter feedId: (query) Unique identifier of a feed 
     - parameter bookmark: (query) Cursor used to fetch the next page of items (optional)
     - parameter pageSize: (query) Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     - returns: RequestBuilder<Paginated> 
     */
    open class func catalogsProductGroupsListWithRequestBuilder(feedId: String, bookmark: String? = nil, pageSize: Int? = nil) -> RequestBuilder<Paginated> {
        let localVariablePath = "/catalogs/product_groups"
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters: [String: Any]? = nil

        var localVariableUrlComponents = URLComponents(string: localVariableURLString)
        localVariableUrlComponents?.queryItems = APIHelper.mapValuesToQueryItems([
            "feed_id": feedId.encodeToJSON(),
            "bookmark": bookmark?.encodeToJSON(),
            "page_size": pageSize?.encodeToJSON(),
        ])

        let localVariableNillableHeaders: [String: Any?] = [
            :
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<Paginated>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return localVariableRequestBuilder.init(method: "GET", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters)
    }

    /**
     Update product group
     
     - parameter productGroupId: (path) Unique identifier of a product group 
     - parameter catalogsProductGroupUpdateRequest: (body) Request object used to Update a catalogs product group. 
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @discardableResult
    open class func catalogsProductGroupsUpdate(productGroupId: String, catalogsProductGroupUpdateRequest: CatalogsProductGroupUpdateRequest, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: CatalogsProductGroup?, _ error: Error?) -> Void)) -> RequestTask {
        return catalogsProductGroupsUpdateWithRequestBuilder(productGroupId: productGroupId, catalogsProductGroupUpdateRequest: catalogsProductGroupUpdateRequest).execute(apiResponseQueue) { result in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Update product group
     - PATCH /catalogs/product_groups/{product_group_id}
     - <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Update product group to use in Catalogs.
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - parameter productGroupId: (path) Unique identifier of a product group 
     - parameter catalogsProductGroupUpdateRequest: (body) Request object used to Update a catalogs product group. 
     - returns: RequestBuilder<CatalogsProductGroup> 
     */
    open class func catalogsProductGroupsUpdateWithRequestBuilder(productGroupId: String, catalogsProductGroupUpdateRequest: CatalogsProductGroupUpdateRequest) -> RequestBuilder<CatalogsProductGroup> {
        var localVariablePath = "/catalogs/product_groups/{product_group_id}"
        let productGroupIdPreEscape = "\(APIHelper.mapValueToPathItem(productGroupId))"
        let productGroupIdPostEscape = productGroupIdPreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        localVariablePath = localVariablePath.replacingOccurrences(of: "{product_group_id}", with: productGroupIdPostEscape, options: .literal, range: nil)
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters = JSONEncodingHelper.encodingParameters(forEncodableObject: catalogsProductGroupUpdateRequest)

        let localVariableUrlComponents = URLComponents(string: localVariableURLString)

        let localVariableNillableHeaders: [String: Any?] = [
            :
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<CatalogsProductGroup>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return localVariableRequestBuilder.init(method: "PATCH", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters)
    }

    /**
     List processing results for a given feed
     
     - parameter feedId: (path) Unique identifier of a feed 
     - parameter bookmark: (query) Cursor used to fetch the next page of items (optional)
     - parameter pageSize: (query) Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @discardableResult
    open class func feedProcessingResultsList(feedId: String, bookmark: String? = nil, pageSize: Int? = nil, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: Paginated?, _ error: Error?) -> Void)) -> RequestTask {
        return feedProcessingResultsListWithRequestBuilder(feedId: feedId, bookmark: bookmark, pageSize: pageSize).execute(apiResponseQueue) { result in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     List processing results for a given feed
     - GET /catalogs/feeds/{feed_id}/processing_results
     - <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Fetch a feed processing results owned by the owner user account.
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - parameter feedId: (path) Unique identifier of a feed 
     - parameter bookmark: (query) Cursor used to fetch the next page of items (optional)
     - parameter pageSize: (query) Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     - returns: RequestBuilder<Paginated> 
     */
    open class func feedProcessingResultsListWithRequestBuilder(feedId: String, bookmark: String? = nil, pageSize: Int? = nil) -> RequestBuilder<Paginated> {
        var localVariablePath = "/catalogs/feeds/{feed_id}/processing_results"
        let feedIdPreEscape = "\(APIHelper.mapValueToPathItem(feedId))"
        let feedIdPostEscape = feedIdPreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        localVariablePath = localVariablePath.replacingOccurrences(of: "{feed_id}", with: feedIdPostEscape, options: .literal, range: nil)
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters: [String: Any]? = nil

        var localVariableUrlComponents = URLComponents(string: localVariableURLString)
        localVariableUrlComponents?.queryItems = APIHelper.mapValuesToQueryItems([
            "bookmark": bookmark?.encodeToJSON(),
            "page_size": pageSize?.encodeToJSON(),
        ])

        let localVariableNillableHeaders: [String: Any?] = [
            :
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<Paginated>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return localVariableRequestBuilder.init(method: "GET", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters)
    }

    /**
     Create feed
     
     - parameter catalogsFeedsCreateRequest: (body) Request object used to created a feed. 
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @discardableResult
    open class func feedsCreate(catalogsFeedsCreateRequest: CatalogsFeedsCreateRequest, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: CatalogsFeed?, _ error: Error?) -> Void)) -> RequestTask {
        return feedsCreateWithRequestBuilder(catalogsFeedsCreateRequest: catalogsFeedsCreateRequest).execute(apiResponseQueue) { result in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Create feed
     - POST /catalogs/feeds
     - <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Create a new feed owned by the \"operating user_account\".
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - parameter catalogsFeedsCreateRequest: (body) Request object used to created a feed. 
     - returns: RequestBuilder<CatalogsFeed> 
     */
    open class func feedsCreateWithRequestBuilder(catalogsFeedsCreateRequest: CatalogsFeedsCreateRequest) -> RequestBuilder<CatalogsFeed> {
        let localVariablePath = "/catalogs/feeds"
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters = JSONEncodingHelper.encodingParameters(forEncodableObject: catalogsFeedsCreateRequest)

        let localVariableUrlComponents = URLComponents(string: localVariableURLString)

        let localVariableNillableHeaders: [String: Any?] = [
            :
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<CatalogsFeed>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return localVariableRequestBuilder.init(method: "POST", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters)
    }

    /**
     Delete feed
     
     - parameter feedId: (path) Unique identifier of a feed 
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @discardableResult
    open class func feedsDelete(feedId: String, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: Void?, _ error: Error?) -> Void)) -> RequestTask {
        return feedsDeleteWithRequestBuilder(feedId: feedId).execute(apiResponseQueue) { result in
            switch result {
            case .success:
                completion((), nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Delete feed
     - DELETE /catalogs/feeds/{feed_id}
     - <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Delete a feed owned by the \"operating user_account\".
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - parameter feedId: (path) Unique identifier of a feed 
     - returns: RequestBuilder<Void> 
     */
    open class func feedsDeleteWithRequestBuilder(feedId: String) -> RequestBuilder<Void> {
        var localVariablePath = "/catalogs/feeds/{feed_id}"
        let feedIdPreEscape = "\(APIHelper.mapValueToPathItem(feedId))"
        let feedIdPostEscape = feedIdPreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        localVariablePath = localVariablePath.replacingOccurrences(of: "{feed_id}", with: feedIdPostEscape, options: .literal, range: nil)
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters: [String: Any]? = nil

        let localVariableUrlComponents = URLComponents(string: localVariableURLString)

        let localVariableNillableHeaders: [String: Any?] = [
            :
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<Void>.Type = OpenAPIClientAPI.requestBuilderFactory.getNonDecodableBuilder()

        return localVariableRequestBuilder.init(method: "DELETE", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters)
    }

    /**
     Get feed
     
     - parameter feedId: (path) Unique identifier of a feed 
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @discardableResult
    open class func feedsGet(feedId: String, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: CatalogsFeed?, _ error: Error?) -> Void)) -> RequestTask {
        return feedsGetWithRequestBuilder(feedId: feedId).execute(apiResponseQueue) { result in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Get feed
     - GET /catalogs/feeds/{feed_id}
     - <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Get a single feed owned by the \"operating user_account\".
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - parameter feedId: (path) Unique identifier of a feed 
     - returns: RequestBuilder<CatalogsFeed> 
     */
    open class func feedsGetWithRequestBuilder(feedId: String) -> RequestBuilder<CatalogsFeed> {
        var localVariablePath = "/catalogs/feeds/{feed_id}"
        let feedIdPreEscape = "\(APIHelper.mapValueToPathItem(feedId))"
        let feedIdPostEscape = feedIdPreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        localVariablePath = localVariablePath.replacingOccurrences(of: "{feed_id}", with: feedIdPostEscape, options: .literal, range: nil)
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters: [String: Any]? = nil

        let localVariableUrlComponents = URLComponents(string: localVariableURLString)

        let localVariableNillableHeaders: [String: Any?] = [
            :
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<CatalogsFeed>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return localVariableRequestBuilder.init(method: "GET", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters)
    }

    /**
     List feeds
     
     - parameter bookmark: (query) Cursor used to fetch the next page of items (optional)
     - parameter pageSize: (query) Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @discardableResult
    open class func feedsList(bookmark: String? = nil, pageSize: Int? = nil, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: Paginated?, _ error: Error?) -> Void)) -> RequestTask {
        return feedsListWithRequestBuilder(bookmark: bookmark, pageSize: pageSize).execute(apiResponseQueue) { result in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     List feeds
     - GET /catalogs/feeds
     - <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Fetch feeds owned by the \"operating user_account\".
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - parameter bookmark: (query) Cursor used to fetch the next page of items (optional)
     - parameter pageSize: (query) Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     - returns: RequestBuilder<Paginated> 
     */
    open class func feedsListWithRequestBuilder(bookmark: String? = nil, pageSize: Int? = nil) -> RequestBuilder<Paginated> {
        let localVariablePath = "/catalogs/feeds"
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters: [String: Any]? = nil

        var localVariableUrlComponents = URLComponents(string: localVariableURLString)
        localVariableUrlComponents?.queryItems = APIHelper.mapValuesToQueryItems([
            "bookmark": bookmark?.encodeToJSON(),
            "page_size": pageSize?.encodeToJSON(),
        ])

        let localVariableNillableHeaders: [String: Any?] = [
            :
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<Paginated>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return localVariableRequestBuilder.init(method: "GET", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters)
    }

    /**
     Update feed
     
     - parameter feedId: (path) Unique identifier of a feed 
     - parameter catalogsFeedsUpdateRequest: (body) Request object used to update a feed. 
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @discardableResult
    open class func feedsUpdate(feedId: String, catalogsFeedsUpdateRequest: CatalogsFeedsUpdateRequest, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: CatalogsFeed?, _ error: Error?) -> Void)) -> RequestTask {
        return feedsUpdateWithRequestBuilder(feedId: feedId, catalogsFeedsUpdateRequest: catalogsFeedsUpdateRequest).execute(apiResponseQueue) { result in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Update feed
     - PATCH /catalogs/feeds/{feed_id}
     - <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Update a feed owned by the \"operating user_account\".
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - parameter feedId: (path) Unique identifier of a feed 
     - parameter catalogsFeedsUpdateRequest: (body) Request object used to update a feed. 
     - returns: RequestBuilder<CatalogsFeed> 
     */
    open class func feedsUpdateWithRequestBuilder(feedId: String, catalogsFeedsUpdateRequest: CatalogsFeedsUpdateRequest) -> RequestBuilder<CatalogsFeed> {
        var localVariablePath = "/catalogs/feeds/{feed_id}"
        let feedIdPreEscape = "\(APIHelper.mapValueToPathItem(feedId))"
        let feedIdPostEscape = feedIdPreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        localVariablePath = localVariablePath.replacingOccurrences(of: "{feed_id}", with: feedIdPostEscape, options: .literal, range: nil)
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters = JSONEncodingHelper.encodingParameters(forEncodableObject: catalogsFeedsUpdateRequest)

        let localVariableUrlComponents = URLComponents(string: localVariableURLString)

        let localVariableNillableHeaders: [String: Any?] = [
            :
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<CatalogsFeed>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return localVariableRequestBuilder.init(method: "PATCH", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters)
    }

    /**
     Get catalogs items batch
     
     - parameter batchId: (path) Id of a catalogs items batch to fetch 
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @discardableResult
    open class func itemsBatchGet(batchId: String, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: CatalogsItemsBatch?, _ error: Error?) -> Void)) -> RequestTask {
        return itemsBatchGetWithRequestBuilder(batchId: batchId).execute(apiResponseQueue) { result in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Get catalogs items batch
     - GET /catalogs/items/batch/{batch_id}
     - <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Get a single catalogs items batch created by the \"operating user_account\".
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - parameter batchId: (path) Id of a catalogs items batch to fetch 
     - returns: RequestBuilder<CatalogsItemsBatch> 
     */
    open class func itemsBatchGetWithRequestBuilder(batchId: String) -> RequestBuilder<CatalogsItemsBatch> {
        var localVariablePath = "/catalogs/items/batch/{batch_id}"
        let batchIdPreEscape = "\(APIHelper.mapValueToPathItem(batchId))"
        let batchIdPostEscape = batchIdPreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        localVariablePath = localVariablePath.replacingOccurrences(of: "{batch_id}", with: batchIdPostEscape, options: .literal, range: nil)
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters: [String: Any]? = nil

        let localVariableUrlComponents = URLComponents(string: localVariableURLString)

        let localVariableNillableHeaders: [String: Any?] = [
            :
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<CatalogsItemsBatch>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return localVariableRequestBuilder.init(method: "GET", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters)
    }

    /**
     Perform an operation on an item batch
     
     - parameter catalogsItemsBatchRequest: (body) Request object used to create catalogs items in a batch 
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @discardableResult
    open class func itemsBatchPost(catalogsItemsBatchRequest: CatalogsItemsBatchRequest, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: CatalogsItemsBatch?, _ error: Error?) -> Void)) -> RequestTask {
        return itemsBatchPostWithRequestBuilder(catalogsItemsBatchRequest: catalogsItemsBatchRequest).execute(apiResponseQueue) { result in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Perform an operation on an item batch
     - POST /catalogs/items/batch
     - <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  This endpoint supports multiple operations on a set of one or more catalog items.
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - parameter catalogsItemsBatchRequest: (body) Request object used to create catalogs items in a batch 
     - returns: RequestBuilder<CatalogsItemsBatch> 
     */
    open class func itemsBatchPostWithRequestBuilder(catalogsItemsBatchRequest: CatalogsItemsBatchRequest) -> RequestBuilder<CatalogsItemsBatch> {
        let localVariablePath = "/catalogs/items/batch"
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters = JSONEncodingHelper.encodingParameters(forEncodableObject: catalogsItemsBatchRequest)

        let localVariableUrlComponents = URLComponents(string: localVariableURLString)

        let localVariableNillableHeaders: [String: Any?] = [
            :
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<CatalogsItemsBatch>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return localVariableRequestBuilder.init(method: "POST", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters)
    }

    /**
     Get catalogs items
     
     - parameter country: (query) Country for the Catalogs Items 
     - parameter itemIds: (query) Catalos Item ids 
     - parameter language: (query) Language for the Catalogs Items 
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @discardableResult
    open class func itemsGet(country: String, itemIds: [String], language: String, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: CatalogsItems?, _ error: Error?) -> Void)) -> RequestTask {
        return itemsGetWithRequestBuilder(country: country, itemIds: itemIds, language: language).execute(apiResponseQueue) { result in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Get catalogs items
     - GET /catalogs/items
     - Get the items of the catalog created by the \"operating user_account\"
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - parameter country: (query) Country for the Catalogs Items 
     - parameter itemIds: (query) Catalos Item ids 
     - parameter language: (query) Language for the Catalogs Items 
     - returns: RequestBuilder<CatalogsItems> 
     */
    open class func itemsGetWithRequestBuilder(country: String, itemIds: [String], language: String) -> RequestBuilder<CatalogsItems> {
        let localVariablePath = "/catalogs/items"
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters: [String: Any]? = nil

        var localVariableUrlComponents = URLComponents(string: localVariableURLString)
        localVariableUrlComponents?.queryItems = APIHelper.mapValuesToQueryItems([
            "country": country.encodeToJSON(),
            "item_ids": itemIds.encodeToJSON(),
            "language": language.encodeToJSON(),
        ])

        let localVariableNillableHeaders: [String: Any?] = [
            :
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<CatalogsItems>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return localVariableRequestBuilder.init(method: "GET", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters)
    }
}
