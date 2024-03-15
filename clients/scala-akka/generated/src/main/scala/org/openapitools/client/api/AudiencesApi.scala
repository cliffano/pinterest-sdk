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
package org.openapitools.client.api

import org.openapitools.client.model.Audience
import org.openapitools.client.model.AudienceCreateCustomRequest
import org.openapitools.client.model.AudienceCreateRequest
import org.openapitools.client.model.AudienceUpdateRequest
import org.openapitools.client.model.AudiencesList200Response
import org.openapitools.client.model.Error
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

object AudiencesApi {

  def apply(baseUrl: String = "https://api.pinterest.com/v5") = new AudiencesApi(baseUrl)
}

class AudiencesApi(baseUrl: String) {

  /**
   * Create an audience you can use in targeting for specific ad groups. Targeting combines customer information with the ways users interact with Pinterest to help you reach specific groups of users; you can include or exclude specific audience_ids when you create an ad group. <p/> For more, see <a class=\"reference external\" href=\"https://help.pinterest.com/en/business/article/audience-targeting\" target=\"_blank\">Audience targeting</a>.
   * 
   * Expected answers:
   *   code 200 : Audience (Success)
   *   code 0 : Error (Unexpected error)
   * 
   * @param adAccountId Unique identifier of an ad account.
   * @param audienceCreateRequest List of ads to create, size limit [1, 30]
   */
  def audiencesCreate(adAccountId: String, audienceCreateRequest: AudienceCreateRequest): ApiRequest[Audience] =
    ApiRequest[Audience](ApiMethods.POST, baseUrl, "/ad_accounts/{ad_account_id}/audiences", "application/json")
      .withBody(audienceCreateRequest)
      .withPathParam("ad_account_id", adAccountId)
      .withSuccessResponse[Audience](200)
      .withDefaultErrorResponse[Error]
      

  /**
   * Create a custom audience and find the audiences you want your ads to reach.
   * 
   * Expected answers:
   *   code 200 : Audience (Success)
   *   code 0 : Error (Unexpected error)
   * 
   * @param adAccountId Unique identifier of an ad account.
   * @param audienceCreateCustomRequest Custom audience to create.
   */
  def audiencesCreateCustom(adAccountId: String, audienceCreateCustomRequest: AudienceCreateCustomRequest): ApiRequest[Audience] =
    ApiRequest[Audience](ApiMethods.POST, baseUrl, "/ad_accounts/{ad_account_id}/audiences/custom", "application/json")
      .withBody(audienceCreateCustomRequest)
      .withPathParam("ad_account_id", adAccountId)
      .withSuccessResponse[Audience](200)
      .withDefaultErrorResponse[Error]
      

  /**
   * Get a specific audience given the audience ID.
   * 
   * Expected answers:
   *   code 200 : Audience (Success)
   *   code 404 : Error (Audience not found.)
   *   code 0 : Error (Unexpected error.)
   * 
   * @param adAccountId Unique identifier of an ad account.
   * @param audienceId Unique identifier of an audience
   */
  def audiencesGet(adAccountId: String, audienceId: String): ApiRequest[Audience] =
    ApiRequest[Audience](ApiMethods.GET, baseUrl, "/ad_accounts/{ad_account_id}/audiences/{audience_id}", "application/json")
      .withPathParam("ad_account_id", adAccountId)
      .withPathParam("audience_id", audienceId)
      .withSuccessResponse[Audience](200)
      .withErrorResponse[Error](404)
      .withDefaultErrorResponse[Error]
      

  /**
   * Get list of audiences for the ad account.
   * 
   * Expected answers:
   *   code 200 : AudiencesList200Response (Success)
   *   code 400 : Error (Invalid ad account audience parameters.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param adAccountId Unique identifier of an ad account.
   * @param bookmark Cursor used to fetch the next page of items
   * @param order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. For received audiences, it is sorted by sharing event time. Note that higher-value IDs are associated with more-recently added items.
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.
   * @param ownershipType <strong>This feature is currently in beta and not available to all apps.</strong> Filter audiences by ownership type.
   */
  def audiencesList(adAccountId: String, bookmark: Option[String] = None, order: Option[String] = None, pageSize: Option[Int] = None, ownershipType: Option[String] = None): ApiRequest[AudiencesList200Response] =
    ApiRequest[AudiencesList200Response](ApiMethods.GET, baseUrl, "/ad_accounts/{ad_account_id}/audiences", "application/json")
      .withQueryParam("bookmark", bookmark)
      .withQueryParam("order", order)
      .withQueryParam("page_size", pageSize)
      .withQueryParam("ownership_type", ownershipType)
      .withPathParam("ad_account_id", adAccountId)
      .withSuccessResponse[AudiencesList200Response](200)
      .withErrorResponse[Error](400)
      .withDefaultErrorResponse[Error]
      

  /**
   * Update (edit or remove) an existing targeting audience.
   * 
   * Expected answers:
   *   code 200 : Audience (Success)
   *   code 0 : Error (Unexpected error)
   * 
   * @param adAccountId Unique identifier of an ad account.
   * @param audienceId Unique identifier of an audience
   * @param audienceUpdateRequest The audience to be updated.
   */
  def audiencesUpdate(adAccountId: String, audienceId: String, audienceUpdateRequest: Option[AudienceUpdateRequest] = None): ApiRequest[Audience] =
    ApiRequest[Audience](ApiMethods.PATCH, baseUrl, "/ad_accounts/{ad_account_id}/audiences/{audience_id}", "application/json")
      .withBody(audienceUpdateRequest)
      .withPathParam("ad_account_id", adAccountId)
      .withPathParam("audience_id", audienceId)
      .withSuccessResponse[Audience](200)
      .withDefaultErrorResponse[Error]
      



}

