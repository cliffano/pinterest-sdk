/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * TargetingSpec_1.h
 *
 * Ad group targeting specification defining the ad group target audience. For example, &#39;{\&quot;APPTYPE\&quot;:[\&quot;iphone\&quot;], \&quot;GENDER\&quot;:[\&quot;male\&quot;], \&quot;LOCALE\&quot;:[\&quot;en-US\&quot;], \&quot;LOCATION\&quot;:[\&quot;501\&quot;], \&quot;AGE_BUCKET\&quot;:[\&quot;25-34\&quot;]}&#39;
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_TargetingSpec_1_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_TargetingSpec_1_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/TargetingSpec_SHOPPING_RETARGETING.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class TargetingSpec_SHOPPING_RETARGETING;

/// <summary>
/// Ad group targeting specification defining the ad group target audience. For example, &#39;{\&quot;APPTYPE\&quot;:[\&quot;iphone\&quot;], \&quot;GENDER\&quot;:[\&quot;male\&quot;], \&quot;LOCALE\&quot;:[\&quot;en-US\&quot;], \&quot;LOCATION\&quot;:[\&quot;501\&quot;], \&quot;AGE_BUCKET\&quot;:[\&quot;25-34\&quot;]}&#39;
/// </summary>
class  TargetingSpec_1
    : public ModelBase
{
public:
    TargetingSpec_1();
    virtual ~TargetingSpec_1();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TargetingSpec_1 members

    /// <summary>
    /// Values: [\&quot;18-24\&quot;,\&quot;21+\&quot;,\&quot;25-34\&quot;,\&quot;35-44\&quot;, \&quot;45-49\&quot;,\&quot;50-54\&quot;,\&quot;55-64\&quot;,\&quot;65+\&quot;]
    /// </summary>
    std::vector<utility::string_t>& getAGEBUCKET();
    bool aGEBUCKETIsSet() const;
    void unsetAGE_BUCKET();

    void setAGEBUCKET(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Values: [\&quot;android_mobile\&quot;, \&quot;android_tablet\&quot;, \&quot;ipad\&quot;, \&quot;iphone\&quot;, \&quot;web\&quot;, \&quot;web_mobile\&quot;]
    /// </summary>
    std::vector<utility::string_t>& getAPPTYPE();
    bool aPPTYPEIsSet() const;
    void unsetAPPTYPE();

    void setAPPTYPE(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Excluded customer list IDs. Used to drive new customer acquisition goals. For example: [\&quot;2542620905475\&quot;]. Audience lists need to have at least 100 people with Pinterest accounts in them.
    /// </summary>
    std::vector<utility::string_t>& getAUDIENCEEXCLUDE();
    bool aUDIENCEEXCLUDEIsSet() const;
    void unsetAUDIENCE_EXCLUDE();

    void setAUDIENCEEXCLUDE(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Targeted customer list IDs. For example: [\&quot;2542620905473\&quot;]. Audience lists need to have at least 100 people with Pinterest accounts in them
    /// </summary>
    std::vector<utility::string_t>& getAUDIENCEINCLUDE();
    bool aUDIENCEINCLUDEIsSet() const;
    void unsetAUDIENCE_INCLUDE();

    void setAUDIENCEINCLUDE(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Targeted genders. Values: [\&quot;unknown\&quot;,\&quot;male\&quot;,\&quot;female\&quot;]
    /// </summary>
    std::vector<utility::string_t>& getGENDER();
    bool gENDERIsSet() const;
    void unsetGENDER();

    void setGENDER(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Location region codes, e.g., \&quot;BE-VOV\&quot; (East Flanders, Belgium) For complete list, &lt;a href&#x3D;\&quot;https://help.pinterest.com/sub/helpcenter/partner/pinterest_location_targeting_codes.xlsx\&quot; target&#x3D;\&quot;_blank\&quot;&gt;click here&lt;/a&gt; or postal codes, e.g., \&quot;US-94107\&quot;. Use either region codes or postal codes but not both.
    /// </summary>
    std::vector<utility::string_t>& getGEO();
    bool gEOIsSet() const;
    void unsetGEO();

    void setGEO(const std::vector<utility::string_t>& value);

    /// <summary>
    /// &lt;a href&#x3D;\&quot;https://docs.google.com/spreadsheets/d/1HxL-0Z3p2fgxis9YBP2HWC3tvPrs1hAuHDRtH-NJTIM/edit#gid&#x3D;118370875\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Interest object IDs&lt;/a&gt;.
    /// </summary>
    std::vector<utility::string_t>& getINTEREST();
    bool iNTERESTIsSet() const;
    void unsetINTEREST();

    void setINTEREST(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 24 &lt;a href&#x3D;\&quot;https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes\&quot; target&#x3D;\&quot;_blank\&quot;&gt;ISO 639-1 two letter language codes&lt;/a&gt;. Values: [\&quot;cs\&quot;,\&quot;da\&quot;,\&quot;de\&quot;,\&quot;el\&quot;,\&quot;en\&quot;,\&quot;es\&quot;,\&quot;fi\&quot;,\&quot;fr\&quot;,\&quot;hu\&quot;, \&quot;id\&quot;,\&quot;in\&quot;,\&quot;it\&quot;,\&quot;ja\&quot;,\&quot;ko\&quot;,\&quot;no\&quot;,\&quot;pl\&quot;,\&quot;pt\&quot;,\&quot;ro\&quot;,\&quot;ru\&quot;,\&quot;sk\&quot;,\&quot;sv\&quot;,\&quot;tr\&quot;,\&quot;uk\&quot;,\&quot;zh\&quot;]
    /// </summary>
    std::vector<utility::string_t>& getLOCALE();
    bool lOCALEIsSet() const;
    void unsetLOCALE();

    void setLOCALE(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 22 &lt;a href&#x3D;\&quot;https://www.nationsonline.org/oneworld/country_code_list.htm\&quot; target&#x3D;\&quot;_blank\&quot;&gt;ISO Alpha 2&lt;/a&gt; two letter country codes or &lt;a href&#x3D;\&quot;https://help.pinterest.com/sub/helpcenter/partner/pinterest_location_targeting_codes.xlsx\&quot; target&#x3D;\&quot;_blank\&quot;&gt;US Nielsen DMA (Designated Market Area) codes&lt;/a&gt; (location region codes) (e.g., [\&quot;US\&quot;, \&quot;807\&quot;]). For complete list, &lt;a href&#x3D;\&quot;https://help.pinterest.com/sub/helpcenter/partner/pinterest_location_targeting_codes.xlsx\&quot;&gt;click here&lt;/a&gt;. Location-Country and Location-Metro codes apply.
    /// </summary>
    std::vector<utility::string_t>& getLOCATION();
    bool lOCATIONIsSet() const;
    void unsetLOCATION();

    void setLOCATION(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<TargetingSpec_SHOPPING_RETARGETING>>& getSHOPPINGRETARGETING();
    bool sHOPPINGRETARGETINGIsSet() const;
    void unsetSHOPPING_RETARGETING();

    void setSHOPPINGRETARGETING(const std::vector<std::shared_ptr<TargetingSpec_SHOPPING_RETARGETING>>& value);

    /// <summary>
    /// Values: [\&quot;CHOOSE_YOUR_OWN\&quot;, \&quot;FIND_NEW_CUSTOMERS\&quot;, \&quot;RECONNECT_WITH_USERS\&quot;]
    /// </summary>
    std::vector<utility::string_t>& getTARGETINGSTRATEGY();
    bool tARGETINGSTRATEGYIsSet() const;
    void unsetTARGETING_STRATEGY();

    void setTARGETINGSTRATEGY(const std::vector<utility::string_t>& value);


protected:
    std::vector<utility::string_t> m_AGE_BUCKET;
    bool m_AGE_BUCKETIsSet;
    std::vector<utility::string_t> m_APPTYPE;
    bool m_APPTYPEIsSet;
    std::vector<utility::string_t> m_AUDIENCE_EXCLUDE;
    bool m_AUDIENCE_EXCLUDEIsSet;
    std::vector<utility::string_t> m_AUDIENCE_INCLUDE;
    bool m_AUDIENCE_INCLUDEIsSet;
    std::vector<utility::string_t> m_GENDER;
    bool m_GENDERIsSet;
    std::vector<utility::string_t> m_GEO;
    bool m_GEOIsSet;
    std::vector<utility::string_t> m_INTEREST;
    bool m_INTERESTIsSet;
    std::vector<utility::string_t> m_LOCALE;
    bool m_LOCALEIsSet;
    std::vector<utility::string_t> m_LOCATION;
    bool m_LOCATIONIsSet;
    std::vector<std::shared_ptr<TargetingSpec_SHOPPING_RETARGETING>> m_SHOPPING_RETARGETING;
    bool m_SHOPPING_RETARGETINGIsSet;
    std::vector<utility::string_t> m_TARGETING_STRATEGY;
    bool m_TARGETING_STRATEGYIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_TargetingSpec_1_H_ */
