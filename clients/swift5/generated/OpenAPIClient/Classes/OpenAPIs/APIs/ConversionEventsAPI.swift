//
// ConversionEventsAPI.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

open class ConversionEventsAPI {

    /**
     Send conversions
     
     - parameter adAccountId: (path) Unique identifier of an ad account. 
     - parameter conversionEvents: (body) Conversion events. 
     - parameter test: (query) Include query param ?test&#x3D;true to mark the request as a test request. The events will not be recorded but the API will still return the same response messages. Use this mode to verify your requests are working and your events are constructed correctly. Warning: If you use this query parameter, be certain that it is off (set to false or deleted) before sending a legitimate (non-testing) request. (optional)
     - parameter apiResponseQueue: The queue on which api response is dispatched.
     - parameter completion: completion handler to receive the data and the error objects
     */
    @discardableResult
    open class func eventsCreate(adAccountId: String, conversionEvents: ConversionEvents, test: Bool? = nil, apiResponseQueue: DispatchQueue = OpenAPIClientAPI.apiResponseQueue, completion: @escaping ((_ data: ConversionApiResponse?, _ error: Error?) -> Void)) -> RequestTask {
        return eventsCreateWithRequestBuilder(adAccountId: adAccountId, conversionEvents: conversionEvents, test: test).execute(apiResponseQueue) { result in
            switch result {
            case let .success(response):
                completion(response.body, nil)
            case let .failure(error):
                completion(nil, error)
            }
        }
    }

    /**
     Send conversions
     - POST /ad_accounts/{ad_account_id}/events
     - The Pinterest API offers advertisers a way to send Pinterest their conversion information (including web conversions, in-app conversions, or even offline conversions) based on their <code>ad_account_id</code>. The request body should be a JSON object. - This endpoint requires an <code>access_token</code> be generated through Ads Manager. Review the <a href=\"/docs/conversions/conversions/\">Conversions Guide</a> for more details. - The token's <code>user_account</code> must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Audience, Campaign. (Note that the token can be used across multiple ad accounts under an user ID.) - This endpoint has a rate limit of 5,000 calls per minute per ad account. - If the merchant is submitting this information using both Pinterest conversion tags and the Pinterest API, Pinterest will remove duplicate information before reporting. (Note that events that took place offline cannot be deduplicated.)
     - OAuth:
       - type: oauth2
       - name: pinterest_oauth2
     - Bearer Token:
       - type: http
       - name: conversion_token
     - parameter adAccountId: (path) Unique identifier of an ad account. 
     - parameter conversionEvents: (body) Conversion events. 
     - parameter test: (query) Include query param ?test&#x3D;true to mark the request as a test request. The events will not be recorded but the API will still return the same response messages. Use this mode to verify your requests are working and your events are constructed correctly. Warning: If you use this query parameter, be certain that it is off (set to false or deleted) before sending a legitimate (non-testing) request. (optional)
     - returns: RequestBuilder<ConversionApiResponse> 
     */
    open class func eventsCreateWithRequestBuilder(adAccountId: String, conversionEvents: ConversionEvents, test: Bool? = nil) -> RequestBuilder<ConversionApiResponse> {
        var localVariablePath = "/ad_accounts/{ad_account_id}/events"
        let adAccountIdPreEscape = "\(APIHelper.mapValueToPathItem(adAccountId))"
        let adAccountIdPostEscape = adAccountIdPreEscape.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed) ?? ""
        localVariablePath = localVariablePath.replacingOccurrences(of: "{ad_account_id}", with: adAccountIdPostEscape, options: .literal, range: nil)
        let localVariableURLString = OpenAPIClientAPI.basePath + localVariablePath
        let localVariableParameters = JSONEncodingHelper.encodingParameters(forEncodableObject: conversionEvents)

        var localVariableUrlComponents = URLComponents(string: localVariableURLString)
        localVariableUrlComponents?.queryItems = APIHelper.mapValuesToQueryItems([
            "test": (wrappedValue: test?.encodeToJSON(), isExplode: true),
        ])

        let localVariableNillableHeaders: [String: Any?] = [
            "Content-Type": "application/json",
        ]

        let localVariableHeaderParameters = APIHelper.rejectNilHeaders(localVariableNillableHeaders)

        let localVariableRequestBuilder: RequestBuilder<ConversionApiResponse>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return localVariableRequestBuilder.init(method: "POST", URLString: (localVariableUrlComponents?.string ?? localVariableURLString), parameters: localVariableParameters, headers: localVariableHeaderParameters, requiresAuthentication: true)
    }
}