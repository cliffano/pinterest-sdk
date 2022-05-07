# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: pinterest-api@pinterest.com
    Generated by: https://openapi-generator.tech
"""

import re  # noqa: F401
import sys  # noqa: F401
import typing  # noqa: F401

from frozendict import frozendict  # noqa: F401

import decimal  # noqa: F401
from datetime import date, datetime  # noqa: F401
from frozendict import frozendict  # noqa: F401

from openapi_client.schemas import (  # noqa: F401
    AnyTypeSchema,
    ComposedSchema,
    DictSchema,
    ListSchema,
    StrSchema,
    IntSchema,
    Int32Schema,
    Int64Schema,
    Float32Schema,
    Float64Schema,
    NumberSchema,
    DateSchema,
    DateTimeSchema,
    DecimalSchema,
    BoolSchema,
    BinarySchema,
    NoneSchema,
    none_type,
    InstantiationMetadata,
    Unset,
    unset,
    ComposedBase,
    ListBase,
    DictBase,
    NoneBase,
    StrBase,
    IntBase,
    NumberBase,
    DateBase,
    DateTimeBase,
    BoolBase,
    BinaryBase,
    Schema,
    _SchemaValidator,
    _SchemaTypeChecker,
    _SchemaEnumMaker
)


class PinMediaWithImage(
    ComposedSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Pin with image.
    """

    @classmethod
    @property
    def _discriminator(cls):
        return {
            'media_type': {
                'image': PinMediaWithImage,
            }
        }

    @classmethod
    @property
    def _composed_schemas(cls):
        # we need this here to make our import statements work
        # we must store _composed_schemas in here so the code is only run
        # when we invoke this method. If we kept this at the class
        # level we would get an error because the class level
        # code would be run when this module is imported, and these composed
        # classes don't exist yet because their module has not finished
        # loading
        return {
            'allOf': [
                PinMediaWithImageAllOf,
                PinMedia,
            ],
            'oneOf': [
            ],
            'anyOf': [
            ],
        }

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, str, date, datetime, int, float, decimal.Decimal, None, list, tuple, bytes],
        _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'PinMediaWithImage':
        return super().__new__(
            cls,
            *args,
            _instantiation_metadata=_instantiation_metadata,
            **kwargs,
        )

from openapi_client.model.pin_media import PinMedia
from openapi_client.model.pin_media_with_image import PinMediaWithImage
from openapi_client.model.pin_media_with_image_all_of import PinMediaWithImageAllOf
