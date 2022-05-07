# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.ad_account_owner import AdAccountOwner
from openapi_server.models.country import Country
from openapi_server.models.currency import Currency
from openapi_server import util

from openapi_server.models.ad_account_owner import AdAccountOwner  # noqa: E501
from openapi_server.models.country import Country  # noqa: E501
from openapi_server.models.currency import Currency  # noqa: E501

class AdAccount(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, id=None, name=None, owner=None, country=None, currency=None):  # noqa: E501
        """AdAccount - a model defined in OpenAPI

        :param id: The id of this AdAccount.  # noqa: E501
        :type id: str
        :param name: The name of this AdAccount.  # noqa: E501
        :type name: str
        :param owner: The owner of this AdAccount.  # noqa: E501
        :type owner: AdAccountOwner
        :param country: The country of this AdAccount.  # noqa: E501
        :type country: Country
        :param currency: The currency of this AdAccount.  # noqa: E501
        :type currency: Currency
        """
        self.openapi_types = {
            'id': str,
            'name': str,
            'owner': AdAccountOwner,
            'country': Country,
            'currency': Currency
        }

        self.attribute_map = {
            'id': 'id',
            'name': 'name',
            'owner': 'owner',
            'country': 'country',
            'currency': 'currency'
        }

        self._id = id
        self._name = name
        self._owner = owner
        self._country = country
        self._currency = currency

    @classmethod
    def from_dict(cls, dikt) -> 'AdAccount':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The AdAccount of this AdAccount.  # noqa: E501
        :rtype: AdAccount
        """
        return util.deserialize_model(dikt, cls)

    @property
    def id(self):
        """Gets the id of this AdAccount.


        :return: The id of this AdAccount.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this AdAccount.


        :param id: The id of this AdAccount.
        :type id: str
        """

        self._id = id

    @property
    def name(self):
        """Gets the name of this AdAccount.


        :return: The name of this AdAccount.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this AdAccount.


        :param name: The name of this AdAccount.
        :type name: str
        """

        self._name = name

    @property
    def owner(self):
        """Gets the owner of this AdAccount.


        :return: The owner of this AdAccount.
        :rtype: AdAccountOwner
        """
        return self._owner

    @owner.setter
    def owner(self, owner):
        """Sets the owner of this AdAccount.


        :param owner: The owner of this AdAccount.
        :type owner: AdAccountOwner
        """

        self._owner = owner

    @property
    def country(self):
        """Gets the country of this AdAccount.


        :return: The country of this AdAccount.
        :rtype: Country
        """
        return self._country

    @country.setter
    def country(self, country):
        """Sets the country of this AdAccount.


        :param country: The country of this AdAccount.
        :type country: Country
        """

        self._country = country

    @property
    def currency(self):
        """Gets the currency of this AdAccount.


        :return: The currency of this AdAccount.
        :rtype: Currency
        """
        return self._currency

    @currency.setter
    def currency(self, currency):
        """Sets the currency of this AdAccount.


        :param currency: The currency of this AdAccount.
        :type currency: Currency
        """

        self._currency = currency
