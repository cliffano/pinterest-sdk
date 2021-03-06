--  Pinterest REST API
--  Pinterest's REST API
--
--  The version of the OpenAPI document: 5.3.0
--  Contact: blah@cliffano.com
--
--  NOTE: This package is auto generated by OpenAPI-Generator 5.4.0.
--  https://openapi-generator.tech
--  Do not edit the class manually.

with .Models;
with Swagger.Clients;
package .Clients is
   pragma Style_Checks ("-mr");

   type Client_Type is new Swagger.Clients.Client_Type with null record;

   --  Get ad account analytics
   --  Get analytics for the specified <code>ad_account_id</code>, filtered by the specified options.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   procedure Ad_Account_Analytics
      (Client : in out Client_Type;
       Ad_Account_Id : in Swagger.UString;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Columns : in Swagger.UString_Vectors.Vector;
       Granularity : in .Models..Models.Granularity_Type;
       Click_Window_Days : in Swagger.Nullable_Integer;
       Engagement_Window_Days : in Swagger.Nullable_Integer;
       View_Window_Days : in Swagger.Nullable_Integer;
       Conversion_Report_Time : in Swagger.Nullable_UString;
       Result : out Swagger.Object_Map_Vectors.Vector);

   --  List ad accounts
   --  Get a list of the ad_accounts that the "operation user_account" has access to.
   --  - This includes ad_accounts they own and ad_accounts that are owned by others who have granted them <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>.
   procedure Ad_Accounts_List
      (Client : in out Client_Type;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Include_Shared_Accounts : in Swagger.Nullable_Boolean;
       Result : out .Models.Paginated_Type);

   --  Get ad group analytics
   --  Get analytics for the specified ad groups in the specified <code>ad_account_id</code>, filtered by the specified options.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   procedure Ad_Groups_Analytics
      (Client : in out Client_Type;
       Ad_Account_Id : in Swagger.UString;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Ad_Group_Ids : in Swagger.UString_Vectors.Vector;
       Columns : in Swagger.UString_Vectors.Vector;
       Granularity : in .Models..Models.Granularity_Type;
       Click_Window_Days : in Swagger.Nullable_Integer;
       Engagement_Window_Days : in Swagger.Nullable_Integer;
       View_Window_Days : in Swagger.Nullable_Integer;
       Conversion_Report_Time : in Swagger.Nullable_UString;
       Result : out Swagger.Object_Map_Vectors.Vector);

   --  List ad groups
   --  Get a list of the ad groups in the specified <code>ad_account_id</code>, filtered by the specified options.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   procedure Ad_Groups_List
      (Client : in out Client_Type;
       Ad_Account_Id : in Swagger.UString;
       Campaign_Ids : in Swagger.UString_Vectors.Vector;
       Ad_Group_Ids : in Swagger.UString_Vectors.Vector;
       Entity_Statuses : in Swagger.UString_Vectors.Vector;
       Page_Size : in Swagger.Nullable_Integer;
       Order : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Translate_Interests_To_Names : in Swagger.Nullable_Boolean;
       Result : out .Models.Paginated_Type);

   --  Get ad analytics
   --  Get analytics for the specified ads in the specified <code>ad_account_id</code>, filtered by the specified options.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   procedure Ads_Analytics
      (Client : in out Client_Type;
       Ad_Account_Id : in Swagger.UString;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Ad_Ids : in Swagger.UString_Vectors.Vector;
       Columns : in Swagger.UString_Vectors.Vector;
       Granularity : in .Models..Models.Granularity_Type;
       Click_Window_Days : in Swagger.Nullable_Integer;
       Engagement_Window_Days : in Swagger.Nullable_Integer;
       View_Window_Days : in Swagger.Nullable_Integer;
       Conversion_Report_Time : in Swagger.Nullable_UString;
       Result : out Swagger.Object_Map_Vectors.Vector);

   --  List ads
   --  Get a list of the ads in the specified <code>ad_account_id</code>, filtered by the specified options.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   procedure Ads_List
      (Client : in out Client_Type;
       Ad_Account_Id : in Swagger.UString;
       Campaign_Ids : in Swagger.UString_Vectors.Vector;
       Ad_Group_Ids : in Swagger.UString_Vectors.Vector;
       Ad_Ids : in Swagger.UString_Vectors.Vector;
       Entity_Statuses : in Swagger.UString_Vectors.Vector;
       Page_Size : in Swagger.Nullable_Integer;
       Order : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Result : out .Models.Paginated_Type);

   --  Create async request for an account analytics report
   --  This returns a token that you can use to download the report when it is ready. Note that this endpoint requires the parameters to be passed as JSON-formatted in the request body. This endpoint does not support URL query parameters.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   procedure Analytics_Create_Report
      (Client : in out Client_Type;
       Ad_Account_Id : in Swagger.UString;
       Ads_Analytics_Create_Async_Request_Type : in .Models.AdsAnalyticsCreateAsyncRequest_Type;
       Result : out .Models.AdsAnalyticsCreateAsyncResponse_Type);

   --  Get the account analytics report created by the async call
   --  This returns a URL to an analytics report given a token returned from the post request report creation call. You can use the URL to download the report and it's valid for an hour.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   procedure Analytics_Get_Report
      (Client : in out Client_Type;
       Ad_Account_Id : in Swagger.UString;
       Token : in Swagger.UString;
       Result : out .Models.AdsAnalyticsGetAsyncResponse_Type);

   --  Get campaign analytics
   --  Get analytics for the specified campaigns in the specified <code>ad_account_id</code>, filtered by the specified options.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   procedure Campaigns_Analytics
      (Client : in out Client_Type;
       Ad_Account_Id : in Swagger.UString;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Campaign_Ids : in Swagger.UString_Vectors.Vector;
       Columns : in Swagger.UString_Vectors.Vector;
       Granularity : in .Models..Models.Granularity_Type;
       Click_Window_Days : in Swagger.Nullable_Integer;
       Engagement_Window_Days : in Swagger.Nullable_Integer;
       View_Window_Days : in Swagger.Nullable_Integer;
       Conversion_Report_Time : in Swagger.Nullable_UString;
       Result : out Swagger.Object_Map_Vectors.Vector);

   --  List campaigns
   --  Get a list of the campaigns in the specified <code>ad_account_id</code>, filtered by the specified options.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   procedure Campaigns_List
      (Client : in out Client_Type;
       Ad_Account_Id : in Swagger.UString;
       Campaign_Ids : in Swagger.UString_Vectors.Vector;
       Entity_Statuses : in Swagger.UString_Vectors.Vector;
       Page_Size : in Swagger.Nullable_Integer;
       Order : in Swagger.Nullable_UString;
       Bookmark : in Swagger.Nullable_UString;
       Result : out .Models.Paginated_Type);

   --  Get product group analytics
   --  Get analytics for the specified product groups in the specified <code>ad_account_id</code>, filtered by the specified options.
   --  - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a>: Admin, Analyst, Campaign Manager.
   procedure Product_Groups_Analytics
      (Client : in out Client_Type;
       Ad_Account_Id : in Swagger.UString;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Product_Group_Ids : in Swagger.UString_Vectors.Vector;
       Columns : in Swagger.UString_Vectors.Vector;
       Granularity : in .Models..Models.Granularity_Type;
       Click_Window_Days : in Swagger.Nullable_Integer;
       Engagement_Window_Days : in Swagger.Nullable_Integer;
       View_Window_Days : in Swagger.Nullable_Integer;
       Conversion_Report_Time : in Swagger.Nullable_UString;
       Result : out Swagger.Object_Map_Vectors.Vector);

   --  Create board section
   --  Create a board section on a board owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  - By default, the "operation user_account" is the token user_account.
   procedure Board_Sections_Create
      (Client : in out Client_Type;
       Board_Id : in Swagger.UString;
       Board_Section_Type : in .Models.BoardSection_Type;
       Result : out .Models.BoardSection_Type);

   --  Delete board section
   --  Delete a board section on a board owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  - By default, the "operation user_account" is the token user_account.
   procedure Board_Sections_Delete
      (Client : in out Client_Type;
       Board_Id : in Swagger.UString;
       Section_Id : in Swagger.UString);

   --  List board sections
   --  Get a list of all board sections from a board owned by the "operation user_account" - or a group board that has been shared with this account.
   --  - By default, the "operation user_account" is the token user_account.
   procedure Board_Sections_List
      (Client : in out Client_Type;
       Board_Id : in Swagger.UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result : out .Models.Paginated_Type);

   --  List Pins on board section
   --  Get a list of the Pins on a board section of a board owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  - By default, the "operation user_account" is the token user_account.
   procedure Board_Sections_List_Pins
      (Client : in out Client_Type;
       Board_Id : in Swagger.UString;
       Section_Id : in Swagger.UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result : out .Models.Paginated_Type);

   --  Update board section
   --  Update a board section on a board owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  - By default, the "operation user_account" is the token user_account.
   procedure Board_Sections_Update
      (Client : in out Client_Type;
       Board_Id : in Swagger.UString;
       Section_Id : in Swagger.UString;
       Board_Section_Type : in .Models.BoardSection_Type;
       Result : out .Models.BoardSection_Type);

   --  Create board
   --  Create a board owned by the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   procedure Boards_Create
      (Client : in out Client_Type;
       Board_Type : in .Models.Board_Type;
       Result : out .Models.Board_Type);

   --  Delete board
   --  Delete a board owned by the "operation user_account".
   --  - By default, the "operation user_account" is the token user_account.
   procedure Boards_Delete
      (Client : in out Client_Type;
       Board_Id : in Swagger.UString);

   --  Get board
   --  Get a board owned by the operation user_account - or a group board that has been shared with this account.
   --  - By default, the "operation user_account" is the token user_account.
   procedure Boards_Get
      (Client : in out Client_Type;
       Board_Id : in Swagger.UString;
       Result : out .Models.Board_Type);

   --  List boards
   --  Get a list of the boards owned by the "operation user_account" + group boards where this account is a collaborator
   --  
   --  Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return.
   --  - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
   procedure Boards_List
      (Client : in out Client_Type;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Privacy : in Swagger.Nullable_UString;
       Result : out .Models.Paginated_Type);

   --  List Pins on board
   --  Get a list of the Pins on a board owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  - By default, the "operation user_account" is the token user_account.
   procedure Boards_List_Pins
      (Client : in out Client_Type;
       Board_Id : in Swagger.UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result : out .Models.Paginated_Type);

   --  Update board
   --  Update a board owned by the "operating user_account".
   procedure Boards_Update
      (Client : in out Client_Type;
       Board_Id : in Swagger.UString;
       Board_Update_Type : in .Models.BoardUpdate_Type;
       Result : out .Models.Board_Type);

   --  Create product group
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>
   --  
   --  Create product group to use in Catalogs.
   procedure Catalogs_Product_Groups_Create
      (Client : in out Client_Type;
       Catalogs_Product_Group_Create_Request_Type : in .Models.CatalogsProductGroupCreateRequest_Type;
       Result : out Swagger.Object);

   --  Delete product group
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>
   --  
   --  Delete a product group from being in use in Catalogs.
   procedure Catalogs_Product_Groups_Delete
      (Client : in out Client_Type;
       Product_Group_Id : in Swagger.UString);

   --  Get product groups list
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>
   --  
   --  Get a list of product groups for a given Catalogs Feed Id.
   procedure Catalogs_Product_Groups_List
      (Client : in out Client_Type;
       Feed_Id : in Swagger.UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result : out .Models.Paginated_Type);

   --  Update product group
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>
   --  
   --  Update product group to use in Catalogs.
   procedure Catalogs_Product_Groups_Update
      (Client : in out Client_Type;
       Product_Group_Id : in Swagger.UString;
       Catalogs_Product_Group_Update_Request_Type : in .Models.CatalogsProductGroupUpdateRequest_Type;
       Result : out .Models.CatalogsProductGroup_Type);

   --  List processing results for a given feed
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>
   --  
   --  Fetch a feed processing results owned by the owner user account.
   procedure Feed_Processing_Results_List
      (Client : in out Client_Type;
       Feed_Id : in Swagger.UString;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result : out .Models.Paginated_Type);

   --  Create feed
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>
   --  
   --  Create a new feed owned by the "operating user_account".
   procedure Feeds_Create
      (Client : in out Client_Type;
       Catalogs_Feeds_Create_Request_Type : in .Models.CatalogsFeedsCreateRequest_Type;
       Result : out .Models.CatalogsFeed_Type);

   --  Delete feed
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>
   --  
   --  Delete a feed owned by the "operating user_account".
   procedure Feeds_Delete
      (Client : in out Client_Type;
       Feed_Id : in Swagger.UString);

   --  Get feed
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>
   --  
   --  Get a single feed owned by the "operating user_account".
   procedure Feeds_Get
      (Client : in out Client_Type;
       Feed_Id : in Swagger.UString;
       Result : out .Models.CatalogsFeed_Type);

   --  List feeds
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>
   --  
   --  Fetch feeds owned by the "operating user_account".
   procedure Feeds_List
      (Client : in out Client_Type;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result : out .Models.Paginated_Type);

   --  Update feed
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>
   --  
   --  Update a feed owned by the "operating user_account".
   procedure Feeds_Update
      (Client : in out Client_Type;
       Feed_Id : in Swagger.UString;
       Catalogs_Feeds_Update_Request_Type : in .Models.CatalogsFeedsUpdateRequest_Type;
       Result : out .Models.CatalogsFeed_Type);

   --  Get catalogs items batch
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>
   --  
   --  Get a single catalogs items batch created by the "operating user_account".
   procedure Items_Batch_Get
      (Client : in out Client_Type;
       Batch_Id : in Swagger.UString;
       Result : out .Models.CatalogsItemsBatch_Type);

   --  Perform an operation on an item batch
   --  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/api/v5/#tag/Understanding-catalog-management'>Learn more</a>.</strong>
   --  
   --  This endpoint supports multiple operations on a set of one or more catalog items.
   procedure Items_Batch_Post
      (Client : in out Client_Type;
       Catalogs_Items_Batch_Request_Type : in .Models.CatalogsItemsBatchRequest_Type;
       Result : out .Models.CatalogsItemsBatch_Type);

   --  Get catalogs items
   --  Get the items of the catalog created by the "operating user_account"
   procedure Items_Get
      (Client : in out Client_Type;
       Country : in Swagger.UString;
       Item_Ids : in Swagger.UString_Vectors.Vector;
       Language : in Swagger.UString;
       Result : out .Models.CatalogsItems_Type);

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
   --  <strong><a href='/docs/solutions/content-apps/#creatingvideopins'>Learn more</a></strong> about video Pin creation.
   procedure Media_Create
      (Client : in out Client_Type;
       Media_Upload_Request_Type : in .Models.MediaUploadRequest_Type;
       Result : out .Models.MediaUpload_Type);

   --  Get media upload details
   --  Get details for a registered media upload, including its current status.
   --  
   --  <strong><a href='/docs/solutions/content-apps/#creatingvideopins'>Learn more</a></strong> about video Pin creation.
   procedure Media_Get
      (Client : in out Client_Type;
       Media_Id : in Swagger.UString;
       Result : out .Models.MediaUploadDetails_Type);

   --  List media uploads
   --  List media uploads filtered by given parameters.
   --  
   --  <strong><a href='/docs/solutions/content-apps/#creatingvideopins'>Learn more</a></strong> about video Pin creation.
   procedure Media_List
      (Client : in out Client_Type;
       Bookmark : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Result : out .Models.Paginated_Type);

   --  Generate OAuth access token
   --  Generate an OAuth access token by using an authorization code or a refresh token.
   --  
   --  See <a href='/docs/api/v5/#tag/Authentication'>Authentication</a> for more.
   procedure Oauth_Token
      (Client : in out Client_Type;
       Grant_Type : in Swagger.UString;
       Result : out .Models.OauthAccessTokenResponse_Type);

   --  Get Pin analytics
   --  Get analytics for a Pin owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href="https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list">List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account:
   --  
   --  - For Pins on public or protected boards: Admin, Analyst.
   --  - For Pins on secret boards: Admin.
   procedure Pins_Analytics
      (Client : in out Client_Type;
       Pin_Id : in Swagger.UString;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       Metric_Types : in Swagger.UString_Vectors.Vector;
       App_Types : in Swagger.Nullable_UString;
       Split_Field : in Swagger.Nullable_UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result : out Swagger..Models.AnalyticsMetricsResponse_Type_Map);

   --  Create Pin
   --  Create a Pin on a board or board section owned by the "operation user_account".
   --  
   --  Note: If the current "operation user_account" (defined by the access token) has access to another user's Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account's permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id=12345&...).
   --  
   --  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called 'curated content', please use our <a href='/docs/add-ons/save-button'>Save button</a> instead. For more tips on creating fresh content for Pinterest, review our <a href='/docs/solutions/content-apps'>Content App Solutions Guide</a>.
   --  
   --  <strong><a href='/docs/solutions/content-apps/#creatingvideopins'>Learn more</a></strong> about video Pin creation.
   procedure Pins_Create
      (Client : in out Client_Type;
       Pin_Type : in .Models.Pin_Type;
       Result : out .Models.Pin_Type);

   --  Delete Pin
   --  Delete a Pins owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  - By default, the "operation user_account" is the token user_account.
   procedure Pins_Delete
      (Client : in out Client_Type;
       Pin_Id : in Swagger.UString);

   --  Get Pin
   --  Get a Pin owned by the "operation user_account" - or on a group board that has been shared with this account.
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the "operation user_account". In order to do this, the token user_account must have one of the following <a href="https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts">Business Access</a> roles on the ad_account:
   --  
   --  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager.
   --  - For Pins on secret boards: Owner, Admin.
   procedure Pins_Get
      (Client : in out Client_Type;
       Pin_Id : in Swagger.UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result : out .Models.Pin_Type);

   --  Get user account analytics
   --  Get analytics for the "operation user_account"
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account".
   procedure User_Account_Analytics
      (Client : in out Client_Type;
       Start_Date : in Swagger.Date;
       End_Date : in Swagger.Date;
       From_Claimed_Content : in Swagger.Nullable_UString;
       Pin_Format : in Swagger.Nullable_UString;
       App_Types : in Swagger.Nullable_UString;
       Metric_Types : in Swagger.UString_Vectors.Vector;
       Split_Field : in Swagger.Nullable_UString;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result : out Swagger..Models.AnalyticsMetricsResponse_Type_Map);

   --  Get user account
   --  Get account information for the "operation user_account"
   --  - By default, the "operation user_account" is the token user_account.
   --  
   --  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the "operation user_account". See <a href='/docs/api/v5/#tag/Understanding-business-access'>Understanding Business Access</a> for more information.
   procedure User_Account_Get
      (Client : in out Client_Type;
       Ad_Account_Id : in Swagger.Nullable_UString;
       Result : out .Models.Account_Type);

end .Clients;
