# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401
from openapi_server.models.board_owner import BoardOwner


class Board(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    Board - a model defined in OpenAPI

        id: The id of this Board [Optional].
        name: The name of this Board.
        description: The description of this Board [Optional].
        owner: The owner of this Board [Optional].
        privacy: The privacy of this Board [Optional].
    """

    id: Optional[str] = None
    name: str
    description: Optional[str] = None
    owner: Optional[BoardOwner] = None
    privacy: Optional[str] = None

Board.update_forward_refs()
