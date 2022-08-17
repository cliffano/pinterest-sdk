# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.4.1
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""

import re  # noqa: F401
import sys  # noqa: F401
import typing  # noqa: F401
import functools  # noqa: F401

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
    UUIDSchema,
    DateSchema,
    DateTimeSchema,
    DecimalSchema,
    BoolSchema,
    BinarySchema,
    NoneSchema,
    none_type,
    Configuration,
    Unset,
    unset,
    ComposedBase,
    ListBase,
    DictBase,
    NoneBase,
    StrBase,
    IntBase,
    Int32Base,
    Int64Base,
    Float32Base,
    Float64Base,
    NumberBase,
    UUIDBase,
    DateBase,
    DateTimeBase,
    BoolBase,
    BinaryBase,
    Schema,
    _SchemaValidator,
    _SchemaTypeChecker,
    _SchemaEnumMaker
)


class BidFloorRequest(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    _required_property_names = set((
        'bid_floor_specs',
    ))
    
    
    class bid_floor_specs(
        ListSchema
    ):
        
        
        class _items(
            DictSchema
        ):
            _required_property_names = set((
            ))
            
            
            class countries(
                ListSchema
            ):
            
                @classmethod
                @property
                def _items(cls) -> typing.Type['Country']:
                    return Country
        
            @classmethod
            @property
            def currency(cls) -> typing.Type['Currency']:
                return Currency
        
            @classmethod
            @property
            def objective_type(cls) -> typing.Type['ObjectiveType']:
                return ObjectiveType
        
            @classmethod
            @property
            def billable_event(cls) -> typing.Type['ActionType']:
                return ActionType
            optimization_goal_metadata = DictSchema
        
            @classmethod
            @property
            def creative_type(cls) -> typing.Type['CreativeType']:
                return CreativeType
        
        
            def __new__(
                cls,
                *args: typing.Union[dict, frozendict, ],
                countries: typing.Union[countries, Unset] = unset,
                currency: typing.Union['Currency', Unset] = unset,
                objective_type: typing.Union['ObjectiveType', Unset] = unset,
                optimization_goal_metadata: typing.Union[optimization_goal_metadata, Unset] = unset,
                creative_type: typing.Union['CreativeType', Unset] = unset,
                _configuration: typing.Optional[Configuration] = None,
                **kwargs: typing.Type[Schema],
            ) -> '_items':
                return super().__new__(
                    cls,
                    *args,
                    countries=countries,
                    currency=currency,
                    objective_type=objective_type,
                    optimization_goal_metadata=optimization_goal_metadata,
                    creative_type=creative_type,
                    _configuration=_configuration,
                    **kwargs,
                )
    
    
    class targeting_spec(
        DictSchema
    ):
        
        
        class AGE_BUCKET(
            ListSchema
        ):
            _items = StrSchema
        
        
        class APPTYPE(
            ListSchema
        ):
            _items = StrSchema
        
        
        class AUDIENCE_EXCLUDE(
            ListSchema
        ):
            _items = StrSchema
        
        
        class AUDIENCE_INCLUDE(
            ListSchema
        ):
            _items = StrSchema
        
        
        class GENDER(
            ListSchema
        ):
            _items = StrSchema
        
        
        class GEO(
            ListSchema
        ):
            _items = StrSchema
        
        
        class INTEREST(
            ListSchema
        ):
            _items = StrSchema
        
        
        class LOCALE(
            ListSchema
        ):
            _items = StrSchema
        
        
        class LOCATION(
            ListSchema
        ):
            _items = StrSchema
        
        
        class SHOPPING_RETARGETING(
            ListSchema
        ):
            
            
            class _items(
                DictSchema
            ):
                lookback_window = IntSchema
                
                
                class tag_types(
                    ListSchema
                ):
                    _items = IntSchema
                exclusion_window = IntSchema
            
            
                def __new__(
                    cls,
                    *args: typing.Union[dict, frozendict, ],
                    lookback_window: typing.Union[lookback_window, Unset] = unset,
                    tag_types: typing.Union[tag_types, Unset] = unset,
                    exclusion_window: typing.Union[exclusion_window, Unset] = unset,
                    _configuration: typing.Optional[Configuration] = None,
                    **kwargs: typing.Type[Schema],
                ) -> '_items':
                    return super().__new__(
                        cls,
                        *args,
                        lookback_window=lookback_window,
                        tag_types=tag_types,
                        exclusion_window=exclusion_window,
                        _configuration=_configuration,
                        **kwargs,
                    )
        
        
        class TARGETING_STRATEGY(
            ListSchema
        ):
            _items = StrSchema
    
    
        def __new__(
            cls,
            *args: typing.Union[dict, frozendict, ],
            AGE_BUCKET: typing.Union[AGE_BUCKET, Unset] = unset,
            APPTYPE: typing.Union[APPTYPE, Unset] = unset,
            AUDIENCE_EXCLUDE: typing.Union[AUDIENCE_EXCLUDE, Unset] = unset,
            AUDIENCE_INCLUDE: typing.Union[AUDIENCE_INCLUDE, Unset] = unset,
            GENDER: typing.Union[GENDER, Unset] = unset,
            GEO: typing.Union[GEO, Unset] = unset,
            INTEREST: typing.Union[INTEREST, Unset] = unset,
            LOCALE: typing.Union[LOCALE, Unset] = unset,
            LOCATION: typing.Union[LOCATION, Unset] = unset,
            SHOPPING_RETARGETING: typing.Union[SHOPPING_RETARGETING, Unset] = unset,
            TARGETING_STRATEGY: typing.Union[TARGETING_STRATEGY, Unset] = unset,
            _configuration: typing.Optional[Configuration] = None,
            **kwargs: typing.Type[Schema],
        ) -> 'targeting_spec':
            return super().__new__(
                cls,
                *args,
                AGE_BUCKET=AGE_BUCKET,
                APPTYPE=APPTYPE,
                AUDIENCE_EXCLUDE=AUDIENCE_EXCLUDE,
                AUDIENCE_INCLUDE=AUDIENCE_INCLUDE,
                GENDER=GENDER,
                GEO=GEO,
                INTEREST=INTEREST,
                LOCALE=LOCALE,
                LOCATION=LOCATION,
                SHOPPING_RETARGETING=SHOPPING_RETARGETING,
                TARGETING_STRATEGY=TARGETING_STRATEGY,
                _configuration=_configuration,
                **kwargs,
            )


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        bid_floor_specs: bid_floor_specs,
        targeting_spec: typing.Union[targeting_spec, Unset] = unset,
        _configuration: typing.Optional[Configuration] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'BidFloorRequest':
        return super().__new__(
            cls,
            *args,
            bid_floor_specs=bid_floor_specs,
            targeting_spec=targeting_spec,
            _configuration=_configuration,
            **kwargs,
        )

from openapi_client.model.action_type import ActionType
from openapi_client.model.country import Country
from openapi_client.model.creative_type import CreativeType
from openapi_client.model.currency import Currency
from openapi_client.model.objective_type import ObjectiveType