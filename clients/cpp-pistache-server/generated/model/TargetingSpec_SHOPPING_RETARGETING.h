/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * TargetingSpec_SHOPPING_RETARGETING.h
 *
 * 
 */

#ifndef TargetingSpec_SHOPPING_RETARGETING_H_
#define TargetingSpec_SHOPPING_RETARGETING_H_


#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  TargetingSpec_SHOPPING_RETARGETING
{
public:
    TargetingSpec_SHOPPING_RETARGETING();
    virtual ~TargetingSpec_SHOPPING_RETARGETING() = default;


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

    bool operator==(const TargetingSpec_SHOPPING_RETARGETING& rhs) const;
    bool operator!=(const TargetingSpec_SHOPPING_RETARGETING& rhs) const;

    /////////////////////////////////////////////
    /// TargetingSpec_SHOPPING_RETARGETING members

    /// <summary>
    /// Number of days ago to start lookback timeframe for dynamic retargeting
    /// </summary>
    int32_t getLookbackWindow() const;
    void setLookbackWindow(int32_t const value);
    bool lookbackWindowIsSet() const;
    void unsetLookback_window();
    /// <summary>
    /// Event types to target for dynamic retargeting
    /// </summary>
    std::vector<int32_t> getTagTypes() const;
    void setTagTypes(std::vector<int32_t> const value);
    bool tagTypesIsSet() const;
    void unsetTag_types();
    /// <summary>
    /// Number of days ago to stop lookback timeframe for dynamic retargeting
    /// </summary>
    int32_t getExclusionWindow() const;
    void setExclusionWindow(int32_t const value);
    bool exclusionWindowIsSet() const;
    void unsetExclusion_window();

    friend void to_json(nlohmann::json& j, const TargetingSpec_SHOPPING_RETARGETING& o);
    friend void from_json(const nlohmann::json& j, TargetingSpec_SHOPPING_RETARGETING& o);
protected:
    int32_t m_Lookback_window;
    bool m_Lookback_windowIsSet;
    std::vector<int32_t> m_Tag_types;
    bool m_Tag_typesIsSet;
    int32_t m_Exclusion_window;
    bool m_Exclusion_windowIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* TargetingSpec_SHOPPING_RETARGETING_H_ */
