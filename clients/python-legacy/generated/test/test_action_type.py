# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest
import datetime

import openapi_client
from openapi_client.models.action_type import ActionType  # noqa: E501
from openapi_client.rest import ApiException

class TestActionType(unittest.TestCase):
    """ActionType unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test ActionType
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.action_type.ActionType()  # noqa: E501
        if include_optional :
            return ActionType(
            )
        else :
            return ActionType(
        )

    def testActionType(self):
        """Test ActionType"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)

if __name__ == '__main__':
    unittest.main()
