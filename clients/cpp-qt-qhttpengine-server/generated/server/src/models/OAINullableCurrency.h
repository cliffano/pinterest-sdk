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
 * OAINullableCurrency.h
 *
 * Currency Codes from ISO 4217.
 */

#ifndef OAINullableCurrency_H
#define OAINullableCurrency_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAINullableCurrency : public OAIEnum {
public:
    OAINullableCurrency();
    OAINullableCurrency(QString json);
    ~OAINullableCurrency() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAINullableCurrency {
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
        ZWD, 
        r_NULL
    };
    OAINullableCurrency::eOAINullableCurrency getValue() const;
    void setValue(const OAINullableCurrency::eOAINullableCurrency& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAINullableCurrency m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAINullableCurrency)

#endif // OAINullableCurrency_H
