# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.6.0
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""

from datetime import date, datetime  # noqa: F401
import decimal  # noqa: F401
import functools  # noqa: F401
import io  # noqa: F401
import re  # noqa: F401
import typing  # noqa: F401
import typing_extensions  # noqa: F401
import uuid  # noqa: F401

import frozendict  # noqa: F401

from pinterestsdk import schemas  # noqa: F401


class Audience(
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """


    class MetaOapg:
        
        class properties:
            
            
            class ad_account_id(
                schemas.StrSchema
            ):
            
            
                class MetaOapg:
                    regex=[{
                        'pattern': r'^\d+$',  # noqa: E501
                    }]
            
            
            class id(
                schemas.StrSchema
            ):
            
            
                class MetaOapg:
                    regex=[{
                        'pattern': r'^\d+$',  # noqa: E501
                    }]
            name = schemas.StrSchema
            audience_type = schemas.StrSchema
            
            
            class description(
                schemas.StrBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneStrMixin
            ):
            
            
                def __new__(
                    cls,
                    *args: typing.Union[None, str, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'description':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
        
            @staticmethod
            def rule() -> typing.Type['AudienceRule']:
                return AudienceRule
            
            
            class size(
                schemas.IntBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneDecimalMixin
            ):
            
            
                def __new__(
                    cls,
                    *args: typing.Union[None, decimal.Decimal, int, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'size':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            status = schemas.StrSchema
            type = schemas.StrSchema
            
            
            class created_timestamp(
                schemas.IntBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneDecimalMixin
            ):
            
            
                def __new__(
                    cls,
                    *args: typing.Union[None, decimal.Decimal, int, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'created_timestamp':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            
            
            class updated_timestamp(
                schemas.IntBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneDecimalMixin
            ):
            
            
                def __new__(
                    cls,
                    *args: typing.Union[None, decimal.Decimal, int, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'updated_timestamp':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            __annotations__ = {
                "ad_account_id": ad_account_id,
                "id": id,
                "name": name,
                "audience_type": audience_type,
                "description": description,
                "rule": rule,
                "size": size,
                "status": status,
                "type": type,
                "created_timestamp": created_timestamp,
                "updated_timestamp": updated_timestamp,
            }
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["ad_account_id"]) -> MetaOapg.properties.ad_account_id: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["id"]) -> MetaOapg.properties.id: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["name"]) -> MetaOapg.properties.name: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["audience_type"]) -> MetaOapg.properties.audience_type: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["description"]) -> MetaOapg.properties.description: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["rule"]) -> 'AudienceRule': ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["size"]) -> MetaOapg.properties.size: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["status"]) -> MetaOapg.properties.status: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["type"]) -> MetaOapg.properties.type: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["created_timestamp"]) -> MetaOapg.properties.created_timestamp: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["updated_timestamp"]) -> MetaOapg.properties.updated_timestamp: ...
    
    @typing.overload
    def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
    
    def __getitem__(self, name: typing.Union[typing_extensions.Literal["ad_account_id", "id", "name", "audience_type", "description", "rule", "size", "status", "type", "created_timestamp", "updated_timestamp", ], str]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["ad_account_id"]) -> typing.Union[MetaOapg.properties.ad_account_id, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["id"]) -> typing.Union[MetaOapg.properties.id, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["name"]) -> typing.Union[MetaOapg.properties.name, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["audience_type"]) -> typing.Union[MetaOapg.properties.audience_type, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["description"]) -> typing.Union[MetaOapg.properties.description, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["rule"]) -> typing.Union['AudienceRule', schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["size"]) -> typing.Union[MetaOapg.properties.size, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["status"]) -> typing.Union[MetaOapg.properties.status, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["type"]) -> typing.Union[MetaOapg.properties.type, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["created_timestamp"]) -> typing.Union[MetaOapg.properties.created_timestamp, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["updated_timestamp"]) -> typing.Union[MetaOapg.properties.updated_timestamp, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
    
    def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["ad_account_id", "id", "name", "audience_type", "description", "rule", "size", "status", "type", "created_timestamp", "updated_timestamp", ], str]):
        return super().get_item_oapg(name)
    

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        ad_account_id: typing.Union[MetaOapg.properties.ad_account_id, str, schemas.Unset] = schemas.unset,
        id: typing.Union[MetaOapg.properties.id, str, schemas.Unset] = schemas.unset,
        name: typing.Union[MetaOapg.properties.name, str, schemas.Unset] = schemas.unset,
        audience_type: typing.Union[MetaOapg.properties.audience_type, str, schemas.Unset] = schemas.unset,
        description: typing.Union[MetaOapg.properties.description, None, str, schemas.Unset] = schemas.unset,
        rule: typing.Union['AudienceRule', schemas.Unset] = schemas.unset,
        size: typing.Union[MetaOapg.properties.size, None, decimal.Decimal, int, schemas.Unset] = schemas.unset,
        status: typing.Union[MetaOapg.properties.status, str, schemas.Unset] = schemas.unset,
        type: typing.Union[MetaOapg.properties.type, str, schemas.Unset] = schemas.unset,
        created_timestamp: typing.Union[MetaOapg.properties.created_timestamp, None, decimal.Decimal, int, schemas.Unset] = schemas.unset,
        updated_timestamp: typing.Union[MetaOapg.properties.updated_timestamp, None, decimal.Decimal, int, schemas.Unset] = schemas.unset,
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
    ) -> 'Audience':
        return super().__new__(
            cls,
            *args,
            ad_account_id=ad_account_id,
            id=id,
            name=name,
            audience_type=audience_type,
            description=description,
            rule=rule,
            size=size,
            status=status,
            type=type,
            created_timestamp=created_timestamp,
            updated_timestamp=updated_timestamp,
            _configuration=_configuration,
            **kwargs,
        )

from pinterestsdk.model.audience_rule import AudienceRule
