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
 * OASAdAccountsCountryResponse
 */
public class OASAdAccountsCountryResponse {
    /**
     * Get items
     * @return items
     */
    public List<OASAdAccountsCountryResponseData> items { get; set; }

    public OASAdAccountsCountryResponse() {
        items = new List<OASAdAccountsCountryResponseData>();
    }

    public static OASAdAccountsCountryResponse getExample() {
        OASAdAccountsCountryResponse adAccountsCountryResponse = new OASAdAccountsCountryResponse();
          adAccountsCountryResponse.items = new List<OASAdAccountsCountryResponseData>{OASAdAccountsCountryResponseData.getExample()};
        return adAccountsCountryResponse;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASAdAccountsCountryResponse) {           
            OASAdAccountsCountryResponse adAccountsCountryResponse = (OASAdAccountsCountryResponse) obj;
            return this.items == adAccountsCountryResponse.items;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (items == null ? 0 : System.hashCode(items));
        return hashCode;
    }
}
