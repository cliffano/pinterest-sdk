/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
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

import com.squareup.moshi.Json

/**
* The file format of a feed.
* Values: tSV,cSV,xML
*/

enum class CatalogsFormat(val value: kotlin.String){


    @Json(name = "TSV")
    tSV("TSV"),


    @Json(name = "CSV")
    cSV("CSV"),


    @Json(name = "XML")
    xML("XML");



    /**
    This override toString avoids using the enum var name and uses the actual api value instead.
    In cases the var name and value are different, the client would send incorrect enums to the server.
    **/
    override fun toString(): String {
        return value
    }

}

