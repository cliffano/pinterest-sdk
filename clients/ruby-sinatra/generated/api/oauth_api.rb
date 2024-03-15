require 'json'


MyApp.add_route('POST', '/v5/oauth/token', {
  "resourcePath" => "/Oauth",
  "summary" => "Generate OAuth access token",
  "nickname" => "oauth/token",
  "responseClass" => "OauthAccessTokenResponse",
  "endpoint" => "/oauth/token",
  "notes" => "Generate an OAuth access token by using an authorization code or a refresh token.  IMPORTANT: You need to start the OAuth flow via www.pinterest.com/oauth before calling this endpoint (or have an existing refresh token).  See <a href='/docs/getting-started/authentication/'>Authentication</a> for more.  <strong>Parameter <i>refresh_on</i> and its corresponding response type <i>everlasting_refresh</i> are now available to all apps! Later this year, continuous refresh will become the default behavior (ie you will no longer need to send this parameter). <a href='/docs/new/about-beta-access/'>Learn more</a>.</strong>",
  "parameters" => [
    ]}) do
  cross_origin
  # the guts live here

  {"message" => "yes, it worked"}.to_json
end

