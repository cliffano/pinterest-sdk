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

package org.openapitools.api;

import io.micronaut.http.annotation.*;
import io.micronaut.core.annotation.*;
import io.micronaut.http.client.annotation.Client;
import io.micronaut.core.convert.format.Format;
import reactor.core.publisher.Mono;
import org.openapitools.model.AdAccountsCatalogsProductGroupsList200Response;
import org.openapitools.model.Error;
import javax.annotation.Generated;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.Valid;
import javax.validation.constraints.*;

@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Client("${openapi-micronaut-client-base-path}")
public interface ProductGroupsApi {
    /**
     * Get catalog product groups
     * This endpoint is completely deprecated. Please use &lt;a href&#x3D;&#39;/docs/api/v5/#operation/catalogs_product_groups/list&#39;&gt;List product groups&lt;/a&gt; from Catalogs API instead.
     *
     * @param adAccountId Unique identifier of an ad account. (required)
     * @param feedProfileId The feed profile id whose catalog product groups we want to return. (optional)
     * @return AdAccountsCatalogsProductGroupsList200Response
     */
    @Get(uri="/ad_accounts/{ad_account_id}/product_groups/catalogs")
    @Consumes({"application/json"})
    Mono<AdAccountsCatalogsProductGroupsList200Response> adAccountsCatalogsProductGroupsList(
        @PathVariable(name="ad_account_id") @NotNull @Pattern(regexp="^\\d+$") @Size(max=18) String adAccountId, 
        @QueryValue(value="feed_profile_id") @Nullable @Pattern(regexp="^\\d+$") @Size(max=18) String feedProfileId
    );

}