# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: pinterest-api@pinterest.com
    Generated by: https://openapi-generator.tech
"""

from openapi_client.api_client import ApiClient
from openapi_client.api.catalogs_api_endpoints.catalogs_product_groups_create import CatalogsProductGroupsCreate
from openapi_client.api.catalogs_api_endpoints.catalogs_product_groups_delete import CatalogsProductGroupsDelete
from openapi_client.api.catalogs_api_endpoints.catalogs_product_groups_list import CatalogsProductGroupsList
from openapi_client.api.catalogs_api_endpoints.catalogs_product_groups_update import CatalogsProductGroupsUpdate
from openapi_client.api.catalogs_api_endpoints.feed_processing_results_list import FeedProcessingResultsList
from openapi_client.api.catalogs_api_endpoints.feeds_create import FeedsCreate
from openapi_client.api.catalogs_api_endpoints.feeds_delete import FeedsDelete
from openapi_client.api.catalogs_api_endpoints.feeds_get import FeedsGet
from openapi_client.api.catalogs_api_endpoints.feeds_list import FeedsList
from openapi_client.api.catalogs_api_endpoints.feeds_update import FeedsUpdate
from openapi_client.api.catalogs_api_endpoints.items_batch_get import ItemsBatchGet
from openapi_client.api.catalogs_api_endpoints.items_batch_post import ItemsBatchPost
from openapi_client.api.catalogs_api_endpoints.items_get import ItemsGet


class CatalogsApi(
    CatalogsProductGroupsCreate,
    CatalogsProductGroupsDelete,
    CatalogsProductGroupsList,
    CatalogsProductGroupsUpdate,
    FeedProcessingResultsList,
    FeedsCreate,
    FeedsDelete,
    FeedsGet,
    FeedsList,
    FeedsUpdate,
    ItemsBatchGet,
    ItemsBatchPost,
    ItemsGet,
    ApiClient,
):
    """NOTE: This class is auto generated by OpenAPI Generator
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    pass