/*
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

package org.openapitools.controller;

import io.micronaut.http.annotation.*;
import io.micronaut.core.annotation.Nullable;
import io.micronaut.core.convert.format.Format;
import io.micronaut.security.annotation.Secured;
import io.micronaut.security.rules.SecurityRule;
import reactor.core.publisher.Mono;
import io.micronaut.http.HttpStatus;
import io.micronaut.http.exceptions.HttpStatusException;
import org.openapitools.model.Error;
import org.openapitools.model.PinsList200Response;
import org.openapitools.model.SearchPartnerPins200Response;
import org.openapitools.model.SearchUserBoardsGet200Response;
import javax.annotation.Generated;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.Parameters;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.tags.Tag;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Controller
@Tag(name = "Search", description = "The Search API")
public class SearchController {
    /**
     * Search pins by a given search term
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Get the top 10 Pins by a given search term.
     *
     * @param term Search term to look up pins. (required)
     * @param countryCode Two letter country code (ISO 3166-1 alpha-2) (required)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param locale Search locale. (optional)
     * @param limit Max search result size (optional, default to 10)
     * @return SearchPartnerPins200Response
     */
    @Operation(
        operationId = "searchPartnerPins",
        summary = "Search pins by a given search term",
        responses = {
            @ApiResponse(responseCode = "200", description = "Success", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = SearchPartnerPins200Response.class))
            }),
            @ApiResponse(responseCode = "400", description = "Invalid pins", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            }),
            @ApiResponse(responseCode = "0", description = "Unexpected error", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            })
        },
        parameters = {
            @Parameter(name = "term", description = "Search term to look up pins.", required = true),
            @Parameter(name = "countryCode", description = "Two letter country code (ISO 3166-1 alpha-2)", required = true),
            @Parameter(name = "bookmark", description = "Cursor used to fetch the next page of items"),
            @Parameter(name = "locale", description = "Search locale."),
            @Parameter(name = "limit", description = "Max search result size")
        },
        security = {
            @SecurityRequirement(name = "pinterest_oauth2", scopes = { "boards:read", "pins:read" })
        }
    )
    @Get(uri="/search/partner/pins")
    @Produces(value = {"application/json"})
    @Secured({SecurityRule.IS_AUTHENTICATED})
    public Mono<SearchPartnerPins200Response> searchPartnerPins(
        @QueryValue(value="term") @NotNull String term, 
        @QueryValue(value="country_code") @NotNull String countryCode, 
        @QueryValue(value="bookmark") @Nullable String bookmark, 
        @QueryValue(value="locale") @Nullable String locale, 
        @QueryValue(value="limit", defaultValue="10") @Nullable @Min(1) @Max(50) Integer limit
    ) {
        // TODO implement searchPartnerPins();
        return Mono.error(new HttpStatusException(HttpStatus.NOT_IMPLEMENTED, null));
    }


    /**
     * Search user&#39;s boards
     * Search for boards for the \&quot;operation user_account\&quot;. This includes boards of all board types. - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/reference/business-access/&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     *
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @param query Search query. Can contain pin description keywords or comma-separated pin IDs. (optional)
     * @return SearchUserBoardsGet200Response
     */
    @Operation(
        operationId = "searchUserBoardsGet",
        summary = "Search user's boards",
        responses = {
            @ApiResponse(responseCode = "200", description = "response", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = SearchUserBoardsGet200Response.class))
            }),
            @ApiResponse(responseCode = "0", description = "Unexpected error", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            })
        },
        parameters = {
            @Parameter(name = "adAccountId", description = "Unique identifier of an ad account."),
            @Parameter(name = "bookmark", description = "Cursor used to fetch the next page of items"),
            @Parameter(name = "pageSize", description = "Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information."),
            @Parameter(name = "query", description = "Search query. Can contain pin description keywords or comma-separated pin IDs.")
        },
        security = {
            @SecurityRequirement(name = "pinterest_oauth2", scopes = { "boards:read", "boards:read_secret" })
        }
    )
    @Get(uri="/search/boards")
    @Produces(value = {"application/json"})
    @Secured({SecurityRule.IS_AUTHENTICATED})
    public Mono<SearchUserBoardsGet200Response> searchUserBoardsGet(
        @QueryValue(value="ad_account_id") @Nullable @Pattern(regexp="^\\d+$") @Size(max=18) String adAccountId, 
        @QueryValue(value="bookmark") @Nullable String bookmark, 
        @QueryValue(value="page_size", defaultValue="25") @Nullable @Min(1) @Max(250) Integer pageSize, 
        @QueryValue(value="query") @Nullable String query
    ) {
        // TODO implement searchUserBoardsGet();
        return Mono.error(new HttpStatusException(HttpStatus.NOT_IMPLEMENTED, null));
    }


    /**
     * Search user&#39;s Pins
     * Search for pins for the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/reference/business-access/&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     *
     * @param query Search query. Can contain pin description keywords or comma-separated pin IDs. (required)
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @return PinsList200Response
     */
    @Operation(
        operationId = "searchUserPinsList",
        summary = "Search user's Pins",
        responses = {
            @ApiResponse(responseCode = "200", description = "Success", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = PinsList200Response.class))
            }),
            @ApiResponse(responseCode = "404", description = "User not found", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            }),
            @ApiResponse(responseCode = "0", description = "Unexpected error", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            })
        },
        parameters = {
            @Parameter(name = "query", description = "Search query. Can contain pin description keywords or comma-separated pin IDs.", required = true),
            @Parameter(name = "adAccountId", description = "Unique identifier of an ad account."),
            @Parameter(name = "bookmark", description = "Cursor used to fetch the next page of items")
        },
        security = {
            @SecurityRequirement(name = "pinterest_oauth2", scopes = { "boards:read", "boards:read_secret", "pins:read", "pins:read_secret" })
        }
    )
    @Get(uri="/search/pins")
    @Produces(value = {"application/json"})
    @Secured({SecurityRule.IS_AUTHENTICATED})
    public Mono<PinsList200Response> searchUserPinsList(
        @QueryValue(value="query") @NotNull String query, 
        @QueryValue(value="ad_account_id") @Nullable @Pattern(regexp="^\\d+$") @Size(max=18) String adAccountId, 
        @QueryValue(value="bookmark") @Nullable String bookmark
    ) {
        // TODO implement searchUserPinsList();
        return Mono.error(new HttpStatusException(HttpStatus.NOT_IMPLEMENTED, null));
    }

}
