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
 * OASAccount
 */
public class OASAccount implements OAS.MappedProperties {
    /**
     * Type of account
     */
    public enum AccountTypeEnum {
        PINNER,
        BUSINESS
    }

    /**
     * Type of account
     * @return accountType
     */
    public AccountTypeEnum accountType { get; set; }

    /**
     * Get profileImage
     * @return profileImage
     */
    public String profileImage { get; set; }

    /**
     * Get websiteUrl
     * @return websiteUrl
     */
    public String websiteUrl { get; set; }

    /**
     * Get username
     * @return username
     */
    public String username { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'account_type' => 'accountType',
        'profile_image' => 'profileImage',
        'website_url' => 'websiteUrl'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'account_type' => 'accountType',
        'profile_image' => 'profileImage',
        'website_url' => 'websiteUrl'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'account_type' => 'accountType',
        'profile_image' => 'profileImage',
        'website_url' => 'websiteUrl'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASAccount getExample() {
        OASAccount account = new OASAccount();
          account.accountType = AccountTypeEnum.PINNER;
          account.profileImage = '';
          account.websiteUrl = '';
          account.username = '';
        return account;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASAccount) {           
            OASAccount account = (OASAccount) obj;
            return this.accountType == account.accountType
                && this.profileImage == account.profileImage
                && this.websiteUrl == account.websiteUrl
                && this.username == account.username;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (accountType == null ? 0 : System.hashCode(accountType));
        hashCode = (17 * hashCode) + (profileImage == null ? 0 : System.hashCode(profileImage));
        hashCode = (17 * hashCode) + (websiteUrl == null ? 0 : System.hashCode(websiteUrl));
        hashCode = (17 * hashCode) + (username == null ? 0 : System.hashCode(username));
        return hashCode;
    }
}
