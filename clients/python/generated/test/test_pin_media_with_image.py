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
from pinterestsdk.model.image_details import ImageDetails
from pinterestsdk.model.pin_media import PinMedia
from pinterestsdk.model.pin_media_with_image import PinMediaWithImage
from pinterestsdk.model.pin_media_with_image_all_of import PinMediaWithImageAllOf
globals()['ImageDetails'] = ImageDetails
globals()['PinMedia'] = PinMedia
globals()['PinMediaWithImage'] = PinMediaWithImage
globals()['PinMediaWithImageAllOf'] = PinMediaWithImageAllOf
from pinterestsdk.model.pin_media_with_image import PinMediaWithImage


class TestPinMediaWithImage(unittest.TestCase):
    """PinMediaWithImage unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testPinMediaWithImage(self):
        """Test PinMediaWithImage"""
        # FIXME: construct object with mandatory attributes with example values
        # model = PinMediaWithImage()  # noqa: E501
        pass


if __name__ == '__main__':
    unittest.main()
