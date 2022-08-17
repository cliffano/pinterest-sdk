/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/Language.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

Language::eLanguage toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("AM")))
        return Language::eLanguage::Language_AM;
    if (val == utility::conversions::to_string_t(U("AR")))
        return Language::eLanguage::Language_AR;
    if (val == utility::conversions::to_string_t(U("AZ")))
        return Language::eLanguage::Language_AZ;
    if (val == utility::conversions::to_string_t(U("BG")))
        return Language::eLanguage::Language_BG;
    if (val == utility::conversions::to_string_t(U("BN")))
        return Language::eLanguage::Language_BN;
    if (val == utility::conversions::to_string_t(U("BS")))
        return Language::eLanguage::Language_BS;
    if (val == utility::conversions::to_string_t(U("CA")))
        return Language::eLanguage::Language_CA;
    if (val == utility::conversions::to_string_t(U("CS")))
        return Language::eLanguage::Language_CS;
    if (val == utility::conversions::to_string_t(U("DA")))
        return Language::eLanguage::Language_DA;
    if (val == utility::conversions::to_string_t(U("DV")))
        return Language::eLanguage::Language_DV;
    if (val == utility::conversions::to_string_t(U("DZ")))
        return Language::eLanguage::Language_DZ;
    if (val == utility::conversions::to_string_t(U("DE")))
        return Language::eLanguage::Language_DE;
    if (val == utility::conversions::to_string_t(U("EL")))
        return Language::eLanguage::Language_EL;
    if (val == utility::conversions::to_string_t(U("EN")))
        return Language::eLanguage::Language_EN;
    if (val == utility::conversions::to_string_t(U("ES")))
        return Language::eLanguage::Language_ES;
    if (val == utility::conversions::to_string_t(U("ET")))
        return Language::eLanguage::Language_ET;
    if (val == utility::conversions::to_string_t(U("FA")))
        return Language::eLanguage::Language_FA;
    if (val == utility::conversions::to_string_t(U("FI")))
        return Language::eLanguage::Language_FI;
    if (val == utility::conversions::to_string_t(U("FR")))
        return Language::eLanguage::Language_FR;
    if (val == utility::conversions::to_string_t(U("HE")))
        return Language::eLanguage::Language_HE;
    if (val == utility::conversions::to_string_t(U("HI")))
        return Language::eLanguage::Language_HI;
    if (val == utility::conversions::to_string_t(U("HR")))
        return Language::eLanguage::Language_HR;
    if (val == utility::conversions::to_string_t(U("HU")))
        return Language::eLanguage::Language_HU;
    if (val == utility::conversions::to_string_t(U("HY")))
        return Language::eLanguage::Language_HY;
    if (val == utility::conversions::to_string_t(U("ID")))
        return Language::eLanguage::Language_ID;
    if (val == utility::conversions::to_string_t(U("IN")))
        return Language::eLanguage::Language_IN;
    if (val == utility::conversions::to_string_t(U("IS")))
        return Language::eLanguage::Language_IS;
    if (val == utility::conversions::to_string_t(U("IT")))
        return Language::eLanguage::Language_IT;
    if (val == utility::conversions::to_string_t(U("IW")))
        return Language::eLanguage::Language_IW;
    if (val == utility::conversions::to_string_t(U("JA")))
        return Language::eLanguage::Language_JA;
    if (val == utility::conversions::to_string_t(U("KA")))
        return Language::eLanguage::Language_KA;
    if (val == utility::conversions::to_string_t(U("KM")))
        return Language::eLanguage::Language_KM;
    if (val == utility::conversions::to_string_t(U("KO")))
        return Language::eLanguage::Language_KO;
    if (val == utility::conversions::to_string_t(U("LO")))
        return Language::eLanguage::Language_LO;
    if (val == utility::conversions::to_string_t(U("LT")))
        return Language::eLanguage::Language_LT;
    if (val == utility::conversions::to_string_t(U("LV")))
        return Language::eLanguage::Language_LV;
    if (val == utility::conversions::to_string_t(U("MK")))
        return Language::eLanguage::Language_MK;
    if (val == utility::conversions::to_string_t(U("MN")))
        return Language::eLanguage::Language_MN;
    if (val == utility::conversions::to_string_t(U("MS")))
        return Language::eLanguage::Language_MS;
    if (val == utility::conversions::to_string_t(U("MY")))
        return Language::eLanguage::Language_MY;
    if (val == utility::conversions::to_string_t(U("NB")))
        return Language::eLanguage::Language_NB;
    if (val == utility::conversions::to_string_t(U("NE")))
        return Language::eLanguage::Language_NE;
    if (val == utility::conversions::to_string_t(U("NL")))
        return Language::eLanguage::Language_NL;
    if (val == utility::conversions::to_string_t(U("NO")))
        return Language::eLanguage::Language_NO;
    if (val == utility::conversions::to_string_t(U("PL")))
        return Language::eLanguage::Language_PL;
    if (val == utility::conversions::to_string_t(U("PT")))
        return Language::eLanguage::Language_PT;
    if (val == utility::conversions::to_string_t(U("RO")))
        return Language::eLanguage::Language_RO;
    if (val == utility::conversions::to_string_t(U("RU")))
        return Language::eLanguage::Language_RU;
    if (val == utility::conversions::to_string_t(U("SK")))
        return Language::eLanguage::Language_SK;
    if (val == utility::conversions::to_string_t(U("SL")))
        return Language::eLanguage::Language_SL;
    if (val == utility::conversions::to_string_t(U("SQ")))
        return Language::eLanguage::Language_SQ;
    if (val == utility::conversions::to_string_t(U("SR")))
        return Language::eLanguage::Language_SR;
    if (val == utility::conversions::to_string_t(U("SV")))
        return Language::eLanguage::Language_SV;
    if (val == utility::conversions::to_string_t(U("TL")))
        return Language::eLanguage::Language_TL;
    if (val == utility::conversions::to_string_t(U("UK")))
        return Language::eLanguage::Language_UK;
    if (val == utility::conversions::to_string_t(U("VI")))
        return Language::eLanguage::Language_VI;
    if (val == utility::conversions::to_string_t(U("TE")))
        return Language::eLanguage::Language_TE;
    if (val == utility::conversions::to_string_t(U("TH")))
        return Language::eLanguage::Language_TH;
    if (val == utility::conversions::to_string_t(U("TR")))
        return Language::eLanguage::Language_TR;
    if (val == utility::conversions::to_string_t(U("XX")))
        return Language::eLanguage::Language_XX;
    if (val == utility::conversions::to_string_t(U("ZH")))
        return Language::eLanguage::Language_ZH;
    return {};
}

