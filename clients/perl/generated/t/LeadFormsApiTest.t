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

use_ok('WWW::OpenAPIClient::LeadFormsApi');

my $api = WWW::OpenAPIClient::LeadFormsApi->new();
isa_ok($api, 'WWW::OpenAPIClient::LeadFormsApi');

#
# lead_form_get test
#
# uncomment below and update the test
#my $lead_form_get_ad_account_id = undef; # replace NULL with a proper value
#my $lead_form_get_lead_form_id = undef; # replace NULL with a proper value
#my $lead_form_get_result = $api->lead_form_get(ad_account_id => $lead_form_get_ad_account_id, lead_form_id => $lead_form_get_lead_form_id);

#
# lead_form_test_create test
#
# uncomment below and update the test
#my $lead_form_test_create_ad_account_id = undef; # replace NULL with a proper value
#my $lead_form_test_create_lead_form_id = undef; # replace NULL with a proper value
#my $lead_form_test_create_lead_form_test_request = undef; # replace NULL with a proper value
#my $lead_form_test_create_result = $api->lead_form_test_create(ad_account_id => $lead_form_test_create_ad_account_id, lead_form_id => $lead_form_test_create_lead_form_id, lead_form_test_request => $lead_form_test_create_lead_form_test_request);

#
# lead_forms_list test
#
# uncomment below and update the test
#my $lead_forms_list_ad_account_id = undef; # replace NULL with a proper value
#my $lead_forms_list_page_size = undef; # replace NULL with a proper value
#my $lead_forms_list_order = undef; # replace NULL with a proper value
#my $lead_forms_list_bookmark = undef; # replace NULL with a proper value
#my $lead_forms_list_result = $api->lead_forms_list(ad_account_id => $lead_forms_list_ad_account_id, page_size => $lead_forms_list_page_size, order => $lead_forms_list_order, bookmark => $lead_forms_list_bookmark);


done_testing();
