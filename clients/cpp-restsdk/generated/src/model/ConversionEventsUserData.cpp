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



#include "CppRestOpenAPIClient/model/ConversionEventsUserData.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



ConversionEventsUserData::ConversionEventsUserData()
{
    m_PhIsSet = false;
    m_GeIsSet = false;
    m_DbIsSet = false;
    m_LnIsSet = false;
    m_FnIsSet = false;
    m_CtIsSet = false;
    m_StIsSet = false;
    m_ZpIsSet = false;
    m_CountryIsSet = false;
    m_External_idIsSet = false;
    m_Click_id = utility::conversions::to_string_t("");
    m_Click_idIsSet = false;
    m_Partner_id = utility::conversions::to_string_t("");
    m_Partner_idIsSet = false;
}

ConversionEventsUserData::~ConversionEventsUserData()
{
}

void ConversionEventsUserData::validate()
{
    // TODO: implement validation
}

web::json::value ConversionEventsUserData::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PhIsSet)
    {
        val[utility::conversions::to_string_t(U("ph"))] = ModelBase::toJson(m_Ph);
    }
    if(m_GeIsSet)
    {
        val[utility::conversions::to_string_t(U("ge"))] = ModelBase::toJson(m_Ge);
    }
    if(m_DbIsSet)
    {
        val[utility::conversions::to_string_t(U("db"))] = ModelBase::toJson(m_Db);
    }
    if(m_LnIsSet)
    {
        val[utility::conversions::to_string_t(U("ln"))] = ModelBase::toJson(m_Ln);
    }
    if(m_FnIsSet)
    {
        val[utility::conversions::to_string_t(U("fn"))] = ModelBase::toJson(m_Fn);
    }
    if(m_CtIsSet)
    {
        val[utility::conversions::to_string_t(U("ct"))] = ModelBase::toJson(m_Ct);
    }
    if(m_StIsSet)
    {
        val[utility::conversions::to_string_t(U("st"))] = ModelBase::toJson(m_St);
    }
    if(m_ZpIsSet)
    {
        val[utility::conversions::to_string_t(U("zp"))] = ModelBase::toJson(m_Zp);
    }
    if(m_CountryIsSet)
    {
        val[utility::conversions::to_string_t(U("country"))] = ModelBase::toJson(m_Country);
    }
    if(m_External_idIsSet)
    {
        val[utility::conversions::to_string_t(U("external_id"))] = ModelBase::toJson(m_External_id);
    }
    if(m_Click_idIsSet)
    {
        val[utility::conversions::to_string_t(U("click_id"))] = ModelBase::toJson(m_Click_id);
    }
    if(m_Partner_idIsSet)
    {
        val[utility::conversions::to_string_t(U("partner_id"))] = ModelBase::toJson(m_Partner_id);
    }

    return val;
}

bool ConversionEventsUserData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("ph"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ph")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setPh;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPh);
            setPh(refVal_setPh);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ge"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ge")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setGe;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGe);
            setGe(refVal_setGe);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("db"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("db")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setDb;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDb);
            setDb(refVal_setDb);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ln"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ln")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setLn;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLn);
            setLn(refVal_setLn);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("fn"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fn")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setFn;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFn);
            setFn(refVal_setFn);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ct"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ct")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setCt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCt);
            setCt(refVal_setCt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("st"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("st")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setSt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSt);
            setSt(refVal_setSt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("zp"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("zp")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setZp;
            ok &= ModelBase::fromJson(fieldValue, refVal_setZp);
            setZp(refVal_setZp);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("country"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("country")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setCountry;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCountry);
            setCountry(refVal_setCountry);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("external_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("external_id")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setExternalId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExternalId);
            setExternalId(refVal_setExternalId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("click_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("click_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setClickId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setClickId);
            setClickId(refVal_setClickId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("partner_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("partner_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPartnerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPartnerId);
            setPartnerId(refVal_setPartnerId);
        }
    }
    return ok;
}

void ConversionEventsUserData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PhIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ph")), m_Ph));
    }
    if(m_GeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ge")), m_Ge));
    }
    if(m_DbIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("db")), m_Db));
    }
    if(m_LnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ln")), m_Ln));
    }
    if(m_FnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fn")), m_Fn));
    }
    if(m_CtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ct")), m_Ct));
    }
    if(m_StIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("st")), m_St));
    }
    if(m_ZpIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("zp")), m_Zp));
    }
    if(m_CountryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("country")), m_Country));
    }
    if(m_External_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("external_id")), m_External_id));
    }
    if(m_Click_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("click_id")), m_Click_id));
    }
    if(m_Partner_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("partner_id")), m_Partner_id));
    }
}

