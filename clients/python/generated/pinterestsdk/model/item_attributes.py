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


class ItemAttributes(
    schemas.ComposedBase,
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """


    class MetaOapg:
        
        
        class all_of_0(
            schemas.AnyTypeSchema,
        ):
        
        
            class MetaOapg:
                
                class properties:
                    
                    
                    class additional_image_link(
                        schemas.ListBase,
                        schemas.NoneBase,
                        schemas.Schema,
                        schemas.NoneTupleMixin
                    ):
                    
                    
                        class MetaOapg:
                            items = schemas.StrSchema
                    
                    
                        def __new__(
                            cls,
                            *args: typing.Union[list, tuple, None, ],
                            _configuration: typing.Optional[schemas.Configuration] = None,
                        ) -> 'additional_image_link':
                            return super().__new__(
                                cls,
                                *args,
                                _configuration=_configuration,
                            )
                    
                    
                    class image_link(
                        schemas.ListSchema
                    ):
                    
                    
                        class MetaOapg:
                            min_items = 1
                            items = schemas.StrSchema
                    
                        def __new__(
                            cls,
                            arg: typing.Union[typing.Tuple[typing.Union[MetaOapg.items, str, ]], typing.List[typing.Union[MetaOapg.items, str, ]]],
                            _configuration: typing.Optional[schemas.Configuration] = None,
                        ) -> 'image_link':
                            return super().__new__(
                                cls,
                                arg,
                                _configuration=_configuration,
                            )
                    
                        def __getitem__(self, i: int) -> MetaOapg.items:
                            return super().__getitem__(i)
                    __annotations__ = {
                        "additional_image_link": additional_image_link,
                        "image_link": image_link,
                    }
        
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["additional_image_link"]) -> MetaOapg.properties.additional_image_link: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["image_link"]) -> MetaOapg.properties.image_link: ...
            
            @typing.overload
            def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
            
            def __getitem__(self, name: typing.Union[typing_extensions.Literal["additional_image_link", "image_link", ], str]):
                # dict_instance[name] accessor
                return super().__getitem__(name)
            
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["additional_image_link"]) -> typing.Union[MetaOapg.properties.additional_image_link, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["image_link"]) -> typing.Union[MetaOapg.properties.image_link, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
            
            def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["additional_image_link", "image_link", ], str]):
                return super().get_item_oapg(name)
            
        
            def __new__(
                cls,
                *args: typing.Union[dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, bool, None, list, tuple, bytes, io.FileIO, io.BufferedReader, ],
                additional_image_link: typing.Union[MetaOapg.properties.additional_image_link, list, tuple, None, schemas.Unset] = schemas.unset,
                image_link: typing.Union[MetaOapg.properties.image_link, list, tuple, schemas.Unset] = schemas.unset,
                _configuration: typing.Optional[schemas.Configuration] = None,
                **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
            ) -> 'all_of_0':
                return super().__new__(
                    cls,
                    *args,
                    additional_image_link=additional_image_link,
                    image_link=image_link,
                    _configuration=_configuration,
                    **kwargs,
                )
        
        @classmethod
        @functools.lru_cache()
        def all_of(cls):
            # we need this here to make our import statements work
            # we must store _composed_schemas in here so the code is only run
            # when we invoke this method. If we kept this at the class
            # level we would get an error because the class level
            # code would be run when this module is imported, and these composed
            # classes don't exist yet because their module has not finished
            # loading
            return [
                cls.all_of_0,
                UpdatableItemAttributes,
            ]


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
    ) -> 'ItemAttributes':
        return super().__new__(
            cls,
            *args,
            _configuration=_configuration,
            **kwargs,
        )

from pinterestsdk.model.updatable_item_attributes import UpdatableItemAttributes
