=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.3.0
Contact: pinterest-api@pinterest.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class OauthAccessTokenResponseCodeAllOf < ApplicationRecord
  validates_presence_of :refresh_token
  validates_presence_of :refresh_token_expires_in

end