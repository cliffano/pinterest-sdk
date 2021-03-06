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
from pinterestsdk.model.action_type import ActionType
from pinterestsdk.model.ad_group_response_all_of import AdGroupResponseAllOf
from pinterestsdk.model.ad_group_response_all_of1 import AdGroupResponseAllOf1
from pinterestsdk.model.ad_group_summary_status import AdGroupSummaryStatus
from pinterestsdk.model.entity_status import EntityStatus
from pinterestsdk.model.pacing_delivery_type import PacingDeliveryType
from pinterestsdk.model.placement_group_type import PlacementGroupType
from pinterestsdk.model.tracking_urls import TrackingUrls
globals()['ActionType'] = ActionType
globals()['AdGroupResponseAllOf'] = AdGroupResponseAllOf
globals()['AdGroupResponseAllOf1'] = AdGroupResponseAllOf1
globals()['AdGroupSummaryStatus'] = AdGroupSummaryStatus
globals()['EntityStatus'] = EntityStatus
globals()['PacingDeliveryType'] = PacingDeliveryType
globals()['PlacementGroupType'] = PlacementGroupType
globals()['TrackingUrls'] = TrackingUrls
from pinterestsdk.model.ad_group_response import AdGroupResponse


class TestAdGroupResponse(unittest.TestCase):
    """AdGroupResponse unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testAdGroupResponse(self):
        """Test AdGroupResponse"""
        # FIXME: construct object with mandatory attributes with example values
        # model = AdGroupResponse()  # noqa: E501
        pass


if __name__ == '__main__':
    unittest.main()
