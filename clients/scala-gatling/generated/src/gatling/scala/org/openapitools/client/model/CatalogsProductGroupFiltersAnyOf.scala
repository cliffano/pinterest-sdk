
package org.openapitools.client.model


case class CatalogsProductGroupFiltersAnyOf (
    _anyOf: List[CatalogsProductGroupFilterKeys]
)
object CatalogsProductGroupFiltersAnyOf {
    def toStringBody(var_anyOf: Object) =
        s"""
        | {
        | "anyOf":$var_anyOf
        | }
        """.stripMargin
}
