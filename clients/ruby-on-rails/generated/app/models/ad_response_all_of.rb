=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.3.0
Contact: blah@cliffano.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class AdResponseAllOf < ApplicationRecord

  serialize :carousel_android_deep_links, Array
  serialize :carousel_destination_urls, Array
  serialize :carousel_ios_deep_links, Array
  serialize :tracking_urls, Hash
end
