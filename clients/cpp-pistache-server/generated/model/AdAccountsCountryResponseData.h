/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * AdAccountsCountryResponseData.h
 *
 * 
 */

#ifndef AdAccountsCountryResponseData_H_
#define AdAccountsCountryResponseData_H_


#include "Country.h"
#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  AdAccountsCountryResponseData
{
public:
    AdAccountsCountryResponseData();
    virtual ~AdAccountsCountryResponseData() = default;


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

    bool operator==(const AdAccountsCountryResponseData& rhs) const;
    bool operator!=(const AdAccountsCountryResponseData& rhs) const;

    /////////////////////////////////////////////
    /// AdAccountsCountryResponseData members

    /// <summary>
    /// 
    /// </summary>
    Country getCode() const;
    void setCode(Country const& value);
    bool codeIsSet() const;
    void unsetCode();
    /// <summary>
    /// Country currency.
    /// </summary>
    std::string getCurrency() const;
    void setCurrency(std::string const& value);
    bool currencyIsSet() const;
    void unsetCurrency();
    /// <summary>
    /// Country index
    /// </summary>
    double getIndex() const;
    void setIndex(double const value);
    bool indexIsSet() const;
    void unsetIndex();
    /// <summary>
    /// Country name
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();

    friend  void to_json(nlohmann::json& j, const AdAccountsCountryResponseData& o);
    friend  void from_json(const nlohmann::json& j, AdAccountsCountryResponseData& o);
protected:
    Country m_Code;
    bool m_CodeIsSet;
    std::string m_Currency;
    bool m_CurrencyIsSet;
    double m_Index;
    bool m_IndexIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* AdAccountsCountryResponseData_H_ */