# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""

from openapi_client.api_client import ApiClient
from openapi_client.api.boards_api_endpoints.board_sections_create import BoardSectionsCreate
from openapi_client.api.boards_api_endpoints.board_sections_delete import BoardSectionsDelete
from openapi_client.api.boards_api_endpoints.board_sections_list import BoardSectionsList
from openapi_client.api.boards_api_endpoints.board_sections_list_pins import BoardSectionsListPins
from openapi_client.api.boards_api_endpoints.board_sections_update import BoardSectionsUpdate
from openapi_client.api.boards_api_endpoints.boards_create import BoardsCreate
from openapi_client.api.boards_api_endpoints.boards_delete import BoardsDelete
from openapi_client.api.boards_api_endpoints.boards_get import BoardsGet
from openapi_client.api.boards_api_endpoints.boards_list import BoardsList
from openapi_client.api.boards_api_endpoints.boards_list_pins import BoardsListPins
from openapi_client.api.boards_api_endpoints.boards_update import BoardsUpdate


class BoardsApi(
    BoardSectionsCreate,
    BoardSectionsDelete,
    BoardSectionsList,
    BoardSectionsListPins,
    BoardSectionsUpdate,
    BoardsCreate,
    BoardsDelete,
    BoardsGet,
    BoardsList,
    BoardsListPins,
    BoardsUpdate,
    ApiClient,
):
    """NOTE: This class is auto generated by OpenAPI Generator
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    pass
