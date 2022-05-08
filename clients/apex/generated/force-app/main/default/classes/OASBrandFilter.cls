/*
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * OASBrandFilter
 */
public class OASBrandFilter {
    /**
     * Get BRAND
     * @return BRAND
     */
    public OASCatalogsProductGroupMultipleStrin BRAND { get; set; }

    public static OASBrandFilter getExample() {
        OASBrandFilter brandFilter = new OASBrandFilter();
          brandFilter.BRAND = null;
        return brandFilter;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASBrandFilter) {           
            OASBrandFilter brandFilter = (OASBrandFilter) obj;
            return this.BRAND == brandFilter.BRAND;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (BRAND == null ? 0 : System.hashCode(BRAND));
        return hashCode;
    }
}
