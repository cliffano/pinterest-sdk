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
 * OASConversionTagListResponse
 */
public class OASConversionTagListResponse {
    /**
     * Get items
     * @return items
     */
    public List<OASConversionTagResponse> items { get; set; }

    public OASConversionTagListResponse() {
        items = new List<OASConversionTagResponse>();
    }

    public static OASConversionTagListResponse getExample() {
        OASConversionTagListResponse conversionTagListResponse = new OASConversionTagListResponse();
          conversionTagListResponse.items = new List<OASConversionTagResponse>{OASConversionTagResponse.getExample()};
        return conversionTagListResponse;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASConversionTagListResponse) {           
            OASConversionTagListResponse conversionTagListResponse = (OASConversionTagListResponse) obj;
            return this.items == conversionTagListResponse.items;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (items == null ? 0 : System.hashCode(items));
        return hashCode;
    }
}
