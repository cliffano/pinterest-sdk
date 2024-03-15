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
package org.openapitools.database.models

import org.ktorm.dsl.*
import org.ktorm.schema.*
import org.ktorm.database.Database
import .*


/**
* Specifies the type of followees to be kept when filtering them.
* Values: ALL,RANKED,CREATOR_ONLY,RANKED_CREATOR_ONLY
*/

enum class UserFollowingFeedType(val value: kotlin.String){


    ALL("ALL"),


    RANKED("RANKED"),


    CREATOR_ONLY("CREATOR_ONLY"),


    RANKED_CREATOR_ONLY("RANKED_CREATOR_ONLY");



    /**
    This override toString avoids using the enum var name and uses the actual api value instead.
    In cases the var name and value are different, the client would send incorrect enums to the server.
    **/
    override fun toString(): String {
        return value
    }

}
