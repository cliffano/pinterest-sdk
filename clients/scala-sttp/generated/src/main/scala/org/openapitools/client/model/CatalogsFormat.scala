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
   * The file format of a feed.
   */

object CatalogsFormat extends Enumeration {
    type CatalogsFormat = CatalogsFormat.Value
    val TSV = Value("TSV")
    val CSV = Value("CSV")
    val XML = Value("XML")
}
