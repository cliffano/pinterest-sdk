"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: pinterest-api@pinterest.com
    Generated by: https://openapi-generator.tech
"""


import sys
import unittest

import pinterestsdk
from pinterestsdk.model.oauth_access_token_response_code import OauthAccessTokenResponseCode
from pinterestsdk.model.oauth_access_token_response_refresh import OauthAccessTokenResponseRefresh
globals()['OauthAccessTokenResponseCode'] = OauthAccessTokenResponseCode
globals()['OauthAccessTokenResponseRefresh'] = OauthAccessTokenResponseRefresh
from pinterestsdk.model.oauth_access_token_response import OauthAccessTokenResponse


class TestOauthAccessTokenResponse(unittest.TestCase):
    """OauthAccessTokenResponse unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testOauthAccessTokenResponse(self):
        """Test OauthAccessTokenResponse"""
        # FIXME: construct object with mandatory attributes with example values
        # model = OauthAccessTokenResponse()  # noqa: E501
        pass


if __name__ == '__main__':
    unittest.main()
