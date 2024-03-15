/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.models


/**
 * 
 * @param accountType Type of account
 * @param id User account ID.
 * @param profileImage 
 * @param websiteUrl 
 * @param username 
 * @param about Profile about description.
 * @param businessName 
 * @param boardCount User account board count.<br/>**Note**: Board count on user account level may differ from counts found elsewhere due to attribution of collaborative Boards.
 * @param pinCount User account pin count. This includes both created and saved pins.
 * @param followerCount User account follower count.
 * @param followingCount User account following count.
 * @param monthlyViews User account monthly views.
 */
data class Account(
    /* Type of account */
    val accountType: Account.AccountType? = null,
    /* User account ID. */
    val id: kotlin.String? = null,
    val profileImage: kotlin.String? = null,
    val websiteUrl: kotlin.String? = null,
    val username: kotlin.String? = null,
    /* Profile about description. */
    val about: kotlin.String? = null,
    val businessName: kotlin.String? = null,
    /* User account board count.<br/>**Note**: Board count on user account level may differ from counts found elsewhere due to attribution of collaborative Boards. */
    val boardCount: kotlin.Int? = null,
    /* User account pin count. This includes both created and saved pins. */
    val pinCount: kotlin.Int? = null,
    /* User account follower count. */
    val followerCount: kotlin.Int? = null,
    /* User account following count. */
    val followingCount: kotlin.Int? = null,
    /* User account monthly views. */
    val monthlyViews: kotlin.Int? = null
) 
{
    /**
    * Type of account
    * Values: PINNER,BUSINESS
    */
    enum class AccountType(val value: kotlin.String){
        PINNER("PINNER"),
        BUSINESS("BUSINESS");
    }
}

