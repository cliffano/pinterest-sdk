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
from pinterestsdk.model.country import Country
from pinterestsdk.model.nullable_currency import NullableCurrency
from pinterestsdk.model.product_availability_type import ProductAvailabilityType
globals()['CatalogsFeedCredentials'] = CatalogsFeedCredentials
globals()['CatalogsFeedProcessingSchedule'] = CatalogsFeedProcessingSchedule
globals()['CatalogsFormat'] = CatalogsFormat
globals()['CatalogsStatus'] = CatalogsStatus
globals()['Country'] = Country
globals()['NullableCurrency'] = NullableCurrency
globals()['ProductAvailabilityType'] = ProductAvailabilityType
from pinterestsdk.model.feed_fields import FeedFields


class TestFeedFields(unittest.TestCase):
    """FeedFields unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testFeedFields(self):
        """Test FeedFields"""
        # FIXME: construct object with mandatory attributes with example values
        # model = FeedFields()  # noqa: E501
        pass


if __name__ == '__main__':
    unittest.main()
