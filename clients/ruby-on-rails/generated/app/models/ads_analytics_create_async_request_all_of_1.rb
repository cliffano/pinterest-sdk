=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.3.0
Contact: blah@cliffano.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class AdsAnalyticsCreateAsyncRequestAllOf1 < ApplicationRecord
  validates_presence_of :columns
  validates_presence_of :level

  serialize :columns, Array
end
