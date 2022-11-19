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

#include "OAIConversionEventsUserData.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIConversionEventsUserData::OAIConversionEventsUserData(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIConversionEventsUserData::OAIConversionEventsUserData() {
    this->initializeModel();
}

OAIConversionEventsUserData::~OAIConversionEventsUserData() {}

void OAIConversionEventsUserData::initializeModel() {

    m_ph_isSet = false;
    m_ph_isValid = false;

    m_ge_isSet = false;
    m_ge_isValid = false;

    m_db_isSet = false;
    m_db_isValid = false;

    m_ln_isSet = false;
    m_ln_isValid = false;

    m_fn_isSet = false;
    m_fn_isValid = false;

    m_ct_isSet = false;
    m_ct_isValid = false;

    m_st_isSet = false;
    m_st_isValid = false;

    m_zp_isSet = false;
    m_zp_isValid = false;

    m_country_isSet = false;
    m_country_isValid = false;

    m_external_id_isSet = false;
    m_external_id_isValid = false;

    m_em_isSet = false;
    m_em_isValid = false;

    m_hashed_maids_isSet = false;
    m_hashed_maids_isValid = false;

    m_client_ip_address_isSet = false;
    m_client_ip_address_isValid = false;

    m_client_user_agent_isSet = false;
    m_client_user_agent_isValid = false;
}

void OAIConversionEventsUserData::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIConversionEventsUserData::fromJsonObject(QJsonObject json) {

    m_ph_isValid = ::OpenAPI::fromJsonValue(ph, json[QString("ph")]);
    m_ph_isSet = !json[QString("ph")].isNull() && m_ph_isValid;

    m_ge_isValid = ::OpenAPI::fromJsonValue(ge, json[QString("ge")]);
    m_ge_isSet = !json[QString("ge")].isNull() && m_ge_isValid;

    m_db_isValid = ::OpenAPI::fromJsonValue(db, json[QString("db")]);
    m_db_isSet = !json[QString("db")].isNull() && m_db_isValid;

    m_ln_isValid = ::OpenAPI::fromJsonValue(ln, json[QString("ln")]);
    m_ln_isSet = !json[QString("ln")].isNull() && m_ln_isValid;

    m_fn_isValid = ::OpenAPI::fromJsonValue(fn, json[QString("fn")]);
    m_fn_isSet = !json[QString("fn")].isNull() && m_fn_isValid;

    m_ct_isValid = ::OpenAPI::fromJsonValue(ct, json[QString("ct")]);
    m_ct_isSet = !json[QString("ct")].isNull() && m_ct_isValid;

    m_st_isValid = ::OpenAPI::fromJsonValue(st, json[QString("st")]);
    m_st_isSet = !json[QString("st")].isNull() && m_st_isValid;

    m_zp_isValid = ::OpenAPI::fromJsonValue(zp, json[QString("zp")]);
    m_zp_isSet = !json[QString("zp")].isNull() && m_zp_isValid;

    m_country_isValid = ::OpenAPI::fromJsonValue(country, json[QString("country")]);
    m_country_isSet = !json[QString("country")].isNull() && m_country_isValid;

    m_external_id_isValid = ::OpenAPI::fromJsonValue(external_id, json[QString("external_id")]);
    m_external_id_isSet = !json[QString("external_id")].isNull() && m_external_id_isValid;

    m_em_isValid = ::OpenAPI::fromJsonValue(em, json[QString("em")]);
    m_em_isSet = !json[QString("em")].isNull() && m_em_isValid;

    m_hashed_maids_isValid = ::OpenAPI::fromJsonValue(hashed_maids, json[QString("hashed_maids")]);
    m_hashed_maids_isSet = !json[QString("hashed_maids")].isNull() && m_hashed_maids_isValid;

    m_client_ip_address_isValid = ::OpenAPI::fromJsonValue(client_ip_address, json[QString("client_ip_address")]);
    m_client_ip_address_isSet = !json[QString("client_ip_address")].isNull() && m_client_ip_address_isValid;

    m_client_user_agent_isValid = ::OpenAPI::fromJsonValue(client_user_agent, json[QString("client_user_agent")]);
    m_client_user_agent_isSet = !json[QString("client_user_agent")].isNull() && m_client_user_agent_isValid;
}

