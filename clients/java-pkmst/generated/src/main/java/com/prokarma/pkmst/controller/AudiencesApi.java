/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (7.4.0).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package com.prokarma.pkmst.controller;

import com.prokarma.pkmst.model.Audience;
import com.prokarma.pkmst.model.AudienceCreateCustomRequest;
import com.prokarma.pkmst.model.AudienceCreateRequest;
import com.prokarma.pkmst.model.AudienceUpdateRequest;
import com.prokarma.pkmst.model.AudiencesList200Response;
import com.prokarma.pkmst.model.Error;

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
@Api(value = "Audiences", description = "the Audiences API")
public interface AudiencesApi {

    @ApiOperation(value = "Create audience", notes = "Create an audience you can use in targeting for specific ad groups. Targeting combines customer information with the ways users interact with Pinterest to help you reach specific groups of users; you can include or exclude specific audience_ids when you create an ad group. <p/> For more, see <a class=\"reference external\" href=\"https://help.pinterest.com/en/business/article/audience-targeting\" target=\"_blank\">Audience targeting</a>.", response = Audience.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "ads:write", description = "Create, update, or delete ads, ad groups, campaigns etc.") })
         }, tags={ "audiences", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = Audience.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.POST,
        value = "/ad_accounts/{ad_account_id}/audiences",
        produces = { "application/json" },
        consumes = { "application/json" }
    )
    ResponseEntity<Audience> audiencesCreate(@ApiParam(value = "Unique identifier of an ad account.",required=true ) @PathVariable("ad_account_id") String adAccountId,@ApiParam(value = "List of ads to create, size limit [1, 30]" ,required=true )   @RequestBody AudienceCreateRequest audienceCreateRequest, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Create custom audience", notes = "Create a custom audience and find the audiences you want your ads to reach.", response = Audience.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "ads:write", description = "Create, update, or delete ads, ad groups, campaigns etc.") })
         }, tags={ "audiences", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = Audience.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.POST,
        value = "/ad_accounts/{ad_account_id}/audiences/custom",
        produces = { "application/json" },
        consumes = { "application/json" }
    )
    ResponseEntity<Audience> audiencesCreateCustom(@ApiParam(value = "Unique identifier of an ad account.",required=true ) @PathVariable("ad_account_id") String adAccountId,@ApiParam(value = "Custom audience to create." ,required=true )   @RequestBody AudienceCreateCustomRequest audienceCreateCustomRequest, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Get audience", notes = "Get a specific audience given the audience ID.", response = Audience.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "ads:read", description = "See all of your advertising data, including ads, ad groups, campaigns etc.") })
         }, tags={ "audiences", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = Audience.class),
        @ApiResponse(code = 404, message = "Audience not found.", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error.", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/ad_accounts/{ad_account_id}/audiences/{audience_id}",
        produces = { "application/json" }
    )
    ResponseEntity<Audience> audiencesGet(@ApiParam(value = "Unique identifier of an ad account.",required=true ) @PathVariable("ad_account_id") String adAccountId,@ApiParam(value = "Unique identifier of an audience",required=true ) @PathVariable("audience_id") String audienceId, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "List audiences", notes = "Get list of audiences for the ad account.", response = AudiencesList200Response.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "ads:read", description = "See all of your advertising data, including ads, ad groups, campaigns etc.") })
         }, tags={ "audiences", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = AudiencesList200Response.class),
        @ApiResponse(code = 400, message = "Invalid ad account audience parameters.", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/ad_accounts/{ad_account_id}/audiences",
        produces = { "application/json" }
    )
    ResponseEntity<AudiencesList200Response> audiencesList(@ApiParam(value = "Unique identifier of an ad account.",required=true ) @PathVariable("ad_account_id") String adAccountId,@ApiParam(value = "Cursor used to fetch the next page of items")  @RequestParam(value = "bookmark", required = false) String bookmark,@ApiParam(value = "The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. For received audiences, it is sorted by sharing event time. Note that higher-value IDs are associated with more-recently added items.", allowableValues = "ASCENDING, DESCENDING")  @RequestParam(value = "order", required = false) String order,@ApiParam(value = "Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.", defaultValue = "25")  @RequestParam(value = "page_size", required = false, defaultValue="25") Integer pageSize,@ApiParam(value = "<strong>This feature is currently in beta and not available to all apps.</strong> Filter audiences by ownership type.", allowableValues = "OWNED, RECEIVED", defaultValue = "OWNED")  @RequestParam(value = "ownership_type", required = false, defaultValue="OWNED") String ownershipType, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Update audience", notes = "Update (edit or remove) an existing targeting audience.", response = Audience.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "ads:write", description = "Create, update, or delete ads, ad groups, campaigns etc.") })
         }, tags={ "audiences", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = Audience.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.PATCH,
        value = "/ad_accounts/{ad_account_id}/audiences/{audience_id}",
        produces = { "application/json" },
        consumes = { "application/json" }
    )
    ResponseEntity<Audience> audiencesUpdate(@ApiParam(value = "Unique identifier of an ad account.",required=true ) @PathVariable("ad_account_id") String adAccountId,@ApiParam(value = "Unique identifier of an audience",required=true ) @PathVariable("audience_id") String audienceId,@ApiParam(value = "The audience to be updated."  )   @RequestBody AudienceUpdateRequest audienceUpdateRequest, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;

}