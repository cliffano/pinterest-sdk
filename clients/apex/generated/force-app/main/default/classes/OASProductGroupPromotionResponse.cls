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
 * OASProductGroupPromotionResponse
 */
public class OASProductGroupPromotionResponse {
    /**
     * Get items
     * @return items
     */
    public List<OASProductGroupPromotionResponseItem> items { get; set; }

    public OASProductGroupPromotionResponse() {
        items = new List<OASProductGroupPromotionResponseItem>();
    }

    public static OASProductGroupPromotionResponse getExample() {
        OASProductGroupPromotionResponse productGroupPromotionResponse = new OASProductGroupPromotionResponse();
          productGroupPromotionResponse.items = new List<OASProductGroupPromotionResponseItem>{OASProductGroupPromotionResponseItem.getExample()};
        return productGroupPromotionResponse;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASProductGroupPromotionResponse) {           
            OASProductGroupPromotionResponse productGroupPromotionResponse = (OASProductGroupPromotionResponse) obj;
            return this.items == productGroupPromotionResponse.items;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (items == null ? 0 : System.hashCode(items));
        return hashCode;
    }
}
