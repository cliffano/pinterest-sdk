# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.openapi_server.models.base_model_ import Model
from openapi_server import util


class AdAccountOwner(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, username: str=None):  # noqa: E501
        """AdAccountOwner - a model defined in Swagger

        :param username: The username of this AdAccountOwner.  # noqa: E501
        :type username: str
        """
        self.swagger_types = {
            'username': str
        }

        self.attribute_map = {
            'username': 'username'
        }

        self._username = username

    @classmethod
    def from_dict(cls, dikt) -> 'AdAccountOwner':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The Ad_account_owner of this AdAccountOwner.  # noqa: E501
        :rtype: AdAccountOwner
        """
        return util.deserialize_model(dikt, cls)

    @property
    def username(self) -> str:
        """Gets the username of this AdAccountOwner.

        Public username for the user account  # noqa: E501

        :return: The username of this AdAccountOwner.
        :rtype: str
        """
        return self._username

    @username.setter
    def username(self, username: str):
        """Sets the username of this AdAccountOwner.

        Public username for the user account  # noqa: E501

        :param username: The username of this AdAccountOwner.
        :type username: str
        """

        self._username = username