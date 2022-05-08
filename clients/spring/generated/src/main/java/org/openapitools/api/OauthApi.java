/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (5.4.0).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.api;

import org.openapitools.model.Error;
import org.openapitools.model.OauthAccessTokenResponse;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.Parameters;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;
import io.swagger.v3.oas.annotations.tags.Tag;
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

@Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2022-05-08T00:42:02.037116Z[Etc/UTC]")
@Validated
@Tag(name = "oauth", description = "the oauth API")
public interface OauthApi {

    default Optional<NativeWebRequest> getRequest() {
        return Optional.empty();
    }

    /**
     * POST /oauth/token : Generate OAuth access token
     * Generate an OAuth access token by using an authorization code or a refresh token.  See &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Authentication&#39;&gt;Authentication&lt;/a&gt; for more.
     *
     * @param grantType  (required)
     * @return response (status code 200)
     *         or Unexpected error (status code 200)
     */
    @Operation(
        operationId = "oauthToken",
        summary = "Generate OAuth access token",
        tags = { "oauth" },
        responses = {
            @ApiResponse(responseCode = "200", description = "response", content = @Content(mediaType = "application/json", schema = @Schema(implementation =  OauthAccessTokenResponse.class))),
            @ApiResponse(responseCode = "200", description = "Unexpected error", content = @Content(mediaType = "application/json", schema = @Schema(implementation =  Error.class)))
        }
    )
    @RequestMapping(
        method = RequestMethod.POST,
        value = "/oauth/token",
        produces = { "application/json" },
        consumes = { "application/x-www-form-urlencoded" }
    )
    default ResponseEntity<OauthAccessTokenResponse> oauthToken(
        @Parameter(name = "grant_type", description = "", required = true, schema = @Schema(description = "", allowableValues = { "authorization_code", "refresh_token" })) @Valid @RequestPart(value = "grant_type", required = true) String grantType
    ) {
        getRequest().ifPresent(request -> {
            for (MediaType mediaType: MediaType.parseMediaTypes(request.getHeader("Accept"))) {
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    String exampleString = "{ \"access_token\" : \"access_token\", \"scope\" : \"scope\", \"response_type\" : \"authorization_code\", \"token_type\" : \"bearer\", \"expires_in\" : 0 }";
                    ApiUtil.setExampleResponse(request, "application/json", exampleString);
                    break;
                }
            }
        });
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }

}