bool ConversionEventsUserData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("ph"))))
    {
        std::vector<utility::string_t> refVal_setPh;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ph"))), refVal_setPh );
        setPh(refVal_setPh);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ge"))))
    {
        std::vector<utility::string_t> refVal_setGe;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ge"))), refVal_setGe );
        setGe(refVal_setGe);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("db"))))
    {
        std::vector<utility::string_t> refVal_setDb;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("db"))), refVal_setDb );
        setDb(refVal_setDb);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ln"))))
    {
        std::vector<utility::string_t> refVal_setLn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ln"))), refVal_setLn );
        setLn(refVal_setLn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fn"))))
    {
        std::vector<utility::string_t> refVal_setFn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fn"))), refVal_setFn );
        setFn(refVal_setFn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ct"))))
    {
        std::vector<utility::string_t> refVal_setCt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ct"))), refVal_setCt );
        setCt(refVal_setCt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("st"))))
    {
        std::vector<utility::string_t> refVal_setSt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("st"))), refVal_setSt );
        setSt(refVal_setSt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("zp"))))
    {
        std::vector<utility::string_t> refVal_setZp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("zp"))), refVal_setZp );
        setZp(refVal_setZp);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("country"))))
    {
        std::vector<utility::string_t> refVal_setCountry;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("country"))), refVal_setCountry );
        setCountry(refVal_setCountry);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("external_id"))))
    {
        std::vector<utility::string_t> refVal_setExternalId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("external_id"))), refVal_setExternalId );
        setExternalId(refVal_setExternalId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("click_id"))))
    {
        utility::string_t refVal_setClickId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("click_id"))), refVal_setClickId );
        setClickId(refVal_setClickId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("partner_id"))))
    {
        utility::string_t refVal_setPartnerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("partner_id"))), refVal_setPartnerId );
        setPartnerId(refVal_setPartnerId);
    }
    return ok;
}

std::vector<utility::string_t>& ConversionEventsUserData::getPh()
{
    return m_Ph;
}

void ConversionEventsUserData::setPh(const std::vector<utility::string_t>& value)
{
    m_Ph = value;
    m_PhIsSet = true;
}

bool ConversionEventsUserData::phIsSet() const
{
    return m_PhIsSet;
}

void ConversionEventsUserData::unsetPh()
{
    m_PhIsSet = false;
}
std::vector<utility::string_t>& ConversionEventsUserData::getGe()
{
    return m_Ge;
}

void ConversionEventsUserData::setGe(const std::vector<utility::string_t>& value)
{
    m_Ge = value;
    m_GeIsSet = true;
}

bool ConversionEventsUserData::geIsSet() const
{
    return m_GeIsSet;
}

void ConversionEventsUserData::unsetGe()
{
    m_GeIsSet = false;
}
std::vector<utility::string_t>& ConversionEventsUserData::getDb()
{
    return m_Db;
}

void ConversionEventsUserData::setDb(const std::vector<utility::string_t>& value)
{
    m_Db = value;
    m_DbIsSet = true;
}

bool ConversionEventsUserData::dbIsSet() const
{
    return m_DbIsSet;
}

void ConversionEventsUserData::unsetDb()
{
    m_DbIsSet = false;
}
std::vector<utility::string_t>& ConversionEventsUserData::getLn()
{
    return m_Ln;
}

