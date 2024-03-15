package org.openapitools.api;

import org.openapitools.api.*;

import org.glassfish.jersey.media.multipart.FormDataBodyPart;

import org.openapitools.model.AdAccount;
import org.openapitools.model.AdAccountAnalyticsResponseInner;
import org.openapitools.model.AdAccountCreateRequest;
import org.openapitools.model.AdAccountCreateSubscriptionRequest;
import org.openapitools.model.AdAccountCreateSubscriptionResponse;
import org.openapitools.model.AdAccountGetSubscriptionResponse;
import org.openapitools.model.AdAccountsCatalogsProductGroupsList200Response;
import org.openapitools.model.AdAccountsList200Response;
import org.openapitools.model.AdAccountsSubscriptionsGetList200Response;
import org.openapitools.model.AdArrayResponse;
import org.openapitools.model.AdCreateRequest;
import org.openapitools.model.AdGroupArrayResponse;
import org.openapitools.model.AdGroupAudienceSizingRequest;
import org.openapitools.model.AdGroupAudienceSizingResponse;
import org.openapitools.model.AdGroupCreateRequest;
import org.openapitools.model.AdGroupResponse;
import org.openapitools.model.AdGroupUpdateRequest;
import org.openapitools.model.AdGroupsAnalyticsResponseInner;
import org.openapitools.model.AdGroupsList200Response;
import org.openapitools.model.AdPreviewRequest;
import org.openapitools.model.AdPreviewURLResponse;
import org.openapitools.model.AdResponse;
import org.openapitools.model.AdUpdateRequest;
import org.openapitools.model.AdsAnalyticsCreateAsyncRequest;
import org.openapitools.model.AdsAnalyticsCreateAsyncResponse;
import org.openapitools.model.AdsAnalyticsGetAsyncResponse;
import org.openapitools.model.AdsAnalyticsResponseInner;
import org.openapitools.model.AdsAnalyticsTargetingType;
import org.openapitools.model.AdsCreditRedeemRequest;
import org.openapitools.model.AdsCreditRedeemResponse;
import org.openapitools.model.AdsCreditsDiscountsGet200Response;
import org.openapitools.model.AdsList200Response;
import org.openapitools.model.Audience;
import org.openapitools.model.AudienceCreateCustomRequest;
import org.openapitools.model.AudienceCreateRequest;
import org.openapitools.model.AudienceDefinitionResponse;
import org.openapitools.model.AudienceInsightType;
import org.openapitools.model.AudienceInsightsResponse;
import org.openapitools.model.AudienceUpdateRequest;
import org.openapitools.model.AudiencesList200Response;
import org.openapitools.model.BidFloor;
import org.openapitools.model.BidFloorRequest;
import org.openapitools.model.BillingProfilesGet200Response;
import org.openapitools.model.BulkDownloadRequest;
import org.openapitools.model.BulkDownloadResponse;
import org.openapitools.model.BulkUpsertRequest;
import org.openapitools.model.BulkUpsertResponse;
import org.openapitools.model.BulkUpsertStatusResponse;
import org.openapitools.model.CampaignCreateRequest;
import org.openapitools.model.CampaignCreateResponse;
import org.openapitools.model.CampaignResponse;
import org.openapitools.model.CampaignUpdateRequest;
import org.openapitools.model.CampaignUpdateResponse;
import org.openapitools.model.CampaignsAnalyticsResponseInner;
import org.openapitools.model.CampaignsList200Response;
import org.openapitools.model.ConversionApiResponse;
import org.openapitools.model.ConversionEventResponse;
import org.openapitools.model.ConversionEvents;
import org.openapitools.model.ConversionReportAttributionType;
import org.openapitools.model.ConversionTagCreate;
import org.openapitools.model.ConversionTagListResponse;
import org.openapitools.model.ConversionTagResponse;
import org.openapitools.model.CreateMMMReportRequest;
import org.openapitools.model.CreateMMMReportResponse;
import org.openapitools.model.CustomerList;
import org.openapitools.model.CustomerListRequest;
import org.openapitools.model.CustomerListUpdateRequest;
import org.openapitools.model.CustomerListsList200Response;
import java.util.Date;
import org.openapitools.model.DetailedError;
import org.openapitools.model.Error;
import org.openapitools.model.GetMMMReportResponse;
import org.openapitools.model.Granularity;
import org.openapitools.model.KeywordUpdateBody;
import org.openapitools.model.KeywordsGet200Response;
import org.openapitools.model.KeywordsMetricsArrayResponse;
import org.openapitools.model.KeywordsRequest;
import org.openapitools.model.KeywordsResponse;
import org.openapitools.model.LeadFormResponse;
import org.openapitools.model.LeadFormTestRequest;
import org.openapitools.model.LeadFormTestResponse;
import org.openapitools.model.LeadFormsList200Response;
import java.util.Map;
import org.openapitools.model.MatchType;
import org.openapitools.model.MetricsResponse;
import org.openapitools.model.OrderLine;
import org.openapitools.model.OrderLinesList200Response;
import org.openapitools.model.PageVisitConversionTagsGet200Response;
import org.openapitools.model.ProductGroupAnalyticsResponseInner;
import org.openapitools.model.ProductGroupPromotionCreateRequest;
import org.openapitools.model.ProductGroupPromotionResponse;
import org.openapitools.model.ProductGroupPromotionUpdateRequest;
import org.openapitools.model.ProductGroupPromotionsList200Response;
import org.openapitools.model.SSIOAccountResponse;
import org.openapitools.model.SSIOCreateInsertionOrderRequest;
import org.openapitools.model.SSIOCreateInsertionOrderResponse;
import org.openapitools.model.SSIOEditInsertionOrderRequest;
import org.openapitools.model.SSIOEditInsertionOrderResponse;
import org.openapitools.model.SSIOInsertionOrderStatusResponse;
import org.openapitools.model.SsioInsertionOrdersStatusGetByAdAccount200Response;
import org.openapitools.model.SsioOrderLinesGetByAdAccount200Response;
import org.openapitools.model.TemplatesList200Response;
import org.openapitools.model.TermsOfService;

