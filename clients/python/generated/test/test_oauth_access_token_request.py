"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""


import sys
import unittest

import pinterestsdk
from pinterestsdk.model.oauth_access_token_request_code import OauthAccessTokenRequestCode
from pinterestsdk.model.oauth_access_token_request_refresh import OauthAccessTokenRequestRefresh
globals()['OauthAccessTokenRequestCode'] = OauthAccessTokenRequestCode
globals()['OauthAccessTokenRequestRefresh'] = OauthAccessTokenRequestRefresh
from pinterestsdk.model.oauth_access_token_request import OauthAccessTokenRequest


class TestOauthAccessTokenRequest(unittest.TestCase):
    """OauthAccessTokenRequest unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testOauthAccessTokenRequest(self):
        """Test OauthAccessTokenRequest"""
        # FIXME: construct object with mandatory attributes with example values
        # model = OauthAccessTokenRequest()  # noqa: E501
        pass


if __name__ == '__main__':
    unittest.main()
