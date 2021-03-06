/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (5.4.0).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package com.prokarma.pkmst.controller;

import com.prokarma.pkmst.model.CatalogsFeed;
import com.prokarma.pkmst.model.CatalogsFeedsCreateRequest;
import com.prokarma.pkmst.model.CatalogsFeedsUpdateRequest;
import com.prokarma.pkmst.model.CatalogsItems;
import com.prokarma.pkmst.model.CatalogsItemsBatch;
import com.prokarma.pkmst.model.CatalogsItemsBatchRequest;
import com.prokarma.pkmst.model.CatalogsProductGroup;
import com.prokarma.pkmst.model.CatalogsProductGroupCreateRequest;
import com.prokarma.pkmst.model.CatalogsProductGroupUpdateRequest;
import com.prokarma.pkmst.model.Error;
import com.prokarma.pkmst.model.Paginated;

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
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPKMSTServerCodegen", date = "2022-07-01T11:59:50.950161Z[Etc/UTC]")
@Api(value = "Catalogs", description = "the Catalogs API")
public interface CatalogsApi {

    @ApiOperation(value = "Create product group", notes = "<strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Create product group to use in Catalogs.", response = Object.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "catalogs:write", description = "Create, update, or delete your catalogs data") })
         }, tags={ "catalogs", })
    @ApiResponses(value = { 
        @ApiResponse(code = 201, message = "Success", response = Object.class),
        @ApiResponse(code = 400, message = "Invalid body.", response = Error.class),
        @ApiResponse(code = 401, message = "Unauthorized access.", response = Error.class),
        @ApiResponse(code = 403, message = "Forbidden. Account not approved for feed mutations yet.", response = Error.class),
        @ApiResponse(code = 409, message = "Conflict. Can't create this catalogs product group with this value.", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error.", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.POST,
        value = "/catalogs/product_groups",
        produces = { "application/json" },
        consumes = { "application/json" }
    )
    ResponseEntity<Object> catalogsProductGroupsCreate(@ApiParam(value = "Request object used to created a catalogs product group." ,required=true )   @RequestBody CatalogsProductGroupCreateRequest catalogsProductGroupCreateRequest, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Delete product group", notes = "<strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Delete a product group from being in use in Catalogs.", response = Void.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "catalogs:write", description = "Create, update, or delete your catalogs data") })
         }, tags={ "catalogs", })
    @ApiResponses(value = { 
        @ApiResponse(code = 204, message = "Catalogs Product Group deleted successfully."),
        @ApiResponse(code = 400, message = "Invalid catalogs product group id parameters.", response = Error.class),
        @ApiResponse(code = 401, message = "Unauthorized access.", response = Error.class),
        @ApiResponse(code = 403, message = "Forbidden. Account not approved for feed mutations yet.", response = Error.class),
        @ApiResponse(code = 404, message = "Catalogs product group not found.", response = Error.class),
        @ApiResponse(code = 409, message = "Conflict. Can't delete this catalogs product group.", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error.", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.DELETE,
        value = "/catalogs/product_groups/{product_group_id}",
        produces = { "application/json" }
    )
    ResponseEntity<Void> catalogsProductGroupsDelete(@ApiParam(value = "Unique identifier of a product group",required=true ) @PathVariable("product_group_id") String productGroupId, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Get product groups list", notes = "<strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Get a list of product groups for a given Catalogs Feed Id.", response = Paginated.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "catalogs:read", description = "See all of your catalogs data") })
         }, tags={ "catalogs", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = Paginated.class),
        @ApiResponse(code = 400, message = "Invalid feed parameters.", response = Error.class),
        @ApiResponse(code = 401, message = "Unauthorized access.", response = Error.class),
        @ApiResponse(code = 403, message = "Forbidden. Account not approved for feed mutations yet.", response = Error.class),
        @ApiResponse(code = 404, message = "Data feed not found.", response = Error.class),
        @ApiResponse(code = 409, message = "Conflict. Can't create this catalogs product group with this value.", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error.", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/catalogs/product_groups",
        produces = { "application/json" }
    )
    ResponseEntity<Paginated> catalogsProductGroupsList(@ApiParam(value = "Unique identifier of a feed", required = true)  @RequestParam(value = "feed_id", required = true) String feedId,@ApiParam(value = "Cursor used to fetch the next page of items")  @RequestParam(value = "bookmark", required = false) String bookmark,@ApiParam(value = "Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/api/v5/#tag/Pagination'>Pagination</a> for more information.", defaultValue = "25")  @RequestParam(value = "page_size", required = false, defaultValue="25") Integer pageSize, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Update product group", notes = "<strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Update product group to use in Catalogs.", response = CatalogsProductGroup.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "catalogs:write", description = "Create, update, or delete your catalogs data") })
         }, tags={ "catalogs", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = CatalogsProductGroup.class),
        @ApiResponse(code = 400, message = "Invalid parameters.", response = Error.class),
        @ApiResponse(code = 401, message = "Unauthorized access.", response = Error.class),
        @ApiResponse(code = 404, message = "Catalogs product group not found.", response = Error.class),
        @ApiResponse(code = 409, message = "Conflict. Can't update this catalogs product group to this value.", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error.", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.PATCH,
        value = "/catalogs/product_groups/{product_group_id}",
        produces = { "application/json" },
        consumes = { "application/json" }
    )
    ResponseEntity<CatalogsProductGroup> catalogsProductGroupsUpdate(@ApiParam(value = "Unique identifier of a product group",required=true ) @PathVariable("product_group_id") String productGroupId,@ApiParam(value = "Request object used to Update a catalogs product group." ,required=true )   @RequestBody CatalogsProductGroupUpdateRequest catalogsProductGroupUpdateRequest, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "List processing results for a given feed", notes = "<strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Fetch a feed processing results owned by the owner user account.", response = Paginated.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "catalogs:read", description = "See all of your catalogs data") })
         }, tags={ "catalogs", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = Paginated.class),
        @ApiResponse(code = 400, message = "Invalid parameters.", response = Error.class),
        @ApiResponse(code = 401, message = "Unauthorized access.", response = Error.class),
        @ApiResponse(code = 404, message = "Feed not found.", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error.", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/catalogs/feeds/{feed_id}/processing_results",
        produces = { "application/json" }
    )
    ResponseEntity<Paginated> feedProcessingResultsList(@ApiParam(value = "Unique identifier of a feed",required=true ) @PathVariable("feed_id") String feedId,@ApiParam(value = "Cursor used to fetch the next page of items")  @RequestParam(value = "bookmark", required = false) String bookmark,@ApiParam(value = "Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/api/v5/#tag/Pagination'>Pagination</a> for more information.", defaultValue = "25")  @RequestParam(value = "page_size", required = false, defaultValue="25") Integer pageSize, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Create feed", notes = "<strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Create a new feed owned by the \"operating user_account\".", response = CatalogsFeed.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "catalogs:read", description = "See all of your catalogs data"),
            @AuthorizationScope(scope = "catalogs:write", description = "Create, update, or delete your catalogs data") })
         }, tags={ "catalogs", })
    @ApiResponses(value = { 
        @ApiResponse(code = 201, message = "Success", response = CatalogsFeed.class),
        @ApiResponse(code = 400, message = "Invalid feed parameters.", response = Error.class),
        @ApiResponse(code = 401, message = "Unauthorized access.", response = Error.class),
        @ApiResponse(code = 403, message = "Business account required.", response = Error.class),
        @ApiResponse(code = 409, message = "User website required.", response = Error.class),
        @ApiResponse(code = 422, message = "Unique feed name is required.", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.POST,
        value = "/catalogs/feeds",
        produces = { "application/json" },
        consumes = { "application/json" }
    )
    ResponseEntity<CatalogsFeed> feedsCreate(@ApiParam(value = "Request object used to created a feed." ,required=true )   @RequestBody CatalogsFeedsCreateRequest catalogsFeedsCreateRequest, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Delete feed", notes = "<strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Delete a feed owned by the \"operating user_account\".", response = Void.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "catalogs:read", description = "See all of your catalogs data"),
            @AuthorizationScope(scope = "catalogs:write", description = "Create, update, or delete your catalogs data") })
         }, tags={ "catalogs", })
    @ApiResponses(value = { 
        @ApiResponse(code = 204, message = "Feed deleted successfully."),
        @ApiResponse(code = 400, message = "Invalid feed parameters.", response = Error.class),
        @ApiResponse(code = 403, message = "Forbidden. Account not approved for feed mutations yet.", response = Error.class),
        @ApiResponse(code = 404, message = "Data feed not found.", response = Error.class),
        @ApiResponse(code = 409, message = "Conflict. Can't delete a feed with active promotions.", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.DELETE,
        value = "/catalogs/feeds/{feed_id}",
        produces = { "application/json" }
    )
    ResponseEntity<Void> feedsDelete(@ApiParam(value = "Unique identifier of a feed",required=true ) @PathVariable("feed_id") String feedId, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Get feed", notes = "<strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Get a single feed owned by the \"operating user_account\".", response = CatalogsFeed.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "catalogs:read", description = "See all of your catalogs data") })
         }, tags={ "catalogs", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = CatalogsFeed.class),
        @ApiResponse(code = 400, message = "Invalid feed parameters.", response = Error.class),
        @ApiResponse(code = 401, message = "Unauthorized access.", response = Error.class),
        @ApiResponse(code = 404, message = "Data feed not found.", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error.", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/catalogs/feeds/{feed_id}",
        produces = { "application/json" }
    )
    ResponseEntity<CatalogsFeed> feedsGet(@ApiParam(value = "Unique identifier of a feed",required=true ) @PathVariable("feed_id") String feedId, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "List feeds", notes = "<strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Fetch feeds owned by the \"operating user_account\".", response = Paginated.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "catalogs:read", description = "See all of your catalogs data") })
         }, tags={ "catalogs", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = Paginated.class),
        @ApiResponse(code = 400, message = "Invalid parameters.", response = Error.class),
        @ApiResponse(code = 401, message = "Unauthorized access.", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error.", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/catalogs/feeds",
        produces = { "application/json" }
    )
    ResponseEntity<Paginated> feedsList(@ApiParam(value = "Cursor used to fetch the next page of items")  @RequestParam(value = "bookmark", required = false) String bookmark,@ApiParam(value = "Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/api/v5/#tag/Pagination'>Pagination</a> for more information.", defaultValue = "25")  @RequestParam(value = "page_size", required = false, defaultValue="25") Integer pageSize, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Update feed", notes = "<strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Update a feed owned by the \"operating user_account\".", response = CatalogsFeed.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "catalogs:read", description = "See all of your catalogs data"),
            @AuthorizationScope(scope = "catalogs:write", description = "Create, update, or delete your catalogs data") })
         }, tags={ "catalogs", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Success", response = CatalogsFeed.class),
        @ApiResponse(code = 400, message = "Invalid feed parameters.", response = Error.class),
        @ApiResponse(code = 403, message = "Forbidden. Account not approved for feed mutations yet.", response = Error.class),
        @ApiResponse(code = 404, message = "Data feed not found.", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.PATCH,
        value = "/catalogs/feeds/{feed_id}",
        produces = { "application/json" },
        consumes = { "application/json" }
    )
    ResponseEntity<CatalogsFeed> feedsUpdate(@ApiParam(value = "Unique identifier of a feed",required=true ) @PathVariable("feed_id") String feedId,@ApiParam(value = "Request object used to update a feed." ,required=true )   @RequestBody CatalogsFeedsUpdateRequest catalogsFeedsUpdateRequest, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Get catalogs items batch", notes = "<strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  Get a single catalogs items batch created by the \"operating user_account\".", response = CatalogsItemsBatch.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "catalogs:read", description = "See all of your catalogs data") })
         }, tags={ "catalogs", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response containing the requested catalogs items batch", response = CatalogsItemsBatch.class),
        @ApiResponse(code = 401, message = "Not authorized to access catalogs items batch", response = Error.class),
        @ApiResponse(code = 403, message = "Not authorized to access catalogs items batch", response = Error.class),
        @ApiResponse(code = 404, message = "Catalogs items batch not found", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/catalogs/items/batch/{batch_id}",
        produces = { "application/json" }
    )
    ResponseEntity<CatalogsItemsBatch> itemsBatchGet(@ApiParam(value = "Id of a catalogs items batch to fetch",required=true ) @PathVariable("batch_id") String batchId, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Perform an operation on an item batch", notes = "<strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>  This endpoint supports multiple operations on a set of one or more catalog items.", response = CatalogsItemsBatch.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "catalogs:read", description = "See all of your catalogs data"),
            @AuthorizationScope(scope = "catalogs:write", description = "Create, update, or delete your catalogs data") })
         }, tags={ "catalogs", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response containing the requested catalogs items batch", response = CatalogsItemsBatch.class),
        @ApiResponse(code = 401, message = "Not authorized to post catalogs items", response = Error.class),
        @ApiResponse(code = 403, message = "Not authorized to post catalogs items", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.POST,
        value = "/catalogs/items/batch",
        produces = { "application/json" },
        consumes = { "application/json" }
    )
    ResponseEntity<CatalogsItemsBatch> itemsBatchPost(@ApiParam(value = "Request object used to create catalogs items in a batch" ,required=true )   @RequestBody CatalogsItemsBatchRequest catalogsItemsBatchRequest, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Get catalogs items", notes = "Get the items of the catalog created by the \"operating user_account\"", response = CatalogsItems.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "catalogs:read", description = "See all of your catalogs data") })
         }, tags={ "catalogs", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response containing the requested catalogs items", response = CatalogsItems.class),
        @ApiResponse(code = 401, message = "Not authorized to access catalogs items", response = Error.class),
        @ApiResponse(code = 403, message = "Not authorized to access catalogs items", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/catalogs/items",
        produces = { "application/json" }
    )
    ResponseEntity<CatalogsItems> itemsGet(@ApiParam(value = "Country for the Catalogs Items", required = true)  @RequestParam(value = "country", required = true) String country,@ApiParam(value = "Catalos Item ids", required = true)  @RequestParam(value = "item_ids", required = true) List<String> itemIds,@ApiParam(value = "Language for the Catalogs Items", required = true)  @RequestParam(value = "language", required = true) String language, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;

}
