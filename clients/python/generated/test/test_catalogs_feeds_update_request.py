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
from pinterestsdk.model.catalogs_feed_credentials import CatalogsFeedCredentials
from pinterestsdk.model.catalogs_feed_processing_schedule import CatalogsFeedProcessingSchedule
from pinterestsdk.model.catalogs_format import CatalogsFormat
from pinterestsdk.model.catalogs_status import CatalogsStatus
from pinterestsdk.model.nullable_currency import NullableCurrency
from pinterestsdk.model.product_availability_type import ProductAvailabilityType
globals()['CatalogsFeedCredentials'] = CatalogsFeedCredentials
globals()['CatalogsFeedProcessingSchedule'] = CatalogsFeedProcessingSchedule
globals()['CatalogsFormat'] = CatalogsFormat
globals()['CatalogsStatus'] = CatalogsStatus
globals()['NullableCurrency'] = NullableCurrency
globals()['ProductAvailabilityType'] = ProductAvailabilityType
from pinterestsdk.model.catalogs_feeds_update_request import CatalogsFeedsUpdateRequest


class TestCatalogsFeedsUpdateRequest(unittest.TestCase):
    """CatalogsFeedsUpdateRequest unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testCatalogsFeedsUpdateRequest(self):
        """Test CatalogsFeedsUpdateRequest"""
        # FIXME: construct object with mandatory attributes with example values
        # model = CatalogsFeedsUpdateRequest()  # noqa: E501
        pass


if __name__ == '__main__':
    unittest.main()
