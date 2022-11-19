# coding: utf-8

"""


    Generated by: https://openapi-generator.tech
"""

import unittest
from unittest.mock import patch

import urllib3

import pinterestsdk
from pinterestsdk.paths.ad_accounts_ad_account_id_events import post  # noqa: E501
from pinterestsdk import configuration, schemas, api_client

from .. import ApiTestMixin


class TestAdAccountsAdAccountIdEvents(ApiTestMixin, unittest.TestCase):
    """
    AdAccountsAdAccountIdEvents unit test stubs
        Send conversion events to the Pinterest API for Conversions  # noqa: E501
    """
    _configuration = configuration.Configuration()

    def setUp(self):
        used_api_client = api_client.ApiClient(configuration=self._configuration)
        self.api = post.ApiForpost(api_client=used_api_client)  # noqa: E501

    def tearDown(self):
        pass

    response_status = 200






if __name__ == '__main__':
    unittest.main()
