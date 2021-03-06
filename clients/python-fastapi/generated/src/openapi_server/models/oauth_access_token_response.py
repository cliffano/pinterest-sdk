# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401


class OauthAccessTokenResponse(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    OauthAccessTokenResponse - a model defined in OpenAPI

        response_type: The response_type of this OauthAccessTokenResponse [Optional].
        access_token: The access_token of this OauthAccessTokenResponse.
        token_type: The token_type of this OauthAccessTokenResponse.
        expires_in: The expires_in of this OauthAccessTokenResponse.
        scope: The scope of this OauthAccessTokenResponse.
    """

    response_type: Optional[str] = None
    access_token: str
    token_type: str
    expires_in: int
    scope: str

OauthAccessTokenResponse.update_forward_refs()
