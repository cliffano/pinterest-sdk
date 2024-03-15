/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/Currency.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

Currency::eCurrency toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("UNK")))
        return Currency::eCurrency::Currency_UNK;
    if (val == utility::conversions::to_string_t(U("USD")))
        return Currency::eCurrency::Currency_USD;
    if (val == utility::conversions::to_string_t(U("GBP")))
        return Currency::eCurrency::Currency_GBP;
    if (val == utility::conversions::to_string_t(U("CAD")))
        return Currency::eCurrency::Currency_CAD;
    if (val == utility::conversions::to_string_t(U("EUR")))
        return Currency::eCurrency::Currency_EUR;
    if (val == utility::conversions::to_string_t(U("AUD")))
        return Currency::eCurrency::Currency_AUD;
    if (val == utility::conversions::to_string_t(U("NZD")))
        return Currency::eCurrency::Currency_NZD;
    if (val == utility::conversions::to_string_t(U("SEK")))
        return Currency::eCurrency::Currency_SEK;
    if (val == utility::conversions::to_string_t(U("ILS")))
        return Currency::eCurrency::Currency_ILS;
    if (val == utility::conversions::to_string_t(U("CHF")))
        return Currency::eCurrency::Currency_CHF;
    if (val == utility::conversions::to_string_t(U("HKD")))
        return Currency::eCurrency::Currency_HKD;
    if (val == utility::conversions::to_string_t(U("JPY")))
        return Currency::eCurrency::Currency_JPY;
    if (val == utility::conversions::to_string_t(U("SGD")))
        return Currency::eCurrency::Currency_SGD;
    if (val == utility::conversions::to_string_t(U("KRW")))
        return Currency::eCurrency::Currency_KRW;
    if (val == utility::conversions::to_string_t(U("NOK")))
        return Currency::eCurrency::Currency_NOK;
    if (val == utility::conversions::to_string_t(U("DKK")))
        return Currency::eCurrency::Currency_DKK;
    if (val == utility::conversions::to_string_t(U("PLN")))
        return Currency::eCurrency::Currency_PLN;
    if (val == utility::conversions::to_string_t(U("RON")))
        return Currency::eCurrency::Currency_RON;
    if (val == utility::conversions::to_string_t(U("HUF")))
        return Currency::eCurrency::Currency_HUF;
    if (val == utility::conversions::to_string_t(U("CZK")))
        return Currency::eCurrency::Currency_CZK;
    if (val == utility::conversions::to_string_t(U("BRL")))
        return Currency::eCurrency::Currency_BRL;
    if (val == utility::conversions::to_string_t(U("MXN")))
        return Currency::eCurrency::Currency_MXN;
    if (val == utility::conversions::to_string_t(U("ARS")))
        return Currency::eCurrency::Currency_ARS;
    if (val == utility::conversions::to_string_t(U("CLP")))
        return Currency::eCurrency::Currency_CLP;
    if (val == utility::conversions::to_string_t(U("COP")))
        return Currency::eCurrency::Currency_COP;
    return {};
}

EnumUnderlyingType fromEnum(Currency::eCurrency e)
{
    switch (e)
    {
    case Currency::eCurrency::Currency_UNK:
        return U("UNK");
    case Currency::eCurrency::Currency_USD:
        return U("USD");
    case Currency::eCurrency::Currency_GBP:
        return U("GBP");
    case Currency::eCurrency::Currency_CAD:
        return U("CAD");
    case Currency::eCurrency::Currency_EUR:
        return U("EUR");
    case Currency::eCurrency::Currency_AUD:
        return U("AUD");
    case Currency::eCurrency::Currency_NZD:
        return U("NZD");
    case Currency::eCurrency::Currency_SEK:
        return U("SEK");
    case Currency::eCurrency::Currency_ILS:
        return U("ILS");
    case Currency::eCurrency::Currency_CHF:
        return U("CHF");
    case Currency::eCurrency::Currency_HKD:
        return U("HKD");
    case Currency::eCurrency::Currency_JPY:
        return U("JPY");
    case Currency::eCurrency::Currency_SGD:
        return U("SGD");
    case Currency::eCurrency::Currency_KRW:
        return U("KRW");
    case Currency::eCurrency::Currency_NOK:
        return U("NOK");
    case Currency::eCurrency::Currency_DKK:
        return U("DKK");
    case Currency::eCurrency::Currency_PLN:
        return U("PLN");
    case Currency::eCurrency::Currency_RON:
        return U("RON");
    case Currency::eCurrency::Currency_HUF:
        return U("HUF");
    case Currency::eCurrency::Currency_CZK:
        return U("CZK");
    case Currency::eCurrency::Currency_BRL:
        return U("BRL");
    case Currency::eCurrency::Currency_MXN:
        return U("MXN");
    case Currency::eCurrency::Currency_ARS:
        return U("ARS");
    case Currency::eCurrency::Currency_CLP:
        return U("CLP");
    case Currency::eCurrency::Currency_COP:
        return U("COP");
    default:
        break;
    }
    return {};
}
}

Currency::Currency()
{
}

Currency::~Currency()
{
}

void Currency::validate()
{
    // TODO: implement validation
}

web::json::value Currency::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool Currency::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void Currency::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool Currency::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }
    {
        EnumUnderlyingType e;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), e);
        if (ok)
        {
            auto v = toEnum(e);
            setValue(v);
        }
    }
    return ok;
}

Currency::eCurrency Currency::getValue() const
{
   return m_value;
}

void Currency::setValue(Currency::eCurrency const value)
{
   m_value = value;
}


}
}
}
}


