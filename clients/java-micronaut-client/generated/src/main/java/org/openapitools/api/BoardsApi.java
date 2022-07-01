/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.api;

import io.micronaut.http.annotation.*;
import io.micronaut.core.annotation.*;
import io.micronaut.http.client.annotation.Client;
import io.micronaut.core.convert.format.Format;
import reactor.core.publisher.Mono;
import org.openapitools.model.Board;
import org.openapitools.model.BoardSection;
import org.openapitools.model.BoardUpdate;
import org.openapitools.model.Error;
import org.openapitools.model.Paginated;
import javax.annotation.Generated;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import javax.validation.Valid;
import javax.validation.constraints.*;

@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-07-01T11:59:24.863123Z[Etc/UTC]")
@Client("${base-path}")
public interface BoardsApi {
    /**
     * Create board section
     * Create a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @param boardId Unique identifier of a board. (required)
     * @param boardSection Create a board section. (required)
     * @return BoardSection
     */
    @Post(uri="/boards/{board_id}/sections")
    @Produces(value={"application/json"})
    @Consumes(value={"application/json"})
    Mono<BoardSection> boardSectionsCreate(
        @PathVariable(name="board_id") @NotNull @Pattern(regexp="^\\d+$") String boardId, 
        @Body @NotNull @Valid BoardSection boardSection
  );
    /**
     * Delete board section
     * Delete a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @param boardId Unique identifier of a board. (required)
     * @param sectionId Unique identifier of a board section. (required)
     */
    @Delete(uri="/boards/{board_id}/sections/{section_id}")
    @Consumes(value={"application/json"})
    Mono<Object> boardSectionsDelete(
        @PathVariable(name="board_id") @NotNull @Pattern(regexp="^\\d+$") String boardId, 
        @PathVariable(name="section_id") @NotNull @Pattern(regexp="^\\d+$") String sectionId
  );
    /**
     * List board sections
     * Get a list of all board sections from a board owned by the \&quot;operation user_account\&quot; - or a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @param boardId Unique identifier of a board. (required)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @return Paginated
     */
    @Get(uri="/boards/{board_id}/sections")
    @Consumes(value={"application/json"})
    Mono<Paginated> boardSectionsList(
        @PathVariable(name="board_id") @NotNull @Pattern(regexp="^\\d+$") String boardId, 
        @QueryValue(value="bookmark") @Nullable String bookmark, 
        @QueryValue(value="page_size", defaultValue="25") @Nullable @Min(1) @Max(100) Integer pageSize
  );
    /**
     * List Pins on board section
     * Get a list of the Pins on a board section of a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @param boardId Unique identifier of a board. (required)
     * @param sectionId Unique identifier of a board section. (required)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @return Paginated
     */
    @Get(uri="/boards/{board_id}/sections/{section_id}/pins")
    @Consumes(value={"application/json"})
    Mono<Paginated> boardSectionsListPins(
        @PathVariable(name="board_id") @NotNull @Pattern(regexp="^\\d+$") String boardId, 
        @PathVariable(name="section_id") @NotNull @Pattern(regexp="^\\d+$") String sectionId, 
        @QueryValue(value="bookmark") @Nullable String bookmark, 
        @QueryValue(value="page_size", defaultValue="25") @Nullable @Min(1) @Max(100) Integer pageSize
  );
    /**
     * Update board section
     * Update a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @param boardId Unique identifier of a board. (required)
     * @param sectionId Unique identifier of a board section. (required)
     * @param boardSection Update a board section. (required)
     * @return BoardSection
     */
    @Patch(uri="/boards/{board_id}/sections/{section_id}")
    @Produces(value={"application/json"})
    @Consumes(value={"application/json"})
    Mono<BoardSection> boardSectionsUpdate(
        @PathVariable(name="board_id") @NotNull @Pattern(regexp="^\\d+$") String boardId, 
        @PathVariable(name="section_id") @NotNull @Pattern(regexp="^\\d+$") String sectionId, 
        @Body @NotNull @Valid BoardSection boardSection
  );
    /**
     * Create board
     * Create a board owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @param board Create a board using a single board json object. (required)
     * @return Board
     */
    @Post(uri="/boards")
    @Produces(value={"application/json"})
    @Consumes(value={"application/json"})
    Mono<Board> boardsCreate(
        @Body @NotNull @Valid Board board
  );
    /**
     * Delete board
     * Delete a board owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @param boardId Unique identifier of a board. (required)
     */
    @Delete(uri="/boards/{board_id}")
    @Consumes(value={"application/json"})
    Mono<Object> boardsDelete(
        @PathVariable(name="board_id") @NotNull @Pattern(regexp="^\\d+$") String boardId
  );
    /**
     * Get board
     * Get a board owned by the operation user_account - or a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @param boardId Unique identifier of a board. (required)
     * @return Board
     */
    @Get(uri="/boards/{board_id}")
    @Consumes(value={"application/json"})
    Mono<Board> boardsGet(
        @PathVariable(name="board_id") @NotNull @Pattern(regexp="^\\d+$") String boardId
  );
    /**
     * List boards
     * Get a list of the boards owned by the \&quot;operation user_account\&quot; + group boards where this account is a collaborator  Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return. - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
     *
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @param privacy Privacy setting for a board. (optional)
     * @return Paginated
     */
    @Get(uri="/boards")
    @Consumes(value={"application/json"})
    Mono<Paginated> boardsList(
        @QueryValue(value="bookmark") @Nullable String bookmark, 
        @QueryValue(value="page_size", defaultValue="25") @Nullable @Min(1) @Max(100) Integer pageSize, 
        @QueryValue(value="privacy") @Nullable String privacy
  );
    /**
     * List Pins on board
     * Get a list of the Pins on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @param boardId Unique identifier of a board. (required)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Pagination&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @return Paginated
     */
    @Get(uri="/boards/{board_id}/pins")
    @Consumes(value={"application/json"})
    Mono<Paginated> boardsListPins(
        @PathVariable(name="board_id") @NotNull @Pattern(regexp="^\\d+$") String boardId, 
        @QueryValue(value="bookmark") @Nullable String bookmark, 
        @QueryValue(value="page_size", defaultValue="25") @Nullable @Min(1) @Max(100) Integer pageSize
  );
    /**
     * Update board
     * Update a board owned by the \&quot;operating user_account\&quot;.
     *
     * @param boardId Unique identifier of a board. (required)
     * @param boardUpdate Update a board. (required)
     * @return Board
     */
    @Patch(uri="/boards/{board_id}")
    @Produces(value={"application/json"})
    @Consumes(value={"application/json"})
    Mono<Board> boardsUpdate(
        @PathVariable(name="board_id") @NotNull @Pattern(regexp="^\\d+$") String boardId, 
        @Body @NotNull @Valid BoardUpdate boardUpdate
  );
}
