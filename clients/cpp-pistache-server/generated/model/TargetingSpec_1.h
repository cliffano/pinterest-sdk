/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * TargetingSpec_1.h
 *
 * Ad group targeting specification defining the ad group target audience. For example, &#39;{\&quot;APPTYPE\&quot;:[\&quot;iphone\&quot;], \&quot;GENDER\&quot;:[\&quot;male\&quot;], \&quot;LOCALE\&quot;:[\&quot;en-US\&quot;], \&quot;LOCATION\&quot;:[\&quot;501\&quot;], \&quot;AGE_BUCKET\&quot;:[\&quot;25-34\&quot;]}&#39;
 */

#ifndef TargetingSpec_1_H_
#define TargetingSpec_1_H_


#include "TargetingSpec_SHOPPING_RETARGETING.h"
#include <string>
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Ad group targeting specification defining the ad group target audience. For example, &#39;{\&quot;APPTYPE\&quot;:[\&quot;iphone\&quot;], \&quot;GENDER\&quot;:[\&quot;male\&quot;], \&quot;LOCALE\&quot;:[\&quot;en-US\&quot;], \&quot;LOCATION\&quot;:[\&quot;501\&quot;], \&quot;AGE_BUCKET\&quot;:[\&quot;25-34\&quot;]}&#39;
/// </summary>
class  TargetingSpec_1
{
public:
    TargetingSpec_1();
    virtual ~TargetingSpec_1() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const TargetingSpec_1& rhs) const;
    bool operator!=(const TargetingSpec_1& rhs) const;

    /////////////////////////////////////////////
    /// TargetingSpec_1 members

    /// <summary>
    /// Values: [\&quot;18-24\&quot;,\&quot;21+\&quot;,\&quot;25-34\&quot;,\&quot;35-44\&quot;, \&quot;45-49\&quot;,\&quot;50-54\&quot;,\&quot;55-64\&quot;,\&quot;65+\&quot;]
    /// </summary>
    std::vector<std::string> getAGEBUCKET() const;
    void setAGEBUCKET(std::vector<std::string> const& value);
    bool aGEBUCKETIsSet() const;
    void unsetAGE_BUCKET();
    /// <summary>
    /// Values: [\&quot;android_mobile\&quot;, \&quot;android_tablet\&quot;, \&quot;ipad\&quot;, \&quot;iphone\&quot;, \&quot;web\&quot;, \&quot;web_mobile\&quot;]
    /// </summary>
    std::vector<std::string> getAPPTYPE() const;
    void setAPPTYPE(std::vector<std::string> const& value);
    bool aPPTYPEIsSet() const;
    void unsetAPPTYPE();
    /// <summary>
    /// Excluded customer list IDs. Used to drive new customer acquisition goals. For example: [\&quot;2542620905475\&quot;]. Audience lists need to have at least 100 people with Pinterest accounts in them.
    /// </summary>
    std::vector<std::string> getAUDIENCEEXCLUDE() const;
    void setAUDIENCEEXCLUDE(std::vector<std::string> const& value);
    bool aUDIENCEEXCLUDEIsSet() const;
    void unsetAUDIENCE_EXCLUDE();
    /// <summary>
    /// Targeted customer list IDs. For example: [\&quot;2542620905473\&quot;]. Audience lists need to have at least 100 people with Pinterest accounts in them
    /// </summary>
    std::vector<std::string> getAUDIENCEINCLUDE() const;
    void setAUDIENCEINCLUDE(std::vector<std::string> const& value);
    bool aUDIENCEINCLUDEIsSet() const;
    void unsetAUDIENCE_INCLUDE();
    /// <summary>
    /// Targeted genders. Values: [\&quot;unknown\&quot;,\&quot;male\&quot;,\&quot;female\&quot;]
    /// </summary>
    std::vector<std::string> getGENDER() const;
    void setGENDER(std::vector<std::string> const& value);
    bool gENDERIsSet() const;
    void unsetGENDER();
    /// <summary>
    /// Location region codes, e.g., \&quot;BE-VOV\&quot; (East Flanders, Belgium) For complete list, &lt;a href&#x3D;\&quot;https://help.pinterest.com/sub/helpcenter/partner/pinterest_location_targeting_codes.xlsx\&quot; target&#x3D;\&quot;_blank\&quot;&gt;click here&lt;/a&gt; or postal codes, e.g., \&quot;US-94107\&quot;. Use either region codes or postal codes but not both.
    /// </summary>
    std::vector<std::string> getGEO() const;
    void setGEO(std::vector<std::string> const& value);
    bool gEOIsSet() const;
    void unsetGEO();
    /// <summary>
    /// &lt;a href&#x3D;\&quot;https://docs.google.com/spreadsheets/d/1HxL-0Z3p2fgxis9YBP2HWC3tvPrs1hAuHDRtH-NJTIM/edit#gid&#x3D;118370875\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Interest object IDs&lt;/a&gt;.
    /// </summary>
    std::vector<std::string> getINTEREST() const;
    void setINTEREST(std::vector<std::string> const& value);
    bool iNTERESTIsSet() const;
    void unsetINTEREST();
    /// <summary>
    /// 24 &lt;a href&#x3D;\&quot;https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes\&quot; target&#x3D;\&quot;_blank\&quot;&gt;ISO 639-1 two letter language codes&lt;/a&gt;. Values: [\&quot;cs\&quot;,\&quot;da\&quot;,\&quot;de\&quot;,\&quot;el\&quot;,\&quot;en\&quot;,\&quot;es\&quot;,\&quot;fi\&quot;,\&quot;fr\&quot;,\&quot;hu\&quot;, \&quot;id\&quot;,\&quot;in\&quot;,\&quot;it\&quot;,\&quot;ja\&quot;,\&quot;ko\&quot;,\&quot;no\&quot;,\&quot;pl\&quot;,\&quot;pt\&quot;,\&quot;ro\&quot;,\&quot;ru\&quot;,\&quot;sk\&quot;,\&quot;sv\&quot;,\&quot;tr\&quot;,\&quot;uk\&quot;,\&quot;zh\&quot;]
    /// </summary>
    std::vector<std::string> getLOCALE() const;
    void setLOCALE(std::vector<std::string> const& value);
    bool lOCALEIsSet() const;
    void unsetLOCALE();
    /// <summary>
    /// 22 &lt;a href&#x3D;\&quot;https://www.nationsonline.org/oneworld/country_code_list.htm\&quot; target&#x3D;\&quot;_blank\&quot;&gt;ISO Alpha 2&lt;/a&gt; two letter country codes or &lt;a href&#x3D;\&quot;https://help.pinterest.com/sub/helpcenter/partner/pinterest_location_targeting_codes.xlsx\&quot; target&#x3D;\&quot;_blank\&quot;&gt;US Nielsen DMA (Designated Market Area) codes&lt;/a&gt; (location region codes) (e.g., [\&quot;US\&quot;, \&quot;807\&quot;]). For complete list, &lt;a href&#x3D;\&quot;https://help.pinterest.com/sub/helpcenter/partner/pinterest_location_targeting_codes.xlsx\&quot;&gt;click here&lt;/a&gt;. Location-Country and Location-Metro codes apply.
    /// </summary>
    std::vector<std::string> getLOCATION() const;
    void setLOCATION(std::vector<std::string> const& value);
    bool lOCATIONIsSet() const;
    void unsetLOCATION();
    /// <summary>
    /// 
    /// </summary>
    std::vector<org::openapitools::server::model::TargetingSpec_SHOPPING_RETARGETING> getSHOPPINGRETARGETING() const;
    void setSHOPPINGRETARGETING(std::vector<org::openapitools::server::model::TargetingSpec_SHOPPING_RETARGETING> const& value);
    bool sHOPPINGRETARGETINGIsSet() const;
    void unsetSHOPPING_RETARGETING();
    /// <summary>
    /// Values: [\&quot;CHOOSE_YOUR_OWN\&quot;, \&quot;FIND_NEW_CUSTOMERS\&quot;, \&quot;RECONNECT_WITH_USERS\&quot;]
    /// </summary>
    std::vector<std::string> getTARGETINGSTRATEGY() const;
    void setTARGETINGSTRATEGY(std::vector<std::string> const& value);
    bool tARGETINGSTRATEGYIsSet() const;
    void unsetTARGETING_STRATEGY();

    friend void to_json(nlohmann::json& j, const TargetingSpec_1& o);
    friend void from_json(const nlohmann::json& j, TargetingSpec_1& o);
protected:
    std::vector<std::string> m_AGE_BUCKET;
    bool m_AGE_BUCKETIsSet;
    std::vector<std::string> m_APPTYPE;
    bool m_APPTYPEIsSet;
    std::vector<std::string> m_AUDIENCE_EXCLUDE;
    bool m_AUDIENCE_EXCLUDEIsSet;
    std::vector<std::string> m_AUDIENCE_INCLUDE;
    bool m_AUDIENCE_INCLUDEIsSet;
    std::vector<std::string> m_GENDER;
    bool m_GENDERIsSet;
    std::vector<std::string> m_GEO;
    bool m_GEOIsSet;
    std::vector<std::string> m_INTEREST;
    bool m_INTERESTIsSet;
    std::vector<std::string> m_LOCALE;
    bool m_LOCALEIsSet;
    std::vector<std::string> m_LOCATION;
    bool m_LOCATIONIsSet;
    std::vector<org::openapitools::server::model::TargetingSpec_SHOPPING_RETARGETING> m_SHOPPING_RETARGETING;
    bool m_SHOPPING_RETARGETINGIsSet;
    std::vector<std::string> m_TARGETING_STRATEGY;
    bool m_TARGETING_STRATEGYIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* TargetingSpec_1_H_ */
