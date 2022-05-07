# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: pinterest-api@pinterest.com
    Generated by: https://openapi-generator.tech
"""

from setuptools import setup, find_packages  # noqa: H301

NAME = "openapi-client"
VERSION = "1.0.0"
# To install the library, run the following
#
# python setup.py install
#
# prerequisite: setuptools
# http://pypi.python.org/pypi/setuptools

REQUIRES = [
  "urllib3 >= 1.15",
  "certifi",
  "python-dateutil",
  "frozendict >= 2.0.3",
]

setup(
    name=NAME,
    version=VERSION,
    description="Pinterest REST API",
    author="Pinterest, Inc.",
    author_email="pinterest-api@pinterest.com",
    url="",
    keywords=["OpenAPI", "OpenAPI-Generator", "Pinterest REST API"],
    python_requires=">=3.9",
    install_requires=REQUIRES,
    packages=find_packages(exclude=["test", "tests"]),
    include_package_data=True,
    license="MIT",
    long_description="""\
    Pinterest&#x27;s REST API  # noqa: E501
    """
)
