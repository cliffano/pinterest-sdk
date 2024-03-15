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
 * OASAdGroupArrayResponse
 */
public class OASAdGroupArrayResponse {
    /**
     * Get items
     * @return items
     */
    public List<OASAdGroupArrayResponseElement> items { get; set; }

    public OASAdGroupArrayResponse() {
        items = new List<OASAdGroupArrayResponseElement>();
    }

    public static OASAdGroupArrayResponse getExample() {
        OASAdGroupArrayResponse adGroupArrayResponse = new OASAdGroupArrayResponse();
          adGroupArrayResponse.items = new List<OASAdGroupArrayResponseElement>{OASAdGroupArrayResponseElement.getExample()};
        return adGroupArrayResponse;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASAdGroupArrayResponse) {           
            OASAdGroupArrayResponse adGroupArrayResponse = (OASAdGroupArrayResponse) obj;
            return this.items == adGroupArrayResponse.items;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (items == null ? 0 : System.hashCode(items));
        return hashCode;
    }
}
