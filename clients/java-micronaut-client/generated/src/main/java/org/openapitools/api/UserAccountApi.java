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

package org.openapitools.api;

import io.micronaut.http.annotation.*;
import io.micronaut.core.annotation.*;
import io.micronaut.http.client.annotation.Client;
import io.micronaut.core.convert.format.Format;
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

@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-05-08T00:31:09.924165Z[Etc/UTC]")
@Client("${base-path}")
public interface UserAccountApi {
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
    @Get(uri="/user_account/analytics")
    @Consumes(value={"application/json"})
    Mono<Map<String, AnalyticsMetricsResponse>> userAccountAnalytics(
        @QueryValue(value="start_date") @NotNull @Format("yyyy-MM-dd") LocalDate startDate, 
        @QueryValue(value="end_date") @NotNull @Format("yyyy-MM-dd") LocalDate endDate, 
        @QueryValue(value="from_claimed_content", defaultValue="BOTH") @Nullable String fromClaimedContent, 
        @QueryValue(value="pin_format", defaultValue="ALL") @Nullable String pinFormat, 
        @QueryValue(value="app_types", defaultValue="ALL") @Nullable String appTypes, 
        @QueryValue(value="metric_types") @Nullable List<String> metricTypes, 
        @QueryValue(value="split_field", defaultValue="NO_SPLIT") @Nullable String splitField, 
        @QueryValue(value="ad_account_id") @Nullable @Pattern(regexp="^\\d+$") String adAccountId
  );
    /**
     * Get user account
     * Get account information for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-business-access&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     *
     * @param adAccountId Unique identifier of an ad account. (optional)
     * @return Account
     */
    @Get(uri="/user_account")
    @Consumes(value={"application/json"})
    Mono<Account> userAccountGet(
        @QueryValue(value="ad_account_id") @Nullable @Pattern(regexp="^\\d+$") String adAccountId
  );
}
