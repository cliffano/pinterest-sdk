require 'json'


MyApp.add_route('GET', '/v5/resources/ad_account_countries', {
  "resourcePath" => "/Resources",
  "summary" => "Get ad accounts countries",
  "nickname" => "ad_account_countries/get",
  "responseClass" => "AdAccountsCountryResponse",
  "endpoint" => "/resources/ad_account_countries",
  "notes" => "Get Ad Accounts countries",
  "parameters" => [
    ]}) do
  cross_origin
  # the guts live here

  {"message" => "yes, it worked"}.to_json
end


MyApp.add_route('GET', '/v5/resources/delivery_metrics', {
  "resourcePath" => "/Resources",
  "summary" => "Get available metrics' definitions",
  "nickname" => "delivery_metrics/get",
  "responseClass" => "DeliveryMetricsResponse",
  "endpoint" => "/resources/delivery_metrics",
  "notes" => "Get the definitions for ads and organic metrics available across both synchronous and asynchronous report endpoints. The `display_name` attribute will match how the metric is named in our native tools like Ads Manager. See <a href='/docs/content/analytics/'>Organic Analytics</a> and <a href='/docs/ads/ad-analytics-reporting/'>Ads Analytics</a> for more information.",
  "parameters" => [
    {
      "name" => "report_type",
      "description" => "Report type.",
      "dataType" => "String",
      "allowableValues" => "[SYNC, ASYNC]",
      "paramType" => "query",
    },
    ]}) do
  cross_origin
  # the guts live here

  {"message" => "yes, it worked"}.to_json
end


MyApp.add_route('GET', '/v5/resources/targeting/interests/{interest_id}', {
  "resourcePath" => "/Resources",
  "summary" => "Get interest details",
  "nickname" => "interest_targeting_options/get",
  "responseClass" => "SingleInterestTargetingOptionResponse",
  "endpoint" => "/resources/targeting/interests/{interest_id}",
  "notes" => "<p>Get details of a specific interest given interest ID.</p> <p>Click <a href=\"https://docs.google.com/spreadsheets/d/1HxL-0Z3p2fgxis9YBP2HWC3tvPrs1hAuHDRtH-NJTIM/edit#gid=118370875\" target=\"_blank\">here</a> for a spreadsheet listing interests and their IDs.</p>",
  "parameters" => [
    {
      "name" => "interest_id",
      "description" => "Unique identifier of an interest.",
      "dataType" => "String",
      "paramType" => "path",
    },
    ]}) do
  cross_origin
  # the guts live here

  {"message" => "yes, it worked"}.to_json
end


MyApp.add_route('GET', '/v5/resources/lead_form_questions', {
  "resourcePath" => "/Resources",
  "summary" => "Get lead form questions",
  "nickname" => "lead_form_questions/get",
  "responseClass" => "void",
  "endpoint" => "/resources/lead_form_questions",
  "notes" => "Get a list of all lead form question type names. Some questions might not be used.  <strong>This endpoint is currently in beta and not available to all apps. <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>",
  "parameters" => [
    ]}) do
  cross_origin
  # the guts live here

  {"message" => "yes, it worked"}.to_json
end


MyApp.add_route('GET', '/v5/resources/metrics_ready_state', {
  "resourcePath" => "/Resources",
  "summary" => "Get metrics ready state",
  "nickname" => "metrics_ready_state/get",
  "responseClass" => "BookClosedResponse",
  "endpoint" => "/resources/metrics_ready_state",
  "notes" => "Learn whether conversion or non-conversion metrics are finalized and ready to query.",
  "parameters" => [
    {
      "name" => "date",
      "description" => "Analytics reports request date (UTC). Format: YYYY-MM-DD",
      "dataType" => "String",
      "allowableValues" => "",
      "paramType" => "query",
    },
    ]}) do
  cross_origin
  # the guts live here

  {"message" => "yes, it worked"}.to_json
end


MyApp.add_route('GET', '/v5/resources/targeting/{targeting_type}', {
  "resourcePath" => "/Resources",
  "summary" => "Get targeting options",
  "nickname" => "targeting_options/get",
  "responseClass" => "Array<Object>",
  "endpoint" => "/resources/targeting/{targeting_type}",
  "notes" => "<p>You can use targeting values in ads placement to define your intended audience. </p> <p>Targeting metrics are organized around targeting specifications.</p> <p>For more information on ads targeting, see <a class=\"reference external\" href=\"https://help.pinterest.com/en/business/article/audience-targeting\" target=\"_blank\">Audience targeting</a>.</p> <p><b>Sample return:</b></p> <pre class=\"literal-block\"> [{&quot;36313&quot;: &quot;Australia: Moreton Bay - North&quot;, &quot;124735&quot;: &quot;Canada: North Battleford&quot;, &quot;36109&quot;: &quot;Australia: Murray&quot;, &quot;36108&quot;: &quot;Australia: Mid North Coast&quot;, &quot;36101&quot;: &quot;Australia: Capital Region&quot;, &quot;811&quot;: &quot;U.S.: Reno&quot;, &quot;36103&quot;: &quot;Australia: Central West&quot;, &quot;36102&quot;: &quot;Australia: Central Coast&quot;, &quot;36105&quot;: &quot;Australia: Far West and Orana&quot;, &quot;36104&quot;: &quot;Australia: Coffs Harbour - Grafton&quot;, &quot;36107&quot;: &quot;Australia: Illawarra&quot;, &quot;36106&quot;: &quot;Australia: Hunter Valley Exc Newcastle&quot;, &quot;554017&quot;: &quot;New Zealand: Wanganui&quot;, &quot;554016&quot;: &quot;New Zealand: Marlborough&quot;, &quot;554015&quot;: &quot;New Zealand: Gisborne&quot;, &quot;554014&quot;: &quot;New Zealand: Tararua&quot;, &quot;554013&quot;: &quot;New Zealand: Invercargill&quot;, &quot;GR&quot;: &quot;Greece&quot;, &quot;554011&quot;: &quot;New Zealand: Whangarei&quot;, &quot;554010&quot;: &quot;New Zealand: Far North&quot;, &quot;717&quot;: &quot;U.S.: Quincy-Hannibal-Keokuk&quot;, &quot;716&quot;: &quot;U.S.: Baton Rouge&quot;,...}] </pre>",
  "parameters" => [
    {
      "name" => "client_id",
      "description" => "Client ID.",
      "dataType" => "String",
      "allowableValues" => "",
      "paramType" => "query",
    },
    {
      "name" => "oauth_signature",
      "description" => "Oauth signature",
      "dataType" => "String",
      "allowableValues" => "",
      "paramType" => "query",
    },
    {
      "name" => "timestamp",
      "description" => "Timestamp",
      "dataType" => "String",
      "allowableValues" => "",
      "paramType" => "query",
    },
    {
      "name" => "targeting_type",
      "description" => "Public targeting type.",
      "dataType" => "String",
      "paramType" => "path",
    },
    ]}) do
  cross_origin
  # the guts live here

  {"message" => "yes, it worked"}.to_json
end

