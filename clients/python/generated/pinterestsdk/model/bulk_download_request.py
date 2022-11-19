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


class BulkDownloadRequest(
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Ad entities to get in bulk request.
    """


    class MetaOapg:
        
        class properties:
            
            
            class entity_types(
                schemas.ListSchema
            ):
            
            
                class MetaOapg:
                    max_items = 5
                    min_items = 1
                    
                    
                    class items(
                        schemas.ComposedBase,
                        schemas.StrSchema
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
                                    BulkEntityType,
                                ]
                    
                    
                        def __new__(
                            cls,
                            *args: typing.Union[str, ],
                            _configuration: typing.Optional[schemas.Configuration] = None,
                        ) -> 'items':
                            return super().__new__(
                                cls,
                                *args,
                                _configuration=_configuration,
                            )
            
                def __new__(
                    cls,
                    arg: typing.Union[typing.Tuple[typing.Union[MetaOapg.items, str, ]], typing.List[typing.Union[MetaOapg.items, str, ]]],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'entity_types':
                    return super().__new__(
                        cls,
                        arg,
                        _configuration=_configuration,
                    )
            
                def __getitem__(self, i: int) -> MetaOapg.items:
                    return super().__getitem__(i)
            
            
            class entity_ids(
                schemas.ListSchema
            ):
            
            
                class MetaOapg:
                    
                    
                    class items(
                        schemas.StrSchema
                    ):
                    
                    
                        class MetaOapg:
                            regex=[{
                                'pattern': r'^\d+$',  # noqa: E501
                            }]
            
                def __new__(
                    cls,
                    arg: typing.Union[typing.Tuple[typing.Union[MetaOapg.items, str, ]], typing.List[typing.Union[MetaOapg.items, str, ]]],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'entity_ids':
                    return super().__new__(
                        cls,
                        arg,
                        _configuration=_configuration,
                    )
            
                def __getitem__(self, i: int) -> MetaOapg.items:
                    return super().__getitem__(i)
            
            
            class updated_since(
                schemas.StrSchema
            ):
            
            
                class MetaOapg:
                    regex=[{
                        'pattern': r'^\d+$',  # noqa: E501
                    }]
            
            
            class campaign_filter(
                schemas.DictSchema
            ):
            
            
                class MetaOapg:
                    
                    class properties:
                        
                        
                        class start_time(
                            schemas.StrSchema
                        ):
                        
                        
                            class MetaOapg:
                                regex=[{
                                    'pattern': r'^\d+$',  # noqa: E501
                                }]
                        
                        
                        class end_time(
                            schemas.StrSchema
                        ):
                        
                        
                            class MetaOapg:
                                regex=[{
                                    'pattern': r'^\d+$',  # noqa: E501
                                }]
                        name = schemas.StrSchema
                        
                        
                        class campaign_status(
                            schemas.ListSchema
                        ):
                        
                        
                            class MetaOapg:
                                
                                @staticmethod
                                def items() -> typing.Type['CampaignSummaryStatus']:
                                    return CampaignSummaryStatus
                        
                            def __new__(
                                cls,
                                arg: typing.Union[typing.Tuple['CampaignSummaryStatus'], typing.List['CampaignSummaryStatus']],
                                _configuration: typing.Optional[schemas.Configuration] = None,
                            ) -> 'campaign_status':
                                return super().__new__(
                                    cls,
                                    arg,
                                    _configuration=_configuration,
                                )
                        
                            def __getitem__(self, i: int) -> 'CampaignSummaryStatus':
                                return super().__getitem__(i)
                        
                        
                        class objective_type(
                            schemas.ListSchema
                        ):
                        
                        
                            class MetaOapg:
                                
                                @staticmethod
                                def items() -> typing.Type['ObjectiveType']:
                                    return ObjectiveType
                        
                            def __new__(
                                cls,
                                arg: typing.Union[typing.Tuple['ObjectiveType'], typing.List['ObjectiveType']],
                                _configuration: typing.Optional[schemas.Configuration] = None,
                            ) -> 'objective_type':
                                return super().__new__(
                                    cls,
                                    arg,
                                    _configuration=_configuration,
                                )
                        
                            def __getitem__(self, i: int) -> 'ObjectiveType':
                                return super().__getitem__(i)
                        __annotations__ = {
                            "start_time": start_time,
                            "end_time": end_time,
                            "name": name,
                            "campaign_status": campaign_status,
                            "objective_type": objective_type,
                        }
                
                @typing.overload
                def __getitem__(self, name: typing_extensions.Literal["start_time"]) -> MetaOapg.properties.start_time: ...
                
                @typing.overload
                def __getitem__(self, name: typing_extensions.Literal["end_time"]) -> MetaOapg.properties.end_time: ...
                
                @typing.overload
                def __getitem__(self, name: typing_extensions.Literal["name"]) -> MetaOapg.properties.name: ...
                
                @typing.overload
                def __getitem__(self, name: typing_extensions.Literal["campaign_status"]) -> MetaOapg.properties.campaign_status: ...
                
                @typing.overload
                def __getitem__(self, name: typing_extensions.Literal["objective_type"]) -> MetaOapg.properties.objective_type: ...
                
                @typing.overload
                def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
                
                def __getitem__(self, name: typing.Union[typing_extensions.Literal["start_time", "end_time", "name", "campaign_status", "objective_type", ], str]):
                    # dict_instance[name] accessor
                    return super().__getitem__(name)
                
                
                @typing.overload
                def get_item_oapg(self, name: typing_extensions.Literal["start_time"]) -> typing.Union[MetaOapg.properties.start_time, schemas.Unset]: ...
                
                @typing.overload
                def get_item_oapg(self, name: typing_extensions.Literal["end_time"]) -> typing.Union[MetaOapg.properties.end_time, schemas.Unset]: ...
                
                @typing.overload
                def get_item_oapg(self, name: typing_extensions.Literal["name"]) -> typing.Union[MetaOapg.properties.name, schemas.Unset]: ...
                
                @typing.overload
                def get_item_oapg(self, name: typing_extensions.Literal["campaign_status"]) -> typing.Union[MetaOapg.properties.campaign_status, schemas.Unset]: ...
                
                @typing.overload
                def get_item_oapg(self, name: typing_extensions.Literal["objective_type"]) -> typing.Union[MetaOapg.properties.objective_type, schemas.Unset]: ...
                
                @typing.overload
                def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
                
                def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["start_time", "end_time", "name", "campaign_status", "objective_type", ], str]):
                    return super().get_item_oapg(name)
                
            
                def __new__(
                    cls,
                    *args: typing.Union[dict, frozendict.frozendict, ],
                    start_time: typing.Union[MetaOapg.properties.start_time, str, schemas.Unset] = schemas.unset,
                    end_time: typing.Union[MetaOapg.properties.end_time, str, schemas.Unset] = schemas.unset,
                    name: typing.Union[MetaOapg.properties.name, str, schemas.Unset] = schemas.unset,
                    campaign_status: typing.Union[MetaOapg.properties.campaign_status, list, tuple, schemas.Unset] = schemas.unset,
                    objective_type: typing.Union[MetaOapg.properties.objective_type, list, tuple, schemas.Unset] = schemas.unset,
                    _configuration: typing.Optional[schemas.Configuration] = None,
                    **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
                ) -> 'campaign_filter':
                    return super().__new__(
                        cls,
                        *args,
                        start_time=start_time,
                        end_time=end_time,
                        name=name,
                        campaign_status=campaign_status,
                        objective_type=objective_type,
                        _configuration=_configuration,
                        **kwargs,
                    )
            
            
            class output_format(
                schemas.ComposedBase,
                schemas.StrSchema
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
                            BulkOutputFormat,
                        ]
            
            
                def __new__(
                    cls,
                    *args: typing.Union[str, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'output_format':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            __annotations__ = {
                "entity_types": entity_types,
                "entity_ids": entity_ids,
                "updated_since": updated_since,
                "campaign_filter": campaign_filter,
                "output_format": output_format,
            }
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["entity_types"]) -> MetaOapg.properties.entity_types: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["entity_ids"]) -> MetaOapg.properties.entity_ids: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["updated_since"]) -> MetaOapg.properties.updated_since: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["campaign_filter"]) -> MetaOapg.properties.campaign_filter: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["output_format"]) -> MetaOapg.properties.output_format: ...
    
    @typing.overload
    def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
    
    def __getitem__(self, name: typing.Union[typing_extensions.Literal["entity_types", "entity_ids", "updated_since", "campaign_filter", "output_format", ], str]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["entity_types"]) -> typing.Union[MetaOapg.properties.entity_types, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["entity_ids"]) -> typing.Union[MetaOapg.properties.entity_ids, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["updated_since"]) -> typing.Union[MetaOapg.properties.updated_since, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["campaign_filter"]) -> typing.Union[MetaOapg.properties.campaign_filter, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["output_format"]) -> typing.Union[MetaOapg.properties.output_format, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
    
    def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["entity_types", "entity_ids", "updated_since", "campaign_filter", "output_format", ], str]):
        return super().get_item_oapg(name)
    

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        entity_types: typing.Union[MetaOapg.properties.entity_types, list, tuple, schemas.Unset] = schemas.unset,
        entity_ids: typing.Union[MetaOapg.properties.entity_ids, list, tuple, schemas.Unset] = schemas.unset,
        updated_since: typing.Union[MetaOapg.properties.updated_since, str, schemas.Unset] = schemas.unset,
        campaign_filter: typing.Union[MetaOapg.properties.campaign_filter, dict, frozendict.frozendict, schemas.Unset] = schemas.unset,
        output_format: typing.Union[MetaOapg.properties.output_format, str, schemas.Unset] = schemas.unset,
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
    ) -> 'BulkDownloadRequest':
        return super().__new__(
            cls,
            *args,
            entity_types=entity_types,
            entity_ids=entity_ids,
            updated_since=updated_since,
            campaign_filter=campaign_filter,
            output_format=output_format,
            _configuration=_configuration,
            **kwargs,
        )

from pinterestsdk.model.bulk_entity_type import BulkEntityType
from pinterestsdk.model.bulk_output_format import BulkOutputFormat
from pinterestsdk.model.campaign_summary_status import CampaignSummaryStatus
from pinterestsdk.model.objective_type import ObjectiveType
