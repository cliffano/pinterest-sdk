/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (7.4.0).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package com.prokarma.pkmst.controller;

import com.prokarma.pkmst.model.ConversionEventResponse;
import com.prokarma.pkmst.model.ConversionTagCreate;
import com.prokarma.pkmst.model.ConversionTagListResponse;
import com.prokarma.pkmst.model.ConversionTagResponse;
import com.prokarma.pkmst.model.Error;
import java.util.List;
import java.util.Map;
import com.prokarma.pkmst.model.PageVisitConversionTagsGet200Response;

import io.swagger.annotations.*;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.multipart.MultipartFile;
import java.io.IOException;

import java.util.List;
/**
 * Provides the info about api methods
 * @author pkmst
 *
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPKMSTServerCodegen", date = "2024-03-14T23:02:40.880156196Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Api(value = "ConversionTags", description = "the ConversionTags API")
public interface ConversionTagsApi {

    @ApiOperation(value = "Create conversion tag", notes = "Create a conversion tag, also known as <a href=\"https://help.pinterest.com/en/business/article/set-up-the-pinterest-tag\" target=\"_blank\">Pinterest tag</a>, with the option to enable enhanced match.<p/> The Pinterest Tag tracks actions people take on the ad account’s website after they view the ad account's ad on Pinterest. The advertiser needs to customize this tag to track conversions.<p/> For more information, see:<p/> <a class=\"reference external\" href=\"https://help.pinterest.com/en/business/article/set-up-the-pinterest-tag\">Set up the Pinterest tag</a><p/> <a class=\"reference external\" href=\"https://developers.pinterest.com/docs/conversions/pinterest-tag/\">Pinterest Tag</a><p/> <a class=\"reference external\" href=\"https://developers.pinterest.com/docs/conversions/enhanced-match/\">Enhanced match</a>", response = ConversionTagResponse.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "ads:write", description = "Create, update, or delete ads, ad groups, campaigns etc.") })
         }, tags={ "conversion_tags", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = ConversionTagResponse.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.POST,
        value = "/ad_accounts/{ad_account_id}/conversion_tags",
        produces = { "application/json" },
        consumes = { "application/json" }
    )
    ResponseEntity<ConversionTagResponse> conversionTagsCreate(@ApiParam(value = "Unique identifier of an ad account.",required=true ) @PathVariable("ad_account_id") String adAccountId,@ApiParam(value = "Conversion Tag to create" ,required=true )   @RequestBody ConversionTagCreate conversionTagCreate, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Get conversion tag", notes = "Get information about an existing conversion tag.", response = ConversionTagResponse.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "ads:read", description = "See all of your advertising data, including ads, ad groups, campaigns etc.") })
         }, tags={ "conversion_tags", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = ConversionTagResponse.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/ad_accounts/{ad_account_id}/conversion_tags/{conversion_tag_id}",
        produces = { "application/json" }
    )
    ResponseEntity<ConversionTagResponse> conversionTagsGet(@ApiParam(value = "Unique identifier of an ad account.",required=true ) @PathVariable("ad_account_id") String adAccountId,@ApiParam(value = "Id of the conversion tag.",required=true ) @PathVariable("conversion_tag_id") String conversionTagId, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Get conversion tags", notes = "List conversion tags associated with an ad account.", response = ConversionTagListResponse.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "ads:read", description = "See all of your advertising data, including ads, ad groups, campaigns etc.") })
         }, tags={ "conversion_tags", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = ConversionTagListResponse.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/ad_accounts/{ad_account_id}/conversion_tags",
        produces = { "application/json" }
    )
    ResponseEntity<ConversionTagListResponse> conversionTagsList(@ApiParam(value = "Unique identifier of an ad account.",required=true ) @PathVariable("ad_account_id") String adAccountId,@ApiParam(value = "Filter out deleted tags.", defaultValue = "false")  @RequestParam(value = "filter_deleted", required = false, defaultValue="false") Boolean filterDeleted, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Get Ocpm eligible conversion tags", notes = "Get Ocpm eligible conversion tag events for an ad account.", response = List<ConversionEventResponse>.class, responseContainer = "Map", authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "ads:read", description = "See all of your advertising data, including ads, ad groups, campaigns etc.") })
         }, tags={ "conversion_tags", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = ConversionEventResponse.class, responseContainer = "Map"),
        @ApiResponse(code = 200, message = "Unexpected errors", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/ad_accounts/{ad_account_id}/conversion_tags/ocpm_eligible",
        produces = { "application/json" }
    )
    ResponseEntity<Map<String, List<ConversionEventResponse>>> ocpmEligibleConversionTagsGet(@ApiParam(value = "Unique identifier of an ad account.",required=true ) @PathVariable("ad_account_id") String adAccountId, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Get page visit conversion tags", notes = "Get all page visit conversion tag events for an ad account.", response = PageVisitConversionTagsGet200Response.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "ads:read", description = "See all of your advertising data, including ads, ad groups, campaigns etc.") })
         }, tags={ "conversion_tags", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = PageVisitConversionTagsGet200Response.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/ad_accounts/{ad_account_id}/conversion_tags/page_visit",
        produces = { "application/json" }
    )
    ResponseEntity<PageVisitConversionTagsGet200Response> pageVisitConversionTagsGet(@ApiParam(value = "Unique identifier of an ad account.",required=true ) @PathVariable("ad_account_id") String adAccountId,@ApiParam(value = "Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.", defaultValue = "25")  @RequestParam(value = "page_size", required = false, defaultValue="25") Integer pageSize,@ApiParam(value = "The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items.", allowableValues = "ASCENDING, DESCENDING")  @RequestParam(value = "order", required = false) String order,@ApiParam(value = "Cursor used to fetch the next page of items")  @RequestParam(value = "bookmark", required = false) String bookmark, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;

}
