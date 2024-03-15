/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


/**
 * An internal role type used on business access, EMPLOYEE, ADMIN.
 */
export type Role = 'UNKNOWN' | 'OWNER' | 'ADMIN' | 'ANALYST' | 'SOS_READER' | 'FINANCE_MANAGER' | 'AUDIENCE_MANAGER' | 'CAMPAIGN_MANAGER' | 'CATALOGS_MANAGER' | 'RESTRICTED_OWNER' | 'PROFILE_MANAGER' | 'PROFILE_PUBLISHER' | 'RESOURCE_PINNER_LIST_OWNER' | 'RESOURCE_PINNER_LIST_READER' | 'BIZ_PINNER_LIST_SHARER' | 'RESOURCE_CONVERSION_TAGS_READER';

export const Role = {
    Unknown: 'UNKNOWN' as Role,
    Owner: 'OWNER' as Role,
    Admin: 'ADMIN' as Role,
    Analyst: 'ANALYST' as Role,
    SosReader: 'SOS_READER' as Role,
    FinanceManager: 'FINANCE_MANAGER' as Role,
    AudienceManager: 'AUDIENCE_MANAGER' as Role,
    CampaignManager: 'CAMPAIGN_MANAGER' as Role,
    CatalogsManager: 'CATALOGS_MANAGER' as Role,
    RestrictedOwner: 'RESTRICTED_OWNER' as Role,
    ProfileManager: 'PROFILE_MANAGER' as Role,
    ProfilePublisher: 'PROFILE_PUBLISHER' as Role,
    ResourcePinnerListOwner: 'RESOURCE_PINNER_LIST_OWNER' as Role,
    ResourcePinnerListReader: 'RESOURCE_PINNER_LIST_READER' as Role,
    BizPinnerListSharer: 'BIZ_PINNER_LIST_SHARER' as Role,
    ResourceConversionTagsReader: 'RESOURCE_CONVERSION_TAGS_READER' as Role
}