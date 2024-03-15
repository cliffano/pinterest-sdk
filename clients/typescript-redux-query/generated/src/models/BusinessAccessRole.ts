// tslint:disable
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
 * Permission role for business access.
 * @export
 * @enum {string}
 */
export enum BusinessAccessRole {
    Owner = 'OWNER',
    Admin = 'ADMIN',
    Analyst = 'ANALYST',
    SosReader = 'SOS_READER',
    FinanceManager = 'FINANCE_MANAGER',
    AudienceManager = 'AUDIENCE_MANAGER',
    CampaignManager = 'CAMPAIGN_MANAGER',
    CatalogsManager = 'CATALOGS_MANAGER',
    RestrictedOwner = 'RESTRICTED_OWNER',
    ProfileManager = 'PROFILE_MANAGER',
    ProfilePublisher = 'PROFILE_PUBLISHER',
    ResourcePinnerListOwner = 'RESOURCE_PINNER_LIST_OWNER',
    ResourcePinnerListReader = 'RESOURCE_PINNER_LIST_READER',
    BizPinnerListSharer = 'BIZ_PINNER_LIST_SHARER',
    ResourceConversionTagsReader = 'RESOURCE_CONVERSION_TAGS_READER'
}

export function BusinessAccessRoleFromJSON(json: any): BusinessAccessRole {
    return json as BusinessAccessRole;
}

export function BusinessAccessRoleToJSON(value?: BusinessAccessRole): any {
    return value as any;
}