void ConversionEventsUserData::setLn(const std::vector<utility::string_t>& value)
{
    m_Ln = value;
    m_LnIsSet = true;
}

bool ConversionEventsUserData::lnIsSet() const
{
    return m_LnIsSet;
}

void ConversionEventsUserData::unsetLn()
{
    m_LnIsSet = false;
}
std::vector<utility::string_t>& ConversionEventsUserData::getFn()
{
    return m_Fn;
}

void ConversionEventsUserData::setFn(const std::vector<utility::string_t>& value)
{
    m_Fn = value;
    m_FnIsSet = true;
}

bool ConversionEventsUserData::fnIsSet() const
{
    return m_FnIsSet;
}

void ConversionEventsUserData::unsetFn()
{
    m_FnIsSet = false;
}
std::vector<utility::string_t>& ConversionEventsUserData::getCt()
{
    return m_Ct;
}

void ConversionEventsUserData::setCt(const std::vector<utility::string_t>& value)
{
    m_Ct = value;
    m_CtIsSet = true;
}

bool ConversionEventsUserData::ctIsSet() const
{
    return m_CtIsSet;
}

void ConversionEventsUserData::unsetCt()
{
    m_CtIsSet = false;
}
std::vector<utility::string_t>& ConversionEventsUserData::getSt()
{
    return m_St;
}

void ConversionEventsUserData::setSt(const std::vector<utility::string_t>& value)
{
    m_St = value;
    m_StIsSet = true;
}

bool ConversionEventsUserData::stIsSet() const
{
    return m_StIsSet;
}

void ConversionEventsUserData::unsetSt()
{
    m_StIsSet = false;
}
std::vector<utility::string_t>& ConversionEventsUserData::getZp()
{
    return m_Zp;
}

void ConversionEventsUserData::setZp(const std::vector<utility::string_t>& value)
{
    m_Zp = value;
    m_ZpIsSet = true;
}

bool ConversionEventsUserData::zpIsSet() const
{
    return m_ZpIsSet;
}

void ConversionEventsUserData::unsetZp()
{
    m_ZpIsSet = false;
}
std::vector<utility::string_t>& ConversionEventsUserData::getCountry()
{
    return m_Country;
}

void ConversionEventsUserData::setCountry(const std::vector<utility::string_t>& value)
{
    m_Country = value;
    m_CountryIsSet = true;
}

bool ConversionEventsUserData::countryIsSet() const
{
    return m_CountryIsSet;
}

void ConversionEventsUserData::unsetCountry()
{
    m_CountryIsSet = false;
}
std::vector<utility::string_t>& ConversionEventsUserData::getExternalId()
{
    return m_External_id;
}

void ConversionEventsUserData::setExternalId(const std::vector<utility::string_t>& value)
{
    m_External_id = value;
    m_External_idIsSet = true;
}

bool ConversionEventsUserData::externalIdIsSet() const
{
    return m_External_idIsSet;
}

void ConversionEventsUserData::unsetExternal_id()
{
    m_External_idIsSet = false;
}
utility::string_t ConversionEventsUserData::getClickId() const
{
    return m_Click_id;
}

void ConversionEventsUserData::setClickId(const utility::string_t& value)
{
    m_Click_id = value;
    m_Click_idIsSet = true;
}

bool ConversionEventsUserData::clickIdIsSet() const
{
    return m_Click_idIsSet;
}

void ConversionEventsUserData::unsetClick_id()
{
    m_Click_idIsSet = false;
}
utility::string_t ConversionEventsUserData::getPartnerId() const
{
    return m_Partner_id;
}

void ConversionEventsUserData::setPartnerId(const utility::string_t& value)
{
    m_Partner_id = value;
    m_Partner_idIsSet = true;
}

bool ConversionEventsUserData::partnerIdIsSet() const
{
    return m_Partner_idIsSet;
}

void ConversionEventsUserData::unsetPartner_id()
{
    m_Partner_idIsSet = false;
}
}
}
}
}


