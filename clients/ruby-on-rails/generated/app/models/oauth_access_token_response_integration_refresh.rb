=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.12.0
Contact: blah+oapicf@cliffano.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class OauthAccessTokenResponseIntegrationRefresh < ApplicationRecord
  validates_presence_of :access_token
  validates_presence_of :token_type
  validates_presence_of :expires_in
  validates_presence_of :scope
  validates_presence_of :refresh_token
  validates_presence_of :refresh_token_expires_in

end
