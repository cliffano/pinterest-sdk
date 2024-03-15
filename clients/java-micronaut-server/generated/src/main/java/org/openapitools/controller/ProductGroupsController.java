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
import org.openapitools.model.AdAccountsCatalogsProductGroupsList200Response;
import org.openapitools.model.Error;
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
@Tag(name = "ProductGroups", description = "The ProductGroups API")
public class ProductGroupsController {
    /**
     * Get catalog product groups
     * This endpoint is completely deprecated. Please use &lt;a href&#x3D;&#39;/docs/api/v5/#operation/catalogs_product_groups/list&#39;&gt;List product groups&lt;/a&gt; from Catalogs API instead.
     *
     * @param adAccountId Unique identifier of an ad account. (required)
     * @param feedProfileId The feed profile id whose catalog product groups we want to return. (optional)
     * @return AdAccountsCatalogsProductGroupsList200Response
     */
    @Operation(
        operationId = "adAccountsCatalogsProductGroupsList",
        summary = "Get catalog product groups",
        responses = {
            @ApiResponse(responseCode = "200", description = "Success", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = AdAccountsCatalogsProductGroupsList200Response.class))
            }),
            @ApiResponse(responseCode = "400", description = "Invalid ad account ads parameters.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            }),
            @ApiResponse(responseCode = "401", description = "Access Denied. This can happen if account is not yet approved to operate as Merchant on Pinterest.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            }),
            @ApiResponse(responseCode = "404", description = "Merchant data not found.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            }),
            @ApiResponse(responseCode = "0", description = "Unexpected error", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            })
        },
        parameters = {
            @Parameter(name = "adAccountId", description = "Unique identifier of an ad account.", required = true),
            @Parameter(name = "feedProfileId", description = "The feed profile id whose catalog product groups we want to return.")
        },
        security = {
            @SecurityRequirement(name = "pinterest_oauth2", scopes = { "ads:write" })
        }
    )
    @Get(uri="/ad_accounts/{ad_account_id}/product_groups/catalogs")
    @Produces(value = {"application/json"})
    @Secured({SecurityRule.IS_AUTHENTICATED})
    public Mono<AdAccountsCatalogsProductGroupsList200Response> adAccountsCatalogsProductGroupsList(
        @PathVariable(value="ad_account_id") @NotNull @Pattern(regexp="^\\d+$") @Size(max=18) String adAccountId, 
        @QueryValue(value="feed_profile_id") @Nullable @Pattern(regexp="^\\d+$") @Size(max=18) String feedProfileId
    ) {
        // TODO implement adAccountsCatalogsProductGroupsList();
        return Mono.error(new HttpStatusException(HttpStatus.NOT_IMPLEMENTED, null));
    }

}