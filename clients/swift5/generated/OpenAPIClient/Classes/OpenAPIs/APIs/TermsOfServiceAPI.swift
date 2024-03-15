//
// TermsOfServiceAPI.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

open class TermsOfServiceAPI {

    /**
     Get terms of service
     
     - parameter adAccountId: (path) Unique identifier of an ad account. 
     - parameter includeHtml: (query) Return HTML in TOS text. (optional, default to false)
     - parameter tosType: (query) Request type. (optional)
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @discardableResult
    open class func termsOfServiceGet(adAccountId: String, includeHtml: Bool? = nil, tosType: String? = nil, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: TermsOfService?, _ error: Error?) -> Void)) -> RequestTask {
        return termsOfServiceGetWithRequestBuilder(adAccountId: adAccountId, includeHtml: includeHtml, tosType: tosType).execute(apiResponseQueue) { result in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Get terms of service
     - GET /ad_accounts/{ad_account_id}/terms_of_service
     - Get the text of the terms of service and see whether the advertiser has accepted the terms of service.
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - parameter adAccountId: (path) Unique identifier of an ad account. 
     - parameter includeHtml: (query) Return HTML in TOS text. (optional, default to false)
     - parameter tosType: (query) Request type. (optional)
     - returns: RequestBuilder<TermsOfService> 
     */
    open class func termsOfServiceGetWithRequestBuilder(adAccountId: String, includeHtml: Bool? = nil, tosType: String? = nil) -> RequestBuilder<TermsOfService> {
        var localVariablePath = "/ad_accounts/{ad_account_id}/terms_of_service"
        let adAccountIdPreEscape = "\(APIHelper.mapValueToPathItem(adAccountId))"
        let adAccountIdPostEscape = adAccountIdPreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        localVariablePath = localVariablePath.replacingOccurrences(of: "{ad_account_id}", with: adAccountIdPostEscape, options: .literal, range: nil)
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters: [String: Any]? = nil

        var localVariableUrlComponents = URLComponents(string: localVariableURLString)
        localVariableUrlComponents?.queryItems = APIHelper.mapValuesToQueryItems([
            "include_html": (wrappedValue: includeHtml?.encodeToJSON(), isExplode: true),
            "tos_type": (wrappedValue: tosType?.encodeToJSON(), isExplode: true),
        ])

        let localVariableNillableHeaders: [String: Any?] = [
            :
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<TermsOfService>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return localVariableRequestBuilder.init(method: "GET", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters, requiresAuthentication: true)
    }
}