QString OAIConversionEventsUserData::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIConversionEventsUserData::asJsonObject() const {
    QJsonObject obj;
    if (ph.size() > 0) {
        obj.insert(QString("ph"), ::OpenAPI::toJsonValue(ph));
    }
    if (ge.size() > 0) {
        obj.insert(QString("ge"), ::OpenAPI::toJsonValue(ge));
    }
    if (db.size() > 0) {
        obj.insert(QString("db"), ::OpenAPI::toJsonValue(db));
    }
    if (ln.size() > 0) {
        obj.insert(QString("ln"), ::OpenAPI::toJsonValue(ln));
    }
    if (fn.size() > 0) {
        obj.insert(QString("fn"), ::OpenAPI::toJsonValue(fn));
    }
    if (ct.size() > 0) {
        obj.insert(QString("ct"), ::OpenAPI::toJsonValue(ct));
    }
    if (st.size() > 0) {
        obj.insert(QString("st"), ::OpenAPI::toJsonValue(st));
    }
    if (zp.size() > 0) {
        obj.insert(QString("zp"), ::OpenAPI::toJsonValue(zp));
    }
    if (country.size() > 0) {
        obj.insert(QString("country"), ::OpenAPI::toJsonValue(country));
    }
    if (external_id.size() > 0) {
        obj.insert(QString("external_id"), ::OpenAPI::toJsonValue(external_id));
    }
    if (em.size() > 0) {
        obj.insert(QString("em"), ::OpenAPI::toJsonValue(em));
    }
    if (hashed_maids.size() > 0) {
        obj.insert(QString("hashed_maids"), ::OpenAPI::toJsonValue(hashed_maids));
    }
    if (m_client_ip_address_isSet) {
        obj.insert(QString("client_ip_address"), ::OpenAPI::toJsonValue(client_ip_address));
    }
    if (m_client_user_agent_isSet) {
        obj.insert(QString("client_user_agent"), ::OpenAPI::toJsonValue(client_user_agent));
    }
    return obj;
}

QList<QString> OAIConversionEventsUserData::getPh() const {
    return ph;
}
void OAIConversionEventsUserData::setPh(const QList<QString> &ph) {
    this->ph = ph;
    this->m_ph_isSet = true;
}

bool OAIConversionEventsUserData::is_ph_Set() const{
    return m_ph_isSet;
}

bool OAIConversionEventsUserData::is_ph_Valid() const{
    return m_ph_isValid;
}

QList<QString> OAIConversionEventsUserData::getGe() const {
    return ge;
}
void OAIConversionEventsUserData::setGe(const QList<QString> &ge) {
    this->ge = ge;
    this->m_ge_isSet = true;
}

bool OAIConversionEventsUserData::is_ge_Set() const{
    return m_ge_isSet;
}

bool OAIConversionEventsUserData::is_ge_Valid() const{
    return m_ge_isValid;
}

QList<QString> OAIConversionEventsUserData::getDb() const {
    return db;
}
void OAIConversionEventsUserData::setDb(const QList<QString> &db) {
    this->db = db;
    this->m_db_isSet = true;
}

bool OAIConversionEventsUserData::is_db_Set() const{
    return m_db_isSet;
}

bool OAIConversionEventsUserData::is_db_Valid() const{
    return m_db_isValid;
}

QList<QString> OAIConversionEventsUserData::getLn() const {
    return ln;
}
void OAIConversionEventsUserData::setLn(const QList<QString> &ln) {
    this->ln = ln;
    this->m_ln_isSet = true;
}

bool OAIConversionEventsUserData::is_ln_Set() const{
    return m_ln_isSet;
}

bool OAIConversionEventsUserData::is_ln_Valid() const{
    return m_ln_isValid;
}

QList<QString> OAIConversionEventsUserData::getFn() const {
    return fn;
}
void OAIConversionEventsUserData::setFn(const QList<QString> &fn) {
    this->fn = fn;
    this->m_fn_isSet = true;
}

bool OAIConversionEventsUserData::is_fn_Set() const{
    return m_fn_isSet;
}

bool OAIConversionEventsUserData::is_fn_Valid() const{
    return m_fn_isValid;
}

QList<QString> OAIConversionEventsUserData::getCt() const {
    return ct;
}
void OAIConversionEventsUserData::setCt(const QList<QString> &ct) {
    this->ct = ct;
    this->m_ct_isSet = true;
}

