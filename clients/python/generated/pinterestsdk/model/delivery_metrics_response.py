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


class DeliveryMetricsResponse(
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """


    class MetaOapg:
        
        class properties:
            
            
            class items(
                schemas.ListSchema
            ):
            
            
                class MetaOapg:
                    
                    
                    class items(
                        schemas.DictSchema
                    ):
                    
                    
                        class MetaOapg:
                            
                            class properties:
                                name = schemas.StrSchema
                                
                                
                                class category(
                                    schemas.EnumBase,
                                    schemas.StrSchema
                                ):
                                
                                
                                    class MetaOapg:
                                        enum_value_to_name = {
                                            "ADS": "ADS",
                                            "ORGANIC": "ORGANIC",
                                        }
                                    
                                    @schemas.classproperty
                                    def ADS(cls):
                                        return cls("ADS")
                                    
                                    @schemas.classproperty
                                    def ORGANIC(cls):
                                        return cls("ORGANIC")
                                definition = schemas.StrSchema
                                display_name = schemas.StrSchema
                                __annotations__ = {
                                    "name": name,
                                    "category": category,
                                    "definition": definition,
                                    "display_name": display_name,
                                }
                        
                        @typing.overload
                        def __getitem__(self, name: typing_extensions.Literal["name"]) -> MetaOapg.properties.name: ...
                        
                        @typing.overload
                        def __getitem__(self, name: typing_extensions.Literal["category"]) -> MetaOapg.properties.category: ...
                        
                        @typing.overload
                        def __getitem__(self, name: typing_extensions.Literal["definition"]) -> MetaOapg.properties.definition: ...
                        
                        @typing.overload
                        def __getitem__(self, name: typing_extensions.Literal["display_name"]) -> MetaOapg.properties.display_name: ...
                        
                        @typing.overload
                        def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
                        
                        def __getitem__(self, name: typing.Union[typing_extensions.Literal["name", "category", "definition", "display_name", ], str]):
                            # dict_instance[name] accessor
                            return super().__getitem__(name)
                        
                        
                        @typing.overload
                        def get_item_oapg(self, name: typing_extensions.Literal["name"]) -> typing.Union[MetaOapg.properties.name, schemas.Unset]: ...
                        
                        @typing.overload
                        def get_item_oapg(self, name: typing_extensions.Literal["category"]) -> typing.Union[MetaOapg.properties.category, schemas.Unset]: ...
                        
                        @typing.overload
                        def get_item_oapg(self, name: typing_extensions.Literal["definition"]) -> typing.Union[MetaOapg.properties.definition, schemas.Unset]: ...
                        
                        @typing.overload
                        def get_item_oapg(self, name: typing_extensions.Literal["display_name"]) -> typing.Union[MetaOapg.properties.display_name, schemas.Unset]: ...
                        
                        @typing.overload
                        def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
                        
                        def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["name", "category", "definition", "display_name", ], str]):
                            return super().get_item_oapg(name)
                        
                    
                        def __new__(
                            cls,
                            *args: typing.Union[dict, frozendict.frozendict, ],
                            name: typing.Union[MetaOapg.properties.name, str, schemas.Unset] = schemas.unset,
                            category: typing.Union[MetaOapg.properties.category, str, schemas.Unset] = schemas.unset,
                            definition: typing.Union[MetaOapg.properties.definition, str, schemas.Unset] = schemas.unset,
                            display_name: typing.Union[MetaOapg.properties.display_name, str, schemas.Unset] = schemas.unset,
                            _configuration: typing.Optional[schemas.Configuration] = None,
                            **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
                        ) -> 'items':
                            return super().__new__(
                                cls,
                                *args,
                                name=name,
                                category=category,
                                definition=definition,
                                display_name=display_name,
                                _configuration=_configuration,
                                **kwargs,
                            )
            
                def __new__(
                    cls,
                    arg: typing.Union[typing.Tuple[typing.Union[MetaOapg.items, dict, frozendict.frozendict, ]], typing.List[typing.Union[MetaOapg.items, dict, frozendict.frozendict, ]]],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'items':
                    return super().__new__(
                        cls,
                        arg,
                        _configuration=_configuration,
                    )
            
                def __getitem__(self, i: int) -> MetaOapg.items:
                    return super().__getitem__(i)
            __annotations__ = {
                "items": items,
            }
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["items"]) -> MetaOapg.properties.items: ...
    
    @typing.overload
    def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
    
    def __getitem__(self, name: typing.Union[typing_extensions.Literal["items", ], str]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["items"]) -> typing.Union[MetaOapg.properties.items, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
    
    def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["items", ], str]):
        return super().get_item_oapg(name)
    

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        items: typing.Union[MetaOapg.properties.items, list, tuple, schemas.Unset] = schemas.unset,
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
    ) -> 'DeliveryMetricsResponse':
        return super().__new__(
            cls,
            *args,
            items=items,
            _configuration=_configuration,
            **kwargs,
        )
