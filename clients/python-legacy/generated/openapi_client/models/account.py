# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""


try:
    from inspect import getfullargspec
except ImportError:
    from inspect import getargspec as getfullargspec
import pprint
import re  # noqa: F401
import six

from openapi_client.configuration import Configuration


class Account(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'account_type': 'str',
        'profile_image': 'str',
        'website_url': 'str',
        'username': 'str'
    }

    attribute_map = {
        'account_type': 'account_type',
        'profile_image': 'profile_image',
        'website_url': 'website_url',
        'username': 'username'
    }

    def __init__(self, account_type=None, profile_image=None, website_url=None, username=None, local_vars_configuration=None):  # noqa: E501
        """Account - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration.get_default_copy()
        self.local_vars_configuration = local_vars_configuration

        self._account_type = None
        self._profile_image = None
        self._website_url = None
        self._username = None
        self.discriminator = None

        if account_type is not None:
            self.account_type = account_type
        if profile_image is not None:
            self.profile_image = profile_image
        if website_url is not None:
            self.website_url = website_url
        if username is not None:
            self.username = username

    @property
    def account_type(self):
        """Gets the account_type of this Account.  # noqa: E501

        Type of account  # noqa: E501

        :return: The account_type of this Account.  # noqa: E501
        :rtype: str
        """
        return self._account_type

    @account_type.setter
    def account_type(self, account_type):
        """Sets the account_type of this Account.

        Type of account  # noqa: E501

        :param account_type: The account_type of this Account.  # noqa: E501
        :type account_type: str
        """
        allowed_values = ["PINNER", "BUSINESS"]  # noqa: E501
        if self.local_vars_configuration.client_side_validation and account_type not in allowed_values:  # noqa: E501
            raise ValueError(
                "Invalid value for `account_type` ({0}), must be one of {1}"  # noqa: E501
                .format(account_type, allowed_values)
            )

        self._account_type = account_type

    @property
    def profile_image(self):
        """Gets the profile_image of this Account.  # noqa: E501


        :return: The profile_image of this Account.  # noqa: E501
        :rtype: str
        """
        return self._profile_image

    @profile_image.setter
    def profile_image(self, profile_image):
        """Sets the profile_image of this Account.


        :param profile_image: The profile_image of this Account.  # noqa: E501
        :type profile_image: str
        """

        self._profile_image = profile_image

    @property
    def website_url(self):
        """Gets the website_url of this Account.  # noqa: E501


        :return: The website_url of this Account.  # noqa: E501
        :rtype: str
        """
        return self._website_url

    @website_url.setter
    def website_url(self, website_url):
        """Sets the website_url of this Account.


        :param website_url: The website_url of this Account.  # noqa: E501
        :type website_url: str
        """

        self._website_url = website_url

    @property
    def username(self):
        """Gets the username of this Account.  # noqa: E501


        :return: The username of this Account.  # noqa: E501
        :rtype: str
        """
        return self._username

    @username.setter
    def username(self, username):
        """Sets the username of this Account.


        :param username: The username of this Account.  # noqa: E501
        :type username: str
        """

        self._username = username

    def to_dict(self, serialize=False):
        """Returns the model properties as a dict"""
        result = {}

        def convert(x):
            if hasattr(x, "to_dict"):
                args = getfullargspec(x.to_dict).args
                if len(args) == 1:
                    return x.to_dict()
                else:
                    return x.to_dict(serialize)
            else:
                return x

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            attr = self.attribute_map.get(attr, attr) if serialize else attr
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: convert(x),
                    value
                ))
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], convert(item[1])),
                    value.items()
                ))
            else:
                result[attr] = convert(value)

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, Account):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, Account):
            return True

        return self.to_dict() != other.to_dict()
