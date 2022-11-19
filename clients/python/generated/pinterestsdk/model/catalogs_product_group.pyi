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


class CatalogsProductGroup(
    schemas.ComposedBase,
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    catalog product group entity
    """


    class MetaOapg:
        
        
        class one_of_0(
            schemas.DictSchema
        ):
        
        
            class MetaOapg:
                required = {
                    "filters",
                    "id",
                    "feed_id",
                }
                
                class properties:
                    
                    
                    class id(
                        schemas.StrSchema
                    ):
                        pass
                    name = schemas.StrSchema
                    
                    
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
                    def filters() -> typing.Type['CatalogsProductGroupFilters']:
                        return CatalogsProductGroupFilters
                    is_featured = schemas.BoolSchema
                
                    @staticmethod
                    def type() -> typing.Type['CatalogsProductGroupType']:
                        return CatalogsProductGroupType
                
                    @staticmethod
                    def status() -> typing.Type['CatalogsProductGroupStatus']:
                        return CatalogsProductGroupStatus
                    created_at = schemas.IntSchema
                    updated_at = schemas.IntSchema
                    
                    
                    class feed_id(
                        schemas.StrSchema
                    ):
                        pass
                    __annotations__ = {
                        "id": id,
                        "name": name,
                        "description": description,
                        "filters": filters,
                        "is_featured": is_featured,
                        "type": type,
                        "status": status,
                        "created_at": created_at,
                        "updated_at": updated_at,
                        "feed_id": feed_id,
                    }
            
            filters: 'CatalogsProductGroupFilters'
            id: MetaOapg.properties.id
            feed_id: MetaOapg.properties.feed_id
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["id"]) -> MetaOapg.properties.id: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["name"]) -> MetaOapg.properties.name: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["description"]) -> MetaOapg.properties.description: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["filters"]) -> 'CatalogsProductGroupFilters': ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["is_featured"]) -> MetaOapg.properties.is_featured: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["type"]) -> 'CatalogsProductGroupType': ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["status"]) -> 'CatalogsProductGroupStatus': ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["created_at"]) -> MetaOapg.properties.created_at: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["updated_at"]) -> MetaOapg.properties.updated_at: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["feed_id"]) -> MetaOapg.properties.feed_id: ...
            
            @typing.overload
            def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
            
            def __getitem__(self, name: typing.Union[typing_extensions.Literal["id", "name", "description", "filters", "is_featured", "type", "status", "created_at", "updated_at", "feed_id", ], str]):
                # dict_instance[name] accessor
                return super().__getitem__(name)
            
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["id"]) -> MetaOapg.properties.id: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["name"]) -> typing.Union[MetaOapg.properties.name, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["description"]) -> typing.Union[MetaOapg.properties.description, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["filters"]) -> 'CatalogsProductGroupFilters': ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["is_featured"]) -> typing.Union[MetaOapg.properties.is_featured, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["type"]) -> typing.Union['CatalogsProductGroupType', schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["status"]) -> typing.Union['CatalogsProductGroupStatus', schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["created_at"]) -> typing.Union[MetaOapg.properties.created_at, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["updated_at"]) -> typing.Union[MetaOapg.properties.updated_at, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["feed_id"]) -> MetaOapg.properties.feed_id: ...
            
            @typing.overload
            def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
            
            def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["id", "name", "description", "filters", "is_featured", "type", "status", "created_at", "updated_at", "feed_id", ], str]):
                return super().get_item_oapg(name)
            
        
            def __new__(
                cls,
                *args: typing.Union[dict, frozendict.frozendict, ],
                filters: 'CatalogsProductGroupFilters',
                id: typing.Union[MetaOapg.properties.id, str, ],
                feed_id: typing.Union[MetaOapg.properties.feed_id, str, ],
                name: typing.Union[MetaOapg.properties.name, str, schemas.Unset] = schemas.unset,
                description: typing.Union[MetaOapg.properties.description, None, str, schemas.Unset] = schemas.unset,
                is_featured: typing.Union[MetaOapg.properties.is_featured, bool, schemas.Unset] = schemas.unset,
                type: typing.Union['CatalogsProductGroupType', schemas.Unset] = schemas.unset,
                status: typing.Union['CatalogsProductGroupStatus', schemas.Unset] = schemas.unset,
                created_at: typing.Union[MetaOapg.properties.created_at, decimal.Decimal, int, schemas.Unset] = schemas.unset,
                updated_at: typing.Union[MetaOapg.properties.updated_at, decimal.Decimal, int, schemas.Unset] = schemas.unset,
                _configuration: typing.Optional[schemas.Configuration] = None,
                **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
            ) -> 'one_of_0':
                return super().__new__(
                    cls,
                    *args,
                    filters=filters,
                    id=id,
                    feed_id=feed_id,
                    name=name,
                    description=description,
                    is_featured=is_featured,
                    type=type,
                    status=status,
                    created_at=created_at,
                    updated_at=updated_at,
                    _configuration=_configuration,
                    **kwargs,
                )
        
        
        class one_of_1(
            schemas.DictSchema
        ):
        
        
            class MetaOapg:
                required = {
                    "filters",
                    "id",
                    "feed_id",
                }
                
                class properties:
                    
                    
                    class id(
                        schemas.StrSchema
                    ):
                        pass
                    name = schemas.StrSchema
                    
                    
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
                    def filters() -> typing.Type['CatalogsProductGroupFilters']:
                        return CatalogsProductGroupFilters
                    is_featured = schemas.BoolSchema
                
                    @staticmethod
                    def type() -> typing.Type['CatalogsProductGroupType']:
                        return CatalogsProductGroupType
                
                    @staticmethod
                    def status() -> typing.Type['CatalogsProductGroupStatus']:
                        return CatalogsProductGroupStatus
                    created_at = schemas.IntSchema
                    updated_at = schemas.IntSchema
                    
                    
                    class feed_id(
                        schemas.EnumBase,
                        schemas.StrBase,
                        schemas.NoneBase,
                        schemas.Schema,
                        schemas.NoneStrMixin
                    ):
                    
                    
                        class MetaOapg:
                            enum_value_to_name = {
                                schemas.NoneClass.NONE: "NONE",
                            }
                        
                        @schemas.classproperty
                        def NONE(cls):
                            return cls(None)
                    
                    
                        def __new__(
                            cls,
                            *args: typing.Union[None, str, ],
                            _configuration: typing.Optional[schemas.Configuration] = None,
                        ) -> 'feed_id':
                            return super().__new__(
                                cls,
                                *args,
                                _configuration=_configuration,
                            )
                    __annotations__ = {
                        "id": id,
                        "name": name,
                        "description": description,
                        "filters": filters,
                        "is_featured": is_featured,
                        "type": type,
                        "status": status,
                        "created_at": created_at,
                        "updated_at": updated_at,
                        "feed_id": feed_id,
                    }
            
            filters: 'CatalogsProductGroupFilters'
            id: MetaOapg.properties.id
            feed_id: MetaOapg.properties.feed_id
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["id"]) -> MetaOapg.properties.id: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["name"]) -> MetaOapg.properties.name: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["description"]) -> MetaOapg.properties.description: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["filters"]) -> 'CatalogsProductGroupFilters': ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["is_featured"]) -> MetaOapg.properties.is_featured: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["type"]) -> 'CatalogsProductGroupType': ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["status"]) -> 'CatalogsProductGroupStatus': ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["created_at"]) -> MetaOapg.properties.created_at: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["updated_at"]) -> MetaOapg.properties.updated_at: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["feed_id"]) -> MetaOapg.properties.feed_id: ...
            
            @typing.overload
            def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
            
            def __getitem__(self, name: typing.Union[typing_extensions.Literal["id", "name", "description", "filters", "is_featured", "type", "status", "created_at", "updated_at", "feed_id", ], str]):
                # dict_instance[name] accessor
                return super().__getitem__(name)
            
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["id"]) -> MetaOapg.properties.id: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["name"]) -> typing.Union[MetaOapg.properties.name, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["description"]) -> typing.Union[MetaOapg.properties.description, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["filters"]) -> 'CatalogsProductGroupFilters': ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["is_featured"]) -> typing.Union[MetaOapg.properties.is_featured, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["type"]) -> typing.Union['CatalogsProductGroupType', schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["status"]) -> typing.Union['CatalogsProductGroupStatus', schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["created_at"]) -> typing.Union[MetaOapg.properties.created_at, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["updated_at"]) -> typing.Union[MetaOapg.properties.updated_at, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["feed_id"]) -> MetaOapg.properties.feed_id: ...
            
            @typing.overload
            def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
            
            def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["id", "name", "description", "filters", "is_featured", "type", "status", "created_at", "updated_at", "feed_id", ], str]):
                return super().get_item_oapg(name)
            
        
            def __new__(
                cls,
                *args: typing.Union[dict, frozendict.frozendict, ],
                filters: 'CatalogsProductGroupFilters',
                id: typing.Union[MetaOapg.properties.id, str, ],
                feed_id: typing.Union[MetaOapg.properties.feed_id, None, str, ],
                name: typing.Union[MetaOapg.properties.name, str, schemas.Unset] = schemas.unset,
                description: typing.Union[MetaOapg.properties.description, None, str, schemas.Unset] = schemas.unset,
                is_featured: typing.Union[MetaOapg.properties.is_featured, bool, schemas.Unset] = schemas.unset,
                type: typing.Union['CatalogsProductGroupType', schemas.Unset] = schemas.unset,
                status: typing.Union['CatalogsProductGroupStatus', schemas.Unset] = schemas.unset,
                created_at: typing.Union[MetaOapg.properties.created_at, decimal.Decimal, int, schemas.Unset] = schemas.unset,
                updated_at: typing.Union[MetaOapg.properties.updated_at, decimal.Decimal, int, schemas.Unset] = schemas.unset,
                _configuration: typing.Optional[schemas.Configuration] = None,
                **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
            ) -> 'one_of_1':
                return super().__new__(
                    cls,
                    *args,
                    filters=filters,
                    id=id,
                    feed_id=feed_id,
                    name=name,
                    description=description,
                    is_featured=is_featured,
                    type=type,
                    status=status,
                    created_at=created_at,
                    updated_at=updated_at,
                    _configuration=_configuration,
                    **kwargs,
                )
        
        @classmethod
        @functools.lru_cache()
        def one_of(cls):
            # we need this here to make our import statements work
            # we must store _composed_schemas in here so the code is only run
            # when we invoke this method. If we kept this at the class
            # level we would get an error because the class level
            # code would be run when this module is imported, and these composed
            # classes don't exist yet because their module has not finished
            # loading
            return [
                cls.one_of_0,
                cls.one_of_1,
            ]


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
    ) -> 'CatalogsProductGroup':
        return super().__new__(
            cls,
            *args,
            _configuration=_configuration,
            **kwargs,
        )

from pinterestsdk.model.catalogs_product_group_filters import CatalogsProductGroupFilters
from pinterestsdk.model.catalogs_product_group_status import CatalogsProductGroupStatus
from pinterestsdk.model.catalogs_product_group_type import CatalogsProductGroupType
