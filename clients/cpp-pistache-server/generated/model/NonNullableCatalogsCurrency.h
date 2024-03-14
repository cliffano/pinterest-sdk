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
 * NonNullableCatalogsCurrency.h
 *
 * Currency Codes from ISO 4217.
 */

#ifndef NonNullableCatalogsCurrency_H_
#define NonNullableCatalogsCurrency_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Currency Codes from ISO 4217.
/// </summary>
class  NonNullableCatalogsCurrency
{
public:
    NonNullableCatalogsCurrency();
    virtual ~NonNullableCatalogsCurrency() = default;

    enum class eNonNullableCatalogsCurrency {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    AED, 
    AFN, 
    ALL, 
    AMD, 
    ANG, 
    AOA, 
    ARS, 
    AUD, 
    AWG, 
    AZN, 
    BAM, 
    BBD, 
    BDT, 
    BGN, 
    BHD, 
    BIF, 
    BMD, 
    BND, 
    BOB, 
    BRL, 
    BSD, 
    BTN, 
    BWP, 
    BYN, 
    BYR, 
    BZD, 
    CAD, 
    CDF, 
    CHF, 
    CLP, 
    CNY, 
    COP, 
    CRC, 
    CUC, 
    CUP, 
    CVE, 
    CZK, 
    DJF, 
    DKK, 
    DOP, 
    DZD, 
    EGP, 
    ERN, 
    ETB, 
    EUR, 
    FJD, 
    FKP, 
    GBP, 
    GEL, 
    GGP, 
    GHS, 
    GIP, 
    GMD, 
    GNF, 
    GTQ, 
    GYD, 
    HKD, 
    HNL, 
    HRK, 
    HTG, 
    HUF, 
    IDR, 
    ILS, 
    IMP, 
    INR, 
    IQD, 
    IRR, 
    ISK, 
    JEP, 
    JMD, 
    JOD, 
    JPY, 
    KES, 
    KGS, 
    KHR, 
    KMF, 
    KPW, 
    KRW, 
    KWD, 
    KYD, 
    KZT, 
    LAK, 
    LBP, 
    LKR, 
    LRD, 
    LSL, 
    LYD, 
    MAD, 
    MDL, 
    MGA, 
    MKD, 
    MMK, 
    MNT, 
    MOP, 
    MRO, 
    MUR, 
    MVR, 
    MWK, 
    MXN, 
    MYR, 
    MZN, 
    NAD, 
    NGN, 
    NIO, 
    NOK, 
    NPR, 
    NZD, 
    OMR, 
    PAB, 
    PEN, 
    PGK, 
    PHP, 
    PKR, 
    PLN, 
    PYG, 
    QAR, 
    RON, 
    RSD, 
    RUB, 
    RWF, 
    SAR, 
    SBD, 
    SCR, 
    SDG, 
    SEK, 
    SGD, 
    SHP, 
    SLL, 
    SOS, 
    SPL, 
    SRD, 
    STD, 
    SVC, 
    SYP, 
    SZL, 
    THB, 
    TJS, 
    TMT, 
    TND, 
    TOP, 
    TRY, 
    TTD, 
    TVD, 
    TWD, 
    TZS, 
    UAH, 
    UGX, 
    USD, 
    UYU, 
    UZS, 
    VEF, 
    VND, 
    VUV, 
    WST, 
    XAF, 
    XCD, 
    XDR, 
    XOF, 
    XPF, 
    YER, 
    ZAR, 
    ZMW, 
    ZWD
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

    bool operator==(const NonNullableCatalogsCurrency& rhs) const;
    bool operator!=(const NonNullableCatalogsCurrency& rhs) const;

    /////////////////////////////////////////////
    /// NonNullableCatalogsCurrency members

    NonNullableCatalogsCurrency::eNonNullableCatalogsCurrency getValue() const;
    void setValue(NonNullableCatalogsCurrency::eNonNullableCatalogsCurrency value);
    
    friend  void to_json(nlohmann::json& j, const NonNullableCatalogsCurrency& o);
    friend  void from_json(const nlohmann::json& j, NonNullableCatalogsCurrency& o);
protected:
    NonNullableCatalogsCurrency::eNonNullableCatalogsCurrency m_value = NonNullableCatalogsCurrency::eNonNullableCatalogsCurrency::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* NonNullableCatalogsCurrency_H_ */
