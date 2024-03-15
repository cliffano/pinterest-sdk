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
 * OASFeedProcessingResultsList200Respo
 */
public class OASFeedProcessingResultsList200Respo implements OASPaginated {
    /**
     * Get items
     * @return items
     */
    public List<OASCatalogsFeedProcessingResult> items { get; set; }

    /**
     * Get bookmark
     * @return bookmark
     */
    public String bookmark { get; set; }

    public OASFeedProcessingResultsList200Respo() {
        items = new List<OASCatalogsFeedProcessingResult>();
    }

    public static OASFeedProcessingResultsList200Respo getExample() {
        OASFeedProcessingResultsList200Respo feedProcessingResultsList200Response = new OASFeedProcessingResultsList200Respo();
          feedProcessingResultsList200Response.items = new List<OASCatalogsFeedProcessingResult>{OASCatalogsFeedProcessingResult.getExample()};
          feedProcessingResultsList200Response.bookmark = '';
        return feedProcessingResultsList200Response;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASFeedProcessingResultsList200Respo) {           
            OASFeedProcessingResultsList200Respo feedProcessingResultsList200Response = (OASFeedProcessingResultsList200Respo) obj;
            return this.items == feedProcessingResultsList200Response.items
                && this.bookmark == feedProcessingResultsList200Response.bookmark;
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
