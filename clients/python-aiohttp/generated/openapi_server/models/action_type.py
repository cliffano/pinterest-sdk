# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from openapi_server.models.base_model_ import Model
from openapi_server import util


class ActionType(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    """
    allowed enum values
    """
    CLICKTHROUGH = "CLICKTHROUGH"
    IMPRESSION = "IMPRESSION"
    VIDEO_V_50_MRC = "VIDEO_V_50_MRC"
    BILLABLE_ENGAGEMENT = "BILLABLE_ENGAGEMENT"

    def __init__(self):
        """ActionType - a model defined in OpenAPI

        """
        self.openapi_types = {
        }

        self.attribute_map = {
        }

    @classmethod
    def from_dict(cls, dikt: dict) -> 'ActionType':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The ActionType of this ActionType.
        """
        return util.deserialize_model(dikt, cls)
