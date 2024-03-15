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
 * OASAdsList200Response
 */
public class OASAdsList200Response implements OASPaginated {
    /**
     * Get items
     * @return items
     */
    public List<OASAdResponse> items { get; set; }

    /**
     * Get bookmark
     * @return bookmark
     */
    public String bookmark { get; set; }

    public OASAdsList200Response() {
        items = new List<OASAdResponse>();
    }

    public static OASAdsList200Response getExample() {
        OASAdsList200Response adsList200Response = new OASAdsList200Response();
          adsList200Response.items = new List<OASAdResponse>{OASAdResponse.getExample()};
          adsList200Response.bookmark = '';
        return adsList200Response;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASAdsList200Response) {           
            OASAdsList200Response adsList200Response = (OASAdsList200Response) obj;
            return this.items == adsList200Response.items
                && this.bookmark == adsList200Response.bookmark;
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
