/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAISSIOAccountResponse.h
 *
 * 
 */

#ifndef OAISSIOAccountResponse_H
#define OAISSIOAccountResponse_H

#include <QJsonObject>

#include "OAISSIOAccountItem.h"
#include "OAISSIOAccountPMPName.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAISSIOAccountItem;
class OAISSIOAccountPMPName;

class OAISSIOAccountResponse : public OAIObject {
public:
    OAISSIOAccountResponse();
    OAISSIOAccountResponse(QString json);
    ~OAISSIOAccountResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isEligible() const;
    void setEligible(const bool &eligible);
    bool is_eligible_Set() const;
    bool is_eligible_Valid() const;

    bool isCanEdit() const;
    void setCanEdit(const bool &can_edit);
    bool is_can_edit_Set() const;
    bool is_can_edit_Valid() const;

    QList<OAISSIOAccountItem> getBilltoInfos() const;
    void setBilltoInfos(const QList<OAISSIOAccountItem> &billto_infos);
    bool is_billto_infos_Set() const;
    bool is_billto_infos_Valid() const;

    QString getCurrency() const;
    void setCurrency(const QString &currency);
    bool is_currency_Set() const;
    bool is_currency_Valid() const;

    QList<OAISSIOAccountPMPName> getPmpNames() const;
    void setPmpNames(const QList<OAISSIOAccountPMPName> &pmp_names);
    bool is_pmp_names_Set() const;
    bool is_pmp_names_Valid() const;

    QString getError() const;
    void setError(const QString &error);
    bool is_error_Set() const;
    bool is_error_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool m_eligible;
    bool m_eligible_isSet;
    bool m_eligible_isValid;

    bool m_can_edit;
    bool m_can_edit_isSet;
    bool m_can_edit_isValid;

    QList<OAISSIOAccountItem> m_billto_infos;
    bool m_billto_infos_isSet;
    bool m_billto_infos_isValid;

    QString m_currency;
    bool m_currency_isSet;
    bool m_currency_isValid;

    QList<OAISSIOAccountPMPName> m_pmp_names;
    bool m_pmp_names_isSet;
    bool m_pmp_names_isValid;

    QString m_error;
    bool m_error_isSet;
    bool m_error_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISSIOAccountResponse)

#endif // OAISSIOAccountResponse_H
