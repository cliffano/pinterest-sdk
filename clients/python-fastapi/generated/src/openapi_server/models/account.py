# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401


class Account(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    Account - a model defined in OpenAPI

        account_type: The account_type of this Account [Optional].
        profile_image: The profile_image of this Account [Optional].
        website_url: The website_url of this Account [Optional].
        username: The username of this Account [Optional].
    """

    account_type: Optional[str] = None
    profile_image: Optional[str] = None
    website_url: Optional[str] = None
    username: Optional[str] = None

Account.update_forward_refs()
