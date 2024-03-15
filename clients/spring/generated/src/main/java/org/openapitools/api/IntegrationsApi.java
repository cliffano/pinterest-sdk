/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (7.4.0).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.api;

import org.openapitools.model.DetailedError;
import org.openapitools.model.Error;
import org.openapitools.model.IntegrationLogsRequest;
import org.openapitools.model.IntegrationLogsSuccessResponse;
import org.openapitools.model.IntegrationMetadata;
import org.openapitools.model.IntegrationRecord;
import org.openapitools.model.IntegrationRequest;
import org.openapitools.model.IntegrationRequestPatch;
import org.openapitools.model.IntegrationsGetList200Response;
import io.swagger.v3.oas.annotations.ExternalDocumentation;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.Parameters;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;
import io.swagger.v3.oas.annotations.tags.Tag;
import io.swagger.v3.oas.annotations.enums.ParameterIn;
import org.springframework.http.HttpStatus;
import org.springframework.http.MediaType;
import org.springframework.http.ResponseEntity;
import org.springframework.validation.annotation.Validated;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.context.request.NativeWebRequest;
import org.springframework.web.multipart.MultipartFile;

import javax.validation.Valid;
import javax.validation.constraints.*;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import javax.annotation.Generated;

@Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2024-03-14T23:15:39.458648915Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Validated
@Tag(name = "integrations", description = "View, create, or update commerce integrations.")
public interface IntegrationsApi {

    default Optional<NativeWebRequest> getRequest() {
        return Optional.empty();
    }

