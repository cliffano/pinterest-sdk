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

import { RequestFile } from './models';

/**
* Ad creative type enum. For update, only draft ads may update creative type. </p><strong>Note:</strong> SHOP_THE_PIN has been deprecated. Please use COLLECTION instead.
*/
export enum CreativeType {
    Regular = <any> 'REGULAR',
    Video = <any> 'VIDEO',
    Shopping = <any> 'SHOPPING',
    Carousel = <any> 'CAROUSEL',
    MaxVideo = <any> 'MAX_VIDEO',
    ShopThePin = <any> 'SHOP_THE_PIN',
    Collection = <any> 'COLLECTION',
    Idea = <any> 'IDEA',
    Showcase = <any> 'SHOWCASE',
    Quiz = <any> 'QUIZ'
}
