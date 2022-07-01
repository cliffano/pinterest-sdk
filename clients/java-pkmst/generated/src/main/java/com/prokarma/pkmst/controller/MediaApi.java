/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (5.4.0).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package com.prokarma.pkmst.controller;

import com.prokarma.pkmst.model.Error;
import com.prokarma.pkmst.model.MediaUpload;
import com.prokarma.pkmst.model.MediaUploadDetails;
import com.prokarma.pkmst.model.MediaUploadRequest;
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
@Api(value = "Media", description = "the Media API")
public interface MediaApi {

    @ApiOperation(value = "Register media upload", notes = "Register your intent to upload media  The response includes all of the information needed to upload the media to Pinterest.  To upload the media, make an HTTP POST request (using <tt>curl</tt>, for example) to <tt>upload_url</tt> using the <tt>Content-Type</tt> header value. Send the media file's contents as the request's <tt>file</tt> parameter and also include all of the parameters from <tt>upload_parameters</tt>.  <strong><a href='/docs/solutions/content-apps/#creatingvideopins'>Learn more</a></strong> about video Pin creation.", response = MediaUpload.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "pins:read", description = "See your public Pins"),
            @AuthorizationScope(scope = "pins:write", description = "Create, update, or delete your public Pins") })
         }, tags={ "media", })
    @ApiResponses(value = { 
        @ApiResponse(code = 201, message = "response", response = MediaUpload.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.POST,
        value = "/media",
        produces = { "application/json" },
        consumes = { "application/json" }
    )
    ResponseEntity<MediaUpload> mediaCreate(@ApiParam(value = "Create a media upload request" ,required=true )   @RequestBody MediaUploadRequest mediaUploadRequest, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "Get media upload details", notes = "Get details for a registered media upload, including its current status.  <strong><a href='/docs/solutions/content-apps/#creatingvideopins'>Learn more</a></strong> about video Pin creation.", response = MediaUploadDetails.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "pins:read", description = "See your public Pins") })
         }, tags={ "media", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "response", response = MediaUploadDetails.class),
        @ApiResponse(code = 404, message = "Media upload not found", response = Error.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/media/{media_id}",
        produces = { "application/json" }
    )
    ResponseEntity<MediaUploadDetails> mediaGet(@ApiParam(value = "Media identifier",required=true ) @PathVariable("media_id") String mediaId, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "List media uploads", notes = "List media uploads filtered by given parameters.  <strong><a href='/docs/solutions/content-apps/#creatingvideopins'>Learn more</a></strong> about video Pin creation.", response = Paginated.class, authorizations = {
        @Authorization(value = "pinterest_oauth2", scopes = {
            @AuthorizationScope(scope = "pins:read", description = "See your public Pins") })
         }, tags={ "media", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "response", response = Paginated.class),
        @ApiResponse(code = 200, message = "Unexpected error", response = Error.class) })
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/media",
        produces = { "application/json" }
    )
    ResponseEntity<Paginated> mediaList(@ApiParam(value = "Cursor used to fetch the next page of items")  @RequestParam(value = "bookmark", required = false) String bookmark,@ApiParam(value = "Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/api/v5/#tag/Pagination'>Pagination</a> for more information.", defaultValue = "25")  @RequestParam(value = "page_size", required = false, defaultValue="25") Integer pageSize, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;

}
