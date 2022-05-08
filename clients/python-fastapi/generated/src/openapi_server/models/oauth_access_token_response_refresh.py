# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401
from openapi_server.models.oauth_access_token_response import OauthAccessTokenResponse


class OauthAccessTokenResponseRefresh(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    OauthAccessTokenResponseRefresh - a model defined in OpenAPI

        response_type: The response_type of this OauthAccessTokenResponseRefresh [Optional].
        access_token: The access_token of this OauthAccessTokenResponseRefresh.
        token_type: The token_type of this OauthAccessTokenResponseRefresh.
        expires_in: The expires_in of this OauthAccessTokenResponseRefresh.
        scope: The scope of this OauthAccessTokenResponseRefresh.
    """

    response_type: Optional[str] = None
    access_token: str
    token_type: str
    expires_in: int
    scope: str

OauthAccessTokenResponseRefresh.update_forward_refs()