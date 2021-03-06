# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401
from openapi_server.models.board_owner import BoardOwner
from openapi_server.models.pin_media import PinMedia
from openapi_server.models.pin_media_source import PinMediaSource


class Pin(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    Pin - a model defined in OpenAPI

        id: The id of this Pin [Optional].
        created_at: The created_at of this Pin [Optional].
        link: The link of this Pin [Optional].
        title: The title of this Pin [Optional].
        description: The description of this Pin [Optional].
        alt_text: The alt_text of this Pin [Optional].
        board_id: The board_id of this Pin [Optional].
        board_section_id: The board_section_id of this Pin [Optional].
        board_owner: The board_owner of this Pin [Optional].
        media: The media of this Pin [Optional].
        media_source: The media_source of this Pin [Optional].
    """

    id: Optional[str] = None
    created_at: Optional[datetime] = None
    link: Optional[str] = None
    title: Optional[str] = None
    description: Optional[str] = None
    alt_text: Optional[str] = None
    board_id: Optional[str] = None
    board_section_id: Optional[str] = None
    board_owner: Optional[BoardOwner] = None
    media: Optional[PinMedia] = None
    media_source: Optional[PinMediaSource] = None

    @validator("board_id")
    def board_id_pattern(cls, value):
        assert value is not None and re.match(r"^\d+$", value)
        return value

    @validator("board_section_id")
    def board_section_id_pattern(cls, value):
        assert value is not None and re.match(r"^\d+$", value)
        return value

Pin.update_forward_refs()
