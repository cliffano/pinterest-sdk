# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401
from openapi_server.models.ad_group_summary_status import AdGroupSummaryStatus
from openapi_server.models.entity_status import EntityStatus
from openapi_server.models.pacing_delivery_type import PacingDeliveryType
from openapi_server.models.placement_group_type import PlacementGroupType
from openapi_server.models.tracking_urls import TrackingUrls


class AdGroupResponseAllOf(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    AdGroupResponseAllOf - a model defined in OpenAPI

        name: The name of this AdGroupResponseAllOf [Optional].
        status: The status of this AdGroupResponseAllOf [Optional].
        budget_in_micro_currency: The budget_in_micro_currency of this AdGroupResponseAllOf [Optional].
        bid_in_micro_currency: The bid_in_micro_currency of this AdGroupResponseAllOf [Optional].
        budget_type: The budget_type of this AdGroupResponseAllOf [Optional].
        start_time: The start_time of this AdGroupResponseAllOf [Optional].
        end_time: The end_time of this AdGroupResponseAllOf [Optional].
        targeting_spec: The targeting_spec of this AdGroupResponseAllOf [Optional].
        lifetime_frequency_cap: The lifetime_frequency_cap of this AdGroupResponseAllOf [Optional].
        tracking_urls: The tracking_urls of this AdGroupResponseAllOf [Optional].
        auto_targeting_enabled: The auto_targeting_enabled of this AdGroupResponseAllOf [Optional].
        placement_group: The placement_group of this AdGroupResponseAllOf [Optional].
        pacing_delivery_type: The pacing_delivery_type of this AdGroupResponseAllOf [Optional].
        conversion_learning_mode_type: The conversion_learning_mode_type of this AdGroupResponseAllOf [Optional].
        summary_status: The summary_status of this AdGroupResponseAllOf [Optional].
        feed_profile_id: The feed_profile_id of this AdGroupResponseAllOf [Optional].
    """

    name: Optional[str] = None
    status: Optional[EntityStatus] = None
    budget_in_micro_currency: Optional[int] = None
    bid_in_micro_currency: Optional[int] = None
    budget_type: Optional[str] = None
    start_time: Optional[int] = None
    end_time: Optional[int] = None
    targeting_spec: Optional[Dict[str, List[str]]] = None
    lifetime_frequency_cap: Optional[int] = None
    tracking_urls: Optional[TrackingUrls] = None
    auto_targeting_enabled: Optional[bool] = None
    placement_group: Optional[PlacementGroupType] = None
    pacing_delivery_type: Optional[PacingDeliveryType] = None
    conversion_learning_mode_type: Optional[str] = None
    summary_status: Optional[AdGroupSummaryStatus] = None
    feed_profile_id: Optional[str] = None

AdGroupResponseAllOf.update_forward_refs()
