=begin comment

Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.3.0
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator
# Please update the test cases below to test the API endpoints.
# Ref: https://openapi-generator.tech
#
use Test::More tests => 1; #TODO update number of test cases
use Test::Exception;

use lib 'lib';
use strict;
use warnings;

use_ok('WWW::OpenAPIClient::UserAccountApi');

my $api = WWW::OpenAPIClient::UserAccountApi->new();
isa_ok($api, 'WWW::OpenAPIClient::UserAccountApi');

#
# user_account_analytics test
#
# uncomment below and update the test
#my $user_account_analytics_start_date = undef; # replace NULL with a proper value
#my $user_account_analytics_end_date = undef; # replace NULL with a proper value
#my $user_account_analytics_from_claimed_content = undef; # replace NULL with a proper value
#my $user_account_analytics_pin_format = undef; # replace NULL with a proper value
#my $user_account_analytics_app_types = undef; # replace NULL with a proper value
#my $user_account_analytics_metric_types = undef; # replace NULL with a proper value
#my $user_account_analytics_split_field = undef; # replace NULL with a proper value
#my $user_account_analytics_ad_account_id = undef; # replace NULL with a proper value
#my $user_account_analytics_result = $api->user_account_analytics(start_date => $user_account_analytics_start_date, end_date => $user_account_analytics_end_date, from_claimed_content => $user_account_analytics_from_claimed_content, pin_format => $user_account_analytics_pin_format, app_types => $user_account_analytics_app_types, metric_types => $user_account_analytics_metric_types, split_field => $user_account_analytics_split_field, ad_account_id => $user_account_analytics_ad_account_id);

#
# user_account_get test
#
# uncomment below and update the test
#my $user_account_get_ad_account_id = undef; # replace NULL with a proper value
#my $user_account_get_result = $api->user_account_get(ad_account_id => $user_account_get_ad_account_id);

