# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.6.0
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""

from pinterestsdk.paths.ad_accounts_ad_account_id_ad_groups_analytics.get import AdGroupsAnalytics
from pinterestsdk.paths.ad_accounts_ad_account_id_bid_floor.post import AdGroupsBidFloorGet
from pinterestsdk.paths.ad_accounts_ad_account_id_ad_groups.post import AdGroupsCreate
from pinterestsdk.paths.ad_accounts_ad_account_id_ad_groups_ad_group_id.get import AdGroupsGet
from pinterestsdk.paths.ad_accounts_ad_account_id_ad_groups.get import AdGroupsList
from pinterestsdk.paths.ad_accounts_ad_account_id_ad_groups_targeting_analytics.get import AdGroupsTargetingAnalyticsGet
from pinterestsdk.paths.ad_accounts_ad_account_id_ad_groups.patch import AdGroupsUpdate


class AdGroupsApi(
    AdGroupsAnalytics,
    AdGroupsBidFloorGet,
    AdGroupsCreate,
    AdGroupsGet,
    AdGroupsList,
    AdGroupsTargetingAnalyticsGet,
    AdGroupsUpdate,
):
    """NOTE: This class is auto generated by OpenAPI Generator
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    pass
