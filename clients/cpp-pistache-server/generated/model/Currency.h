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
 * Currency.h
 *
 * Currency Codes from ISO 4217
 */

#ifndef Currency_H_
#define Currency_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Currency Codes from ISO 4217
/// </summary>
class  Currency
{
public:
    Currency();
    virtual ~Currency() = default;

    enum class eCurrency {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    UNK, 
    USD, 
    GBP, 
    CAD, 
    EUR, 
    AUD, 
    NZD, 
    SEK, 
    ILS, 
    CHF, 
    HKD, 
    JPY, 
    SGD, 
    KRW, 
    NOK, 
    DKK, 
    PLN, 
    RON, 
    HUF, 
    CZK, 
    BRL, 
    MXN, 
    ARS, 
    CLP, 
    COP
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

    bool operator==(const Currency& rhs) const;
    bool operator!=(const Currency& rhs) const;

    /////////////////////////////////////////////
    /// Currency members

    Currency::eCurrency getValue() const;
    void setValue(Currency::eCurrency value);
    
    friend  void to_json(nlohmann::json& j, const Currency& o);
    friend  void from_json(const nlohmann::json& j, Currency& o);
protected:
    Currency::eCurrency m_value = Currency::eCurrency::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* Currency_H_ */
