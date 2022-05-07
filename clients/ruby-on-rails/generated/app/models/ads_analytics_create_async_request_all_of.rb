=begin
Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.3.0
Contact: pinterest-api@pinterest.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class AdsAnalyticsCreateAsyncRequestAllOf < ApplicationRecord
  validates_presence_of :start_date
  validates_presence_of :end_date
  validates_presence_of :granularity

  serialize :attribution_types, Array
end
