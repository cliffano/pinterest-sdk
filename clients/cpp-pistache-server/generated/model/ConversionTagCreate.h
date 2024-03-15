/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ConversionTagCreate.h
 *
 * 
 */

#ifndef ConversionTagCreate_H_
#define ConversionTagCreate_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  ConversionTagCreate
{
public:
    ConversionTagCreate();
    virtual ~ConversionTagCreate() = default;


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

    bool operator==(const ConversionTagCreate& rhs) const;
    bool operator!=(const ConversionTagCreate& rhs) const;

    /////////////////////////////////////////////
    /// ConversionTagCreate members

    /// <summary>
    /// Conversion tag name.
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    /// <summary>
    /// Whether Automatic Enhanced Match email is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.
    /// </summary>
    bool isAemEnabled() const;
    void setAemEnabled(bool const value);
    bool aemEnabledIsSet() const;
    void unsetAem_enabled();
    /// <summary>
    /// Metadata ingestion frequency.
    /// </summary>
    double getMdFrequency() const;
    void setMdFrequency(double const value);
    bool mdFrequencyIsSet() const;
    void unsetMd_frequency();
    /// <summary>
    /// Whether Automatic Enhanced Match name is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.
    /// </summary>
    bool isAemFnlnEnabled() const;
    void setAemFnlnEnabled(bool const value);
    bool aemFnlnEnabledIsSet() const;
    void unsetAem_fnln_enabled();
    /// <summary>
    /// Whether Automatic Enhanced Match phone is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.
    /// </summary>
    bool isAemPhEnabled() const;
    void setAemPhEnabled(bool const value);
    bool aemPhEnabledIsSet() const;
    void unsetAem_ph_enabled();
    /// <summary>
    /// Whether Automatic Enhanced Match gender is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.
    /// </summary>
    bool isAemGeEnabled() const;
    void setAemGeEnabled(bool const value);
    bool aemGeEnabledIsSet() const;
    void unsetAem_ge_enabled();
    /// <summary>
    /// Whether Automatic Enhanced Match birthdate is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.
    /// </summary>
    bool isAemDbEnabled() const;
    void setAemDbEnabled(bool const value);
    bool aemDbEnabledIsSet() const;
    void unsetAem_db_enabled();
    /// <summary>
    /// Whether Automatic Enhanced Match location is enabled. See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/enhanced-match\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Enhanced match&lt;/a&gt; for more information.
    /// </summary>
    bool isAemLocEnabled() const;
    void setAemLocEnabled(bool const value);
    bool aemLocEnabledIsSet() const;
    void unsetAem_loc_enabled();

    friend  void to_json(nlohmann::json& j, const ConversionTagCreate& o);
    friend  void from_json(const nlohmann::json& j, ConversionTagCreate& o);
protected:
    std::string m_Name;

    bool m_Aem_enabled;
    bool m_Aem_enabledIsSet;
    double m_Md_frequency;
    bool m_Md_frequencyIsSet;
    bool m_Aem_fnln_enabled;
    bool m_Aem_fnln_enabledIsSet;
    bool m_Aem_ph_enabled;
    bool m_Aem_ph_enabledIsSet;
    bool m_Aem_ge_enabled;
    bool m_Aem_ge_enabledIsSet;
    bool m_Aem_db_enabled;
    bool m_Aem_db_enabledIsSet;
    bool m_Aem_loc_enabled;
    bool m_Aem_loc_enabledIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* ConversionTagCreate_H_ */
