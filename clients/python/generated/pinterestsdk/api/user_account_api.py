"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""


import re  # noqa: F401
import sys  # noqa: F401

from pinterestsdk.api_client import ApiClient, Endpoint as _Endpoint
from pinterestsdk.model_utils import (  # noqa: F401
    check_allowed_values,
    check_validations,
    date,
    datetime,
    file_type,
    none_type,
    validate_and_convert_types
)
from pinterestsdk.model.account import Account
from pinterestsdk.model.analytics_response import AnalyticsResponse
from pinterestsdk.model.error import Error


class UserAccountApi(object):
    """NOTE: This class is auto generated by OpenAPI Generator
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    def __init__(self, api_client=None):
        if api_client is None:
            api_client = ApiClient()
        self.api_client = api_client
        self.user_account_analytics_endpoint = _Endpoint(
            settings={
                'response_type': (AnalyticsResponse,),
                'auth': [
                    'pinterest_oauth2'
                ],
                'endpoint_path': '/user_account/analytics',
                'operation_id': 'user_account_analytics',
                'http_method': 'GET',
                'servers': None,
            },
            params_map={
                'all': [
                    'start_date',
                    'end_date',
                    'from_claimed_content',
                    'pin_format',
                    'app_types',
                    'metric_types',
                    'split_field',
                    'ad_account_id',
                ],
                'required': [
                    'start_date',
                    'end_date',
                ],
                'nullable': [
                ],
                'enum': [
                    'from_claimed_content',
                    'pin_format',
                    'app_types',
                    'metric_types',
                    'split_field',
                ],
                'validation': [
                    'ad_account_id',
                ]
            },
            root_map={
                'validations': {
                    ('ad_account_id',): {

                        'regex': {
                            'pattern': r'^\d+$',  # noqa: E501
                        },
                    },
                },
                'allowed_values': {
                    ('from_claimed_content',): {

                        "OTHER": "OTHER",
                        "CLAIMED": "CLAIMED",
                        "BOTH": "BOTH"
                    },
                    ('pin_format',): {

                        "ALL": "ALL",
                        "PRODUCT": "PRODUCT",
                        "REGULAR": "REGULAR",
                        "VIDEO": "VIDEO"
                    },
                    ('app_types',): {

                        "ALL": "ALL",
                        "MOBILE": "MOBILE",
                        "TABLET": "TABLET",
                        "WEB": "WEB"
                    },
                    ('metric_types',): {

                        "ENGAGEMENT": "ENGAGEMENT",
                        "ENGAGEMENT_RATE": "ENGAGEMENT_RATE",
                        "IMPRESSION": "IMPRESSION",
                        "OUTBOUND_CLICK": "OUTBOUND_CLICK",
                        "OUTBOUND_CLICK_RATE": "OUTBOUND_CLICK_RATE",
                        "PIN_CLICK": "PIN_CLICK",
                        "PIN_CLICK_RATE": "PIN_CLICK_RATE",
                        "SAVE": "SAVE",
                        "SAVE_RATE": "SAVE_RATE"
                    },
                    ('split_field',): {

                        "NO_SPLIT": "NO_SPLIT",
                        "APP_TYPE": "APP_TYPE",
                        "OWNED_CONTENT": "OWNED_CONTENT",
                        "PIN_FORMAT": "PIN_FORMAT"
                    },
                },
                'openapi_types': {
                    'start_date':
                        (date,),
                    'end_date':
                        (date,),
                    'from_claimed_content':
                        (str,),
                    'pin_format':
                        (str,),
                    'app_types':
                        (str,),
                    'metric_types':
                        ([str],),
                    'split_field':
                        (str,),
                    'ad_account_id':
                        (str,),
                },
                'attribute_map': {
                    'start_date': 'start_date',
                    'end_date': 'end_date',
                    'from_claimed_content': 'from_claimed_content',
                    'pin_format': 'pin_format',
                    'app_types': 'app_types',
                    'metric_types': 'metric_types',
                    'split_field': 'split_field',
                    'ad_account_id': 'ad_account_id',
                },
                'location_map': {
                    'start_date': 'query',
                    'end_date': 'query',
                    'from_claimed_content': 'query',
                    'pin_format': 'query',
                    'app_types': 'query',
                    'metric_types': 'query',
                    'split_field': 'query',
                    'ad_account_id': 'query',
                },
                'collection_format_map': {
                    'metric_types': 'csv',
                }
            },
            headers_map={
                'accept': [
                    'application/json'
                ],
                'content_type': [],
            },
            api_client=api_client
        )
        self.user_account_get_endpoint = _Endpoint(
            settings={
                'response_type': (Account,),
                'auth': [
                    'pinterest_oauth2'
                ],
                'endpoint_path': '/user_account',
                'operation_id': 'user_account_get',
                'http_method': 'GET',
                'servers': None,
            },
            params_map={
                'all': [
                    'ad_account_id',
                ],
                'required': [],
                'nullable': [
                ],
                'enum': [
                ],
                'validation': [
                    'ad_account_id',
                ]
            },
            root_map={
                'validations': {
                    ('ad_account_id',): {

                        'regex': {
                            'pattern': r'^\d+$',  # noqa: E501
                        },
                    },
                },
                'allowed_values': {
                },
                'openapi_types': {
                    'ad_account_id':
                        (str,),
                },
                'attribute_map': {
                    'ad_account_id': 'ad_account_id',
                },
                'location_map': {
                    'ad_account_id': 'query',
                },
                'collection_format_map': {
                }
            },
            headers_map={
                'accept': [
                    'application/json'
                ],
                'content_type': [],
            },
            api_client=api_client
        )

    def user_account_analytics(
        self,
        start_date,
        end_date,
        **kwargs
    ):
        """Get user account analytics  # noqa: E501

        Get analytics for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\".  # noqa: E501
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True

        >>> thread = api.user_account_analytics(start_date, end_date, async_req=True)
        >>> result = thread.get()

        Args:
            start_date (date): Metric report start date (UTC). Format: YYYY-MM-DD
            end_date (date): Metric report end date (UTC). Format: YYYY-MM-DD

        Keyword Args:
            from_claimed_content (str): Filter on Pins that match your claimed domain.. [optional] if omitted the server will use the default value of "BOTH"
            pin_format (str): Pin formats to get data for, default is all.. [optional] if omitted the server will use the default value of "ALL"
            app_types (str): Apps or devices to get data for, default is all.. [optional] if omitted the server will use the default value of "ALL"
            metric_types ([str]): Metric types to get data for, default is all. . [optional]
            split_field (str): How to split the data into groups. Not including this param means data won't be split.. [optional] if omitted the server will use the default value of "NO_SPLIT"
            ad_account_id (str): Unique identifier of an ad account.. [optional]
            _return_http_data_only (bool): response data without head status
                code and headers. Default is True.
            _preload_content (bool): if False, the urllib3.HTTPResponse object
                will be returned without reading/decoding response data.
                Default is True.
            _request_timeout (int/float/tuple): timeout setting for this request. If
                one number provided, it will be total request timeout. It can also
                be a pair (tuple) of (connection, read) timeouts.
                Default is None.
            _check_input_type (bool): specifies if type checking
                should be done one the data sent to the server.
                Default is True.
            _check_return_type (bool): specifies if type checking
                should be done one the data received from the server.
                Default is True.
            _spec_property_naming (bool): True if the variable names in the input data
                are serialized names, as specified in the OpenAPI document.
                False if the variable names in the input data
                are pythonic names, e.g. snake case (default)
            _content_type (str/None): force body content-type.
                Default is None and content-type will be predicted by allowed
                content-types and body.
            _host_index (int/None): specifies the index of the server
                that we want to use.
                Default is read from the configuration.
            async_req (bool): execute request asynchronously

        Returns:
            AnalyticsResponse
                If the method is called asynchronously, returns the request
                thread.
        """
        kwargs['async_req'] = kwargs.get(
            'async_req', False
        )
        kwargs['_return_http_data_only'] = kwargs.get(
            '_return_http_data_only', True
        )
        kwargs['_preload_content'] = kwargs.get(
            '_preload_content', True
        )
        kwargs['_request_timeout'] = kwargs.get(
            '_request_timeout', None
        )
        kwargs['_check_input_type'] = kwargs.get(
            '_check_input_type', True
        )
        kwargs['_check_return_type'] = kwargs.get(
            '_check_return_type', True
        )
        kwargs['_spec_property_naming'] = kwargs.get(
            '_spec_property_naming', False
        )
        kwargs['_content_type'] = kwargs.get(
            '_content_type')
        kwargs['_host_index'] = kwargs.get('_host_index')
        kwargs['start_date'] = \
            start_date
        kwargs['end_date'] = \
            end_date
        return self.user_account_analytics_endpoint.call_with_http_info(**kwargs)

    def user_account_get(
        self,
        **kwargs
    ):
        """Get user account  # noqa: E501

        Get account information for the \"operation user_account\" - By default, the \"operation user_account\" is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \"operation user_account\". See <a href='/docs/api/v5/#tag/Understanding-business-access'>Understanding Business Access</a> for more information.  # noqa: E501
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True

        >>> thread = api.user_account_get(async_req=True)
        >>> result = thread.get()


        Keyword Args:
            ad_account_id (str): Unique identifier of an ad account.. [optional]
            _return_http_data_only (bool): response data without head status
                code and headers. Default is True.
            _preload_content (bool): if False, the urllib3.HTTPResponse object
                will be returned without reading/decoding response data.
                Default is True.
            _request_timeout (int/float/tuple): timeout setting for this request. If
                one number provided, it will be total request timeout. It can also
                be a pair (tuple) of (connection, read) timeouts.
                Default is None.
            _check_input_type (bool): specifies if type checking
                should be done one the data sent to the server.
                Default is True.
            _check_return_type (bool): specifies if type checking
                should be done one the data received from the server.
                Default is True.
            _spec_property_naming (bool): True if the variable names in the input data
                are serialized names, as specified in the OpenAPI document.
                False if the variable names in the input data
                are pythonic names, e.g. snake case (default)
            _content_type (str/None): force body content-type.
                Default is None and content-type will be predicted by allowed
                content-types and body.
            _host_index (int/None): specifies the index of the server
                that we want to use.
                Default is read from the configuration.
            async_req (bool): execute request asynchronously

        Returns:
            Account
                If the method is called asynchronously, returns the request
                thread.
        """
        kwargs['async_req'] = kwargs.get(
            'async_req', False
        )
        kwargs['_return_http_data_only'] = kwargs.get(
            '_return_http_data_only', True
        )
        kwargs['_preload_content'] = kwargs.get(
            '_preload_content', True
        )
        kwargs['_request_timeout'] = kwargs.get(
            '_request_timeout', None
        )
        kwargs['_check_input_type'] = kwargs.get(
            '_check_input_type', True
        )
        kwargs['_check_return_type'] = kwargs.get(
            '_check_return_type', True
        )
        kwargs['_spec_property_naming'] = kwargs.get(
            '_spec_property_naming', False
        )
        kwargs['_content_type'] = kwargs.get(
            '_content_type')
        kwargs['_host_index'] = kwargs.get('_host_index')
        return self.user_account_get_endpoint.call_with_http_info(**kwargs)

