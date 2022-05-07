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


class MediaUploadAllOf(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    media_id = StrSchema
    
    
    class media_type(
        ComposedBase,
        StrSchema
    ):
    
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
                    MediaUploadType,
                ],
                'oneOf': [
                ],
                'anyOf': [
                ],
            }
    
        def __new__(
            cls,
            *args: typing.Union[str, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        ) -> 'media_type':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
            )
    upload_url = StrSchema

    @classmethod
    @property
    def upload_parameters(cls) -> typing.Type['MediaUploadAllOfUploadParameters']:
        return MediaUploadAllOfUploadParameters


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        media_id: typing.Union[media_id, Unset] = unset,
        media_type: typing.Union[media_type, Unset] = unset,
        upload_url: typing.Union[upload_url, Unset] = unset,
        upload_parameters: typing.Union['MediaUploadAllOfUploadParameters', Unset] = unset,
        _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'MediaUploadAllOf':
        return super().__new__(
            cls,
            *args,
            media_id=media_id,
            media_type=media_type,
            upload_url=upload_url,
            upload_parameters=upload_parameters,
            _instantiation_metadata=_instantiation_metadata,
            **kwargs,
        )

from openapi_client.model.media_upload_all_of_upload_parameters import MediaUploadAllOfUploadParameters
from openapi_client.model.media_upload_type import MediaUploadType
