/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
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
import org.openapitools.model.Account;
import org.openapitools.model.AnalyticsMetricsResponse;
import org.openapitools.model.Error;
import java.time.LocalDate;
import javax.annotation.Generated;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.annotations.*;

@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-07T06:38:54.481854Z[Etc/UTC]")
@Controller("${context-path}")
public class UserAccountController {
    /**
     * Get user account analytics
     * Get analytics for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
     *
     * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD (required)
     * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD (required)
     * @param fromClaimedContent Filter on Pins that match your claimed domain. (optional, default to BOTH)
     * @param pinFormat Pin formats to get data for, default is all. (optional, default to ALL)
     * @param appTypes Apps or devices to get data for, default is all. (optional, default to ALL)
     * @param metricTypes Metric types to get data for, default is all.  (optional)
     * @param splitField How to split the data into groups. Not including this param means data won&#39;t be split. (optional, default to NO_SPLIT)
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @return Map&lt;String, AnalyticsMetricsResponse&gt;
     */
    @ApiOperation(
        value = "Get user account analytics",
        nickname = "userAccountAnalytics",
        notes = "Get analytics for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\".",
        response = AnalyticsMetricsResponse.class,
        responseContainer = "map",
        authorizations = {
            @Authorization(value = "pinterest_oauth2", scopes = {
                @AuthorizationScope(scope = "user_accounts:read", description = "See your user accounts")
            })
        },
        tags={})
    @ApiResponses(value = {
        @ApiResponse(code = 200, message = "Success", response = AnalyticsMetricsResponse.class, responseContainer = "map"),
        @ApiResponse(code = 403, message = "Not authorized to access the user account analytics.", response = Error.class),
        @ApiResponse(code = 0, message = "Unexpected error", response = Error.class)})
    @Get(uri="/user_account/analytics")
    @Produces(value = {"application/json"})
    @Secured(SecurityRule.IS_AUTHENTICATED)
    public Mono<Map<String, AnalyticsMetricsResponse>> userAccountAnalytics(
        @QueryValue(value="start_date") @NotNull @Format("yyyy-MM-dd") LocalDate startDate, 
        @QueryValue(value="end_date") @NotNull @Format("yyyy-MM-dd") LocalDate endDate, 
        @QueryValue(value="from_claimed_content", defaultValue="BOTH") @Nullable String fromClaimedContent, 
        @QueryValue(value="pin_format", defaultValue="ALL") @Nullable String pinFormat, 
        @QueryValue(value="app_types", defaultValue="ALL") @Nullable String appTypes, 
        @QueryValue(value="metric_types") @Nullable List<String> metricTypes, 
        @QueryValue(value="split_field", defaultValue="NO_SPLIT") @Nullable String splitField, 
        @QueryValue(value="ad_account_id") @Nullable @Pattern(regexp="^\\d+$") String adAccountId
    ) {
        // TODO implement userAccountAnalytics() body;
        Mono<Map<String, AnalyticsMetricsResponse>> result = Mono.empty();
        return result;
    }

    /**
     * Get user account
     * Get account information for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-business-access&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     *
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @return Account
     */
    @ApiOperation(
        value = "Get user account",
        nickname = "userAccountGet",
        notes = "Get account information for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". See <a href='/docs/api/v5/#tag/Understanding-business-access'>Understanding Business Access</a> for more information.",
        response = Account.class,
        authorizations = {
            @Authorization(value = "pinterest_oauth2", scopes = {
                @AuthorizationScope(scope = "user_accounts:read", description = "See your user accounts")
            })
        },
        tags={})
    @ApiResponses(value = {
        @ApiResponse(code = 200, message = "response", response = Account.class),
        @ApiResponse(code = 403, message = "Not authorized to access the user account.", response = Error.class),
        @ApiResponse(code = 0, message = "Unexpected error", response = Error.class)})
    @Get(uri="/user_account")
    @Produces(value = {"application/json"})
    @Secured(SecurityRule.IS_AUTHENTICATED)
    public Mono<Account> userAccountGet(
        @QueryValue(value="ad_account_id") @Nullable @Pattern(regexp="^\\d+$") String adAccountId
    ) {
        // TODO implement userAccountGet() body;
        Mono<Account> result = Mono.empty();
        return result;
    }
}
