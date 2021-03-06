# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: blah@cliffano.com
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


class OauthAccessTokenResponse(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    A successful OAuth access token response.
    """
    _required_property_names = set((
        'access_token',
        'token_type',
        'expires_in',
        'scope',
    ))
    
    
    class response_type(
        _SchemaEnumMaker(
            enum_value_to_name={
                "authorization_code": "AUTHORIZATION_CODE",
                "refresh_token": "REFRESH_TOKEN",
            }
        ),
        StrSchema
    ):
        
        @classmethod
        @property
        def AUTHORIZATION_CODE(cls):
            return cls._enum_by_value["authorization_code"]("authorization_code")
        
        @classmethod
        @property
        def REFRESH_TOKEN(cls):
            return cls._enum_by_value["refresh_token"]("refresh_token")
    access_token = StrSchema
    token_type = StrSchema
    expires_in = IntSchema
    scope = StrSchema

    @classmethod
    @property
    def _discriminator(cls):
        return {
            'response_type': {
                'OauthAccessTokenResponseCode': OauthAccessTokenResponseCode,
                'OauthAccessTokenResponseRefresh': OauthAccessTokenResponseRefresh,
                'authorization_code': OauthAccessTokenResponseCode,
                'refresh_token': OauthAccessTokenResponseRefresh,
            }
        }


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        access_token: access_token,
        token_type: token_type,
        expires_in: expires_in,
        scope: scope,
        response_type: typing.Union[response_type, Unset] = unset,
        _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'OauthAccessTokenResponse':
        return super().__new__(
            cls,
            *args,
            access_token=access_token,
            token_type=token_type,
            expires_in=expires_in,
            scope=scope,
            response_type=response_type,
            _instantiation_metadata=_instantiation_metadata,
            **kwargs,
        )

from openapi_client.model.oauth_access_token_response_code import OauthAccessTokenResponseCode
from openapi_client.model.oauth_access_token_response_refresh import OauthAccessTokenResponseRefresh
