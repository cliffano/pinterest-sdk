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
from pinterestsdk.model.batch_operation import BatchOperation
from pinterestsdk.model.country import Country
from pinterestsdk.model.item_batch_record import ItemBatchRecord
from pinterestsdk.model.language import Language
globals()['BatchOperation'] = BatchOperation
globals()['Country'] = Country
globals()['ItemBatchRecord'] = ItemBatchRecord
globals()['Language'] = Language
from pinterestsdk.model.catalogs_items_batch_request import CatalogsItemsBatchRequest


class TestCatalogsItemsBatchRequest(unittest.TestCase):
    """CatalogsItemsBatchRequest unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testCatalogsItemsBatchRequest(self):
        """Test CatalogsItemsBatchRequest"""
        # FIXME: construct object with mandatory attributes with example values
        # model = CatalogsItemsBatchRequest()  # noqa: E501
        pass


if __name__ == '__main__':
    unittest.main()
