/*
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * OASCatalogsProductGroupsList200Respo
 */
public class OASCatalogsProductGroupsList200Respo implements OASPaginated {
    /**
     * Get items
     * @return items
     */
    public List<OASCatalogsProductGroupsList200Respo> items { get; set; }

    /**
     * Get bookmark
     * @return bookmark
     */
    public String bookmark { get; set; }

    public OASCatalogsProductGroupsList200Respo() {
        items = new List<OASCatalogsProductGroupsList200Respo>();
    }

    public static OASCatalogsProductGroupsList200Respo getExample() {
        OASCatalogsProductGroupsList200Respo catalogsProductGroupsList200Response = new OASCatalogsProductGroupsList200Respo();
          catalogsProductGroupsList200Response.items = new List<OASCatalogsProductGroupsList200Respo>{OASCatalogsProductGroupsList200Respo.getExample()};
          catalogsProductGroupsList200Response.bookmark = '';
        return catalogsProductGroupsList200Response;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASCatalogsProductGroupsList200Respo) {           
            OASCatalogsProductGroupsList200Respo catalogsProductGroupsList200Response = (OASCatalogsProductGroupsList200Respo) obj;
            return this.items == catalogsProductGroupsList200Response.items
                && this.bookmark == catalogsProductGroupsList200Response.bookmark;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (items == null ? 0 : System.hashCode(items));
        hashCode = (17 * hashCode) + (bookmark == null ? 0 : System.hashCode(bookmark));
        return hashCode;
    }
}