EnumUnderlyingType fromEnum(Language::eLanguage e)
{
    switch (e)
    {
    case Language::eLanguage::Language_AM:
        return U("AM");
    case Language::eLanguage::Language_AR:
        return U("AR");
    case Language::eLanguage::Language_AZ:
        return U("AZ");
    case Language::eLanguage::Language_BG:
        return U("BG");
    case Language::eLanguage::Language_BN:
        return U("BN");
    case Language::eLanguage::Language_BS:
        return U("BS");
    case Language::eLanguage::Language_CA:
        return U("CA");
    case Language::eLanguage::Language_CS:
        return U("CS");
    case Language::eLanguage::Language_DA:
        return U("DA");
    case Language::eLanguage::Language_DV:
        return U("DV");
    case Language::eLanguage::Language_DZ:
        return U("DZ");
    case Language::eLanguage::Language_DE:
        return U("DE");
    case Language::eLanguage::Language_EL:
        return U("EL");
    case Language::eLanguage::Language_EN:
        return U("EN");
    case Language::eLanguage::Language_ES:
        return U("ES");
    case Language::eLanguage::Language_ET:
        return U("ET");
    case Language::eLanguage::Language_FA:
        return U("FA");
    case Language::eLanguage::Language_FI:
        return U("FI");
    case Language::eLanguage::Language_FR:
        return U("FR");
    case Language::eLanguage::Language_HE:
        return U("HE");
    case Language::eLanguage::Language_HI:
        return U("HI");
    case Language::eLanguage::Language_HR:
        return U("HR");
    case Language::eLanguage::Language_HU:
        return U("HU");
    case Language::eLanguage::Language_HY:
        return U("HY");
    case Language::eLanguage::Language_ID:
        return U("ID");
    case Language::eLanguage::Language_IN:
        return U("IN");
    case Language::eLanguage::Language_IS:
        return U("IS");
    case Language::eLanguage::Language_IT:
        return U("IT");
    case Language::eLanguage::Language_IW:
        return U("IW");
    case Language::eLanguage::Language_JA:
        return U("JA");
    case Language::eLanguage::Language_KA:
        return U("KA");
    case Language::eLanguage::Language_KM:
        return U("KM");
    case Language::eLanguage::Language_KO:
        return U("KO");
    case Language::eLanguage::Language_LO:
        return U("LO");
    case Language::eLanguage::Language_LT:
        return U("LT");
    case Language::eLanguage::Language_LV:
        return U("LV");
    case Language::eLanguage::Language_MK:
        return U("MK");
    case Language::eLanguage::Language_MN:
        return U("MN");
    case Language::eLanguage::Language_MS:
        return U("MS");
    case Language::eLanguage::Language_MY:
        return U("MY");
    case Language::eLanguage::Language_NB:
        return U("NB");
    case Language::eLanguage::Language_NE:
        return U("NE");
    case Language::eLanguage::Language_NL:
        return U("NL");
    case Language::eLanguage::Language_NO:
        return U("NO");
    case Language::eLanguage::Language_PL:
        return U("PL");
    case Language::eLanguage::Language_PT:
        return U("PT");
    case Language::eLanguage::Language_RO:
        return U("RO");
    case Language::eLanguage::Language_RU:
        return U("RU");
    case Language::eLanguage::Language_SK:
        return U("SK");
    case Language::eLanguage::Language_SL:
        return U("SL");
    case Language::eLanguage::Language_SQ:
        return U("SQ");
    case Language::eLanguage::Language_SR:
        return U("SR");
    case Language::eLanguage::Language_SV:
        return U("SV");
    case Language::eLanguage::Language_TL:
        return U("TL");
    case Language::eLanguage::Language_UK:
        return U("UK");
    case Language::eLanguage::Language_VI:
        return U("VI");
    case Language::eLanguage::Language_TE:
        return U("TE");
    case Language::eLanguage::Language_TH:
        return U("TH");
    case Language::eLanguage::Language_TR:
        return U("TR");
    case Language::eLanguage::Language_XX:
        return U("XX");
    case Language::eLanguage::Language_ZH:
        return U("ZH");
    default:
        break;
    }
    return {};
}
}

Language::Language()
{
}

Language::~Language()
{
}

void Language::validate()
{
    // TODO: implement validation
}

web::json::value Language::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool Language::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void Language::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool Language::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

Language::eLanguage Language::getValue() const
{
   return m_value;
}

void Language::setValue(Language::eLanguage const value)
{
   m_value = value;
}


}
}
}
}


