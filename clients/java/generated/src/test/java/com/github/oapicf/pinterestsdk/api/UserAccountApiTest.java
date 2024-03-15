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


package com.github.oapicf.pinterestsdk.api;

import com.github.oapicf.pinterestsdk.ApiException;
import com.github.oapicf.pinterestsdk.model.Account;
import com.github.oapicf.pinterestsdk.model.AnalyticsMetricsResponse;
import com.github.oapicf.pinterestsdk.model.BoardsUserFollowsList200Response;
import com.github.oapicf.pinterestsdk.model.Error;
import com.github.oapicf.pinterestsdk.model.FollowUserRequest;
import com.github.oapicf.pinterestsdk.model.FollowersList200Response;
import com.github.oapicf.pinterestsdk.model.LinkedBusiness;
import java.time.LocalDate;
import com.github.oapicf.pinterestsdk.model.TopPinsAnalyticsResponse;
import com.github.oapicf.pinterestsdk.model.TopVideoPinsAnalyticsResponse;
import com.github.oapicf.pinterestsdk.model.UserAccountFollowedInterests200Response;
import com.github.oapicf.pinterestsdk.model.UserFollowingFeedType;
import com.github.oapicf.pinterestsdk.model.UserFollowingGet200Response;
import com.github.oapicf.pinterestsdk.model.UserSummary;
import com.github.oapicf.pinterestsdk.model.UserWebsiteSummary;
import com.github.oapicf.pinterestsdk.model.UserWebsiteVerificationCode;
import com.github.oapicf.pinterestsdk.model.UserWebsiteVerifyRequest;
import com.github.oapicf.pinterestsdk.model.UserWebsitesGet200Response;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for UserAccountApi
 */
@Disabled
public class UserAccountApiTest {

    private final UserAccountApi api = new UserAccountApi();

    /**
     * List following boards
     *
     * Get a list of the boards a user follows. The request returns a board summary object array.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void boardsUserFollowsListTest() throws ApiException {
        String bookmark = null;
        Integer pageSize = null;
        Boolean explicitFollowing = null;
        String adAccountId = null;
        BoardsUserFollowsList200Response response = api.boardsUserFollowsList(bookmark, pageSize, explicitFollowing, adAccountId);
        // TODO: test validations
    }

    /**
     * Follow user
     *
     * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Use this request, as a signed-in user, to follow another user.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void followUserUpdateTest() throws ApiException {
        String username = null;
        FollowUserRequest followUserRequest = null;
        UserSummary response = api.followUserUpdate(username, followUserRequest);
        // TODO: test validations
    }

    /**
     * List followers
     *
     * Get a list of your followers.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void followersListTest() throws ApiException {
        String bookmark = null;
        Integer pageSize = null;
        FollowersList200Response response = api.followersList(bookmark, pageSize);
        // TODO: test validations
    }

    /**
     * List linked businesses
     *
     * Get a list of your linked business accounts.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void linkedBusinessAccountsGetTest() throws ApiException {
        List<LinkedBusiness> response = api.linkedBusinessAccountsGet();
        // TODO: test validations
    }

    /**
     * Unverify website
     *
     * Unverifu a website verified by the signed-in user.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void unverifyWebsiteDeleteTest() throws ApiException {
        String website = null;
        api.unverifyWebsiteDelete(website);
        // TODO: test validations
    }

    /**
     * Get user account analytics
     *
     * Get analytics for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void userAccountAnalyticsTest() throws ApiException {
        LocalDate startDate = null;
        LocalDate endDate = null;
        String fromClaimedContent = null;
        String pinFormat = null;
        String appTypes = null;
        String contentType = null;
        String source = null;
        List<String> metricTypes = null;
        String splitField = null;
        String adAccountId = null;
        Map<String, AnalyticsMetricsResponse> response = api.userAccountAnalytics(startDate, endDate, fromClaimedContent, pinFormat, appTypes, contentType, source, metricTypes, splitField, adAccountId);
        // TODO: test validations
    }

    /**
     * Get user account top pins analytics
     *
     * Gets analytics data about a user&#39;s top pins (limited to the top 50). - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void userAccountAnalyticsTopPinsTest() throws ApiException {
        LocalDate startDate = null;
        LocalDate endDate = null;
        String sortBy = null;
        String fromClaimedContent = null;
        String pinFormat = null;
        String appTypes = null;
        String contentType = null;
        String source = null;
        List<String> metricTypes = null;
        Integer numOfPins = null;
        Integer createdInLastNDays = null;
        String adAccountId = null;
        TopPinsAnalyticsResponse response = api.userAccountAnalyticsTopPins(startDate, endDate, sortBy, fromClaimedContent, pinFormat, appTypes, contentType, source, metricTypes, numOfPins, createdInLastNDays, adAccountId);
        // TODO: test validations
    }

    /**
     * Get user account top video pins analytics
     *
     * Gets analytics data about a user&#39;s top video pins (limited to the top 50). - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void userAccountAnalyticsTopVideoPinsTest() throws ApiException {
        LocalDate startDate = null;
        LocalDate endDate = null;
        String sortBy = null;
        String fromClaimedContent = null;
        String pinFormat = null;
        String appTypes = null;
        String contentType = null;
        String source = null;
        List<String> metricTypes = null;
        Integer numOfPins = null;
        Integer createdInLastNDays = null;
        String adAccountId = null;
        TopVideoPinsAnalyticsResponse response = api.userAccountAnalyticsTopVideoPins(startDate, endDate, sortBy, fromClaimedContent, pinFormat, appTypes, contentType, source, metricTypes, numOfPins, createdInLastNDays, adAccountId);
        // TODO: test validations
    }

    /**
     * List following interests
     *
     * Get a list of a user&#39;s following interests in one place.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void userAccountFollowedInterestsTest() throws ApiException {
        String username = null;
        String bookmark = null;
        Integer pageSize = null;
        UserAccountFollowedInterests200Response response = api.userAccountFollowedInterests(username, bookmark, pageSize);
        // TODO: test validations
    }

    /**
     * Get user account
     *
     * Get account information for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/reference/business-access/&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void userAccountGetTest() throws ApiException {
        String adAccountId = null;
        Account response = api.userAccountGet(adAccountId);
        // TODO: test validations
    }

    /**
     * List following
     *
     * Get a list of who a certain user follows.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void userFollowingGetTest() throws ApiException {
        String bookmark = null;
        Integer pageSize = null;
        UserFollowingFeedType feedType = null;
        Boolean explicitFollowing = null;
        String adAccountId = null;
        UserFollowingGet200Response response = api.userFollowingGet(bookmark, pageSize, feedType, explicitFollowing, adAccountId);
        // TODO: test validations
    }

    /**
     * Get user websites
     *
     * Get user websites, claimed or not
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void userWebsitesGetTest() throws ApiException {
        String bookmark = null;
        Integer pageSize = null;
        UserWebsitesGet200Response response = api.userWebsitesGet(bookmark, pageSize);
        // TODO: test validations
    }

    /**
     * Verify website
     *
     * Verify a website as a signed-in user.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void verifyWebsiteUpdateTest() throws ApiException {
        UserWebsiteVerifyRequest userWebsiteVerifyRequest = null;
        UserWebsiteSummary response = api.verifyWebsiteUpdate(userWebsiteVerifyRequest);
        // TODO: test validations
    }

    /**
     * Get user verification code for website claiming
     *
     * Get verification code for user to install on the website to claim it.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void websiteVerificationGetTest() throws ApiException {
        UserWebsiteVerificationCode response = api.websiteVerificationGet();
        // TODO: test validations
    }

}