    /**
     * DELETE /integrations/commerce/{external_business_id} : Delete commerce integration
     * Delete commerce integration metadata for the given external business ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @param externalBusinessId External business ID for the integration. (required)
     * @return Commerce Integration deleted successfully (status code 204)
     *         or Unexpected error. (status code 200)
     */
    @Operation(
        operationId = "integrationsCommerceDel",
        summary = "Delete commerce integration",
        description = "Delete commerce integration metadata for the given external business ID. Note: If you're interested in joining the beta, please reach out to your Pinterest account manager.",
        tags = { "integrations" },
        responses = {
            @ApiResponse(responseCode = "204", description = "Commerce Integration deleted successfully"),
            @ApiResponse(responseCode = "default", description = "Unexpected error.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            })
        },
        security = {
            @SecurityRequirement(name = "pinterest_oauth2", scopes={ "ads:write" })
        }
    )
    @RequestMapping(
        method = RequestMethod.DELETE,
        value = "/integrations/commerce/{external_business_id}",
        produces = { "application/json" }
    )
    
    default ResponseEntity<Void> integrationsCommerceDel(
        @Parameter(name = "external_business_id", description = "External business ID for the integration.", required = true, in = ParameterIn.PATH) @PathVariable("external_business_id") String externalBusinessId
    ) {
        getRequest().ifPresent(request -> {
            for (MediaType mediaType: MediaType.parseMediaTypes(request.getHeader("Accept"))) {
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"code\" : 0, \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
            }
        });
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    /**
     * GET /integrations/commerce/{external_business_id} : Get commerce integration
     * Get commerce integration metadata associated with the given external business ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @param externalBusinessId External business ID for the integration. (required)
     * @return Success (status code 200)
     *         or Integration not found. (status code 404)
     *         or Can&#39;t access this integration metadata. (status code 409)
     *         or Unexpected error. (status code 200)
     */
    @Operation(
        operationId = "integrationsCommerceGet",
        summary = "Get commerce integration",
        description = "Get commerce integration metadata associated with the given external business ID. Note: If you're interested in joining the beta, please reach out to your Pinterest account manager.",
        tags = { "integrations" },
        responses = {
            @ApiResponse(responseCode = "200", description = "Success", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = IntegrationMetadata.class))
            }),
            @ApiResponse(responseCode = "404", description = "Integration not found.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            }),
            @ApiResponse(responseCode = "409", description = "Can't access this integration metadata.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            }),
            @ApiResponse(responseCode = "default", description = "Unexpected error.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            })
        },
        security = {
            @SecurityRequirement(name = "pinterest_oauth2", scopes={ "ads:read" })
        }
    )
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/integrations/commerce/{external_business_id}",
        produces = { "application/json" }
    )
    
    default ResponseEntity<IntegrationMetadata> integrationsCommerceGet(
        @Parameter(name = "external_business_id", description = "External business ID for the integration.", required = true, in = ParameterIn.PATH) @PathVariable("external_business_id") String externalBusinessId
    ) {
        getRequest().ifPresent(request -> {
            for (MediaType mediaType: MediaType.parseMediaTypes(request.getHeader("Accept"))) {
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"id\" : \"7329167449607351372\", \"external_business_id\" : \"1238401984\", \"connected_merchant_id\" : \"1445572885401\", \"connected_user_id\" : \"871939315263957401\", \"connected_advertiser_id\" : \"549764738871\", \"connected_lba_id\" : \"871939315263957402\", \"connected_tag_id\" : \"2412141155151\", \"partner_access_token_expiry\" : 1621350033000, \"partner_refresh_token_expiry\" : 1621350033000, \"scopes\" : \"accounts:read\", \"created_timestamp\" : 1621350033000, \"updated_timestamp\" : 1621350033000, \"additional_id_1\" : \"128464\", \"partner_metadata\" : \"\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"code\" : 0, \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"code\" : 0, \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"code\" : 0, \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
            }
        });
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    /**
     * PATCH /integrations/commerce/{external_business_id} : Update commerce integration
     * Update commerce integration metadata for the given external business ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @param externalBusinessId External business ID for the integration. (required)
     * @param integrationRequestPatch Parameters to get create/update the Integration Metadata (optional)
     * @return Success (status code 200)
     *         or Integration not found. (status code 404)
     *         or Can&#39;t access this integration metadata. (status code 409)
     *         or Unexpected error. (status code 200)
     */
    @Operation(
        operationId = "integrationsCommercePatch",
        summary = "Update commerce integration",
        description = "Update commerce integration metadata for the given external business ID. Note: If you're interested in joining the beta, please reach out to your Pinterest account manager.",
        tags = { "integrations" },
        responses = {
            @ApiResponse(responseCode = "200", description = "Success", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = IntegrationMetadata.class))
            }),
            @ApiResponse(responseCode = "404", description = "Integration not found.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            }),
            @ApiResponse(responseCode = "409", description = "Can't access this integration metadata.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            }),
            @ApiResponse(responseCode = "default", description = "Unexpected error.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            })
        },
        security = {
            @SecurityRequirement(name = "pinterest_oauth2", scopes={ "ads:write" })
        }
    )
    @RequestMapping(
        method = RequestMethod.PATCH,
        value = "/integrations/commerce/{external_business_id}",
        produces = { "application/json" },
        consumes = { "application/json" }
    )
    
    default ResponseEntity<IntegrationMetadata> integrationsCommercePatch(
        @Parameter(name = "external_business_id", description = "External business ID for the integration.", required = true, in = ParameterIn.PATH) @PathVariable("external_business_id") String externalBusinessId,
        @Parameter(name = "IntegrationRequestPatch", description = "Parameters to get create/update the Integration Metadata") @Valid @RequestBody(required = false) IntegrationRequestPatch integrationRequestPatch
    ) {
        getRequest().ifPresent(request -> {
            for (MediaType mediaType: MediaType.parseMediaTypes(request.getHeader("Accept"))) {
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"id\" : \"7329167449607351372\", \"external_business_id\" : \"1238401984\", \"connected_merchant_id\" : \"1445572885401\", \"connected_user_id\" : \"871939315263957401\", \"connected_advertiser_id\" : \"549764738871\", \"connected_lba_id\" : \"871939315263957402\", \"connected_tag_id\" : \"2412141155151\", \"partner_access_token_expiry\" : 1621350033000, \"partner_refresh_token_expiry\" : 1621350033000, \"scopes\" : \"accounts:read\", \"created_timestamp\" : 1621350033000, \"updated_timestamp\" : 1621350033000, \"additional_id_1\" : \"128464\", \"partner_metadata\" : \"\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"code\" : 0, \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"code\" : 0, \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"code\" : 0, \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
            }
        });
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    /**
     * POST /integrations/commerce : Create commerce integration
     * Create commerce integration metadata to link an external business ID with a Pinterest merchant &amp; ad account. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @param integrationRequest Parameters to get create/update the Integration Metadata (optional)
     * @return Success (status code 200)
     *         or Integration not found. (status code 404)
     *         or Can&#39;t access this integration metadata. (status code 409)
     *         or Unexpected error. (status code 200)
     */
    @Operation(
        operationId = "integrationsCommercePost",
        summary = "Create commerce integration",
        description = "Create commerce integration metadata to link an external business ID with a Pinterest merchant & ad account. Note: If you're interested in joining the beta, please reach out to your Pinterest account manager.",
        tags = { "integrations" },
        responses = {
            @ApiResponse(responseCode = "200", description = "Success", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = IntegrationMetadata.class))
            }),
            @ApiResponse(responseCode = "404", description = "Integration not found.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            }),
            @ApiResponse(responseCode = "409", description = "Can't access this integration metadata.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            }),
            @ApiResponse(responseCode = "default", description = "Unexpected error.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            })
        },
        security = {
            @SecurityRequirement(name = "pinterest_oauth2", scopes={ "ads:write" })
        }
    )
    @RequestMapping(
        method = RequestMethod.POST,
        value = "/integrations/commerce",
        produces = { "application/json" },
        consumes = { "application/json" }
    )
    
    default ResponseEntity<IntegrationMetadata> integrationsCommercePost(
        @Parameter(name = "IntegrationRequest", description = "Parameters to get create/update the Integration Metadata") @Valid @RequestBody(required = false) IntegrationRequest integrationRequest
    ) {
        getRequest().ifPresent(request -> {
            for (MediaType mediaType: MediaType.parseMediaTypes(request.getHeader("Accept"))) {
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"id\" : \"7329167449607351372\", \"external_business_id\" : \"1238401984\", \"connected_merchant_id\" : \"1445572885401\", \"connected_user_id\" : \"871939315263957401\", \"connected_advertiser_id\" : \"549764738871\", \"connected_lba_id\" : \"871939315263957402\", \"connected_tag_id\" : \"2412141155151\", \"partner_access_token_expiry\" : 1621350033000, \"partner_refresh_token_expiry\" : 1621350033000, \"scopes\" : \"accounts:read\", \"created_timestamp\" : 1621350033000, \"updated_timestamp\" : 1621350033000, \"additional_id_1\" : \"128464\", \"partner_metadata\" : \"\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"code\" : 0, \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"code\" : 0, \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"code\" : 0, \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
            }
        });
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    /**
     * GET /integrations/{id} : Get integration metadata
     * Get integration metadata by ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @param id Integration ID. (required)
     * @return Success (status code 200)
     *         or Integration not found. (status code 404)
     *         or Unexpected error. (status code 200)
     */
    @Operation(
        operationId = "integrationsGetById",
        summary = "Get integration metadata",
        description = "Get integration metadata by ID. Note: If you're interested in joining the beta, please reach out to your Pinterest account manager.",
        tags = { "integrations" },
        responses = {
            @ApiResponse(responseCode = "200", description = "Success", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = IntegrationRecord.class))
            }),
            @ApiResponse(responseCode = "404", description = "Integration not found.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            }),
            @ApiResponse(responseCode = "default", description = "Unexpected error.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            })
        },
        security = {
            @SecurityRequirement(name = "pinterest_oauth2", scopes={ "ads:read" })
        }
    )
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/integrations/{id}",
        produces = { "application/json" }
    )
    
    default ResponseEntity<IntegrationRecord> integrationsGetById(
        @Parameter(name = "id", description = "Integration ID.", required = true, in = ParameterIn.PATH) @PathVariable("id") String id
    ) {
        getRequest().ifPresent(request -> {
            for (MediaType mediaType: MediaType.parseMediaTypes(request.getHeader("Accept"))) {
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"id\" : \"7329123456789012345\", \"external_business_id\" : \"1234567890\", \"connected_merchant_id\" : \"1234567890123\", \"connected_user_id\" : \"123456789012345678\", \"connected_advertiser_id\" : \"123456789012\", \"connected_lba_id\" : \"871234567890123456\", \"connected_tag_id\" : \"2412345678901\", \"partner_access_token\" : \"ABCLUOJS5XDMWDE\", \"partner_refresh_token\" : \"ABCLUOJS5XDMWDE\", \"partner_primary_email\" : \"partner@server.com\", \"partner_access_token_expiry\" : 1621350033000, \"partner_refresh_token_expiry\" : 1621350033000, \"scopes\" : \"accounts:read\", \"partner_metadata\" : \"\", \"additional_id_1\" : \"123456\", \"created_time\" : 1621350033000, \"updated_time\" : 1621350033000 }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"code\" : 0, \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"code\" : 0, \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
            }
        });
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    /**
     * GET /integrations : Get integration metadata list
     * Get integration metadata list. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @return Success (status code 200)
     *         or Unexpected error. (status code 200)
     */
    @Operation(
        operationId = "integrationsGetList",
        summary = "Get integration metadata list",
        description = "Get integration metadata list. Note: If you're interested in joining the beta, please reach out to your Pinterest account manager.",
        tags = { "integrations" },
        responses = {
            @ApiResponse(responseCode = "200", description = "Success", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = IntegrationsGetList200Response.class))
            }),
            @ApiResponse(responseCode = "default", description = "Unexpected error.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            })
        },
        security = {
            @SecurityRequirement(name = "pinterest_oauth2", scopes={ "ads:read" })
        }
    )
    @RequestMapping(
        method = RequestMethod.GET,
        value = "/integrations",
        produces = { "application/json" }
    )
    
    default ResponseEntity<IntegrationsGetList200Response> integrationsGetList(
        @Parameter(name = "bookmark", description = "Cursor used to fetch the next page of items", in = ParameterIn.QUERY) @Valid @RequestParam(value = "bookmark", required = false) String bookmark,
        @Min(1) @Max(250) @Parameter(name = "page_size", description = "Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.", in = ParameterIn.QUERY) @Valid @RequestParam(value = "page_size", required = false, defaultValue = "25") Integer pageSize
    ) {
        getRequest().ifPresent(request -> {
            for (MediaType mediaType: MediaType.parseMediaTypes(request.getHeader("Accept"))) {
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"bookmark\" : \"bookmark\", \"items\" : [ { \"id\" : \"7329123456789012345\", \"external_business_id\" : \"1234567890\", \"connected_merchant_id\" : \"1234567890123\", \"connected_user_id\" : \"123456789012345678\", \"connected_advertiser_id\" : \"123456789012\", \"connected_lba_id\" : \"871234567890123456\", \"connected_tag_id\" : \"2412345678901\", \"partner_access_token\" : \"ABCLUOJS5XDMWDE\", \"partner_refresh_token\" : \"ABCLUOJS5XDMWDE\", \"partner_primary_email\" : \"partner@server.com\", \"partner_access_token_expiry\" : 1621350033000, \"partner_refresh_token_expiry\" : 1621350033000, \"scopes\" : \"accounts:read\", \"partner_metadata\" : \"\", \"additional_id_1\" : \"123456\", \"created_time\" : 1621350033000, \"updated_time\" : 1621350033000 }, { \"id\" : \"7329123456789012345\", \"external_business_id\" : \"1234567890\", \"connected_merchant_id\" : \"1234567890123\", \"connected_user_id\" : \"123456789012345678\", \"connected_advertiser_id\" : \"123456789012\", \"connected_lba_id\" : \"871234567890123456\", \"connected_tag_id\" : \"2412345678901\", \"partner_access_token\" : \"ABCLUOJS5XDMWDE\", \"partner_refresh_token\" : \"ABCLUOJS5XDMWDE\", \"partner_primary_email\" : \"partner@server.com\", \"partner_access_token_expiry\" : 1621350033000, \"partner_refresh_token_expiry\" : 1621350033000, \"scopes\" : \"accounts:read\", \"partner_metadata\" : \"\", \"additional_id_1\" : \"123456\", \"created_time\" : 1621350033000, \"updated_time\" : 1621350033000 } ] }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"code\" : 0, \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
            }
        });
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    /**
     * POST /integrations/logs : Receives batched logs from integration applications.
     * This endpoint receives batched logs from integration applications on partner platforms. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
     *
     * @param integrationLogsRequest Ingest log information from external integration application. (required)
     * @return Success. (status code 200)
     *         or Bad request. (status code 400)
     *         or Unexpected error (status code 200)
     */
    @Operation(
        operationId = "integrationsLogsPost",
        summary = "Receives batched logs from integration applications.",
        description = "This endpoint receives batched logs from integration applications on partner platforms. Note: If you're interested in joining the beta, please reach out to your Pinterest account manager.",
        tags = { "integrations" },
        responses = {
            @ApiResponse(responseCode = "200", description = "Success.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = IntegrationLogsSuccessResponse.class))
            }),
            @ApiResponse(responseCode = "400", description = "Bad request.", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = DetailedError.class))
            }),
            @ApiResponse(responseCode = "default", description = "Unexpected error", content = {
                @Content(mediaType = "application/json", schema = @Schema(implementation = Error.class))
            })
        },
        security = {
            @SecurityRequirement(name = "pinterest_oauth2", scopes={ "ads:write" })
        }
    )
    @RequestMapping(
        method = RequestMethod.POST,
        value = "/integrations/logs",
        produces = { "application/json" },
        consumes = { "application/json" }
    )
    
    default ResponseEntity<IntegrationLogsSuccessResponse> integrationsLogsPost(
        @Parameter(name = "IntegrationLogsRequest", description = "Ingest log information from external integration application.", required = true) @Valid @RequestBody IntegrationLogsRequest integrationLogsRequest
    ) {
        getRequest().ifPresent(request -> {
            for (MediaType mediaType: MediaType.parseMediaTypes(request.getHeader("Accept"))) {
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"code\" : 1, \"details\" : \"{}\", \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"code\" : 0, \"message\" : \"message\" }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
            }
        });
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }

}