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


class CatalogsProductGroupFiltersAllOfRequest(
    schemas.ComposedBase,
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Object holding a group of filters for request on catalog product group. This is a distinct schema It is not possible to create or update a Product Group with empty filters. But some automatically generated Product Groups might have empty filters.
    """


    class MetaOapg:
        
        
        class any_of_0(
            schemas.DictSchema
        ):
        
        
            class MetaOapg:
                required = {
                    "any_of",
                }
                
                class properties:
                    
                    
                    class any_of(
                        schemas.ListSchema
                    ):
                    
                    
                        class MetaOapg:
                            min_items = 1
                            items = schemas.DictSchema
                    
                        def __new__(
                            cls,
                            arg: typing.Union[typing.Tuple[typing.Union[MetaOapg.items, dict, frozendict.frozendict, ]], typing.List[typing.Union[MetaOapg.items, dict, frozendict.frozendict, ]]],
                            _configuration: typing.Optional[schemas.Configuration] = None,
                        ) -> 'any_of':
                            return super().__new__(
                                cls,
                                arg,
                                _configuration=_configuration,
                            )
                    
                        def __getitem__(self, i: int) -> MetaOapg.items:
                            return super().__getitem__(i)
                    __annotations__ = {
                        "any_of": any_of,
                    }
                additional_properties = schemas.NotAnyTypeSchema
            
            any_of: MetaOapg.properties.any_of
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["any_of"]) -> MetaOapg.properties.any_of: ...
            
            def __getitem__(self, name: typing.Union[typing_extensions.Literal["any_of"], ]):
                # dict_instance[name] accessor
                return super().__getitem__(name)
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["any_of"]) -> MetaOapg.properties.any_of: ...
            
            def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["any_of"], ]):
                return super().get_item_oapg(name)
        
            def __new__(
                cls,
                *args: typing.Union[dict, frozendict.frozendict, ],
                any_of: typing.Union[MetaOapg.properties.any_of, list, tuple, ],
                _configuration: typing.Optional[schemas.Configuration] = None,
            ) -> 'any_of_0':
                return super().__new__(
                    cls,
                    *args,
                    any_of=any_of,
                    _configuration=_configuration,
                )
        
        
        class any_of_1(
            schemas.DictSchema
        ):
        
        
            class MetaOapg:
                required = {
                    "all_of",
                }
                
                class properties:
                    
                    
                    class all_of(
                        schemas.ListSchema
                    ):
                    
                    
                        class MetaOapg:
                            min_items = 1
                            items = schemas.DictSchema
                    
                        def __new__(
                            cls,
                            arg: typing.Union[typing.Tuple[typing.Union[MetaOapg.items, dict, frozendict.frozendict, ]], typing.List[typing.Union[MetaOapg.items, dict, frozendict.frozendict, ]]],
                            _configuration: typing.Optional[schemas.Configuration] = None,
                        ) -> 'all_of':
                            return super().__new__(
                                cls,
                                arg,
                                _configuration=_configuration,
                            )
                    
                        def __getitem__(self, i: int) -> MetaOapg.items:
                            return super().__getitem__(i)
                    __annotations__ = {
                        "all_of": all_of,
                    }
                additional_properties = schemas.NotAnyTypeSchema
            
            all_of: MetaOapg.properties.all_of
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["all_of"]) -> MetaOapg.properties.all_of: ...
            
            def __getitem__(self, name: typing.Union[typing_extensions.Literal["all_of"], ]):
                # dict_instance[name] accessor
                return super().__getitem__(name)
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["all_of"]) -> MetaOapg.properties.all_of: ...
            
            def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["all_of"], ]):
                return super().get_item_oapg(name)
        
            def __new__(
                cls,
                *args: typing.Union[dict, frozendict.frozendict, ],
                all_of: typing.Union[MetaOapg.properties.all_of, list, tuple, ],
                _configuration: typing.Optional[schemas.Configuration] = None,
            ) -> 'any_of_1':
                return super().__new__(
                    cls,
                    *args,
                    all_of=all_of,
                    _configuration=_configuration,
                )
        
        @classmethod
        @functools.lru_cache()
        def any_of(cls):
            # we need this here to make our import statements work
            # we must store _composed_schemas in here so the code is only run
            # when we invoke this method. If we kept this at the class
            # level we would get an error because the class level
            # code would be run when this module is imported, and these composed
            # classes don't exist yet because their module has not finished
            # loading
            return [
                cls.any_of_0,
                cls.any_of_1,
            ]


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
    ) -> 'CatalogsProductGroupFiltersAllOfRequest':
        return super().__new__(
            cls,
            *args,
            _configuration=_configuration,
            **kwargs,
        )
