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
 * 
 * @param name The hotel's name.
 * @param link Link to the product page
 * @param description Brief description of the hotel.
 * @param brand The brand to which this hotel belongs to.
 * @param latitude Latitude of the hotel.
 * @param longitude Longitude of the hotel.
 * @param neighborhood A list of neighborhoods where the hotel is located
 * @param address 
 * @param customLabel0 Custom grouping of hotels
 * @param customLabel1 Custom grouping of hotels
 * @param customLabel2 Custom grouping of hotels
 * @param customLabel3 Custom grouping of hotels
 * @param customLabel4 Custom grouping of hotels
 * @param category The type of property. The category can be any type of internal description desired.
 * @param basePrice Base price of the hotel room per night followed by the ISO currency code
 * @param salePrice Sale price of a hotel room per night. Used to advertise discounts off the regular price of the hotel.
 * @param guestRatings 
 */
object CatalogsUpdatableHotelAttributess : BaseTable<CatalogsUpdatableHotelAttributes>("CatalogsUpdatableHotelAttributes") {
    val name = text("name") /* null */ /* The hotel's name. */
    val link = text("link") /* null */ /* Link to the product page */
    val description = text("description") /* null */ /* Brief description of the hotel. */
    val brand = text("brand") /* null */ /* The brand to which this hotel belongs to. */
    val latitude = decimal("latitude") /* null */ /* Latitude of the hotel. */
    val longitude = decimal("longitude") /* null */ /* Longitude of the hotel. */
    val address = long("address") /* null */
    val customLabel0 = text("custom_label_0") /* null */ /* Custom grouping of hotels */
    val customLabel1 = text("custom_label_1") /* null */ /* Custom grouping of hotels */
    val customLabel2 = text("custom_label_2") /* null */ /* Custom grouping of hotels */
    val customLabel3 = text("custom_label_3") /* null */ /* Custom grouping of hotels */
    val customLabel4 = text("custom_label_4") /* null */ /* Custom grouping of hotels */
    val category = text("category") /* null */ /* The type of property. The category can be any type of internal description desired. */
    val basePrice = text("base_price") /* null */ /* Base price of the hotel room per night followed by the ISO currency code */
    val salePrice = text("sale_price") /* null */ /* Sale price of a hotel room per night. Used to advertise discounts off the regular price of the hotel. */
    val guestRatings = long("guest_ratings") /* null */

    /**
     * Create an entity of type CatalogsUpdatableHotelAttributes from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsUpdatableHotelAttributes(
        name = row[name]  /* kotlin.String? */ /* The hotel's name. */,
        link = row[link]  /* kotlin.String? */ /* Link to the product page */,
        description = row[description]  /* kotlin.String? */ /* Brief description of the hotel. */,
        brand = row[brand]  /* kotlin.String? */ /* The brand to which this hotel belongs to. */,
        latitude = row[latitude]  /* java.math.BigDecimal? */ /* Latitude of the hotel. */,
        longitude = row[longitude]  /* java.math.BigDecimal? */ /* Longitude of the hotel. */,
        neighborhood = emptyList() /* kotlin.Array<kotlin.String>? */ /* A list of neighborhoods where the hotel is located */,
        address = CatalogsHotelAddresss.createEntity(row, withReferences) /* CatalogsHotelAddress? */,
        customLabel0 = row[customLabel0]  /* kotlin.String? */ /* Custom grouping of hotels */,
        customLabel1 = row[customLabel1]  /* kotlin.String? */ /* Custom grouping of hotels */,
        customLabel2 = row[customLabel2]  /* kotlin.String? */ /* Custom grouping of hotels */,
        customLabel3 = row[customLabel3]  /* kotlin.String? */ /* Custom grouping of hotels */,
        customLabel4 = row[customLabel4]  /* kotlin.String? */ /* Custom grouping of hotels */,
        category = row[category]  /* kotlin.String? */ /* The type of property. The category can be any type of internal description desired. */,
        basePrice = row[basePrice]  /* kotlin.String? */ /* Base price of the hotel room per night followed by the ISO currency code */,
        salePrice = row[salePrice]  /* kotlin.String? */ /* Sale price of a hotel room per night. Used to advertise discounts off the regular price of the hotel. */,
        guestRatings = CatalogsHotelGuestRatingss.createEntity(row, withReferences) /* CatalogsHotelGuestRatings? */
    )

    /**
    * Assign all the columns from the entity of type CatalogsUpdatableHotelAttributes to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsUpdatableHotelAttributes()
    * database.update(CatalogsUpdatableHotelAttributess, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsUpdatableHotelAttributes) {
        this.apply {
            set(CatalogsUpdatableHotelAttributess.name, entity.name)
            set(CatalogsUpdatableHotelAttributess.link, entity.link)
            set(CatalogsUpdatableHotelAttributess.description, entity.description)
            set(CatalogsUpdatableHotelAttributess.brand, entity.brand)
            set(CatalogsUpdatableHotelAttributess.latitude, entity.latitude)
            set(CatalogsUpdatableHotelAttributess.longitude, entity.longitude)
            set(CatalogsUpdatableHotelAttributess.address, entity.address)
            set(CatalogsUpdatableHotelAttributess.customLabel0, entity.customLabel0)
            set(CatalogsUpdatableHotelAttributess.customLabel1, entity.customLabel1)
            set(CatalogsUpdatableHotelAttributess.customLabel2, entity.customLabel2)
            set(CatalogsUpdatableHotelAttributess.customLabel3, entity.customLabel3)
            set(CatalogsUpdatableHotelAttributess.customLabel4, entity.customLabel4)
            set(CatalogsUpdatableHotelAttributess.category, entity.category)
            set(CatalogsUpdatableHotelAttributess.basePrice, entity.basePrice)
            set(CatalogsUpdatableHotelAttributess.salePrice, entity.salePrice)
            set(CatalogsUpdatableHotelAttributess.guestRatings, entity.guestRatings)
        }
    }

}


object CatalogsUpdatableHotelAttributesNeighborhood : BaseTable<Pair<kotlin.Long, kotlin.String>>("CatalogsUpdatableHotelAttributesNeighborhood") {
    val catalogsUpdatableHotelAttributes = long("catalogsUpdatableHotelAttributes")
    val neighborhood = text("neighborhood")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.String> =
        Pair(row[catalogsUpdatableHotelAttributes] ?: 0, row[neighborhood] ?: "")

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.String>) {
        this.apply {
            set(CatalogsUpdatableHotelAttributesNeighborhood.catalogsUpdatableHotelAttributes, entity.first)
            set(CatalogsUpdatableHotelAttributesNeighborhood.neighborhood, entity.second)
        }
    }

}

