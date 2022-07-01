/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { RequestFile } from './models';

/**
* Level of the reporting request
*/
export enum MetricsReportingLevel {
    Advertiser = <any> 'ADVERTISER',
    AdvertiserTargeting = <any> 'ADVERTISER_TARGETING',
    Campaign = <any> 'CAMPAIGN',
    CampaignTargeting = <any> 'CAMPAIGN_TARGETING',
    AdGroup = <any> 'AD_GROUP',
    AdGroupTargeting = <any> 'AD_GROUP_TARGETING',
    PinPromotion = <any> 'PIN_PROMOTION',
    PinPromotionTargeting = <any> 'PIN_PROMOTION_TARGETING',
    Keyword = <any> 'KEYWORD',
    ProductGroup = <any> 'PRODUCT_GROUP',
    ProductGroupTargeting = <any> 'PRODUCT_GROUP_TARGETING',
    ProductItem = <any> 'PRODUCT_ITEM'
}
