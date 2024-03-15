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
 * TrendsSupportedRegion.h
 *
 * 
 */

#ifndef TrendsSupportedRegion_H_
#define TrendsSupportedRegion_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  TrendsSupportedRegion
{
public:
    TrendsSupportedRegion();
    virtual ~TrendsSupportedRegion() = default;

    enum class eTrendsSupportedRegion {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    US, 
    CA, 
    DE, 
    FR, 
    ES, 
    IT, 
    DE_AT_CH, 
    GB_IE, 
    IT_ES_PT_GR_MT, 
    PL_RO_HU_SK_CZ, 
    SE_DK_FI_NO, 
    NL_BE_LU, 
    AR, 
    BR, 
    CO, 
    MX, 
    MX_AR_CO_CL, 
    AU_NZ
    };

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

    bool operator==(const TrendsSupportedRegion& rhs) const;
    bool operator!=(const TrendsSupportedRegion& rhs) const;

    /////////////////////////////////////////////
    /// TrendsSupportedRegion members

    TrendsSupportedRegion::eTrendsSupportedRegion getValue() const;
    void setValue(TrendsSupportedRegion::eTrendsSupportedRegion value);
    
    friend  void to_json(nlohmann::json& j, const TrendsSupportedRegion& o);
    friend  void from_json(const nlohmann::json& j, TrendsSupportedRegion& o);
protected:
    TrendsSupportedRegion::eTrendsSupportedRegion m_value = TrendsSupportedRegion::eTrendsSupportedRegion::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* TrendsSupportedRegion_H_ */
