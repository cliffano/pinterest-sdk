=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.3.0
Contact: pinterest-api@pinterest.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class TrackingUrls < ApplicationRecord

  serialize :impression, Array
  serialize :click, Array
  serialize :engagement, Array
  serialize :buyable_button, Array
  serialize :audience_verification, Array
end
