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


class PinMediaWithVideo(
    schemas.ComposedSchema,
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Pin with video.
    """


    class MetaOapg:
        
        @staticmethod
        def discriminator():
            return {
                'media_type': {
                    'image': PinMediaWithImage,
                    'multiple_images': PinMediaWithImages,
                    'multiple_mixed': PinMediaWithImageAndVideo,
                    'multiple_videos': PinMediaWithVideos,
                    'video': PinMediaWithVideo,
                }
            }
        
        
        class all_of_0(
            schemas.DictSchema
        ):
        
        
            class MetaOapg:
                
                class properties:
                    
                    
                    class images(
                        schemas.DictSchema
                    ):
                    
                    
                        class MetaOapg:
                            
                            @staticmethod
                            def additional_properties() -> typing.Type['ImageDetails']:
                                return ImageDetails
                        
                        def __getitem__(self, name: typing.Union[str, ]) -> 'ImageDetails':
                            # dict_instance[name] accessor
                            return super().__getitem__(name)
                        
                        def get_item_oapg(self, name: typing.Union[str, ]) -> 'ImageDetails':
                            return super().get_item_oapg(name)
                    
                        def __new__(
                            cls,
                            *args: typing.Union[dict, frozendict.frozendict, ],
                            _configuration: typing.Optional[schemas.Configuration] = None,
                            **kwargs: 'ImageDetails',
                        ) -> 'images':
                            return super().__new__(
                                cls,
                                *args,
                                _configuration=_configuration,
                                **kwargs,
                            )
                    cover_image_url = schemas.StrSchema
                    duration = schemas.NumberSchema
                    height = schemas.IntSchema
                    width = schemas.IntSchema
                    __annotations__ = {
                        "images": images,
                        "cover_image_url": cover_image_url,
                        "duration": duration,
                        "height": height,
                        "width": width,
                    }
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["images"]) -> MetaOapg.properties.images: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["cover_image_url"]) -> MetaOapg.properties.cover_image_url: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["duration"]) -> MetaOapg.properties.duration: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["height"]) -> MetaOapg.properties.height: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["width"]) -> MetaOapg.properties.width: ...
            
            @typing.overload
            def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
            
            def __getitem__(self, name: typing.Union[typing_extensions.Literal["images", "cover_image_url", "duration", "height", "width", ], str]):
                # dict_instance[name] accessor
                return super().__getitem__(name)
            
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["images"]) -> typing.Union[MetaOapg.properties.images, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["cover_image_url"]) -> typing.Union[MetaOapg.properties.cover_image_url, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["duration"]) -> typing.Union[MetaOapg.properties.duration, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["height"]) -> typing.Union[MetaOapg.properties.height, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["width"]) -> typing.Union[MetaOapg.properties.width, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
            
            def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["images", "cover_image_url", "duration", "height", "width", ], str]):
                return super().get_item_oapg(name)
            
        
            def __new__(
                cls,
                *args: typing.Union[dict, frozendict.frozendict, ],
                images: typing.Union[MetaOapg.properties.images, dict, frozendict.frozendict, schemas.Unset] = schemas.unset,
                cover_image_url: typing.Union[MetaOapg.properties.cover_image_url, str, schemas.Unset] = schemas.unset,
                duration: typing.Union[MetaOapg.properties.duration, decimal.Decimal, int, float, schemas.Unset] = schemas.unset,
                height: typing.Union[MetaOapg.properties.height, decimal.Decimal, int, schemas.Unset] = schemas.unset,
                width: typing.Union[MetaOapg.properties.width, decimal.Decimal, int, schemas.Unset] = schemas.unset,
                _configuration: typing.Optional[schemas.Configuration] = None,
                **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
            ) -> 'all_of_0':
                return super().__new__(
                    cls,
                    *args,
                    images=images,
                    cover_image_url=cover_image_url,
                    duration=duration,
                    height=height,
                    width=width,
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
                PinMedia,
            ]


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, bool, None, list, tuple, bytes, io.FileIO, io.BufferedReader, ],
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
    ) -> 'PinMediaWithVideo':
        return super().__new__(
            cls,
            *args,
            _configuration=_configuration,
            **kwargs,
        )

from pinterestsdk.model.image_details import ImageDetails
from pinterestsdk.model.pin_media import PinMedia
from pinterestsdk.model.pin_media_with_image import PinMediaWithImage
from pinterestsdk.model.pin_media_with_image_and_video import PinMediaWithImageAndVideo
from pinterestsdk.model.pin_media_with_images import PinMediaWithImages
from pinterestsdk.model.pin_media_with_video import PinMediaWithVideo
from pinterestsdk.model.pin_media_with_videos import PinMediaWithVideos
