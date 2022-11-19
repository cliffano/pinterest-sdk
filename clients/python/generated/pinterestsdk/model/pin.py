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


class Pin(
    schemas.DictBase,
    schemas.NoneBase,
    schemas.Schema,
    schemas.NoneFrozenDictMixin
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Pin
    """


    class MetaOapg:
        
        class properties:
            id = schemas.StrSchema
            created_at = schemas.DateTimeSchema
            
            
            class link(
                schemas.StrBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneStrMixin
            ):
            
            
                class MetaOapg:
                    max_length = 2048
            
            
                def __new__(
                    cls,
                    *args: typing.Union[None, str, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'link':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            
            
            class title(
                schemas.StrBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneStrMixin
            ):
            
            
                class MetaOapg:
                    max_length = 100
            
            
                def __new__(
                    cls,
                    *args: typing.Union[None, str, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'title':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            
            
            class description(
                schemas.StrBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneStrMixin
            ):
            
            
                class MetaOapg:
                    max_length = 500
            
            
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
            
            
            class dominant_color(
                schemas.StrBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneStrMixin
            ):
            
            
                def __new__(
                    cls,
                    *args: typing.Union[None, str, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'dominant_color':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            
            
            class alt_text(
                schemas.StrBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneStrMixin
            ):
            
            
                class MetaOapg:
                    max_length = 500
            
            
                def __new__(
                    cls,
                    *args: typing.Union[None, str, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'alt_text':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            
            
            class board_id(
                schemas.StrSchema
            ):
            
            
                class MetaOapg:
                    regex=[{
                        'pattern': r'^\d+$',  # noqa: E501
                    }]
            
            
            class board_section_id(
                schemas.StrBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneStrMixin
            ):
            
            
                class MetaOapg:
                    regex=[{
                        'pattern': r'^\d+$',  # noqa: E501
                    }]
            
            
                def __new__(
                    cls,
                    *args: typing.Union[None, str, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'board_section_id':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            
            
            class board_owner(
                schemas.ComposedBase,
                schemas.DictSchema
            ):
            
            
                class MetaOapg:
                    
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
                            BoardOwner,
                        ]
            
            
                def __new__(
                    cls,
                    *args: typing.Union[dict, frozendict.frozendict, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                    **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
                ) -> 'board_owner':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                        **kwargs,
                    )
            
            
            class media(
                schemas.ComposedBase,
                schemas.DictSchema
            ):
            
            
                class MetaOapg:
                    
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
                            PinMedia,
                        ]
            
            
                def __new__(
                    cls,
                    *args: typing.Union[dict, frozendict.frozendict, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                    **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
                ) -> 'media':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                        **kwargs,
                    )
            
            
            class media_source(
                schemas.ComposedBase,
                schemas.DictSchema
            ):
            
            
                class MetaOapg:
                    
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
                            PinMediaSource,
                        ]
            
            
                def __new__(
                    cls,
                    *args: typing.Union[dict, frozendict.frozendict, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                    **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
                ) -> 'media_source':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                        **kwargs,
                    )
            
            
            class parent_pin_id(
                schemas.StrBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneStrMixin
            ):
            
            
                class MetaOapg:
                    regex=[{
                        'pattern': r'^\d+$',  # noqa: E501
                    }]
            
            
                def __new__(
                    cls,
                    *args: typing.Union[None, str, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'parent_pin_id':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            __annotations__ = {
                "id": id,
                "created_at": created_at,
                "link": link,
                "title": title,
                "description": description,
                "dominant_color": dominant_color,
                "alt_text": alt_text,
                "board_id": board_id,
                "board_section_id": board_section_id,
                "board_owner": board_owner,
                "media": media,
                "media_source": media_source,
                "parent_pin_id": parent_pin_id,
            }

    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["id"]) -> MetaOapg.properties.id: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["created_at"]) -> MetaOapg.properties.created_at: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["link"]) -> MetaOapg.properties.link: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["title"]) -> MetaOapg.properties.title: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["description"]) -> MetaOapg.properties.description: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["dominant_color"]) -> MetaOapg.properties.dominant_color: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["alt_text"]) -> MetaOapg.properties.alt_text: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["board_id"]) -> MetaOapg.properties.board_id: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["board_section_id"]) -> MetaOapg.properties.board_section_id: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["board_owner"]) -> MetaOapg.properties.board_owner: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["media"]) -> MetaOapg.properties.media: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["media_source"]) -> MetaOapg.properties.media_source: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["parent_pin_id"]) -> MetaOapg.properties.parent_pin_id: ...
    
    @typing.overload
    def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
    
    def __getitem__(self, name: typing.Union[typing_extensions.Literal["id", "created_at", "link", "title", "description", "dominant_color", "alt_text", "board_id", "board_section_id", "board_owner", "media", "media_source", "parent_pin_id", ], str]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["id"]) -> typing.Union[MetaOapg.properties.id, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["created_at"]) -> typing.Union[MetaOapg.properties.created_at, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["link"]) -> typing.Union[MetaOapg.properties.link, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["title"]) -> typing.Union[MetaOapg.properties.title, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["description"]) -> typing.Union[MetaOapg.properties.description, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["dominant_color"]) -> typing.Union[MetaOapg.properties.dominant_color, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["alt_text"]) -> typing.Union[MetaOapg.properties.alt_text, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["board_id"]) -> typing.Union[MetaOapg.properties.board_id, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["board_section_id"]) -> typing.Union[MetaOapg.properties.board_section_id, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["board_owner"]) -> typing.Union[MetaOapg.properties.board_owner, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["media"]) -> typing.Union[MetaOapg.properties.media, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["media_source"]) -> typing.Union[MetaOapg.properties.media_source, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["parent_pin_id"]) -> typing.Union[MetaOapg.properties.parent_pin_id, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
    
    def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["id", "created_at", "link", "title", "description", "dominant_color", "alt_text", "board_id", "board_section_id", "board_owner", "media", "media_source", "parent_pin_id", ], str]):
        return super().get_item_oapg(name)
    

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, None, ],
        id: typing.Union[MetaOapg.properties.id, str, schemas.Unset] = schemas.unset,
        created_at: typing.Union[MetaOapg.properties.created_at, str, datetime, schemas.Unset] = schemas.unset,
        link: typing.Union[MetaOapg.properties.link, None, str, schemas.Unset] = schemas.unset,
        title: typing.Union[MetaOapg.properties.title, None, str, schemas.Unset] = schemas.unset,
        description: typing.Union[MetaOapg.properties.description, None, str, schemas.Unset] = schemas.unset,
        dominant_color: typing.Union[MetaOapg.properties.dominant_color, None, str, schemas.Unset] = schemas.unset,
        alt_text: typing.Union[MetaOapg.properties.alt_text, None, str, schemas.Unset] = schemas.unset,
        board_id: typing.Union[MetaOapg.properties.board_id, str, schemas.Unset] = schemas.unset,
        board_section_id: typing.Union[MetaOapg.properties.board_section_id, None, str, schemas.Unset] = schemas.unset,
        board_owner: typing.Union[MetaOapg.properties.board_owner, dict, frozendict.frozendict, schemas.Unset] = schemas.unset,
        media: typing.Union[MetaOapg.properties.media, dict, frozendict.frozendict, schemas.Unset] = schemas.unset,
        media_source: typing.Union[MetaOapg.properties.media_source, dict, frozendict.frozendict, schemas.Unset] = schemas.unset,
        parent_pin_id: typing.Union[MetaOapg.properties.parent_pin_id, None, str, schemas.Unset] = schemas.unset,
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
    ) -> 'Pin':
        return super().__new__(
            cls,
            *args,
            id=id,
            created_at=created_at,
            link=link,
            title=title,
            description=description,
            dominant_color=dominant_color,
            alt_text=alt_text,
            board_id=board_id,
            board_section_id=board_section_id,
            board_owner=board_owner,
            media=media,
            media_source=media_source,
            parent_pin_id=parent_pin_id,
            _configuration=_configuration,
            **kwargs,
        )

from pinterestsdk.model.board_owner import BoardOwner
from pinterestsdk.model.pin_media import PinMedia
from pinterestsdk.model.pin_media_source import PinMediaSource
