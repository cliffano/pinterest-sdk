/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.model


  /**
   * Summary status for campaign
   */

object CampaignSummaryStatus extends Enumeration {
    type CampaignSummaryStatus = CampaignSummaryStatus.Value
    val RUNNING = Value("RUNNING")
    val PAUSED = Value("PAUSED")
    val NOTSTARTED = Value("NOT_STARTED")
    val COMPLETED = Value("COMPLETED")
    val ADVERTISERDISABLED = Value("ADVERTISER_DISABLED")
    val ARCHIVED = Value("ARCHIVED")
}
