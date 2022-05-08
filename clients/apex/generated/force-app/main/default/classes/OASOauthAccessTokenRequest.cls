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
 * Describes the valid schema for possible OAuth access token requests.
 */
public class OASOauthAccessTokenRequest implements OAS.MappedProperties {
    /**
     * Gets or Sets grantType
     */
    public enum GrantTypeEnum {
        AUTHORIZATION_CODE,
        REFRESH_TOKEN
    }

    /**
     * Get grantType
     * @return grantType
     */
    public GrantTypeEnum grantType { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'grant_type' => 'grantType'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASOauthAccessTokenRequest getExample() {
        OASOauthAccessTokenRequest oauthAccessTokenRequest = new OASOauthAccessTokenRequest();
          oauthAccessTokenRequest.grantType = GrantTypeEnum.AUTHORIZATION_CODE;
        return oauthAccessTokenRequest;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASOauthAccessTokenRequest) {           
            OASOauthAccessTokenRequest oauthAccessTokenRequest = (OASOauthAccessTokenRequest) obj;
            return this.grantType == oauthAccessTokenRequest.grantType;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (grantType == null ? 0 : System.hashCode(grantType));
        return hashCode;
    }
}