import java.util.List;
import org.openapitools.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.validation.constraints.*;
import javax.validation.Valid;
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public abstract class AdAccountsApiService {
    public abstract Response adAccountAnalytics( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @NotNull Date startDate, @NotNull Date endDate, @NotNull List<String> columns, @NotNull Granularity granularity,Integer clickWindowDays,Integer engagementWindowDays,Integer viewWindowDays,String conversionReportTime,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adAccountTargetingAnalyticsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @NotNull Date startDate, @NotNull Date endDate, @NotNull  @Size(min=1,max=15)List<AdsAnalyticsTargetingType> targetingTypes, @NotNull List<String> columns, @NotNull Granularity granularity,Integer clickWindowDays,Integer engagementWindowDays,Integer viewWindowDays,String conversionReportTime,ConversionReportAttributionType attributionTypes,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adAccountsCatalogsProductGroupsList( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$") @Size(max=18)String feedProfileId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adAccountsCreate(AdAccountCreateRequest adAccountCreateRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adAccountsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adAccountsList(String bookmark, @Min(1) @Max(250)Integer pageSize,Boolean includeSharedAccounts,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adAccountsSubscriptionsDelById( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$")String subscriptionId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adAccountsSubscriptionsGetById( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$")String subscriptionId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adAccountsSubscriptionsGetList( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Min(1) @Max(250)Integer pageSize,String bookmark,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adAccountsSubscriptionsPost( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,AdAccountCreateSubscriptionRequest adAccountCreateSubscriptionRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adGroupsAnalytics( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @NotNull Date startDate, @NotNull Date endDate, @NotNull  @Size(min=1,max=100)List<@Pattern(regexp = "^\\d+$")@Size(max = 18)String> adGroupIds, @NotNull List<String> columns, @NotNull Granularity granularity,Integer clickWindowDays,Integer engagementWindowDays,Integer viewWindowDays,String conversionReportTime,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adGroupsAudienceSizing( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,AdGroupAudienceSizingRequest adGroupAudienceSizingRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adGroupsBidFloorGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,BidFloorRequest bidFloorRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adGroupsCreate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,List<AdGroupCreateRequest> adGroupCreateRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adGroupsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$") @Size(max=18)String adGroupId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adGroupsList( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Size(min=1,max=100)List<@Pattern(regexp = "^\\d+$")@Size(max = 18)String> campaignIds, @Size(min=1,max=100)List<@Pattern(regexp = "^\\d+$")String> adGroupIds,List<String> entityStatuses, @Min(1) @Max(250)Integer pageSize,String order,String bookmark,Boolean translateInterestsToNames,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adGroupsTargetingAnalyticsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @NotNull  @Size(min=1,max=100)List<@Pattern(regexp = "^\\d+$")@Size(max = 18)String> adGroupIds, @NotNull Date startDate, @NotNull Date endDate, @NotNull  @Size(min=1,max=15)List<AdsAnalyticsTargetingType> targetingTypes, @NotNull List<String> columns, @NotNull Granularity granularity,Integer clickWindowDays,Integer engagementWindowDays,Integer viewWindowDays,String conversionReportTime,ConversionReportAttributionType attributionTypes,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adGroupsUpdate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,List<AdGroupUpdateRequest> adGroupUpdateRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adPreviewsCreate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,AdPreviewRequest adPreviewRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adTargetingAnalyticsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @NotNull  @Size(min=1,max=100)List<@Pattern(regexp = "^\\d+$")String> adIds, @NotNull Date startDate, @NotNull Date endDate, @NotNull  @Size(min=1,max=15)List<AdsAnalyticsTargetingType> targetingTypes, @NotNull List<String> columns, @NotNull Granularity granularity,Integer clickWindowDays,Integer engagementWindowDays,Integer viewWindowDays,String conversionReportTime,ConversionReportAttributionType attributionTypes,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adsAnalytics( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @NotNull Date startDate, @NotNull Date endDate, @NotNull  @Size(min=1,max=100)List<@Pattern(regexp = "^\\d+$")String> adIds, @NotNull List<String> columns, @NotNull Granularity granularity,Integer clickWindowDays,Integer engagementWindowDays,Integer viewWindowDays,String conversionReportTime,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adsCreate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,List<AdCreateRequest> adCreateRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adsCreditRedeem( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,AdsCreditRedeemRequest adsCreditRedeemRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adsCreditsDiscountsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,String bookmark, @Min(1) @Max(250)Integer pageSize,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$") @Size(max=18)String adId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adsList( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Size(min=1,max=100)List<@Pattern(regexp = "^\\d+$")@Size(max = 18)String> campaignIds, @Size(min=1,max=100)List<@Pattern(regexp = "^\\d+$")String> adGroupIds, @Size(min=1,max=100)List<@Pattern(regexp = "^\\d+$")String> adIds,List<String> entityStatuses, @Min(1) @Max(250)Integer pageSize,String order,String bookmark,SecurityContext securityContext) throws NotFoundException;
    public abstract Response adsUpdate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,List<AdUpdateRequest> adUpdateRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response analyticsCreateMmmReport( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,CreateMMMReportRequest createMMMReportRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response analyticsCreateReport( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,AdsAnalyticsCreateAsyncRequest adsAnalyticsCreateAsyncRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response analyticsCreateTemplateReport( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$") @Size(max=18)String templateId,Date startDate,Date endDate,Granularity granularity,SecurityContext securityContext) throws NotFoundException;
    public abstract Response analyticsGetMmmReport( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @NotNull String token,SecurityContext securityContext) throws NotFoundException;
    public abstract Response analyticsGetReport( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @NotNull String token,SecurityContext securityContext) throws NotFoundException;
    public abstract Response audienceInsightsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @NotNull AudienceInsightType audienceInsightType,SecurityContext securityContext) throws NotFoundException;
    public abstract Response audienceInsightsScopeAndTypeGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response audiencesCreate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,AudienceCreateRequest audienceCreateRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response audiencesCreateCustom( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,AudienceCreateCustomRequest audienceCreateCustomRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response audiencesGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$") @Size(max=18)String audienceId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response audiencesList( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,String bookmark,String order, @Min(1) @Max(250)Integer pageSize,String ownershipType,SecurityContext securityContext) throws NotFoundException;
    public abstract Response audiencesUpdate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$") @Size(max=18)String audienceId,AudienceUpdateRequest audienceUpdateRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response billingProfilesGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @NotNull Boolean isActive,String bookmark, @Min(1) @Max(250)Integer pageSize,SecurityContext securityContext) throws NotFoundException;
    public abstract Response bulkDownloadCreate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,BulkDownloadRequest bulkDownloadRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response bulkRequestGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,String bulkRequestId,Boolean includeDetails,SecurityContext securityContext) throws NotFoundException;
    public abstract Response bulkUpsertCreate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,BulkUpsertRequest bulkUpsertRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response campaignTargetingAnalyticsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @NotNull  @Size(min=1,max=100)List<@Pattern(regexp = "^\\d+$")@Size(max = 18)String> campaignIds, @NotNull Date startDate, @NotNull Date endDate, @NotNull  @Size(min=1,max=15)List<AdsAnalyticsTargetingType> targetingTypes, @NotNull List<String> columns, @NotNull Granularity granularity,Integer clickWindowDays,Integer engagementWindowDays,Integer viewWindowDays,String conversionReportTime,ConversionReportAttributionType attributionTypes,SecurityContext securityContext) throws NotFoundException;
    public abstract Response campaignsAnalytics( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @NotNull Date startDate, @NotNull Date endDate, @NotNull  @Size(min=1,max=100)List<@Pattern(regexp = "^\\d+$")@Size(max = 18)String> campaignIds, @NotNull List<String> columns, @NotNull Granularity granularity,Integer clickWindowDays,Integer engagementWindowDays,Integer viewWindowDays,String conversionReportTime,SecurityContext securityContext) throws NotFoundException;
    public abstract Response campaignsCreate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,List<@Valid CampaignCreateRequest> campaignCreateRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response campaignsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$") @Size(max=18)String campaignId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response campaignsList( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Size(min=1,max=100)List<@Pattern(regexp = "^\\d+$")@Size(max = 18)String> campaignIds,List<String> entityStatuses, @Min(1) @Max(250)Integer pageSize,String order,String bookmark,SecurityContext securityContext) throws NotFoundException;
    public abstract Response campaignsUpdate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,List<@Valid CampaignUpdateRequest> campaignUpdateRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response conversionTagsCreate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,ConversionTagCreate conversionTagCreate,SecurityContext securityContext) throws NotFoundException;
    public abstract Response conversionTagsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$") @Size(max=18)String conversionTagId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response conversionTagsList( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,Boolean filterDeleted,SecurityContext securityContext) throws NotFoundException;
    public abstract Response countryKeywordsMetricsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @NotNull String countryCode, @NotNull  @Size(min=1,max=2000)List<String> keywords,SecurityContext securityContext) throws NotFoundException;
    public abstract Response customerListsCreate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,CustomerListRequest customerListRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response customerListsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$") @Size(max=18)String customerListId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response customerListsList( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Min(1) @Max(250)Integer pageSize,String order,String bookmark,SecurityContext securityContext) throws NotFoundException;
    public abstract Response customerListsUpdate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$") @Size(max=18)String customerListId,CustomerListUpdateRequest customerListUpdateRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response eventsCreate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,ConversionEvents conversionEvents,Boolean test,SecurityContext securityContext) throws NotFoundException;
    public abstract Response keywordsCreate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,KeywordsRequest keywordsRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response keywordsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$") @Size(max=18)String campaignId, @Pattern(regexp="^\\d+$") @Size(max=18)String adGroupId, @Size(min=1,max=5)List<MatchType> matchTypes, @Min(1) @Max(250)Integer pageSize,String bookmark,SecurityContext securityContext) throws NotFoundException;
    public abstract Response keywordsUpdate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,KeywordUpdateBody keywordUpdateBody,SecurityContext securityContext) throws NotFoundException;
    public abstract Response leadFormGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$")String leadFormId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response leadFormTestCreate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$")String leadFormId,LeadFormTestRequest leadFormTestRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response leadFormsList( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Min(1) @Max(250)Integer pageSize,String order,String bookmark,SecurityContext securityContext) throws NotFoundException;
    public abstract Response ocpmEligibleConversionTagsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response orderLinesGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$") @Size(max=18)String orderLineId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response orderLinesList( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Min(1) @Max(250)Integer pageSize,String order,String bookmark,SecurityContext securityContext) throws NotFoundException;
    public abstract Response pageVisitConversionTagsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Min(1) @Max(250)Integer pageSize,String order,String bookmark,SecurityContext securityContext) throws NotFoundException;
    public abstract Response productGroupPromotionsCreate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,ProductGroupPromotionCreateRequest productGroupPromotionCreateRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response productGroupPromotionsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Pattern(regexp="^\\d+$") @Size(max=18)String productGroupPromotionId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response productGroupPromotionsList( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Size(min=1,max=100)List<@Pattern(regexp = "^\\d+$")String> productGroupPromotionIds,List<String> entityStatuses, @Pattern(regexp="^\\d+$") @Size(max=18)String adGroupId, @Min(1) @Max(250)Integer pageSize,String order,String bookmark,SecurityContext securityContext) throws NotFoundException;
    public abstract Response productGroupPromotionsUpdate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,ProductGroupPromotionUpdateRequest productGroupPromotionUpdateRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response productGroupsAnalytics( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @NotNull Date startDate, @NotNull Date endDate, @NotNull  @Size(min=1,max=100)List<@Pattern(regexp = "^\\d+$")String> productGroupIds, @NotNull List<String> columns, @NotNull Granularity granularity,Integer clickWindowDays,Integer engagementWindowDays,Integer viewWindowDays,String conversionReportTime,SecurityContext securityContext) throws NotFoundException;
    public abstract Response sandboxDelete( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response ssioAccountsGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response ssioInsertionOrderCreate( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,SSIOCreateInsertionOrderRequest ssIOCreateInsertionOrderRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response ssioInsertionOrderEdit( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,SSIOEditInsertionOrderRequest ssIOEditInsertionOrderRequest,SecurityContext securityContext) throws NotFoundException;
    public abstract Response ssioInsertionOrdersStatusGetByAdAccount( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,String bookmark, @Min(1) @Max(250)Integer pageSize,SecurityContext securityContext) throws NotFoundException;
    public abstract Response ssioInsertionOrdersStatusGetByPinOrderId( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,String pinOrderId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response ssioOrderLinesGetByAdAccount( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,String bookmark, @Min(1) @Max(250)Integer pageSize,String pinOrderId,SecurityContext securityContext) throws NotFoundException;
    public abstract Response templatesList( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId, @Min(1) @Max(250)Integer pageSize,String order,String bookmark,SecurityContext securityContext) throws NotFoundException;
    public abstract Response termsOfServiceGet( @Pattern(regexp="^\\d+$") @Size(max=18)String adAccountId,Boolean includeHtml,String tosType,SecurityContext securityContext) throws NotFoundException;
}
