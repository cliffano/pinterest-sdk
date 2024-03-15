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

use_ok('WWW::OpenAPIClient::SearchApi');

my $api = WWW::OpenAPIClient::SearchApi->new();
isa_ok($api, 'WWW::OpenAPIClient::SearchApi');

#
# search_partner_pins test
#
# uncomment below and update the test
#my $search_partner_pins_term = undef; # replace NULL with a proper value
#my $search_partner_pins_country_code = undef; # replace NULL with a proper value
#my $search_partner_pins_bookmark = undef; # replace NULL with a proper value
#my $search_partner_pins_locale = undef; # replace NULL with a proper value
#my $search_partner_pins_limit = undef; # replace NULL with a proper value
#my $search_partner_pins_result = $api->search_partner_pins(term => $search_partner_pins_term, country_code => $search_partner_pins_country_code, bookmark => $search_partner_pins_bookmark, locale => $search_partner_pins_locale, limit => $search_partner_pins_limit);

#
# search_user_boards_get test
#
# uncomment below and update the test
#my $search_user_boards_get_ad_account_id = undef; # replace NULL with a proper value
#my $search_user_boards_get_bookmark = undef; # replace NULL with a proper value
#my $search_user_boards_get_page_size = undef; # replace NULL with a proper value
#my $search_user_boards_get_query = undef; # replace NULL with a proper value
#my $search_user_boards_get_result = $api->search_user_boards_get(ad_account_id => $search_user_boards_get_ad_account_id, bookmark => $search_user_boards_get_bookmark, page_size => $search_user_boards_get_page_size, query => $search_user_boards_get_query);

#
# search_user_pins_list test
#
# uncomment below and update the test
#my $search_user_pins_list_query = undef; # replace NULL with a proper value
#my $search_user_pins_list_ad_account_id = undef; # replace NULL with a proper value
#my $search_user_pins_list_bookmark = undef; # replace NULL with a proper value
#my $search_user_pins_list_result = $api->search_user_pins_list(query => $search_user_pins_list_query, ad_account_id => $search_user_pins_list_ad_account_id, bookmark => $search_user_pins_list_bookmark);


done_testing();