bool OAIConversionEventsUserData::is_ct_Set() const{
    return m_ct_isSet;
}

bool OAIConversionEventsUserData::is_ct_Valid() const{
    return m_ct_isValid;
}

QList<QString> OAIConversionEventsUserData::getSt() const {
    return st;
}
void OAIConversionEventsUserData::setSt(const QList<QString> &st) {
    this->st = st;
    this->m_st_isSet = true;
}

bool OAIConversionEventsUserData::is_st_Set() const{
    return m_st_isSet;
}

bool OAIConversionEventsUserData::is_st_Valid() const{
    return m_st_isValid;
}

QList<QString> OAIConversionEventsUserData::getZp() const {
    return zp;
}
void OAIConversionEventsUserData::setZp(const QList<QString> &zp) {
    this->zp = zp;
    this->m_zp_isSet = true;
}

bool OAIConversionEventsUserData::is_zp_Set() const{
    return m_zp_isSet;
}

bool OAIConversionEventsUserData::is_zp_Valid() const{
    return m_zp_isValid;
}

QList<QString> OAIConversionEventsUserData::getCountry() const {
    return country;
}
void OAIConversionEventsUserData::setCountry(const QList<QString> &country) {
    this->country = country;
    this->m_country_isSet = true;
}

bool OAIConversionEventsUserData::is_country_Set() const{
    return m_country_isSet;
}

bool OAIConversionEventsUserData::is_country_Valid() const{
    return m_country_isValid;
}

QList<QString> OAIConversionEventsUserData::getExternalId() const {
    return external_id;
}
void OAIConversionEventsUserData::setExternalId(const QList<QString> &external_id) {
    this->external_id = external_id;
    this->m_external_id_isSet = true;
}

bool OAIConversionEventsUserData::is_external_id_Set() const{
    return m_external_id_isSet;
}

bool OAIConversionEventsUserData::is_external_id_Valid() const{
    return m_external_id_isValid;
}

QList<QString> OAIConversionEventsUserData::getEm() const {
    return em;
}
void OAIConversionEventsUserData::setEm(const QList<QString> &em) {
    this->em = em;
    this->m_em_isSet = true;
}

bool OAIConversionEventsUserData::is_em_Set() const{
    return m_em_isSet;
}

bool OAIConversionEventsUserData::is_em_Valid() const{
    return m_em_isValid;
}

QList<QString> OAIConversionEventsUserData::getHashedMaids() const {
    return hashed_maids;
}
void OAIConversionEventsUserData::setHashedMaids(const QList<QString> &hashed_maids) {
    this->hashed_maids = hashed_maids;
    this->m_hashed_maids_isSet = true;
}

bool OAIConversionEventsUserData::is_hashed_maids_Set() const{
    return m_hashed_maids_isSet;
}

bool OAIConversionEventsUserData::is_hashed_maids_Valid() const{
    return m_hashed_maids_isValid;
}

QString OAIConversionEventsUserData::getClientIpAddress() const {
    return client_ip_address;
}
void OAIConversionEventsUserData::setClientIpAddress(const QString &client_ip_address) {
    this->client_ip_address = client_ip_address;
    this->m_client_ip_address_isSet = true;
}

bool OAIConversionEventsUserData::is_client_ip_address_Set() const{
    return m_client_ip_address_isSet;
}

bool OAIConversionEventsUserData::is_client_ip_address_Valid() const{
    return m_client_ip_address_isValid;
}

QString OAIConversionEventsUserData::getClientUserAgent() const {
    return client_user_agent;
}
void OAIConversionEventsUserData::setClientUserAgent(const QString &client_user_agent) {
    this->client_user_agent = client_user_agent;
    this->m_client_user_agent_isSet = true;
}

bool OAIConversionEventsUserData::is_client_user_agent_Set() const{
    return m_client_user_agent_isSet;
}

bool OAIConversionEventsUserData::is_client_user_agent_Valid() const{
    return m_client_user_agent_isValid;
}

bool OAIConversionEventsUserData::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (ph.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (ge.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (db.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (ln.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (fn.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (ct.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (st.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (zp.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (country.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (external_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (em.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (hashed_maids.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_client_ip_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_client_user_agent_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIConversionEventsUserData::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_em_isValid && m_hashed_maids_isValid && m_client_ip_address_isValid && m_client_user_agent_isValid && true;
}

} // namespace OpenAPI
