--  Pinterest REST API
--  Pinterest's REST API
--  ------------ EDIT NOTE ------------
--  This file was generated with openapi-generator.  You can modify it to implement
--  the server.  After you modify this file, you should add the following line
--  to the .openapi-generator-ignore file:
--
--  src/-servers.ads
--
--  Then, you can drop this edit note comment.
--  ------------ EDIT NOTE ------------
with Swagger.Servers;
with .Models;
with .Skeletons;

package .Servers is
   pragma Warnings (Off, "*use clause for package*");
   use .Models;
   type Server_Type is limited new .Skeletons.Server_Type with null record;


   --  Get ad account analytics
   --  Get analytics for the specified <code>ad_account_id</code>, filtered by the specified options.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   --  - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days.
   --  - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time.
   overriding
   procedure Ad_Account_Analytics
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Columns : in Swagger.UString_Vectors.Vector;
       Granularity : in Granularity_Type;
       Click_Window_Days : in Swagger.Nullable_Integer;
       Engagement_Window_Days : in Swagger.Nullable_Integer;
       View_Window_Days : in Swagger.Nullable_Integer;
       Conversion_Report_Time : in Swagger.Nullable_UString;
       Result  : out ;
       Context : in out Swagger.Servers.Context_Type);

   --  Get targeting analytics for an ad account
   --  Get targeting analytics for an ad account.
   --  For the requested account and metrics, the response will include the requested metric information
   --  (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. "age_bucket") for applicable values (e.g. "45-49"). <p/>
   --  - The token's user_account must either be the Owner of the specified ad account, or have one
   --  of the necessary roles granted to them via
   --  <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   --  - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days.
   --  - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
   overriding
   procedure Ad_Account_Targeting_Analytics_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Targeting_Types : in .Models.AdsAnalyticsTargetingType_Type_Vectors.Vector;
       Columns : in Swagger.UString_Vectors.Vector;
       Granularity : in Granularity_Type;
       Click_Window_Days : in Swagger.Nullable_Integer;
       Engagement_Window_Days : in Swagger.Nullable_Integer;
       View_Window_Days : in Swagger.Nullable_Integer;
       Conversion_Report_Time : in Swagger.Nullable_UString;
       Attribution_Types : in ConversionReportAttributionType_Type;
       Result  : out .Models.MetricsResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create ad account
   --  Create a new ad account. Different ad accounts can support different currencies, payment methods, etc.
   --  An ad account is needed to create campaigns, ad groups, and ads; other accounts (your employees or partners) can be assigned business access and appropriate roles to access an ad account. <p/>
   --  You can set up up to 50 ad accounts per user. (The user must have a business account to create an ad account.) <p/>
   --  For more, see <a class="reference external" href="https://help.pinterest.com/en/business/article/create-an-advertiser-account">Create an advertiser account</a>.
   overriding
   procedure Ad_Accounts_Create
      (Server : in out Server_Type;
       Ad_Account_Create_Request_Type : in AdAccountCreateRequest_Type;
       Result  : out .Models.AdAccount_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get ad account
   --  Get an ad account
   overriding
   procedure Ad_Accounts_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Result  : out .Models.AdAccount_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List ad accounts
   --  Get a list of the ad_accounts that the "operation user_account" has access to.
   --  - This includes ad_accounts they own and ad_accounts that are owned by others who have granted them <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>.
   overriding
   procedure Ad_Accounts_List
      (Server : in out Server_Type;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Include_Shared_Accounts : in Swagger.Nullable_Boolean;
       Result  : out .Models.AdAccountsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create a request for a Marketing Mix Modeling (MMM) report
   --  This creates an asynchronous mmm report based on the given request. It returns a token that you can use to download
   --  the report when it is ready. NOTE: An additional limit of 5 queries per minute per advertiser applies to this endpoint while it's in beta release.
   overriding
   procedure Analytics_Create_Mmm_Report
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Create_MMMReport_Request_Type : in CreateMMMReportRequest_Type;
       Result  : out .Models.CreateMMMReportResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create async request for an account analytics report
   --  This returns a token that you can use to download the report when it is ready. Note that this endpoint requires the parameters to be passed as JSON-formatted in the request body. This endpoint does not support URL query parameters.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   --  - If granularity is not HOUR, the furthest back you can are allowed to pull data is 914 days before the current date in UTC time and the max time range supported is 186 days.
   --  - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
   --  - If level is PRODUCT_ITEM, the furthest back you can are allowed to pull data is 92 days before the current date in UTC time and the max time range supported is 31 days.
   --  - If level is PRODUCT_ITEM, ad_ids and ad_statuses parameters are not allowed. Any columns related to pin promotion and ad is not allowed either.
   overriding
   procedure Analytics_Create_Report
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Ads_Analytics_Create_Async_Request_Type : in AdsAnalyticsCreateAsyncRequest_Type;
       Result  : out .Models.AdsAnalyticsCreateAsyncResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create async request for an analytics report using a template
   --  This takes a template ID and an optional custom timeframe and constructs an asynchronous report based on the
   --  template. It returns a token that you can use to download the report when it is ready.
   overriding
   procedure Analytics_Create_Template_Report
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Template_Id : in Swagger.UString;
       Start_Date : in Swagger.Nullable_Date;
       End_Date : in Swagger.Nullable_Date;
       Granularity : in Granularity_Type;
       Result  : out .Models.AdsAnalyticsCreateAsyncResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get advertiser Marketing Mix Modeling (MMM) report.
   --  Get an mmm report for an ad account. This returns a URL to an mmm metrics report given a token returned from the
   --  create mmm report endpoint.
   overriding
   procedure Analytics_Get_Mmm_Report
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Token : in Swagger.UString;
       Result  : out .Models.GetMMMReportResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get the account analytics report created by the async call
   --  This returns a URL to an analytics report given a token returned from the post request report creation call. You can use the URL to download the report. The link is valid for five minutes and the report is valid for one hour.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   overriding
   procedure Analytics_Get_Report
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Token : in Swagger.UString;
       Result  : out .Models.AdsAnalyticsGetAsyncResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Delete ads data for ad account in API Sandbox
   --  Delete an ad account and all the ads data associated with that account. 
   --  A string message is returned indicating the status of the delete operation.
   --  
   --  Note: This endpoint is only allowed in the Pinterest API Sandbox (https://api-sandbox.pinterest.com/v5). 
   --  Go to https://developers.pinterest.com/docs/dev-tools/sandbox/ for more information.
   overriding
   procedure Sandbox_Delete
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Result  : out Swagger.UString;
       Context : in out Swagger.Servers.Context_Type);

   --  List templates
   --  Gets all Templates associated with an ad account ID.
   overriding
   procedure Templates_List
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Page_Size : in Swagger.Nullable_Integer;
       Order : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Result  : out .Models.TemplatesList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get ad group analytics
   --  Get analytics for the specified ad groups in the specified <code>ad_account_id</code>, filtered by the specified options.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   --  - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days.
   --  - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
   overriding
   procedure Ad_Groups_Analytics
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Ad_Group_Ids : in Swagger.UString_Vectors.Vector;
       Columns : in Swagger.UString_Vectors.Vector;
       Granularity : in Granularity_Type;
       Click_Window_Days : in Swagger.Nullable_Integer;
       Engagement_Window_Days : in Swagger.Nullable_Integer;
       View_Window_Days : in Swagger.Nullable_Integer;
       Conversion_Report_Time : in Swagger.Nullable_UString;
       Result  : out ;
       Context : in out Swagger.Servers.Context_Type);

   --  Get audience sizing
   --  Get potential audience size for an ad group with given targeting criteria. 
   --  Potential audience size estimates the number of people you may be able to reach per month with your campaign. 
   --  It is based on historical advertising data and the targeting criteria you select.
   --  It does not guarantee results or take into account factors such as bid, budget, schedule, seasonality or product experiments.
   overriding
   procedure Ad_Groups_Audience_Sizing
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Ad_Group_Audience_Sizing_Request_Type : in AdGroupAudienceSizingRequest_Type;
       Result  : out .Models.AdGroupAudienceSizingResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get bid floors
   --  List bid floors for your campaign configuration. Bid floors are given in microcurrency values based on the currency in the bid floor specification. <p/>
   --  <p>Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.</p>
   --  <p>A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.</p>
   --  <p><strong>Equivalency equations</strong>, using dollars as an example currency:</p>
   --  <ul>
   --    <li>$1 = 1,000,000 microdollars</li>
   --    <li>1 microdollar = $0.000001 </li>
   --  </ul>
   --  <p><strong>To convert between currency and microcurrency</strong>, using dollars as an example currency:</p>
   --  <ul>
   --    <li>To convert dollars to microdollars, mutiply dollars by 1,000,000</li>
   --    <li>To convert microdollars to dollars, divide microdollars by 1,000,000</li>
   --  </ul>
   --  For more on bid floors see <a class="reference external" href="https://help.pinterest.com/en/business/article/set-your-bid"> Set your bid</a>.
   overriding
   procedure Ad_Groups_Bid_Floor_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Bid_Floor_Request_Type : in BidFloorRequest_Type;
       Result  : out .Models.BidFloor_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create ad groups
   --  Create multiple new ad groups. All ads in a given ad group will have the same budget, bid, run dates, targeting, and placement (search, browse, other). For more information, <a href="https://help.pinterest.com/en/business/article/campaign-structure" target="_blank"> click here</a>.</p>
   --  <strong>Note:</strong>
   --  - 'bid_in_micro_currency' and 'budget_in_micro_currency' should be expressed in microcurrency amounts based on the currency field set in the advertiser's profile.<p/>
   --  <p>Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.</p>
   --  <p>A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.</p>
   --  <p><strong>Equivalency equations</strong>, using dollars as an example currency:</p>
   --  <ul>
   --    <li>$1 = 1,000,000 microdollars</li>
   --    <li>1 microdollar = $0.000001 </li>
   --  </ul>
   --  <p><strong>To convert between currency and microcurrency</strong>, using dollars as an example currency:</p>
   --  <ul>
   --    <li>To convert dollars to microdollars, mutiply dollars by 1,000,000</li>
   --    <li>To convert microdollars to dollars, divide microdollars by 1,000,000</li>
   --  </ul>
   --  - Ad groups belong to ad campaigns. Some types of campaigns (e.g. budget optimization) have limits on the number of ad groups they can hold. If you exceed those limits, you will get an error message.
   --  - Start and end time cannot be set for ad groups that belong to CBO campaigns. Currently, campaigns with the following objective types: TRAFFIC, AWARENESS, WEB_CONVERSIONS, and CATALOG_SALES will default to CBO.
   overriding
   procedure Ad_Groups_Create
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Ad_Group_Create_Request : in .Models.AdGroupCreateRequest_Type_Vectors.Vector;
       Result  : out .Models.AdGroupArrayResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get ad group
   --  Get a specific ad given the ad ID. If your pin is rejected, rejected_reasons will
   --  contain additional information from the Ad Review process.
   --  For more information about our policies and rejection reasons see the <a href="https://www.pinterest.com/_/_/policy/advertising-guidelines/"
   --  target="_blank">Pinterest advertising standards</a>.
   overriding
   procedure Ad_Groups_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Ad_Group_Id : in Swagger.UString;
       Result  : out .Models.AdGroupResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List ad groups
   --  List ad groups based on provided campaign IDs or ad group IDs.(campaign_ids or ad_group_ids). <p/>
   --  <strong>Note:</strong><p/>
   --  Provide only campaign_id or ad_group_id. Do not provide both.
   overriding
   procedure Ad_Groups_List
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Campaign_Ids : in Swagger.UString_Vectors.Vector;
       Ad_Group_Ids : in Swagger.UString_Vectors.Vector;
       Entity_Statuses : in Swagger.UString_Vectors.Vector;
       Page_Size : in Swagger.Nullable_Integer;
       Order : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Translate_Interests_To_Names : in Swagger.Nullable_Boolean;
       Result  : out .Models.AdGroupsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get targeting analytics for ad groups
   --  Get targeting analytics for one or more ad groups.
   --  For the requested ad group(s) and metrics, the response will include the requested metric information
   --  (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. "age_bucket") for applicable values (e.g. "45-49"). <p/>
   --  - The token's user_account must either be the Owner of the specified ad account, or have one
   --  of the necessary roles granted to them via
   --  <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   --  - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days.
   --  - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
   overriding
   procedure Ad_Groups_Targeting_Analytics_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Ad_Group_Ids : in Swagger.UString_Vectors.Vector;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Targeting_Types : in .Models.AdsAnalyticsTargetingType_Type_Vectors.Vector;
       Columns : in Swagger.UString_Vectors.Vector;
       Granularity : in Granularity_Type;
       Click_Window_Days : in Swagger.Nullable_Integer;
       Engagement_Window_Days : in Swagger.Nullable_Integer;
       View_Window_Days : in Swagger.Nullable_Integer;
       Conversion_Report_Time : in Swagger.Nullable_UString;
       Attribution_Types : in ConversionReportAttributionType_Type;
       Result  : out .Models.MetricsResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Update ad groups
   --  Update multiple existing ad groups.
   overriding
   procedure Ad_Groups_Update
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Ad_Group_Update_Request : in .Models.AdGroupUpdateRequest_Type_Vectors.Vector;
       Result  : out .Models.AdGroupArrayResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create ad preview with pin or image
   --  Create an ad preview given an ad account ID and either an existing organic pin ID or the URL for an image to be used to create the Pin and the ad. <p/>
   --  If you are creating a preview from an existing Pin, that Pin must be promotable: that is, it must have a clickthrough link and meet other requirements. (See <a href="https://help.pinterest.com/en/business/article/promoted-pins-overview" target="_blank">Ads Overview</a>.) <p/>
   --  You can view the returned preview URL on a webpage or iframe for 7 days, after which the URL expires.
   overriding
   procedure Ad_Previews_Create
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Ad_Preview_Request_Type : in AdPreviewRequest_Type;
       Result  : out .Models.AdPreviewURLResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get targeting analytics for ads
   --  Get targeting analytics for one or more ads. For the requested ad(s) and metrics,
   --  the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type
   --  (e.g. "age_bucket") for applicable values (e.g. "45-49"). <p/>
   --  - The token's user_account must either be the Owner of the specified ad account, or have one
   --  of the necessary roles granted to them via
   --  <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   --  - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days.
   --  - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
   overriding
   procedure Ad_Targeting_Analytics_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Ad_Ids : in Swagger.UString_Vectors.Vector;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Targeting_Types : in .Models.AdsAnalyticsTargetingType_Type_Vectors.Vector;
       Columns : in Swagger.UString_Vectors.Vector;
       Granularity : in Granularity_Type;
       Click_Window_Days : in Swagger.Nullable_Integer;
       Engagement_Window_Days : in Swagger.Nullable_Integer;
       View_Window_Days : in Swagger.Nullable_Integer;
       Conversion_Report_Time : in Swagger.Nullable_UString;
       Attribution_Types : in ConversionReportAttributionType_Type;
       Result  : out .Models.MetricsResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get ad analytics
   --  Get analytics for the specified ads in the specified <code>ad_account_id</code>, filtered by the specified options.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   --  - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days.
   --  - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
   overriding
   procedure Ads_Analytics
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Ad_Ids : in Swagger.UString_Vectors.Vector;
       Columns : in Swagger.UString_Vectors.Vector;
       Granularity : in Granularity_Type;
       Click_Window_Days : in Swagger.Nullable_Integer;
       Engagement_Window_Days : in Swagger.Nullable_Integer;
       View_Window_Days : in Swagger.Nullable_Integer;
       Conversion_Report_Time : in Swagger.Nullable_UString;
       Result  : out ;
       Context : in out Swagger.Servers.Context_Type);

   --  Create ads
   --  Create multiple new ads. Request must contain ad_group_id, creative_type, and the source Pin pin_id.
   overriding
   procedure Ads_Create
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Ad_Create_Request : in .Models.AdCreateRequest_Type_Vectors.Vector;
       Result  : out .Models.AdArrayResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get ad
   --  Get a specific ad given the ad ID. If your pin is rejected, rejected_reasons will
   --  contain additional information from the Ad Review process.
   --  For more information about our policies and rejection reasons see the <a href="https://www.pinterest.com/_/_/policy/advertising-guidelines/"
   --  target="_blank">Pinterest advertising standards</a>.
   overriding
   procedure Ads_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Ad_Id : in Swagger.UString;
       Result  : out .Models.AdResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List ads
   --  List ads that meet the filters provided:
   --    - Listed campaign ids or ad group ids or ad ids
   --    - Listed entity statuses <p/>
   --  If no filter is provided, all ads in the ad account are returned. <p/>
   --  <strong>Note:</strong><p/>
   --  Provide only campaign_id or ad_group_id or ad_id. Do not provide more than one type. <p/>
   --  Review status is provided for each ad; if review_status is REJECTED, the rejected_reasons field will contain additional information.
   --  For more, see <a href="https://policy.pinterest.com/en/advertising-guidelines">Pinterest advertising standards</a>.
   overriding
   procedure Ads_List
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Campaign_Ids : in Swagger.UString_Vectors.Vector;
       Ad_Group_Ids : in Swagger.UString_Vectors.Vector;
       Ad_Ids : in Swagger.UString_Vectors.Vector;
       Entity_Statuses : in Swagger.UString_Vectors.Vector;
       Page_Size : in Swagger.Nullable_Integer;
       Order : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Result  : out .Models.AdsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Update ads
   --  Update multiple existing ads
   overriding
   procedure Ads_Update
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Ad_Update_Request : in .Models.AdUpdateRequest_Type_Vectors.Vector;
       Result  : out .Models.AdArrayResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get audience insights
   --  Get Audience Insights for an ad account. The response will return insights for 3 types of audiences: the
   --  ad account's engaged audience on Pinterest, the ad account's total audience on Pinterest and Pinterest's
   --  total audience.<p/>
   --  <a href="https://help.pinterest.com/en/business/article/audience-insights" target="_blank">Learn more about Audience Insights</a>.
   overriding
   procedure Audience_Insights_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Audience_Insight_Type : in AudienceInsightType_Type;
       Result  : out .Models.AudienceInsightsResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get audience insights scope and type
   --  Get the scope and type of available audiences, which along with a date, is an audience that has recently had an interaction (referred to here as a type) on pins. Interacted pins can belong to at least the most common **partner** or **Pinterest** scopes. This means that user interactions made on advertiser or partner pins will have the **partner** scope. You can also have user interactions performed in general on Pinterest with the **Pinterest** scope. In that case, you can then use the returned type and scope values together on requests to other endpoints to retrieve insight metrics for a desired audience.
   overriding
   procedure Audience_Insights_Scope_And_Type_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Result  : out .Models.AudienceDefinitionResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create audience
   --  Create an audience you can use in targeting for specific ad groups. Targeting combines customer information with
   --  the ways users interact with Pinterest to help you reach specific groups of users; you can include or exclude
   --  specific audience_ids when you create an ad group. <p/>
   --  For more, see <a class="reference external" href="https://help.pinterest.com/en/business/article/audience-targeting" target="_blank">Audience targeting</a>.
   overriding
   procedure Audiences_Create
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Audience_Create_Request_Type : in AudienceCreateRequest_Type;
       Result  : out .Models.Audience_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create custom audience
   --  Create a custom audience and find the audiences you want your ads to reach.
   overriding
   procedure Audiences_Create_Custom
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Audience_Create_Custom_Request_Type : in AudienceCreateCustomRequest_Type;
       Result  : out .Models.Audience_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get audience
   --  Get a specific audience given the audience ID.
   overriding
   procedure Audiences_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Audience_Id : in Swagger.UString;
       Result  : out .Models.Audience_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List audiences
   --  Get list of audiences for the ad account.
   overriding
   procedure Audiences_List
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Bookmark : in Swagger.Nullable_UString;
       Order : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Ownership_Type : in Swagger.Nullable_UString;
       Result  : out .Models.AudiencesList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Update audience
   --  Update (edit or remove) an existing targeting audience.
   overriding
   procedure Audiences_Update
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Audience_Id : in Swagger.UString;
       Audience_Update_Request_Type : in AudienceUpdateRequest_Type;
       Result  : out .Models.Audience_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Redeem ad credits
   --  Redeem ads credit on behalf of the ad account id and apply it towards billing.
   --  
   --  <strong>This endpoint might not be available to all apps. <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>
   overriding
   procedure Ads_Credit_Redeem
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Ads_Credit_Redeem_Request_Type : in AdsCreditRedeemRequest_Type;
       Result  : out .Models.AdsCreditRedeemResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get ads credit discounts
   --  Returns the list of discounts applied to the account.
   --  
   --  <strong>This endpoint might not be available to all apps. <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>
   overriding
   procedure Ads_Credits_Discounts_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result  : out .Models.AdsCreditsDiscountsGet200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get billing profiles
   --  Get billing profiles in the advertiser account.
   --  
   --  <strong>This endpoint might not be available to all apps. <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>
   overriding
   procedure Billing_Profiles_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Is_Active : in Boolean;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result  : out .Models.BillingProfilesGet200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get Salesforce account details including bill_to information.
   --  Get Salesforce account details including bill-to information to be used in insertion orders process for <code>ad_account_id</code>.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Finance, Campaign.
   overriding
   procedure Ssio_Accounts_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Result  : out .Models.SSIOAccountResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create insertion order through SSIO.
   --  Create insertion order through SSIO for <code>ad_account_id</code>.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Finance, Campaign.
   overriding
   procedure Ssio_Insertion_Order_Create
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       S_SIOCreate_Insertion_Order_Request_Type : in SSIOCreateInsertionOrderRequest_Type;
       Result  : out .Models.SSIOCreateInsertionOrderResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Edit insertion order through SSIO.
   --  Edit insertion order through SSIO for <code>ad_account_id</code>.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Finance, Campaign.
   overriding
   procedure Ssio_Insertion_Order_Edit
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       S_SIOEdit_Insertion_Order_Request_Type : in SSIOEditInsertionOrderRequest_Type;
       Result  : out .Models.SSIOEditInsertionOrderResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get insertion order status by ad account id.
   --  Get insertion order status for account id <code>ad_account_id</code>.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Finance, Campaign.
   overriding
   procedure Ssio_Insertion_Orders_Status_Get_By_Ad_Account
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result  : out .Models.SsioInsertionOrdersStatusGetByAdAccount200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get insertion order status by pin order id.
   --  Get insertion order status for pin order id <code>pin_order_id</code>.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Finance, Campaign.
   overriding
   procedure Ssio_Insertion_Orders_Status_Get_By_Pin_Order_Id
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Pin_Order_Id : in Swagger.UString;
       Result  : out .Models.SSIOInsertionOrderStatusResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get Salesforce order lines by ad account id.
   --  Get Salesforce order lines for account id <code>ad_account_id</code>.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Finance, Campaign.
   overriding
   procedure Ssio_Order_Lines_Get_By_Ad_Account
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Pin_Order_Id : in Swagger.Nullable_UString;
       Result  : out .Models.SsioOrderLinesGetByAdAccount200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create board section
   --  Create a board section on a board owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   overriding
   procedure Board_Sections_Create
      (Server : in out Server_Type;
       Board_Id : in Swagger.UString;
       Board_Section_Type : in BoardSection_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.BoardSection_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Delete board section
   --  Delete a board section on a board owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   overriding
   procedure Board_Sections_Delete
      (Server : in out Server_Type;
       Board_Id : in Swagger.UString;
       Section_Id : in Swagger.UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Context : in out Swagger.Servers.Context_Type);

   --  List board sections
   --  Get a list of all board sections from a board owned by the "operation user_account" - or a group board that has been shared with this account.
   --  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   overriding
   procedure Board_Sections_List
      (Server : in out Server_Type;
       Board_Id : in Swagger.UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result  : out .Models.BoardSectionsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List Pins on board section
   --  Get a list of the Pins on a board section of a board owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   overriding
   procedure Board_Sections_List_Pins
      (Server : in out Server_Type;
       Board_Id : in Swagger.UString;
       Section_Id : in Swagger.UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result  : out .Models.BoardsListPins200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Update board section
   --  Update a board section on a board owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   overriding
   procedure Board_Sections_Update
      (Server : in out Server_Type;
       Board_Id : in Swagger.UString;
       Section_Id : in Swagger.UString;
       Board_Section_Type : in BoardSection_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.BoardSection_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create board
   --  Create a board owned by the "operation user_account".
   --  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   overriding
   procedure Boards_Create
      (Server : in out Server_Type;
       Board_Type : in Board_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.Board_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Delete board
   --  Delete a board owned by the "operation user_account".
   --  - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   overriding
   procedure Boards_Delete
      (Server : in out Server_Type;
       Board_Id : in Swagger.UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Context : in out Swagger.Servers.Context_Type);

   --  Get board
   --  Get a board owned by the operation user_account - or a group board that has been shared with this account.
   --  - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   overriding
   procedure Boards_Get
      (Server : in out Server_Type;
       Board_Id : in Swagger.UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.Board_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List boards
   --  Get a list of the boards owned by the "operation user_account" + group boards where this account is a collaborator
   --  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   --  Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return.
   --  - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
   overriding
   procedure Boards_List
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Privacy : in Swagger.Nullable_UString;
       Result  : out .Models.BoardsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List Pins on board
   --  Get a list of the Pins on a board owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   overriding
   procedure Boards_List_Pins
      (Server : in out Server_Type;
       Board_Id : in Swagger.UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Creative_Types : in Swagger.UString_Vectors.Vector;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Pin_Metrics : in Swagger.Nullable_Boolean;
       Result  : out .Models.BoardsListPins200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Update board
   --  Update a board owned by the "operating user_account".
   --  - Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   overriding
   procedure Boards_Update
      (Server : in out Server_Type;
       Board_Id : in Swagger.UString;
       Board_Update_Type : in BoardUpdate_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.Board_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get advertiser entities in bulk
   --  Create an asynchronous report that may include information on campaigns, ad groups, product groups, ads,
   --  and/or keywords; can filter by campaigns. Though the entities may be active, archived, or paused,
   --  only active entities will return data.
   overriding
   procedure Bulk_Download_Create
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Bulk_Download_Request_Type : in BulkDownloadRequest_Type;
       Result  : out .Models.BulkDownloadResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Download advertiser entities in bulk
   --  Get the status of a bulk request by <code>request_id</code>, along with a download URL that will allow you to download the
   --  new or updated entity data (campaigns, ad groups, product groups, ads, or keywords).
   overriding
   procedure Bulk_Request_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Bulk_Request_Id : in Swagger.UString;
       Include_Details : in Swagger.Nullable_Boolean;
       Result  : out .Models.BulkUpsertStatusResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create/update ad entities in bulk
   --  Either create or update any combination of campaigns, ad groups, product groups, ads, or keywords.
   --  Note that this request will be processed asynchronously; the response will include a <code>request_id</code>
   --  that can be used to obtain the status of the request.
   overriding
   procedure Bulk_Upsert_Create
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Bulk_Upsert_Request_Type : in BulkUpsertRequest_Type;
       Result  : out .Models.BulkUpsertResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get targeting analytics for campaigns
   --  Get targeting analytics for one or more campaigns.
   --  For the requested account and metrics, the response will include the requested metric information
   --  (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. "age_bucket") for applicable values (e.g. "45-49"). <p/>
   --  - The token's user_account must either be the Owner of the specified ad account, or have one
   --  of the necessary roles granted to them via
   --  <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   --  - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days.
   --  - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
   overriding
   procedure Campaign_Targeting_Analytics_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Campaign_Ids : in Swagger.UString_Vectors.Vector;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Targeting_Types : in .Models.AdsAnalyticsTargetingType_Type_Vectors.Vector;
       Columns : in Swagger.UString_Vectors.Vector;
       Granularity : in Granularity_Type;
       Click_Window_Days : in Swagger.Nullable_Integer;
       Engagement_Window_Days : in Swagger.Nullable_Integer;
       View_Window_Days : in Swagger.Nullable_Integer;
       Conversion_Report_Time : in Swagger.Nullable_UString;
       Attribution_Types : in ConversionReportAttributionType_Type;
       Result  : out .Models.MetricsResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get campaign analytics
   --  Get analytics for the specified campaigns in the specified <code>ad_account_id</code>, filtered by the specified options.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   --  - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days.
   --  - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
   overriding
   procedure Campaigns_Analytics
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Campaign_Ids : in Swagger.UString_Vectors.Vector;
       Columns : in Swagger.UString_Vectors.Vector;
       Granularity : in Granularity_Type;
       Click_Window_Days : in Swagger.Nullable_Integer;
       Engagement_Window_Days : in Swagger.Nullable_Integer;
       View_Window_Days : in Swagger.Nullable_Integer;
       Conversion_Report_Time : in Swagger.Nullable_UString;
       Result  : out ;
       Context : in out Swagger.Servers.Context_Type);

   --  Create campaigns
   --  Create multiple new campaigns. Every campaign has its own campaign_id and houses one or more ad groups, which contain one or more ads.
   --  For more, see <a href="https://help.pinterest.com/en/business/article/set-up-your-campaign/">Set up your campaign</a>. <p/>
   --  <strong>Note:</strong>
   --  - The values for 'lifetime_spend_cap' and 'daily_spend_cap' are microcurrency amounts based on the currency field set in the advertiser's profile. (e.g. USD) <p/>
   --  <p>Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.</p>
   --  <p>A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.</p>
   --  <p><strong>Equivalency equations</strong>, using dollars as an example currency:</p>
   --  <ul>
   --    <li>$1 = 1,000,000 microdollars</li>
   --    <li>1 microdollar = $0.000001 </li>
   --  </ul>
   --  <p><strong>To convert between currency and microcurrency</strong>, using dollars as an example currency:</p>
   --  <ul>
   --    <li>To convert dollars to microdollars, mutiply dollars by 1,000,000</li>
   --    <li>To convert microdollars to dollars, divide microdollars by 1,000,000</li>
   --  </ul>
   overriding
   procedure Campaigns_Create
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Campaign_Create_Request : in .Models.CampaignCreateRequest_Type_Vectors.Vector;
       Result  : out .Models.CampaignCreateResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get campaign
   --  Get a specific campaign given the campaign ID.
   overriding
   procedure Campaigns_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Campaign_Id : in Swagger.UString;
       Result  : out .Models.CampaignResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List campaigns
   --  Get a list of the campaigns in the specified <code>ad_account_id</code>, filtered by the specified options.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   overriding
   procedure Campaigns_List
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Campaign_Ids : in Swagger.UString_Vectors.Vector;
       Entity_Statuses : in Swagger.UString_Vectors.Vector;
       Page_Size : in Swagger.Nullable_Integer;
       Order : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Result  : out .Models.CampaignsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Update campaigns
   --  Update multiple ad campaigns based on campaign_ids. <p/>
   --  <strong>Note:</strong><p/>
   --  - <p>The values for 'lifetime_spend_cap' and 'daily_spend_cap' are microcurrency amounts based on the currency field set in the advertiser's profile. (e.g. USD) <p/>
   --  <p>Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.</p>
   --  <p>A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.</p>
   --  <p><strong>Equivalency equations</strong>, using dollars as an example currency:</p>
   --  <ul>
   --    <li>$1 = 1,000,000 microdollars</li>
   --    <li>1 microdollar = $0.000001 </li>
   --  </ul>
   --  <p><strong>To convert between currency and microcurrency</strong>, using dollars as an example currency:</p>
   --  <ul>
   --    <li>To convert dollars to microdollars, mutiply dollars by 1,000,000</li>
   --    <li>To convert microdollars to dollars, divide microdollars by 1,000,000</li>
   --  </ul>
   overriding
   procedure Campaigns_Update
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Campaign_Update_Request : in .Models.CampaignUpdateRequest_Type_Vectors.Vector;
       Result  : out .Models.CampaignUpdateResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List catalogs
   --  Fetch catalogs owned by the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  <a href='/docs/shopping/catalog/'>Learn more</a>
   overriding
   procedure Catalogs_List
      (Server : in out Server_Type;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.CatalogsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List products for a Product Group
   --  Get a list of product pins for a given Catalogs Product Group Id owned by the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  <a href='/docs/shopping/catalog/'>Learn more</a>
   overriding
   procedure Catalogs_Product_Group_Pins_List
      (Server : in out Server_Type;
       Product_Group_Id : in Swagger.UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.CatalogsProductGroupPinsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create product group
   --  Create product group to use in Catalogs owned by the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  <a href='/docs/shopping/catalog/'>Learn more</a>
   overriding
   procedure Catalogs_Product_Groups_Create
      (Server : in out Server_Type;
       Catalogs_Product_Groups_Create_Request_Type : in CatalogsProductGroupsCreateRequest_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.CatalogsProductGroupsCreate201Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Delete product group
   --  Delete a product group owned by the "operation user_account" from being in use in Catalogs.
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  <a href='/docs/shopping/catalog/'>Learn more</a>
   overriding
   procedure Catalogs_Product_Groups_Delete
      (Server : in out Server_Type;
       Product_Group_Id : in Swagger.UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Context : in out Swagger.Servers.Context_Type);

   --  Get product group
   --  Get a singe product group for a given Catalogs Product Group Id owned by the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  <a href='/docs/shopping/catalog/'>Learn more</a>
   overriding
   procedure Catalogs_Product_Groups_Get
      (Server : in out Server_Type;
       Product_Group_Id : in Swagger.UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.CatalogsProductGroupsCreate201Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List product groups
   --  Get a list of product groups for a given Catalogs Feed Id owned by the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  <a href='/docs/shopping/catalog/'>Learn more</a>
   overriding
   procedure Catalogs_Product_Groups_List
      (Server : in out Server_Type;
       Feed_Id : in Swagger.Nullable_UString;
       Catalog_Id : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.CatalogsProductGroupsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get product counts for a Product Group
   --  Get a product counts for a given Catalogs Product Group owned by the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  <a href='/docs/shopping/catalog/'>Learn more</a>
   overriding
   procedure Catalogs_Product_Groups_Product_Counts_Get
      (Server : in out Server_Type;
       Product_Group_Id : in Swagger.UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.CatalogsProductGroupProductCounts_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Update product group
   --  Update product group owned by the "operation user_account" to use in Catalogs.
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  <a href='/docs/shopping/catalog/'>Learn more</a>
   overriding
   procedure Catalogs_Product_Groups_Update
      (Server : in out Server_Type;
       Product_Group_Id : in Swagger.UString;
       Catalogs_Product_Groups_Update_Request_Type : in CatalogsProductGroupsUpdateRequest_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.CatalogsProductGroupsCreate201Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List processing results for a given feed
   --  Fetch a feed processing results owned by the "operation user_account". Please note that for now the bookmark parameter is not functional and only the first page will be available until it is implemented in some release in the near future.
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  <a href='/docs/shopping/catalog/'>Learn more</a>
   overriding
   procedure Feed_Processing_Results_List
      (Server : in out Server_Type;
       Feed_Id : in Swagger.UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.FeedProcessingResultsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create feed
   --  Create a new feed owned by the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Please, be aware that "default_country"
   --  and "default_locale" are not required in the spec for forward compatibility
   --  but for now the API will not accept requests without those fields.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  For Retail partners, refer to <a href='https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs'>Before you get started with Catalogs</a>. For Hotel parterns, refer to <a href='/docs/shopping/catalog/'>Pinterest API for shopping</a>.
   overriding
   procedure Feeds_Create
      (Server : in out Server_Type;
       Feeds_Create_Request_Type : in FeedsCreateRequest_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.CatalogsFeed_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Delete feed
   --  Delete a feed owned by the "operating user_account".
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  For Retail partners, refer to <a href='https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs'>Before you get started with Catalogs</a>. For Hotel parterns, refer to <a href='/docs/shopping/catalog/'>Pinterest API for shopping</a>.
   overriding
   procedure Feeds_Delete
      (Server : in out Server_Type;
       Feed_Id : in Swagger.UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Context : in out Swagger.Servers.Context_Type);

   --  Get feed
   --  Get a single feed owned by the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  For Retail partners, refer to <a href='https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs'>Before you get started with Catalogs</a>. For Hotel parterns, refer to <a href='/docs/shopping/catalog/'>Pinterest API for shopping</a>.
   overriding
   procedure Feeds_Get
      (Server : in out Server_Type;
       Feed_Id : in Swagger.UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.CatalogsFeed_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List feeds
   --  Fetch feeds owned by the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  For Retail partners, refer to <a href='https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs'>Before you get started with Catalogs</a>. For Hotel parterns, refer to <a href='/docs/shopping/catalog/'>Pinterest API for shopping</a>.
   overriding
   procedure Feeds_List
      (Server : in out Server_Type;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Catalog_Id : in Swagger.Nullable_UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.FeedsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Update feed
   --  Update a feed owned by the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  For Retail partners, refer to <a href='https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs'>Before you get started with Catalogs</a>. For Hotel parterns, refer to <a href='/docs/shopping/catalog/'>Pinterest API for shopping</a>.
   overriding
   procedure Feeds_Update
      (Server : in out Server_Type;
       Feed_Id : in Swagger.UString;
       Feeds_Update_Request_Type : in FeedsUpdateRequest_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.CatalogsFeed_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get catalogs item batch status
   --  Get a single catalogs items batch owned by the "operating user_account". <a href="/docs/shopping/catalog/#Update%20items%20in%20batch" target="_blank">See detailed documentation here.</a>
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   overriding
   procedure Items_Batch_Get
      (Server : in out Server_Type;
       Batch_Id : in Swagger.UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.CatalogsItemsBatch_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Operate on item batch
   --  This endpoint supports multiple operations on a set of one or more catalog items owned by the "operation user_account". <a href="/docs/shopping/catalog/#Update%20items%20in%20batch" target="_blank">See detailed documentation here.</a>
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   overriding
   procedure Items_Batch_Post
      (Server : in out Server_Type;
       Items_Batch_Post_Request_Type : in ItemsBatchPostRequest_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.CatalogsItemsBatch_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get catalogs items
   --  Get the items of the catalog owned by the "operation user_account". <a href="/docs/shopping/catalog/#Update%20items%20in%20batch" target="_blank">See detailed documentation here.</a>
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   overriding
   procedure Items_Get
      (Server : in out Server_Type;
       Country : in Swagger.UString;
       Language : in Swagger.UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Item_Ids : in Swagger.UString_Vectors.Vector;
       Filters : in CatalogsItemsFilters_Type;
       Result  : out .Models.CatalogsItems_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List item issues for a given processing result
   --  List item validation issues for a given feed processing result owned by the "operation user_account". Up to 20 random samples of affected items are returned for each error and warning code. Please note that for now query parameters 'item_numbers' and 'item_validation_issue' cannot be used simultaneously until it is implemented in some release in the future.
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  <a href='/docs/shopping/catalog/'>Learn more</a>
   overriding
   procedure Items_Issues_List
      (Server : in out Server_Type;
       Processing_Result_Id : in Swagger.UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Item_Numbers : in Integer_Vectors.Vector;
       Item_Validation_Issue : in CatalogsItemValidationIssue_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.ItemsIssuesList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List filtered products
   --  List products Pins owned by the "operation user_account" that meet the criteria specified in the Catalogs Product Group Filter given in the request.
   --  - This endpoint has been implemented in POST to allow for complex filters. This specific POST endpoint is designed to be idempotent.
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account: Owner, Admin, Catalogs Manager.
   --  
   --  <a href='/docs/shopping/catalog/'>Learn more</a>
   overriding
   procedure Products_By_Product_Group_Filter_List
      (Server : in out Server_Type;
       Catalogs_List_Products_By_Filter_Request_Type : in CatalogsListProductsByFilterRequest_Type;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.CatalogsProductGroupPinsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Send conversions
   --  The Pinterest API offers advertisers a way to send Pinterest their conversion information (including web conversions, in-app conversions, or even offline conversions) based on their <code>ad_account_id</code>. The request body should be a JSON object.
   --  - This endpoint requires an <code>access_token</code> be generated through Ads Manager. Review the <a href="/docs/conversions/conversions/">Conversions Guide</a> for more details.
   --  - The token's <code>user_account</code> must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Audience, Campaign. (Note that the token can be used across multiple ad accounts under an user ID.)
   --  - This endpoint has a rate limit of 5,000 calls per minute per ad account.
   --  - If the merchant is submitting this information using both Pinterest conversion tags and the Pinterest API, Pinterest will remove duplicate information before reporting. (Note that events that took place offline cannot be deduplicated.)
   overriding
   procedure Events_Create
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Conversion_Events_Type : in ConversionEvents_Type;
       Test : in Swagger.Nullable_Boolean;
       Result  : out .Models.ConversionApiResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create conversion tag
   --  Create a conversion tag, also known as <a href="https://help.pinterest.com/en/business/article/set-up-the-pinterest-tag" target="_blank">Pinterest tag</a>, with the option to enable enhanced match.<p/>
   --  The Pinterest Tag tracks actions people take on the ad account’s website after they view the ad account's ad on Pinterest. The advertiser needs to customize this tag to track conversions.<p/>
   --  For more information, see:<p/>
   --  <a class="reference external" href="https://help.pinterest.com/en/business/article/set-up-the-pinterest-tag">Set up the Pinterest tag</a><p/>
   --  <a class="reference external" href="https://developers.pinterest.com/docs/conversions/pinterest-tag/">Pinterest Tag</a><p/>
   --  <a class="reference external" href="https://developers.pinterest.com/docs/conversions/enhanced-match/">Enhanced match</a>
   overriding
   procedure Conversion_Tags_Create
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Conversion_Tag_Create_Type : in ConversionTagCreate_Type;
       Result  : out .Models.ConversionTagResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get conversion tag
   --  Get information about an existing conversion tag.
   overriding
   procedure Conversion_Tags_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Conversion_Tag_Id : in Swagger.UString;
       Result  : out .Models.ConversionTagResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get conversion tags
   --  List conversion tags associated with an ad account.
   overriding
   procedure Conversion_Tags_List
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Filter_Deleted : in Swagger.Nullable_Boolean;
       Result  : out .Models.ConversionTagListResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get Ocpm eligible conversion tags
   --  Get Ocpm eligible conversion tag events for an ad account.
   overriding
   procedure Ocpm_Eligible_Conversion_Tags_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Result  : out ;
       Context : in out Swagger.Servers.Context_Type);

   --  Get page visit conversion tags
   --  Get all page visit conversion tag events for an ad account.
   overriding
   procedure Page_Visit_Conversion_Tags_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Page_Size : in Swagger.Nullable_Integer;
       Order : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Result  : out .Models.PageVisitConversionTagsGet200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create customer lists
   --  <p>Create a customer list from your records(hashed or plain-text email addresses, or hashed MAIDs or IDFAs).</p>
   --  <p>A customer list is one of the four types of Pinterest audiences: for more information, see <a href="https://help.pinterest.com/en/business/article/audience-targeting" target="_blank">Audience targeting</a>
   --  or the <a href="/docs/ads/targeting/#Audiences" target="_blank">Audiences</a> section of the ads management guide.<p/>
   --  <p><b>Please review our <u><a href="https://help.pinterest.com/en/business/article/audience-targeting#section-13341" target="_blank">requirements</a></u> for what type of information is allowed when uploading a customer list.</b></p>
   --  <p>When you create a customer list, the system scans the list for existing Pinterest accounts;
   --  the list must include at least 100 Pinterest accounts. Your original list will be deleted when the matching process
   --  is complete. The filtered list – containing only the Pinterest accounts that were included in your starting
   --  list – is what will be used to create the audience.</p>
   --  <p>Note that once you have created your customer list, you must convert it into an audience (of the “CUSTOMER_LIST” type)
   --  using the <a href="#operation/create_audience_handler">create audience endpoint</a> before it can be used.</p>
   overriding
   procedure Customer_Lists_Create
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Customer_List_Request_Type : in CustomerListRequest_Type;
       Result  : out .Models.CustomerList_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get customer list
   --  Gets a specific customer list given the customer list ID.
   overriding
   procedure Customer_Lists_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Customer_List_Id : in Swagger.UString;
       Result  : out .Models.CustomerList_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get customer lists
   --  <p>Get a set of customer lists including id and name based on the filters provided.</p>
   --  <p>(Customer lists are a type of audience.) For more information, see
   --  <a href="https://help.pinterest.com/en/business/article/audience-targeting" target="_blank">Audience targeting</a>
   --   or the <a href="/docs/ads/targeting/#Audiences" target="_blank">Audiences</a>
   --  section of the ads management guide.</p>
   overriding
   procedure Customer_Lists_List
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Page_Size : in Swagger.Nullable_Integer;
       Order : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Result  : out .Models.CustomerListsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Update customer list
   --  <p>Append or remove records to/from an existing customer list. (A customer list is one of the four types of Pinterest audiences.)</p>
   --  <p>When you add records to an existing customer list, the system scans the additions for existing Pinterest
   --  accounts; those are the records that will be added to your “CUSTOMER_LIST” audience. Your original list of records
   --  to add will be deleted when the matching process is complete.</p>
   --  <p>For more information, see <a href="https://help.pinterest.com/en/business/article/audience-targeting" target="_blank">Audience targeting</a>
   --  or the <a href="/docs/ads/targeting/#Audiences" target="_blank">Audiences</a>
   --  section of the ads management guide.</p>
   overriding
   procedure Customer_Lists_Update
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Customer_List_Id : in Swagger.UString;
       Customer_List_Update_Request_Type : in CustomerListUpdateRequest_Type;
       Result  : out .Models.CustomerList_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Delete commerce integration
   --  Delete commerce integration metadata for the given external business ID.
   --  Note: If you're interested in joining the beta, please reach out to your Pinterest account manager.
   overriding
   procedure Integrations_Commerce_Del
      (Server : in out Server_Type;
       External_Business_Id : in Swagger.UString;
       Context : in out Swagger.Servers.Context_Type);

   --  Get commerce integration
   --  Get commerce integration metadata associated with the given external business ID.
   --  Note: If you're interested in joining the beta, please reach out to your Pinterest account manager.
   overriding
   procedure Integrations_Commerce_Get
      (Server : in out Server_Type;
       External_Business_Id : in Swagger.UString;
       Result  : out .Models.IntegrationMetadata_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Update commerce integration
   --  Update commerce integration metadata for the given external business ID.
   --  Note: If you're interested in joining the beta, please reach out to your Pinterest account manager.
   overriding
   procedure Integrations_Commerce_Patch
      (Server : in out Server_Type;
       External_Business_Id : in Swagger.UString;
       Integration_Request_Patch_Type : in IntegrationRequestPatch_Type;
       Result  : out .Models.IntegrationMetadata_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create commerce integration
   --  Create commerce integration metadata to link an external business ID with a Pinterest merchant & ad account.
   --  Note: If you're interested in joining the beta, please reach out to your Pinterest account manager.
   overriding
   procedure Integrations_Commerce_Post
      (Server : in out Server_Type;
       Integration_Request_Type : in IntegrationRequest_Type;
       Result  : out .Models.IntegrationMetadata_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get integration metadata
   --  Get integration metadata by ID.
   --  Note: If you're interested in joining the beta, please reach out to your Pinterest account manager.
   overriding
   procedure Integrations_Get_By_Id
      (Server : in out Server_Type;
       Id : in Swagger.UString;
       Result  : out .Models.IntegrationRecord_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get integration metadata list
   --  Get integration metadata list.
   --  Note: If you're interested in joining the beta, please reach out to your Pinterest account manager.
   overriding
   procedure Integrations_Get_List
      (Server : in out Server_Type;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result  : out .Models.IntegrationsGetList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Receives batched logs from integration applications.
   --  This endpoint receives batched logs from integration applications on partner platforms.
   --  Note: If you're interested in joining the beta, please reach out to your Pinterest account manager.
   overriding
   procedure Integrations_Logs_Post
      (Server : in out Server_Type;
       Integration_Logs_Request_Type : in IntegrationLogsRequest_Type;
       Result  : out .Models.IntegrationLogsSuccessResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get country's keyword metrics
   --  See keyword metrics for a specified country, aggregated across all of Pinterest.
   --  (Definitions are available from the "Get delivery metrics definitions"
   --  <a href="/docs/api/v5/#operation/delivery_metrics/get">API endpoint</a>).
   overriding
   procedure Country_Keywords_Metrics_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Country_Code : in Swagger.UString;
       Keywords : in Swagger.UString_Vectors.Vector;
       Result  : out .Models.KeywordsMetricsArrayResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create keywords
   --  <p>Create keywords for following entity types(advertiser, campaign, ad group or ad).</p> <p>For more information, see <a target="_blank" href="https://help.pinterest.com/en/business/article/keyword-targeting">Keyword targeting</a>.</p>
   --  <p><b>Notes:</b></p> <ul style="list-style-type: square;"> <li>Advertisers and campaigns can only be assigned keywords with excluding ('_NEGATIVE').</li> <li>All keyword match types are available for ad groups.</li> </ul> <p>For more information on match types, see <a  target="_blank" href="/docs/ads/targeting/#Match%20type%20and%20targeting%20level">match type enums</a>.</p>
   --  <p><b>Returns:</b></p> <ul style="list-style-type: square;"> <li><p>A successful call returns an object containing an array of new keyword objects and an empty &quot;errors&quot; object array.</p></li> <li><p>An unsuccessful call returns an empty keywords array, and, instead, inserts the entire object with nulled/negated properties into the &quot;errors&quot; object array:</p> <pre class="last literal-block"> { "keywords": [], "errors": [ { "data": { "archived": null, "match_type": "EXACT", "parent_type": null, "value": "foobar", "parent_id": null, "type": "keyword", "id": null }, "error_messages": [ "Advertisers and Campaigns only accept excluded targeting attributes." ] } } </pre></li> </ul>
   --  <p><b>Rate limit</b>: <a href="/docs/redoc/#tag/Rate-Limits">WRITE</a>.</p>
   overriding
   procedure Keywords_Create
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Keywords_Request_Type : in KeywordsRequest_Type;
       Result  : out .Models.KeywordsResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get keywords
   --  <p>Get a list of keywords based on the filters provided. If no filter is provided, it will default to the ad_account_id filter, which means it will only return keywords that specifically have parent_id set to the ad_account_id. Note: Keywords can have ad_account_ids, campaign_ids, and ad_group_ids set as their parent_ids. Keywords created through Ads Manager will have their parent_id set to an ad_group_id, not ad_account_id.</p>
   --  <p>For more information, see <a target="_blank" href="https://help.pinterest.com/en/business/article/keyword-targeting">Keyword targeting</a>.</p>
   --  <p><b>Notes:</b></p> <ul style="list-style-type: square;"> <li>Advertisers and campaigns can only be assigned keywords with excluding ('_NEGATIVE').</li> <li>All keyword match types are available for ad groups.</li> </ul> <p>For more information on match types, see <a target="_blank" href="/docs/ads/targeting/#Match%20type%20and%20targeting%20level">match type enums</a>.</p>
   --  <p><b>Returns:</b></p> <ul style="list-style-type: square;"> <li><p>A successful call returns an object containing an array of new keyword objects and an empty &quot;errors&quot; object array.</p></li> <li><p>An unsuccessful call returns an empty keywords array, and, instead, inserts the entire object with nulled/negated properties into the &quot;errors&quot; object array:</p> <pre class="last literal-block"> { "keywords": [], "errors": [ { "data": { "archived": null, "match_type": "EXACT", "parent_type": null, "value": "foobar", "parent_id": null, "type": "keyword", "id": null }, "error_messages": [ "Advertisers and Campaigns only accept excluded targeting attributes." ] } } </pre></li> </ul>
   overriding
   procedure Keywords_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Campaign_Id : in Swagger.Nullable_UString;
       Ad_Group_Id : in Swagger.Nullable_UString;
       Match_Types : in .Models.MatchType_Type_Vectors.Vector;
       Page_Size : in Swagger.Nullable_Integer;
       Bookmark : in Swagger.Nullable_UString;
       Result  : out .Models.KeywordsGet200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Update keywords
   --  <p>Update one or more keywords' bid and archived fields.</p> <p>Archiving a keyword effectively deletes it - keywords no longer receive metrics and no longer visible within the parent entity's keywords list.</p>
   overriding
   procedure Keywords_Update
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Keyword_Update_Body_Type : in KeywordUpdateBody_Type;
       Result  : out .Models.KeywordsResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List trending keywords
   --  <p>Get the top trending search keywords among the Pinterest user audience.</p>
   --  <p>Trending keywords can be used to inform ad targeting, budget strategy, and creative decisions about which products and Pins will resonate with your audience.</p>
   --  <p>Geographic, demographic and interest-based filters are available to narrow down to the top trends among a specific audience. Multiple trend types are supported that can be used to identify newly-popular, evergreen or seasonal keywords.</p>
   --  <p>For an interactive way to explore this data, please visit <a href="https://trends.pinterest.com">trends.pinterest.com</a>.
   overriding
   procedure Trending_Keywords_List
      (Server : in out Server_Type;
       Region : in TrendsSupportedRegion_Type;
       Trend_Type : in TrendType_Type;
       Interests : in Swagger.UString_Vectors.Vector;
       Genders : in Swagger.UString_Vectors.Vector;
       Ages : in Swagger.UString_Vectors.Vector;
       Normalize_Against_Group : in Swagger.Nullable_Boolean;
       Limit : in Swagger.Nullable_Integer;
       Result  : out .Models.TrendingKeywordsResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Delete lead ads subscription
   --  Delete an existing lead ads webhook subscription by ID.
   --  - Only requests for the OWNER or ADMIN of the ad_account will be allowed.
   --  
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>
   overriding
   procedure Ad_Accounts_Subscriptions_Del_By_Id
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Subscription_Id : in Swagger.UString;
       Context : in out Swagger.Servers.Context_Type);

   --  Get lead ads subscription
   --  Get a specific lead ads subscription record.
   --  - Only requests for the OWNER or ADMIN of the ad_account will be allowed.
   --  
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>
   overriding
   procedure Ad_Accounts_Subscriptions_Get_By_Id
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Subscription_Id : in Swagger.UString;
       Result  : out .Models.AdAccountGetSubscriptionResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get lead ads subscriptions
   --  Get the advertiser's list of lead ads subscriptions.
   --  - Only requests for the OWNER or ADMIN of the ad_account will be allowed.
   --  
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>
   overriding
   procedure Ad_Accounts_Subscriptions_Get_List
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Page_Size : in Swagger.Nullable_Integer;
       Bookmark : in Swagger.Nullable_UString;
       Result  : out .Models.AdAccountsSubscriptionsGetList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create lead ads subscription
   --  Create a lead ads webhook subscription.
   --  - Only requests for the OWNER or ADMIN of the ad_account will be allowed.
   --  - Advertisers can set up multiple integrations using ad_account_id + lead_form_id but only one integration per unique records.
   --  
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>
   overriding
   procedure Ad_Accounts_Subscriptions_Post
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Ad_Account_Create_Subscription_Request_Type : in AdAccountCreateSubscriptionRequest_Type;
       Result  : out .Models.AdAccountCreateSubscriptionResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get lead form by id
   --  Gets a lead form given it's ID. It must also be associated with the provided ad account ID.
   --  Retrieving an advertiser's lead form will only contain results if you're a part of the Lead ads beta. If you're interested in joining the beta, please reach out to your Pinterest account manager.
   overriding
   procedure Lead_Form_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Lead_Form_Id : in Swagger.UString;
       Result  : out .Models.LeadFormResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create lead form test data
   --  Create lead form test data based on the list of answers provided as part of the body.
   --  - List of answers should follow the questions creation order.
   --  
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>
   overriding
   procedure Lead_Form_Test_Create
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Lead_Form_Id : in Swagger.UString;
       Lead_Form_Test_Request_Type : in LeadFormTestRequest_Type;
       Result  : out .Models.LeadFormTestResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get lead forms
   --  Gets all Lead Forms associated with an ad account ID.
   --  Retrieving an advertiser's list of lead forms will only contain results if you're a part of the Lead ads beta.  If you're interested in joining the beta, please reach out to your Pinterest account manager.
   overriding
   procedure Lead_Forms_List
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Page_Size : in Swagger.Nullable_Integer;
       Order : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Result  : out .Models.LeadFormsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Register media upload
   --  Register your intent to upload media
   --  
   --  The response includes all of the information needed to upload the media
   --  to Pinterest.
   --  
   --  To upload the media, make an HTTP POST request (using <tt>curl</tt>, for
   --  example) to <tt>upload_url</tt> using the <tt>Content-Type</tt> header
   --  value. Send the media file's contents as the request's <tt>file</tt>
   --  parameter and also include all of the parameters from
   --  <tt>upload_parameters</tt>.
   --  
   --  <strong><a href='/docs/content/content-creation/#Creating%20video%20Pins'>Learn more</a></strong> about video Pin creation.
   overriding
   procedure Media_Create
      (Server : in out Server_Type;
       Media_Upload_Request_Type : in MediaUploadRequest_Type;
       Result  : out .Models.MediaUpload_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get media upload details
   --  Get details for a registered media upload, including its current status.
   --  
   --  <strong><a href='/docs/content/content-creation/#Creating%20video%20Pins'>Learn more</a></strong> about video Pin creation.
   overriding
   procedure Media_Get
      (Server : in out Server_Type;
       Media_Id : in Swagger.UString;
       Result  : out .Models.MediaUploadDetails_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List media uploads
   --  List media uploads filtered by given parameters.
   --  
   --  <strong><a href='/docs/content/content-creation/#Creating%20video%20Pins'>Learn more</a></strong> about video Pin creation.
   overriding
   procedure Media_List
      (Server : in out Server_Type;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result  : out .Models.MediaList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Generate OAuth access token
   --  Generate an OAuth access token by using an authorization code or a refresh token.
   --  
   --  IMPORTANT: You need to start the OAuth flow via www.pinterest.com/oauth before calling this endpoint (or have an existing refresh token).
   --  
   --  See <a href='/docs/getting-started/authentication/'>Authentication</a> for more.
   --  
   --  <strong>Parameter <i>refresh_on</i> and its corresponding response type <i>everlasting_refresh</i> are now available to all apps! Later this year, continuous refresh will become the default behavior (ie you will no longer need to send this parameter). <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>
   overriding
   procedure Oauth_Token
      (Server : in out Server_Type;
       Grant_Type : in Swagger.UString;
       Result  : out .Models.OauthAccessTokenResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get order line
   --  Get a specific existing order line associated with an ad account.
   overriding
   procedure Order_Lines_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Order_Line_Id : in Swagger.UString;
       Result  : out .Models.OrderLine_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get order lines
   --  List existing order lines associated with an ad account.
   overriding
   procedure Order_Lines_List
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Page_Size : in Swagger.Nullable_Integer;
       Order : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Result  : out .Models.OrderLinesList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get Pin analytics
   --  Get analytics for a Pin owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href="https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list">List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account:
   --  
   --  - For Pins on public or protected boards: Admin, Analyst.
   --  - For Pins on secret boards: Admin.
   --  
   --  If Pin was created before <code>2023-03-20</code> lifetime metrics will only be available for Video and Idea Pin formats. Lifetime metrics are available for all Pin formats since then.
   overriding
   procedure Pins_Analytics
      (Server : in out Server_Type;
       Pin_Id : in Swagger.UString;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Metric_Types : in .Models.PinsAnalyticsMetricTypesParameterInner_Type_Vectors.Vector;
       App_Types : in Swagger.Nullable_UString;
       Split_Field : in Swagger.Nullable_UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out ;
       Context : in out Swagger.Servers.Context_Type);

   --  Create Pin
   --  Create a Pin on a board or board section owned by the "operation user_account".
   --  
   --  Note: If the current "operation user_account" (defined by the access token) has access to another user's Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account's permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id=12345&...).
   --  
   --  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called 'curated content', please use our <a href='/docs/add-ons/save-button'>Save button</a> instead. For more tips on creating fresh content for Pinterest, review our <a href='/docs/content/content-creation/'>Content App Solutions Guide</a>.
   --  
   --  <strong><a href='/docs/content/content-creation/#Creating%20video%20Pins'>Learn more</a></strong> about video Pin creation.
   overriding
   procedure Pins_Create
      (Server : in out Server_Type;
       Pin_Create_Type : in PinCreate_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.Pin_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Delete Pin
   --  Delete a Pins owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account:
   --  
   --  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager.
   --  - For Pins on secret boards: Owner, Admin.
   overriding
   procedure Pins_Delete
      (Server : in out Server_Type;
       Pin_Id : in Swagger.UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Context : in out Swagger.Servers.Context_Type);

   --  Get Pin
   --  Get a Pin owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account:
   --  
   --  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager.
   --  - For Pins on secret boards: Owner, Admin.
   overriding
   procedure Pins_Get
      (Server : in out Server_Type;
       Pin_Id : in Swagger.UString;
       Pin_Metrics : in Swagger.Nullable_Boolean;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.Pin_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List Pins
   --  Get a list of the Pins owned by the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   --  - All Pins owned by the "operation user_account" are included, regardless of who owns the board they are on.
   --  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   overriding
   procedure Pins_List
      (Server : in out Server_Type;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Pin_Filter : in Swagger.Nullable_UString;
       Include_Protected_Pins : in Swagger.Nullable_Boolean;
       Pin_Type : in Swagger.Nullable_UString;
       Creative_Types : in Swagger.UString_Vectors.Vector;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Pin_Metrics : in Swagger.Nullable_Boolean;
       Result  : out .Models.PinsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Save Pin
   --  Save a Pin on a board or board section owned by the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account:
   --  
   --  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager.
   --  - For Pins on secret boards: Owner, Admin.
   --  
   --  - Any Pin type can be saved: image Pin, video Pin, Idea Pin, product Pin, etc.
   --  - Any public Pin can be saved given a pin ID.
   overriding
   procedure Pins_Save
      (Server : in out Server_Type;
       Pin_Id : in Swagger.UString;
       Pins_Save_Request_Type : in PinsSaveRequest_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.Pin_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Update Pin
   --  Update a pin owned by the "operating user_account".
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account:
   --  
   --  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager.
   --  - For Pins on secret boards: Owner, Admin.
   --  
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>
   overriding
   procedure Pins_Update
      (Server : in out Server_Type;
       Pin_Id : in Swagger.UString;
       Pin_Update_Type : in PinUpdate_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.Pin_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Create product group promotions
   --  Add one or more product groups from your catalog to an existing ad group. (Product groups added to an ad group are a 'product group promotion.')
   overriding
   procedure Product_Group_Promotions_Create
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Product_Group_Promotion_Create_Request_Type : in ProductGroupPromotionCreateRequest_Type;
       Result  : out .Models.ProductGroupPromotionResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get a product group promotion by id
   --  Get a product group promotion by id
   overriding
   procedure Product_Group_Promotions_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Product_Group_Promotion_Id : in Swagger.UString;
       Result  : out .Models.ProductGroupPromotionResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get product group promotions
   --  List existing product group promotions associated with an ad account.
   --  
   --  Include either ad_group_id or product_group_promotion_ids in your request.
   --  
   --  <b>Note:</b> ad_group_ids and product_group_promotion_ids are mutually exclusive parameters.
   --  Only provide one. If multiple options are provided, product_group_promotion_ids takes precedence over ad_group_ids. If none are provided, the endpoint returns an error.
   overriding
   procedure Product_Group_Promotions_List
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Product_Group_Promotion_Ids : in Swagger.UString_Vectors.Vector;
       Entity_Statuses : in Swagger.UString_Vectors.Vector;
       Ad_Group_Id : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Order : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Result  : out .Models.ProductGroupPromotionsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Update product group promotions
   --  Update multiple existing Product Group Promotions (by product_group_id)
   overriding
   procedure Product_Group_Promotions_Update
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Product_Group_Promotion_Update_Request_Type : in ProductGroupPromotionUpdateRequest_Type;
       Result  : out .Models.ProductGroupPromotionResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get product group analytics
   --  Get analytics for the specified product groups in the specified <code>ad_account_id</code>, filtered by the specified options.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   --  - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days.
   --  - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
   overriding
   procedure Product_Groups_Analytics
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Product_Group_Ids : in Swagger.UString_Vectors.Vector;
       Columns : in Swagger.UString_Vectors.Vector;
       Granularity : in Granularity_Type;
       Click_Window_Days : in Swagger.Nullable_Integer;
       Engagement_Window_Days : in Swagger.Nullable_Integer;
       View_Window_Days : in Swagger.Nullable_Integer;
       Conversion_Report_Time : in Swagger.Nullable_UString;
       Result  : out ;
       Context : in out Swagger.Servers.Context_Type);

   --  Get catalog product groups
   --  This endpoint is completely deprecated. Please use <a href='/docs/api/v5/#operation/catalogs_product_groups/list'>List product groups</a> from Catalogs API instead.
   overriding
   procedure Ad_Accounts_Catalogs_Product_Groups_List
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Feed_Profile_Id : in Swagger.Nullable_UString;
       Result  : out .Models.AdAccountsCatalogsProductGroupsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get ad accounts countries
   --  Get Ad Accounts countries
   overriding
   procedure Ad_Account_Countries_Get
      (Server : in out Server_Type
       ;
       Result  : out .Models.AdAccountsCountryResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get available metrics' definitions
   --  Get the definitions for ads and organic metrics available across both synchronous and asynchronous report endpoints.
   --  The `display_name` attribute will match how the metric is named in our native tools like Ads Manager.
   --  See <a href='/docs/content/analytics/'>Organic Analytics</a> and <a href='/docs/ads/ad-analytics-reporting/'>Ads Analytics</a> for more information.
   overriding
   procedure Delivery_Metrics_Get
      (Server : in out Server_Type;
       Report_Type : in Swagger.Nullable_UString;
       Result  : out .Models.DeliveryMetricsResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get interest details
   --  <p>Get details of a specific interest given interest ID.</p> <p>Click <a href="https://docs.google.com/spreadsheets/d/1HxL-0Z3p2fgxis9YBP2HWC3tvPrs1hAuHDRtH-NJTIM/edit#gid=118370875" target="_blank">here</a> for a spreadsheet listing interests and their IDs.</p>
   overriding
   procedure Interest_Targeting_Options_Get
      (Server : in out Server_Type;
       Interest_Id : in Swagger.UString;
       Result  : out .Models.SingleInterestTargetingOptionResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get lead form questions
   --  Get a list of all lead form question type names. Some questions might not be used.
   --  
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>
   overriding
   procedure Lead_Form_Questions_Get
      (Server : in out Server_Type
       ;
       Context : in out Swagger.Servers.Context_Type);

   --  Get metrics ready state
   --  Learn whether conversion or non-conversion metrics are finalized and ready to query.
   overriding
   procedure Metrics_Ready_State_Get
      (Server : in out Server_Type;
       Date : in Swagger.UString;
       Result  : out .Models.BookClosedResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get targeting options
   --  <p>You can use targeting values in ads placement to define your intended audience. </p> <p>Targeting metrics are organized around targeting specifications.</p> <p>For more information on ads targeting, see <a class="reference external" href="https://help.pinterest.com/en/business/article/audience-targeting" target="_blank">Audience targeting</a>.</p>
   --  <p><b>Sample return:</b></p> <pre class="literal-block"> [{&quot;36313&quot;: &quot;Australia: Moreton Bay - North&quot;, &quot;124735&quot;: &quot;Canada: North Battleford&quot;, &quot;36109&quot;: &quot;Australia: Murray&quot;, &quot;36108&quot;: &quot;Australia: Mid North Coast&quot;, &quot;36101&quot;: &quot;Australia: Capital Region&quot;, &quot;811&quot;: &quot;U.S.: Reno&quot;, &quot;36103&quot;: &quot;Australia: Central West&quot;, &quot;36102&quot;: &quot;Australia: Central Coast&quot;, &quot;36105&quot;: &quot;Australia: Far West and Orana&quot;, &quot;36104&quot;: &quot;Australia: Coffs Harbour - Grafton&quot;, &quot;36107&quot;: &quot;Australia: Illawarra&quot;, &quot;36106&quot;: &quot;Australia: Hunter Valley Exc Newcastle&quot;, &quot;554017&quot;: &quot;New Zealand: Wanganui&quot;, &quot;554016&quot;: &quot;New Zealand: Marlborough&quot;, &quot;554015&quot;: &quot;New Zealand: Gisborne&quot;, &quot;554014&quot;: &quot;New Zealand: Tararua&quot;, &quot;554013&quot;: &quot;New Zealand: Invercargill&quot;, &quot;GR&quot;: &quot;Greece&quot;, &quot;554011&quot;: &quot;New Zealand: Whangarei&quot;, &quot;554010&quot;: &quot;New Zealand: Far North&quot;, &quot;717&quot;: &quot;U.S.: Quincy-Hannibal-Keokuk&quot;, &quot;716&quot;: &quot;U.S.: Baton Rouge&quot;,...}] </pre>
   overriding
   procedure Targeting_Options_Get
      (Server : in out Server_Type;
       Targeting_Type : in Swagger.UString;
       Client_Id : in Swagger.Nullable_UString;
       Oauth_Signature : in Swagger.Nullable_UString;
       Timestamp : in Swagger.Nullable_UString;
       Result  : out ;
       Context : in out Swagger.Servers.Context_Type);

   --  Search pins by a given search term
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>
   --  
   --  Get the top 10 Pins by a given search term.
   overriding
   procedure Search_Partner_Pins
      (Server : in out Server_Type;
       Term : in Swagger.UString;
       Country_Code : in Swagger.UString;
       Bookmark : in Swagger.Nullable_UString;
       Locale : in Swagger.Nullable_UString;
       Limit : in Swagger.Nullable_Integer;
       Result  : out .Models.SearchPartnerPins200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Search user's boards
   --  Search for boards for the "operation user_account". This includes boards of all board types.
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account". See <a href='/docs/reference/business-access/'>Understanding Business Access</a> for more information.
   overriding
   procedure Search_User_Boards_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Query : in Swagger.Nullable_UString;
       Result  : out .Models.SearchUserBoardsGet200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Search user's Pins
   --  Search for pins for the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account". See <a href='/docs/reference/business-access/'>Understanding Business Access</a> for more information.
   overriding
   procedure Search_User_Pins_List
      (Server : in out Server_Type;
       Query : in Swagger.UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Result  : out .Models.PinsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List related terms
   --  Get a list of terms logically related to each input term. <p/>
   --  Example: the term 'workout' would list related terms like 'one song workout', 'yoga workout', 'workout motivation', etc.
   overriding
   procedure Terms_Related_List
      (Server : in out Server_Type;
       Terms : in Swagger.UString_Vectors.Vector;
       Result  : out .Models.RelatedTerms_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List suggested terms
   --  Get popular search terms that begin with your input term. <p/>
   --  Example: 'sport' would return popular terms like 'sports bar' and 'sportswear', but not 'motor sports' since the phrase does not begin with the given term.
   overriding
   procedure Terms_Suggested_List
      (Server : in out Server_Type;
       Term : in Swagger.UString;
       Limit : in Swagger.Nullable_Integer;
       Result  : out ;
       Context : in out Swagger.Servers.Context_Type);

   --  Get terms of service
   --  Get the text of the terms of service and see whether the advertiser has accepted the terms of service.
   overriding
   procedure Terms_Of_Service_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.UString;
       Include_Html : in Swagger.Nullable_Boolean;
       Tos_Type : in Swagger.Nullable_UString;
       Result  : out .Models.TermsOfService_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List following boards
   --  Get a list of the boards a user follows. The request returns a board summary object array.
   overriding
   procedure Boards_User_Follows_List
      (Server : in out Server_Type;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Explicit_Following : in Swagger.Nullable_Boolean;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.BoardsUserFollowsList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Follow user
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>
   --  
   --  Use this request, as a signed-in user, to follow another user.
   overriding
   procedure Follow_User_Update
      (Server : in out Server_Type;
       Username : in Swagger.UString;
       Follow_User_Request_Type : in FollowUserRequest_Type;
       Result  : out .Models.UserSummary_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List followers
   --  Get a list of your followers.
   overriding
   procedure Followers_List
      (Server : in out Server_Type;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result  : out .Models.FollowersList200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List linked businesses
   --  Get a list of your linked business accounts.
   overriding
   procedure Linked_Business_Accounts_Get
      (Server : in out Server_Type
       ;
       Result  : out ;
       Context : in out Swagger.Servers.Context_Type);

   --  Unverify website
   --  Unverifu a website verified by the signed-in user.
   overriding
   procedure Unverify_Website_Delete
      (Server : in out Server_Type;
       Website : in Swagger.UString;
       Context : in out Swagger.Servers.Context_Type);

   --  Get user account analytics
   --  Get analytics for the "operation user_account"
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   overriding
   procedure User_Account_Analytics
      (Server : in out Server_Type;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       From_Claimed_Content : in Swagger.Nullable_UString;
       Pin_Format : in Swagger.Nullable_UString;
       App_Types : in Swagger.Nullable_UString;
       Content_Type : in Swagger.Nullable_UString;
       Source : in Swagger.Nullable_UString;
       Metric_Types : in Swagger.UString_Vectors.Vector;
       Split_Field : in Swagger.Nullable_UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out ;
       Context : in out Swagger.Servers.Context_Type);

   --  Get user account top pins analytics
   --  Gets analytics data about a user's top pins (limited to the top 50).
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   overriding
   procedure User_Account_Analytics_Top_Pins
      (Server : in out Server_Type;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Sort_By : in Swagger.UString;
       From_Claimed_Content : in Swagger.Nullable_UString;
       Pin_Format : in Swagger.Nullable_UString;
       App_Types : in Swagger.Nullable_UString;
       Content_Type : in Swagger.Nullable_UString;
       Source : in Swagger.Nullable_UString;
       Metric_Types : in Swagger.UString_Vectors.Vector;
       Num_Of_Pins : in Swagger.Nullable_Integer;
       Created_In_Last_NDays : in Swagger.Nullable_Integer;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.TopPinsAnalyticsResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get user account top video pins analytics
   --  Gets analytics data about a user's top video pins (limited to the top 50).
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   overriding
   procedure User_Account_Analytics_Top_Video_Pins
      (Server : in out Server_Type;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Sort_By : in Swagger.UString;
       From_Claimed_Content : in Swagger.Nullable_UString;
       Pin_Format : in Swagger.Nullable_UString;
       App_Types : in Swagger.Nullable_UString;
       Content_Type : in Swagger.Nullable_UString;
       Source : in Swagger.Nullable_UString;
       Metric_Types : in Swagger.UString_Vectors.Vector;
       Num_Of_Pins : in Swagger.Nullable_Integer;
       Created_In_Last_NDays : in Swagger.Nullable_Integer;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.TopVideoPinsAnalyticsResponse_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List following interests
   --  Get a list of a user's following interests in one place.
   overriding
   procedure User_Account_Followed_Interests
      (Server : in out Server_Type;
       Username : in Swagger.UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result  : out .Models.UserAccountFollowedInterests200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get user account
   --  Get account information for the "operation user_account"
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account". See <a href='/docs/reference/business-access/'>Understanding Business Access</a> for more information.
   overriding
   procedure User_Account_Get
      (Server : in out Server_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.Account_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  List following
   --  Get a list of who a certain user follows.
   overriding
   procedure User_Following_Get
      (Server : in out Server_Type;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Feed_Type : in UserFollowingFeedType_Type;
       Explicit_Following : in Swagger.Nullable_Boolean;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result  : out .Models.UserFollowingGet200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get user websites
   --  Get user websites, claimed or not
   overriding
   procedure User_Websites_Get
      (Server : in out Server_Type;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result  : out .Models.UserWebsitesGet200Response_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Verify website
   --  Verify a website as a signed-in user.
   overriding
   procedure Verify_Website_Update
      (Server : in out Server_Type;
       User_Website_Verify_Request_Type : in UserWebsiteVerifyRequest_Type;
       Result  : out .Models.UserWebsiteSummary_Type;
       Context : in out Swagger.Servers.Context_Type);

   --  Get user verification code for website claiming
   --  Get verification code for user to install on the website to claim it.
   overriding
   procedure Website_Verification_Get
      (Server : in out Server_Type
       ;
       Result  : out .Models.UserWebsiteVerificationCode_Type;
       Context : in out Swagger.Servers.Context_Type);

   package Server_Impl is
      new .Skeletons.Shared_Instance (Server_Type);

end .Servers;
