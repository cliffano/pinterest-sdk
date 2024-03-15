=begin comment

Pinterest REST API

Pinterest's REST API

The version of the OpenAPI document: 5.12.0
Contact: blah+oapicf@cliffano.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator
# Please update the test cases below to test the API endpoints.
# Ref: https://openapi-generator.tech
#
use Test::More;
use Test::Exception;

use lib 'lib';
use strict;
use warnings;

use_ok('WWW::OpenAPIClient::PinsApi');

my $api = WWW::OpenAPIClient::PinsApi->new();
isa_ok($api, 'WWW::OpenAPIClient::PinsApi');

#
# pins_analytics test
#
# uncomment below and update the test
#my $pins_analytics_pin_id = undef; # replace NULL with a proper value
#my $pins_analytics_start_date = undef; # replace NULL with a proper value
#my $pins_analytics_end_date = undef; # replace NULL with a proper value
#my $pins_analytics_metric_types = undef; # replace NULL with a proper value
#my $pins_analytics_app_types = undef; # replace NULL with a proper value
#my $pins_analytics_split_field = undef; # replace NULL with a proper value
#my $pins_analytics_ad_account_id = undef; # replace NULL with a proper value
#my $pins_analytics_result = $api->pins_analytics(pin_id => $pins_analytics_pin_id, start_date => $pins_analytics_start_date, end_date => $pins_analytics_end_date, metric_types => $pins_analytics_metric_types, app_types => $pins_analytics_app_types, split_field => $pins_analytics_split_field, ad_account_id => $pins_analytics_ad_account_id);

#
# pins_create test
#
# uncomment below and update the test
#my $pins_create_pin_create = undef; # replace NULL with a proper value
#my $pins_create_ad_account_id = undef; # replace NULL with a proper value
#my $pins_create_result = $api->pins_create(pin_create => $pins_create_pin_create, ad_account_id => $pins_create_ad_account_id);

#
# pins_delete test
#
# uncomment below and update the test
#my $pins_delete_pin_id = undef; # replace NULL with a proper value
#my $pins_delete_ad_account_id = undef; # replace NULL with a proper value
#my $pins_delete_result = $api->pins_delete(pin_id => $pins_delete_pin_id, ad_account_id => $pins_delete_ad_account_id);

#
# pins_get test
#
# uncomment below and update the test
#my $pins_get_pin_id = undef; # replace NULL with a proper value
#my $pins_get_pin_metrics = undef; # replace NULL with a proper value
#my $pins_get_ad_account_id = undef; # replace NULL with a proper value
#my $pins_get_result = $api->pins_get(pin_id => $pins_get_pin_id, pin_metrics => $pins_get_pin_metrics, ad_account_id => $pins_get_ad_account_id);

#
# pins_list test
#
# uncomment below and update the test
#my $pins_list_bookmark = undef; # replace NULL with a proper value
#my $pins_list_page_size = undef; # replace NULL with a proper value
#my $pins_list_pin_filter = undef; # replace NULL with a proper value
#my $pins_list_include_protected_pins = undef; # replace NULL with a proper value
#my $pins_list_pin_type = undef; # replace NULL with a proper value
#my $pins_list_creative_types = undef; # replace NULL with a proper value
#my $pins_list_ad_account_id = undef; # replace NULL with a proper value
#my $pins_list_pin_metrics = undef; # replace NULL with a proper value
#my $pins_list_result = $api->pins_list(bookmark => $pins_list_bookmark, page_size => $pins_list_page_size, pin_filter => $pins_list_pin_filter, include_protected_pins => $pins_list_include_protected_pins, pin_type => $pins_list_pin_type, creative_types => $pins_list_creative_types, ad_account_id => $pins_list_ad_account_id, pin_metrics => $pins_list_pin_metrics);

#
# pins_save test
#
# uncomment below and update the test
#my $pins_save_pin_id = undef; # replace NULL with a proper value
#my $pins_save_pins_save_request = undef; # replace NULL with a proper value
#my $pins_save_ad_account_id = undef; # replace NULL with a proper value
#my $pins_save_result = $api->pins_save(pin_id => $pins_save_pin_id, pins_save_request => $pins_save_pins_save_request, ad_account_id => $pins_save_ad_account_id);

#
# pins_update test
#
# uncomment below and update the test
#my $pins_update_pin_id = undef; # replace NULL with a proper value
#my $pins_update_pin_update = undef; # replace NULL with a proper value
#my $pins_update_ad_account_id = undef; # replace NULL with a proper value
#my $pins_update_result = $api->pins_update(pin_id => $pins_update_pin_id, pin_update => $pins_update_pin_update, ad_account_id => $pins_update_ad_account_id);


done_testing();
