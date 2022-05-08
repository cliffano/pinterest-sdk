# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401
from openapi_server.models.image_details import ImageDetails


class PinMediaWithImageAllOf(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    PinMediaWithImageAllOf - a model defined in OpenAPI

        images: The images of this PinMediaWithImageAllOf [Optional].
    """

    images: Optional[Dict[str, ImageDetails]] = None

PinMediaWithImageAllOf.update_forward_refs()