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
from pinterestsdk.model.ad_account_owner import AdAccountOwner
from pinterestsdk.model.country import Country
from pinterestsdk.model.currency import Currency
globals()['AdAccountOwner'] = AdAccountOwner
globals()['Country'] = Country
globals()['Currency'] = Currency
from pinterestsdk.model.ad_account import AdAccount


class TestAdAccount(unittest.TestCase):
    """AdAccount unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testAdAccount(self):
        """Test AdAccount"""
        # FIXME: construct object with mandatory attributes with example values
        # model = AdAccount()  # noqa: E501
        pass


if __name__ == '__main__':
    unittest.main()
