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
 * OAIConversionEventsUserData.h
 *
 * Object containing customer information data. Note, It is required at least one of 1) em, 2) hashed_maids or 3) pair client_ip_address + client_user_agent.
 */

#ifndef OAIConversionEventsUserData_H
#define OAIConversionEventsUserData_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIConversionEventsUserData : public OAIObject {
public:
    OAIConversionEventsUserData();
    OAIConversionEventsUserData(QString json);
    ~OAIConversionEventsUserData() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<QString> getPh() const;
    void setPh(const QList<QString> &ph);
    bool is_ph_Set() const;
    bool is_ph_Valid() const;

    QList<QString> getGe() const;
    void setGe(const QList<QString> &ge);
    bool is_ge_Set() const;
    bool is_ge_Valid() const;

    QList<QString> getDb() const;
    void setDb(const QList<QString> &db);
    bool is_db_Set() const;
    bool is_db_Valid() const;

    QList<QString> getLn() const;
    void setLn(const QList<QString> &ln);
    bool is_ln_Set() const;
    bool is_ln_Valid() const;

    QList<QString> getFn() const;
    void setFn(const QList<QString> &fn);
    bool is_fn_Set() const;
    bool is_fn_Valid() const;

    QList<QString> getCt() const;
    void setCt(const QList<QString> &ct);
    bool is_ct_Set() const;
    bool is_ct_Valid() const;

    QList<QString> getSt() const;
    void setSt(const QList<QString> &st);
    bool is_st_Set() const;
    bool is_st_Valid() const;

    QList<QString> getZp() const;
    void setZp(const QList<QString> &zp);
    bool is_zp_Set() const;
    bool is_zp_Valid() const;

    QList<QString> getCountry() const;
    void setCountry(const QList<QString> &country);
    bool is_country_Set() const;
    bool is_country_Valid() const;

    QList<QString> getExternalId() const;
    void setExternalId(const QList<QString> &external_id);
    bool is_external_id_Set() const;
    bool is_external_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<QString> m_ph;
    bool m_ph_isSet;
    bool m_ph_isValid;

    QList<QString> m_ge;
    bool m_ge_isSet;
    bool m_ge_isValid;

    QList<QString> m_db;
    bool m_db_isSet;
    bool m_db_isValid;

    QList<QString> m_ln;
    bool m_ln_isSet;
    bool m_ln_isValid;

    QList<QString> m_fn;
    bool m_fn_isSet;
    bool m_fn_isValid;

    QList<QString> m_ct;
    bool m_ct_isSet;
    bool m_ct_isValid;

    QList<QString> m_st;
    bool m_st_isSet;
    bool m_st_isValid;

    QList<QString> m_zp;
    bool m_zp_isSet;
    bool m_zp_isValid;

    QList<QString> m_country;
    bool m_country_isSet;
    bool m_country_isValid;

    QList<QString> m_external_id;
    bool m_external_id_isSet;
    bool m_external_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIConversionEventsUserData)

#endif // OAIConversionEventsUserData_H
