//
// ProductGroupsAPI.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

open class ProductGroupsAPI {

    /**
     Get catalog product groups
     
     - parameter adAccountId: (path) Unique identifier of an ad account. 
     - parameter feedProfileId: (query) The feed profile id whose catalog product groups we want to return. (optional)
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @available(*, deprecated, message: "This operation is deprecated.")
    @discardableResult
    open class func adAccountsCatalogsProductGroupsList(adAccountId: String, feedProfileId: String? = nil, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: AdAccountsCatalogsProductGroupsList200Response?, _ error: Error?) -> Void)) -> RequestTask {
        return adAccountsCatalogsProductGroupsListWithRequestBuilder(adAccountId: adAccountId, feedProfileId: feedProfileId).execute(apiResponseQueue) { result in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Get catalog product groups
     - GET /ad_accounts/{ad_account_id}/product_groups/catalogs
     - This endpoint is completely deprecated. Please use <a href='/docs/api/v5/#operation/catalogs_product_groups/list'>List product groups</a> from Catalogs API instead.
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - parameter adAccountId: (path) Unique identifier of an ad account. 
     - parameter feedProfileId: (query) The feed profile id whose catalog product groups we want to return. (optional)
     - returns: RequestBuilder<AdAccountsCatalogsProductGroupsList200Response> 
     */
    @available(*, deprecated, message: "This operation is deprecated.")
    open class func adAccountsCatalogsProductGroupsListWithRequestBuilder(adAccountId: String, feedProfileId: String? = nil) -> RequestBuilder<AdAccountsCatalogsProductGroupsList200Response> {
        var localVariablePath = "/ad_accounts/{ad_account_id}/product_groups/catalogs"
        let adAccountIdPreEscape = "\(APIHelper.mapValueToPathItem(adAccountId))"
        let adAccountIdPostEscape = adAccountIdPreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        localVariablePath = localVariablePath.replacingOccurrences(of: "{ad_account_id}", with: adAccountIdPostEscape, options: .literal, range: nil)
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters: [String: Any]? = nil

        var localVariableUrlComponents = URLComponents(string: localVariableURLString)
        localVariableUrlComponents?.queryItems = APIHelper.mapValuesToQueryItems([
            "feed_profile_id": (wrappedValue: feedProfileId?.encodeToJSON(), isExplode: true),
        ])

        let localVariableNillableHeaders: [String: Any?] = [
            :
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<AdAccountsCatalogsProductGroupsList200Response>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return localVariableRequestBuilder.init(method: "GET", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters, requiresAuthentication: true)
    }
}
