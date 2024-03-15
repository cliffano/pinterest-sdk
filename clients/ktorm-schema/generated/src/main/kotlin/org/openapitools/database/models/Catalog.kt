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
 * Catalog entity
 * @param id ID of the catalog entity.
 * @param name A human-friendly name associated to a catalog entity.
 * @param catalogType 
 * @param createdAt 
 * @param updatedAt 
 */
object Catalogs : BaseTable<Catalog>("Catalog") {
    val id = text("id") /* ID of the catalog entity. */
    val name = text("name") /* A human-friendly name associated to a catalog entity. */
    val catalogType = long("catalog_type")
    val createdAt = datetime("created_at") /* null */
    val updatedAt = datetime("updated_at") /* null */

    /**
     * Create an entity of type Catalog from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = Catalog(
        id = row[id] ?: "" /* kotlin.String */ /* ID of the catalog entity. */,
        name = row[name] ?: "" /* kotlin.String */ /* A human-friendly name associated to a catalog entity. */,
        catalogType = CatalogsTypes.createEntity(row, withReferences) /* CatalogsType */,
        createdAt = row[createdAt]  /* java.time.LocalDateTime? */,
        updatedAt = row[updatedAt]  /* java.time.LocalDateTime? */
    )

    /**
    * Assign all the columns from the entity of type Catalog to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = Catalog()
    * database.update(Catalogs, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: Catalog) {
        this.apply {
            set(Catalogs.id, entity.id)
            set(Catalogs.name, entity.name)
            set(Catalogs.catalogType, entity.catalogType)
            set(Catalogs.createdAt, entity.createdAt)
            set(Catalogs.updatedAt, entity.updatedAt)
        }
    }

}


