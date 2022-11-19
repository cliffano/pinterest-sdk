# coding: utf-8

"""


    Generated by: https://openapi-generator.tech
"""

import unittest
from unittest.mock import patch

import urllib3

import pinterestsdk
from pinterestsdk.paths.ad_accounts_ad_account_id_customer_lists_customer_list_id import get  # noqa: E501
from pinterestsdk import configuration, schemas, api_client

from .. import ApiTestMixin


class TestAdAccountsAdAccountIdCustomerListsCustomerListId(ApiTestMixin, unittest.TestCase):
    """
    AdAccountsAdAccountIdCustomerListsCustomerListId unit test stubs
        Get customer list  # noqa: E501
    """
    _configuration = configuration.Configuration()

    def setUp(self):
        used_api_client = api_client.ApiClient(configuration=self._configuration)
        self.api = get.ApiForget(api_client=used_api_client)  # noqa: E501

    def tearDown(self):
        pass

    response_status = 200




if __name__ == '__main__':
    unittest.main()
